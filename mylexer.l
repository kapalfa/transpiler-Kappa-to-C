%{
	#include <string.h>
    #include "cgen.h"	
    #include "myanalyzer.tab.h"
  
  int line_num = 1;
%}

ID      [a-zA-Z_#][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  [+-]?{DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING   ["](.)*["]
%%

if              return KW_IF;
else		        return KW_ELSE;
integer         return KW_INTEGER;
scalar          return KW_SCALAR;
str             return KW_STR;
boolean         return KW_BOOLEAN;
comp            return KW_COMP;
endcomp         return KW_ENDCOMP;
not             return KW_NOT;
and             return KW_AND;
or              return KW_OR;
const           return KW_CONST;
endif           return KW_ENDIF;
for             return KW_FOR;
in              return KW_IN;
endfor          return KW_ENDFOR;
while           return KW_WHILE;
endwhile        return KW_ENDWHILE;
break           return KW_BREAK;
continue        return KW_CONTINUE;
def             return KW_DEF;
enddef          return KW_ENDDEF;
main            return KW_MAIN;
return          return KW_RETURN;
of              return KW_OF;
(?-i:readStr)         return KW_READSTR;
(?-i:readInteger)     return KW_READINT;
(?-i:readScalar)      return KW_READSCAL;
(?-i:writeStr)        return KW_WRITESTR;
(?-i:writeInteger)    return KW_WRITEINT;
(?-i:writeScalar)     return KW_WRITESCAL;
(?-i:write)           return KW_WRITE;

{ID}        { yylval.str = strdup(yytext); return TK_IDENT; }
{NUMBER}    { yylval.str = strdup(yytext); return TK_INT; }
{REAL}      { yylval.str = strdup(yytext); return TK_REAL; }
{STRING}    { yylval.str = strdup(yytext); return TK_STRING; }

"+"             return '+';
"-"             return '-';
"*"             return '*';
"/"             return '/';
"("			        return '(';
")"		          return ')';
"["             return '[';
"]"             return ']';
";"			        return ';';
","			        return ',';
"."             return '.';
":"             return ':';
"%"             return '%';
">"             return '>';
"<"             return '<';
">="            return TK_GE;
"<="            return TK_LE;
"**"            return TK_POW;
"=="            return TK_EQUALS;
"!="            return TK_NOTEQUALS;
":="            return TK_ASSGN;
"="             return '=';
"+="            return INCR;
"-="            return DECR;
"*="            return MUL;
"/="            return DIV;
"%="            return MOD;

--.*            /*eat line comments*/ ++line_num;
[ \r\t]+		/* eat whitespace */
\n 					 ++line_num;

<<EOF>> 	return EOF;
.         { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }

%%

