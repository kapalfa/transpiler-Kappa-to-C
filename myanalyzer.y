%{
	#include <stdio.h>
  #include "cgen.h"
	#include <string.h>
	extern int yylex(void);

const char *c_prologue =
    "#include \"thetalib.h\"\n"
    "#include <math.h>\n"
    "#include <stdio.h>\n"
    "\n";

%}

%union {
	char* str;
}

%token <str> TK_IDENT 
%token <str> TK_INT TK_STRING 
%token <str> TK_REAL
%token KW_CONST KW_ENDIF KW_FOR KW_IN KW_ENDFOR KW_WHILE KW_ENDWHILE
%token KW_BREAK KW_CONTINUE KW_DEF KW_ENDDEF KW_MAIN KW_RETURN KW_OF
%token KW_READSTR KW_READINT KW_READSCAL KW_WRITESTR KW_WRITEINT KW_WRITESCAL KW_WRITE
%token KW_IF   
%token KW_ELSE 
%token KW_INTEGER KW_SCALAR KW_BOOLEAN KW_STR KW_COMP KW_ENDCOMP
%token TK_POW
%token KW_AND KW_OR KW_NOT
%token TK_EQUALS TK_NOTEQUALS
%token INCR DECR MUL DIV MOD TK_ASSGN 

%start input

%type <str> listOfExprs expr func_body stmt func_call if_block for_block assign return_block while_block array_init
%type <str> identifier_list data_types var_dec func_dec const_dec arg_dec command func_args commandList main_func lib_funcs

%right '=' INCR DECR MUL DIV MOD TK_ASSGN
%left KW_OR
%left KW_AND
%right KW_NOT
%left TK_EQUALS TK_NOTEQUALS
%left '<' '>' TK_LE TK_GE
%left '+' '-' 
%left '*' '/' '%'
%right TK_POW

%%

input: 
	listOfExprs  {
    if (yyerror_count == 0) {
      FILE *f = fopen("output.c","w");
			fputs(c_prologue, f);
			fprintf(f, "%s\n", $1);	
		}
	}
;

listOfExprs: 
  %empty { $$ = template("\n"); }
  | listOfExprs stmt { $$ = template("%s\n%s", $1, $2); }
;

main_func: KW_DEF KW_MAIN '(' ')' ':' func_body KW_ENDDEF ';' { $$ = template("int main(){\n%s\n}", $6); }
;

stmt: main_func { $$ = $1; }
  | var_dec stmt { $$ = template("%s\n%s", $1, $2); }
  | const_dec stmt { $$ = template("%s\n%s", $1, $2); }
  | func_dec stmt { $$ = template("%s\n%s", $1, $2); }
;

expr: 
	 expr '-' expr { $$ = template("%s - %s", $1, $3); }
	| expr '*' expr { $$ = template("%s * %s", $1, $3); }
	| expr '/' expr { $$ = template("%s / %s", $1, $3); }
  | expr '%' expr { $$ = template("%s %% %s", $1, $3); }
  | expr '+' expr { $$ = template("%s + %s", $1, $3); }
  | expr TK_POW expr { $$ = template("pow(%s,%s)", $1, $3); }
  | TK_IDENT '[' expr ']' { $$ = template("%s[%s]",$1, $3); }
  | '(' expr ')' { $$ = template("(%s)", $2); }
  | func_call { $$ = template("%s", $1); } 
  | lib_funcs { $$ = template("%s", $1); }
  | expr '<' expr { $$ = template("%s < %s", $1, $3); }
  | expr '>' expr { $$ = template("%s > %s", $1, $3); }
  | expr TK_LE expr { $$ = template("%s <= %s", $1, $3); }
  | expr TK_GE expr { $$ = template("%s >= %s", $1, $3); }
  | expr TK_EQUALS expr { $$ = template("%s == %s", $1, $3); }
  | expr TK_NOTEQUALS expr { $$ = template("%s != %s", $1, $3); }
  | KW_NOT expr { $$ = template("!%s", $2); }
  | expr KW_AND expr { $$ = template("%s && %s",$1, $3); }
  | expr KW_OR expr { $$ = template("%s || %s", $1, $3); }
  | expr INCR expr { $$ = template("%s+=%s", $1, $3); }
  | expr DECR expr { $$ = template("%s-=%s", $1, $3); }
  | expr MUL expr { $$ = template("%s*=%s", $1, $3); }
  | expr DIV expr { $$ = template("%s/=%s", $1, $3); }
  | expr MOD expr { $$ = template("%s%%=%s", $1, $3); }
  | expr '=' expr { $$ = template("%s=%s", $1, $3); }
  | '-' expr { $$ = template("-%s", $2); }
  | TK_INT     { $$ = $1; }
  | TK_REAL    { $$ = $1; }
  | TK_STRING  { $$ = $1; }
  | TK_IDENT   { if(strcmp($1, "True") == 0) $$ = "1"; else if(strcmp($1, "False") == 0) $$ = "0"; else $$ = $1; }
;

commandList: command { $$ = $1;}
  | commandList command { $$ = template("%s\n%s", $1, $2); }
;

