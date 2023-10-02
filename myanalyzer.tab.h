/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_IDENT = 258,                /* TK_IDENT  */
    TK_INT = 259,                  /* TK_INT  */
    TK_STRING = 260,               /* TK_STRING  */
    TK_REAL = 261,                 /* TK_REAL  */
    KW_CONST = 262,                /* KW_CONST  */
    KW_ENDIF = 263,                /* KW_ENDIF  */
    KW_FOR = 264,                  /* KW_FOR  */
    KW_IN = 265,                   /* KW_IN  */
    KW_ENDFOR = 266,               /* KW_ENDFOR  */
    KW_WHILE = 267,                /* KW_WHILE  */
    KW_ENDWHILE = 268,             /* KW_ENDWHILE  */
    KW_BREAK = 269,                /* KW_BREAK  */
    KW_CONTINUE = 270,             /* KW_CONTINUE  */
    KW_DEF = 271,                  /* KW_DEF  */
    KW_ENDDEF = 272,               /* KW_ENDDEF  */
    KW_MAIN = 273,                 /* KW_MAIN  */
    KW_RETURN = 274,               /* KW_RETURN  */
    KW_OF = 275,                   /* KW_OF  */
    KW_READSTR = 276,              /* KW_READSTR  */
    KW_READINT = 277,              /* KW_READINT  */
    KW_READSCAL = 278,             /* KW_READSCAL  */
    KW_WRITESTR = 279,             /* KW_WRITESTR  */
    KW_WRITEINT = 280,             /* KW_WRITEINT  */
    KW_WRITESCAL = 281,            /* KW_WRITESCAL  */
    KW_WRITE = 282,                /* KW_WRITE  */
    KW_IF = 283,                   /* KW_IF  */
    KW_ELSE = 284,                 /* KW_ELSE  */
    KW_INTEGER = 285,              /* KW_INTEGER  */
    KW_SCALAR = 286,               /* KW_SCALAR  */
    KW_BOOLEAN = 287,              /* KW_BOOLEAN  */
    KW_STR = 288,                  /* KW_STR  */
    KW_COMP = 289,                 /* KW_COMP  */
    KW_ENDCOMP = 290,              /* KW_ENDCOMP  */
    TK_POW = 291,                  /* TK_POW  */
    KW_AND = 292,                  /* KW_AND  */
    KW_OR = 293,                   /* KW_OR  */
    KW_NOT = 294,                  /* KW_NOT  */
    TK_EQUALS = 295,               /* TK_EQUALS  */
    TK_NOTEQUALS = 296,            /* TK_NOTEQUALS  */
    INCR = 297,                    /* INCR  */
    DECR = 298,                    /* DECR  */
    MUL = 299,                     /* MUL  */
    DIV = 300,                     /* DIV  */
    MOD = 301,                     /* MOD  */
    TK_ASSGN = 302,                /* TK_ASSGN  */
    TK_LE = 303,                   /* TK_LE  */
    TK_GE = 304                    /* TK_GE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "myanalyzer.y"

	char* str;

#line 117 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