command:
  assign { $$ = template("%s", $1); }
  | if_block { $$ = $1; }
  | for_block { $$ = $1; }
  | return_block { $$ = $1; }
  | while_block { $$ = $1; }
  | KW_BREAK ';' { $$ = template("break;"); }
  | KW_CONTINUE ';' { $$ = template("continue;"); }
  | lib_funcs ';' { $$ = template("%s;", $1); }
  | func_call ';' { $$ = template("%s;", $1); }
  | array_init { $$ = $1; }
;

var_dec: identifier_list ':' data_types ';' { $$ = template("%s %s;", $3, $1); }
;

const_dec: KW_CONST identifier_list ':' data_types ';' { $$ = template("const %s %s;", $4, $2); }
;

func_dec:
  KW_DEF TK_IDENT '(' arg_dec ')' ':' func_body KW_ENDDEF ';'{ $$ = template("void %s(%s){%s\n}", $2, $4, $7); }
  | KW_DEF TK_IDENT '(' arg_dec ')' '-''>' data_types ':' func_body KW_ENDDEF ';'{ $$ = template("%s %s(%s) {\n%s\n}", $8, $2, $4, $10); }
;
  
func_body: command { $$ = template("%s", $1); }
  | var_dec func_body { $$ = template("%s\n%s", $1, $2); }
  | const_dec func_body { $$ = template("%s\n%s", $1, $2); }
  | command func_body { $$ = template("%s\n%s", $1, $2); }
;

identifier_list: TK_IDENT { $$ = template("%s", $1); }
  | identifier_list ',' TK_IDENT { $$ = template("%s, %s", $1, $3); }
  | TK_IDENT '[' TK_INT ']' { $$ = template("%s[%s]", $1, $3); } // 1 array declaration
  | TK_IDENT '[' ']' { $$ = template("*%s", $1); } // T[] declaration
  | TK_IDENT '=' expr { $$ = template("%s=%s", $1, $3); }
  | identifier_list ',' TK_IDENT '=' expr { $$ = template("%s, %s=%s", $1, $3, $5); }
;

data_types: KW_INTEGER { $$ = template("int"); }
  | KW_SCALAR { $$ = template("double"); }
  | KW_STR { $$ = template("char*"); }
  | KW_BOOLEAN { $$ = template("int"); }
;

arg_dec: %empty { $$ = template("");}
  | TK_IDENT ':' data_types { $$ = template("%s %s", $3, $1); }
  | arg_dec ',' TK_IDENT ':' data_types { $$ = template("%s, %s %s", $1, $5, $3); }
;

func_call: TK_IDENT '(' func_args ')' { $$ = template("%s(%s)", $1, $3); }
;

func_args: %empty { }
  | expr { $$ = $1;}
  | func_args ',' expr { $$ = template("%s, %s", $1, $3);}
;

assign: TK_IDENT '=' expr ';' { $$ = template("%s=%s;", $1, $3); }
;

if_block: KW_IF '(' expr ')' ':' commandList KW_ENDIF ';' { $$ = template("if(%s){\n%s\n}", $3, $6); }
  | KW_IF '(' expr ')' ':' commandList KW_ELSE ':' commandList KW_ENDIF ';' { $$ = template("if(%s){\n%s\n}\nelse{\n%s\n}", $3, $6, $9); }
;

for_block: KW_FOR TK_IDENT KW_IN '[' expr ':' expr ':' expr ']' ':' commandList KW_ENDFOR ';' { $$ = template("for(int %s=%s; %s<%s; %s=%s+%s){\n%s\n}", $2, $5, $2, $7, $2, $2, $9, $12); }
  | KW_FOR TK_IDENT KW_IN '[' expr ':' expr ']' ':' commandList KW_ENDFOR ';' { $$ = template("for(int %s=%s; %s<%s; %s++){\n%s\n}", $2, $5, $2, $7, $2, $10); }
;

return_block: KW_RETURN ';' { $$ = template("return;"); }
  | KW_RETURN expr ';' { $$ = template("return %s;", $2); }
;

while_block: KW_WHILE '(' expr ')' ':' commandList KW_ENDWHILE ';' { $$ = template("while(%s){\n%s\n}", $3, $6); }
;

array_init: TK_IDENT TK_ASSGN '[' expr KW_FOR expr ':' expr ']' ':' data_types ';' { $$ = template("%s* %s=(%s*)malloc(%s*sizeof(%s));\nfor(int %s=0;%s<%s;++%s){\n%s[%s]=%s;\n}", $11, $1, $11, $8, $11, $6, $6, $8, $6, $1, $6, $4); } 
;

lib_funcs: 
  KW_WRITESTR '(' func_args ')' { $$ = template("writeStr(%s)", $3); }
  | KW_WRITEINT '(' func_args ')' { $$ = template("writeInteger(%s)", $3); }
  | KW_WRITESCAL '(' func_args ')' { $$ = template("writeScalar(%s)", $3); }
  | KW_READSTR '(' ')' { $$ = template("readStr()"); }
  | KW_READINT '(' ')' { $$ = template("readInteger()"); }
  | KW_READSCAL '(' ')' { $$ = template("readScalar()"); }
;

%%
int main ()
{
   if ( yyparse() == 0 )
		printf("Accepted!\n");
	else
		printf("Rejected!\n");
}
