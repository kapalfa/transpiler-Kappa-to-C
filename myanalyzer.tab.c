/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

	#include <stdio.h>
  #include "cgen.h"
	#include <string.h>
	extern int yylex(void);

const char *c_prologue =
    "#include \"thetalib.h\"\n"
    "#include <math.h>\n"
    "#include <stdio.h>\n"
    "\n";


#line 85 "myanalyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "myanalyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_IDENT = 3,                   /* TK_IDENT  */
  YYSYMBOL_TK_INT = 4,                     /* TK_INT  */
  YYSYMBOL_TK_STRING = 5,                  /* TK_STRING  */
  YYSYMBOL_TK_REAL = 6,                    /* TK_REAL  */
  YYSYMBOL_KW_CONST = 7,                   /* KW_CONST  */
  YYSYMBOL_KW_ENDIF = 8,                   /* KW_ENDIF  */
  YYSYMBOL_KW_FOR = 9,                     /* KW_FOR  */
  YYSYMBOL_KW_IN = 10,                     /* KW_IN  */
  YYSYMBOL_KW_ENDFOR = 11,                 /* KW_ENDFOR  */
  YYSYMBOL_KW_WHILE = 12,                  /* KW_WHILE  */
  YYSYMBOL_KW_ENDWHILE = 13,               /* KW_ENDWHILE  */
  YYSYMBOL_KW_BREAK = 14,                  /* KW_BREAK  */
  YYSYMBOL_KW_CONTINUE = 15,               /* KW_CONTINUE  */
  YYSYMBOL_KW_DEF = 16,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDDEF = 17,                 /* KW_ENDDEF  */
  YYSYMBOL_KW_MAIN = 18,                   /* KW_MAIN  */
  YYSYMBOL_KW_RETURN = 19,                 /* KW_RETURN  */
  YYSYMBOL_KW_OF = 20,                     /* KW_OF  */
  YYSYMBOL_KW_READSTR = 21,                /* KW_READSTR  */
  YYSYMBOL_KW_READINT = 22,                /* KW_READINT  */
  YYSYMBOL_KW_READSCAL = 23,               /* KW_READSCAL  */
  YYSYMBOL_KW_WRITESTR = 24,               /* KW_WRITESTR  */
  YYSYMBOL_KW_WRITEINT = 25,               /* KW_WRITEINT  */
  YYSYMBOL_KW_WRITESCAL = 26,              /* KW_WRITESCAL  */
  YYSYMBOL_KW_WRITE = 27,                  /* KW_WRITE  */
  YYSYMBOL_KW_IF = 28,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 29,                   /* KW_ELSE  */
  YYSYMBOL_KW_INTEGER = 30,                /* KW_INTEGER  */
  YYSYMBOL_KW_SCALAR = 31,                 /* KW_SCALAR  */
  YYSYMBOL_KW_BOOLEAN = 32,                /* KW_BOOLEAN  */
  YYSYMBOL_KW_STR = 33,                    /* KW_STR  */
  YYSYMBOL_KW_COMP = 34,                   /* KW_COMP  */
  YYSYMBOL_KW_ENDCOMP = 35,                /* KW_ENDCOMP  */
  YYSYMBOL_TK_POW = 36,                    /* TK_POW  */
  YYSYMBOL_KW_AND = 37,                    /* KW_AND  */
  YYSYMBOL_KW_OR = 38,                     /* KW_OR  */
  YYSYMBOL_KW_NOT = 39,                    /* KW_NOT  */
  YYSYMBOL_TK_EQUALS = 40,                 /* TK_EQUALS  */
  YYSYMBOL_TK_NOTEQUALS = 41,              /* TK_NOTEQUALS  */
  YYSYMBOL_INCR = 42,                      /* INCR  */
  YYSYMBOL_DECR = 43,                      /* DECR  */
  YYSYMBOL_MUL = 44,                       /* MUL  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_MOD = 46,                       /* MOD  */
  YYSYMBOL_TK_ASSGN = 47,                  /* TK_ASSGN  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_TK_LE = 51,                     /* TK_LE  */
  YYSYMBOL_TK_GE = 52,                     /* TK_GE  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '-'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '%'  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_59_ = 59,                       /* ')'  */
  YYSYMBOL_60_ = 60,                       /* ':'  */
  YYSYMBOL_61_ = 61,                       /* ';'  */
  YYSYMBOL_62_ = 62,                       /* '['  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_input = 66,                     /* input  */
  YYSYMBOL_listOfExprs = 67,               /* listOfExprs  */
  YYSYMBOL_main_func = 68,                 /* main_func  */
  YYSYMBOL_stmt = 69,                      /* stmt  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_commandList = 71,               /* commandList  */
  YYSYMBOL_command = 72,                   /* command  */
  YYSYMBOL_var_dec = 73,                   /* var_dec  */
  YYSYMBOL_const_dec = 74,                 /* const_dec  */
  YYSYMBOL_func_dec = 75,                  /* func_dec  */
  YYSYMBOL_func_body = 76,                 /* func_body  */
  YYSYMBOL_identifier_list = 77,           /* identifier_list  */
  YYSYMBOL_data_types = 78,                /* data_types  */
  YYSYMBOL_arg_dec = 79,                   /* arg_dec  */
  YYSYMBOL_func_call = 80,                 /* func_call  */
  YYSYMBOL_func_args = 81,                 /* func_args  */
  YYSYMBOL_assign = 82,                    /* assign  */
  YYSYMBOL_if_block = 83,                  /* if_block  */
  YYSYMBOL_for_block = 84,                 /* for_block  */
  YYSYMBOL_return_block = 85,              /* return_block  */
  YYSYMBOL_while_block = 86,               /* while_block  */
  YYSYMBOL_array_init = 87,                /* array_init  */
  YYSYMBOL_lib_funcs = 88                  /* lib_funcs  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    57,     2,     2,
      58,    59,    55,    53,    64,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    61,
      49,    48,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    61,    62,    65,    68,    69,    70,    71,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     108,   109,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   125,   128,   132,   133,   136,   137,   138,   139,
     142,   143,   144,   145,   146,   147,   150,   151,   152,   153,
     156,   157,   158,   161,   164,   165,   166,   169,   172,   173,
     176,   177,   180,   181,   184,   187,   191,   192,   193,   194,
     195,   196
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_IDENT", "TK_INT",
  "TK_STRING", "TK_REAL", "KW_CONST", "KW_ENDIF", "KW_FOR", "KW_IN",
  "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE", "KW_BREAK", "KW_CONTINUE",
  "KW_DEF", "KW_ENDDEF", "KW_MAIN", "KW_RETURN", "KW_OF", "KW_READSTR",
  "KW_READINT", "KW_READSCAL", "KW_WRITESTR", "KW_WRITEINT",
  "KW_WRITESCAL", "KW_WRITE", "KW_IF", "KW_ELSE", "KW_INTEGER",
  "KW_SCALAR", "KW_BOOLEAN", "KW_STR", "KW_COMP", "KW_ENDCOMP", "TK_POW",
  "KW_AND", "KW_OR", "KW_NOT", "TK_EQUALS", "TK_NOTEQUALS", "INCR", "DECR",
  "MUL", "DIV", "MOD", "TK_ASSGN", "'='", "'<'", "'>'", "TK_LE", "TK_GE",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "':'", "';'", "'['",
  "']'", "','", "$accept", "input", "listOfExprs", "main_func", "stmt",
  "expr", "commandList", "command", "var_dec", "const_dec", "func_dec",
  "func_body", "identifier_list", "data_types", "arg_dec", "func_call",
  "func_args", "assign", "if_block", "for_block", "return_block",
  "while_block", "array_init", "lib_funcs", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -187,     8,     9,  -187,   -39,     3,     1,  -187,  -187,     9,
       9,     9,   -46,   189,     6,   -18,   -43,   -11,  -187,  -187,
    -187,   126,    24,    93,  -187,  -187,  -187,    13,    19,    25,
      27,    28,    55,   189,   189,   189,   702,  -187,  -187,   -23,
    -187,   126,   116,    63,  -187,  -187,  -187,  -187,    68,    89,
     189,   189,    81,    83,    84,   189,   189,   189,   746,    36,
     630,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,  -187,    92,    94,   -31,   100,  -187,   189,   702,    11,
     292,  -187,  -187,  -187,    37,    59,    66,  -187,   127,   746,
     724,    54,    54,   702,   702,   702,   702,   702,   702,    79,
      79,    79,    79,    36,    36,   127,   127,   127,  -187,   126,
     -49,   163,   467,   702,  -187,   189,  -187,  -187,  -187,  -187,
    -187,   117,   467,   109,   -45,   167,   114,   113,   115,   181,
     120,   467,   467,   467,   162,   121,  -187,  -187,  -187,  -187,
    -187,  -187,   129,   702,   126,   164,   126,   134,   189,   178,
     189,  -187,  -187,  -187,   390,   189,  -187,  -187,  -187,   140,
    -187,  -187,   148,   155,  -187,   189,   412,   147,   654,  -187,
     678,  -187,   467,  -187,   208,  -187,   189,   158,   159,   204,
     189,   580,   587,   587,   161,   605,   189,   -17,   491,  -187,
     396,  -187,   189,   264,   189,   165,  -187,   166,   169,   316,
     189,   170,   412,  -187,  -187,   587,   171,   340,   587,   515,
     126,   172,   539,   173,   175,   587,   176,  -187,  -187,   563,
    -187,   177,  -187
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,    60,     0,     0,     6,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,     0,     0,    39,    36,    38,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    18,    19,     0,
      63,     0,    70,     0,    66,    67,    69,    68,     0,    61,
      74,     0,     0,     0,     0,    74,    74,    74,    26,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     0,     0,     0,    52,     0,    75,     0,
       0,    89,    90,    91,     0,     0,     0,    17,    15,    27,
      28,    24,    25,    29,    30,    31,    32,    33,    34,    20,
      21,    22,    23,    14,    10,    11,    12,    13,    53,     0,
       0,     0,     0,    65,    73,     0,    16,    86,    87,    88,
      71,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    51,     0,    76,     0,     0,     0,     0,     0,     0,
       0,    47,    48,    82,     0,     0,    59,    57,    58,     0,
      50,    49,     0,     0,    72,     0,    64,     0,     0,    83,
       0,     5,     0,    54,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,    55,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,    84,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    85,     0,
      81,     0,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,  -187,    88,   -13,  -186,    74,    71,   139,
    -187,  -106,   218,   -40,  -187,   -98,   143,  -187,  -187,  -187,
    -187,  -187,  -187,   -54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,    88,   198,   141,   142,   143,
      11,   144,    12,    48,    84,    37,    89,   146,   147,   148,
     149,   150,   151,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    82,   157,   158,    16,   131,     4,   200,     3,    13,
      39,   132,     4,    50,    21,    42,     5,    14,    22,    17,
      58,    59,    60,    14,   145,     6,   155,    49,   120,   219,
     157,   204,   222,   121,   145,   166,   167,   168,    90,   229,
      81,    50,    41,   145,   145,   145,    22,    43,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   152,    40,
     124,    52,    61,     9,   123,   125,   189,    53,   152,   130,
       9,     9,     9,    54,   145,    55,    56,   152,   152,   152,
      61,    78,    79,    80,   145,   145,   127,    18,    19,    20,
     145,   125,   145,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   153,    57,   172,    61,   174,   145,   128,    83,
     145,   145,    85,   125,   145,   129,   164,   145,   152,    86,
     125,   145,    76,    77,    78,    79,    80,    87,   152,   152,
      91,    10,    92,    93,   152,   176,   152,   178,    10,    10,
      10,    50,   180,   118,   119,    51,    44,    45,    46,    47,
     122,   152,   184,    61,   152,   152,   133,   154,   152,   156,
     159,   152,   160,   191,   161,   152,   162,   195,   165,   169,
     224,   173,   170,   203,    23,    24,    25,    26,   177,   209,
     171,   212,    23,    24,    25,    26,   175,   217,    94,    95,
      96,   181,    27,    28,    29,    30,    31,    32,   182,   186,
      27,    28,    29,    30,    31,    32,   183,   190,   192,   193,
      33,   194,   201,    15,     0,     0,   213,   214,    33,   215,
     218,   220,   225,     0,   227,    34,   228,   230,   232,    35,
       0,     0,   163,    34,    61,    62,    63,    35,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   199,   199,     0,     0,
       0,     0,   206,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   199,   206,     0,     0,   206,     0,     0,   199,
      61,    62,    63,   206,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,   210,     0,     0,   211,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,    61,    62,    63,   126,    64,    65,    66,    67,
      68,    69,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,    61,    62,    63,   216,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,   197,
       0,     0,     0,   221,   207,   135,     0,     0,   136,     0,
     137,   138,     0,     0,     0,   139,     0,    27,    28,    29,
      30,    31,    32,     0,   140,   208,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    61,    62,
      63,   179,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
     134,     0,     0,   185,     5,     0,   135,     0,     0,   136,
       0,   137,   138,     0,     0,     0,   139,     0,    27,    28,
      29,    30,    31,    32,   197,   140,     0,     0,     0,     0,
     135,     0,     0,   136,   205,   137,   138,     0,     0,     0,
     139,     0,    27,    28,    29,    30,    31,    32,   197,   140,
       0,     0,     0,   223,   135,     0,     0,   136,     0,   137,
     138,     0,     0,     0,   139,     0,    27,    28,    29,    30,
      31,    32,   197,   140,     0,     0,     0,     0,   135,     0,
     226,   136,     0,   137,   138,     0,     0,     0,   139,     0,
      27,    28,    29,    30,    31,    32,   197,   140,     0,     0,
       0,     0,   135,     0,   231,   136,     0,   137,   138,     0,
       0,     0,   139,     0,    27,    28,    29,    30,    31,    32,
     197,   140,     0,     0,     0,     0,   135,     0,     0,   136,
       0,   137,   138,     0,     0,     0,   139,     0,    27,    28,
      29,    30,    31,    32,     0,   140,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,     0,
     196,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     0,     0,   202,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    97,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,   187,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,   188,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      61,    62,     0,     0,    64,    65,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    61,     0,     0,     0,    64,    65,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      13,    41,    47,    48,     3,    54,     3,   193,     0,    48,
       4,    60,     3,    58,    60,    58,     7,    62,    64,    18,
      33,    34,    35,    62,   122,    16,   132,     3,    59,   215,
      47,    48,   218,    64,   132,   141,   142,   143,    51,   225,
      63,    58,    60,   141,   142,   143,    64,    58,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,   122,    63,
      59,    58,    36,     2,    87,    64,   182,    58,   132,   119,
       9,    10,    11,    58,   182,    58,    58,   141,   142,   143,
      36,    55,    56,    57,   192,   193,    59,     9,    10,    11,
     198,    64,   200,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   125,    58,   154,    36,   156,   215,    59,     3,
     218,   219,    59,    64,   222,    59,   139,   225,   182,    61,
      64,   229,    53,    54,    55,    56,    57,    48,   192,   193,
      59,     2,    59,    59,   198,   158,   200,   160,     9,    10,
      11,    58,   165,    61,    60,    62,    30,    31,    32,    33,
      60,   215,   175,    36,   218,   219,     3,    50,   222,    60,
       3,   225,    58,   186,    61,   229,    61,   190,    58,    17,
     220,    17,    61,   196,     3,     4,     5,     6,    10,   202,
      61,   204,     3,     4,     5,     6,    62,   210,    55,    56,
      57,    61,    21,    22,    23,    24,    25,    26,    60,    62,
      21,    22,    23,    24,    25,    26,    61,     9,    60,    60,
      39,    17,    61,     5,    -1,    -1,    61,    61,    39,    60,
      60,    60,    60,    -1,    61,    54,    61,    61,    61,    58,
      -1,    -1,    61,    54,    36,    37,    38,    58,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   192,   193,    -1,    -1,
      -1,    -1,   198,    -1,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,   218,   219,    -1,    -1,   222,    -1,    -1,   225,
      36,    37,    38,   229,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    60,    -1,    -1,    63,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    36,    37,    38,    63,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    36,    37,    38,    63,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,     3,
      -1,    -1,    -1,    63,     8,     9,    -1,    -1,    12,    -1,
      14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    36,    37,
      38,    61,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       3,    -1,    -1,    61,     7,    -1,     9,    -1,    -1,    12,
      -1,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,     3,    28,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,     3,    28,
      -1,    -1,    -1,     8,     9,    -1,    -1,    12,    -1,    14,
      15,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      25,    26,     3,    28,    -1,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,     3,    28,    -1,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
       3,    28,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    28,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    60,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,    67,     0,     3,     7,    16,    68,    69,    73,
      74,    75,    77,    48,    62,    77,     3,    18,    69,    69,
      69,    60,    64,     3,     4,     5,     6,    21,    22,    23,
      24,    25,    26,    39,    54,    58,    70,    80,    88,     4,
      63,    60,    58,    58,    30,    31,    32,    33,    78,     3,
      58,    62,    58,    58,    58,    58,    58,    58,    70,    70,
      70,    36,    37,    38,    40,    41,    42,    43,    44,    45,
      46,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    63,    78,     3,    79,    59,    61,    48,    70,    81,
      70,    59,    59,    59,    81,    81,    81,    59,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    61,    60,
      59,    64,    60,    70,    59,    64,    63,    59,    59,    59,
      78,    54,    60,     3,     3,     9,    12,    14,    15,    19,
      28,    72,    73,    74,    76,    80,    82,    83,    84,    85,
      86,    87,    88,    70,    50,    76,    60,    47,    48,     3,
      58,    61,    61,    61,    70,    58,    76,    76,    76,    17,
      61,    61,    78,    17,    78,    62,    70,    10,    70,    61,
      70,    61,    60,    61,    70,    61,    62,    59,    59,    76,
       9,    70,    60,    60,    17,    70,    60,     3,    71,    72,
      71,    61,    60,    70,    48,    13,    72,     8,    29,    70,
      60,    63,    70,    61,    61,    60,    63,    70,    60,    71,
      60,    63,    71,     8,    78,    60,    11,    61,    61,    71,
      61,    11,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    74,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    80,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    88,    88,    88,    88,
      88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     8,     1,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     4,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     4,     5,     9,    12,     1,     2,     2,     2,
       1,     3,     4,     3,     3,     5,     1,     1,     1,     1,
       0,     3,     5,     4,     0,     1,     3,     4,     8,    11,
      14,    12,     2,     3,     8,    12,     4,     4,     4,     3,
       3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: listOfExprs  */
#line 51 "myanalyzer.y"
                     {
    if (yyerror_count == 0) {
      FILE *f = fopen("output.c","w");
			fputs(c_prologue, f);
			fprintf(f, "%s\n", (yyvsp[0].str));	
		}
	}
#line 1430 "myanalyzer.tab.c"
    break;

  case 3: /* listOfExprs: %empty  */
#line 61 "myanalyzer.y"
         { (yyval.str) = template("\n"); }
#line 1436 "myanalyzer.tab.c"
    break;

  case 4: /* listOfExprs: listOfExprs stmt  */
#line 62 "myanalyzer.y"
                     { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1442 "myanalyzer.tab.c"
    break;

  case 5: /* main_func: KW_DEF KW_MAIN '(' ')' ':' func_body KW_ENDDEF ';'  */
#line 65 "myanalyzer.y"
                                                              { (yyval.str) = template("int main(){\n%s\n}", (yyvsp[-2].str)); }
#line 1448 "myanalyzer.tab.c"
    break;

  case 6: /* stmt: main_func  */
#line 68 "myanalyzer.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 1454 "myanalyzer.tab.c"
    break;

  case 7: /* stmt: var_dec stmt  */
#line 69 "myanalyzer.y"
                 { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1460 "myanalyzer.tab.c"
    break;

  case 8: /* stmt: const_dec stmt  */
#line 70 "myanalyzer.y"
                   { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1466 "myanalyzer.tab.c"
    break;

  case 9: /* stmt: func_dec stmt  */
#line 71 "myanalyzer.y"
                  { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1472 "myanalyzer.tab.c"
    break;

  case 10: /* expr: expr '-' expr  */
#line 75 "myanalyzer.y"
                       { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1478 "myanalyzer.tab.c"
    break;

  case 11: /* expr: expr '*' expr  */
#line 76 "myanalyzer.y"
                        { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1484 "myanalyzer.tab.c"
    break;

  case 12: /* expr: expr '/' expr  */
#line 77 "myanalyzer.y"
                        { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1490 "myanalyzer.tab.c"
    break;

  case 13: /* expr: expr '%' expr  */
#line 78 "myanalyzer.y"
                  { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1496 "myanalyzer.tab.c"
    break;

  case 14: /* expr: expr '+' expr  */
#line 79 "myanalyzer.y"
                  { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1502 "myanalyzer.tab.c"
    break;

  case 15: /* expr: expr TK_POW expr  */
#line 80 "myanalyzer.y"
                     { (yyval.str) = template("pow(%s,%s)", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1508 "myanalyzer.tab.c"
    break;

  case 16: /* expr: TK_IDENT '[' expr ']'  */
#line 81 "myanalyzer.y"
                          { (yyval.str) = template("%s[%s]",(yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1514 "myanalyzer.tab.c"
    break;

  case 17: /* expr: '(' expr ')'  */
#line 82 "myanalyzer.y"
                 { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1520 "myanalyzer.tab.c"
    break;

  case 18: /* expr: func_call  */
#line 83 "myanalyzer.y"
              { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1526 "myanalyzer.tab.c"
    break;

  case 19: /* expr: lib_funcs  */
#line 84 "myanalyzer.y"
              { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1532 "myanalyzer.tab.c"
    break;

  case 20: /* expr: expr '<' expr  */
#line 85 "myanalyzer.y"
                  { (yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1538 "myanalyzer.tab.c"
    break;

  case 21: /* expr: expr '>' expr  */
#line 86 "myanalyzer.y"
                  { (yyval.str) = template("%s > %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1544 "myanalyzer.tab.c"
    break;

  case 22: /* expr: expr TK_LE expr  */
#line 87 "myanalyzer.y"
                    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1550 "myanalyzer.tab.c"
    break;

  case 23: /* expr: expr TK_GE expr  */
#line 88 "myanalyzer.y"
                    { (yyval.str) = template("%s >= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1556 "myanalyzer.tab.c"
    break;

  case 24: /* expr: expr TK_EQUALS expr  */
#line 89 "myanalyzer.y"
                        { (yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1562 "myanalyzer.tab.c"
    break;

  case 25: /* expr: expr TK_NOTEQUALS expr  */
#line 90 "myanalyzer.y"
                           { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1568 "myanalyzer.tab.c"
    break;

  case 26: /* expr: KW_NOT expr  */
#line 91 "myanalyzer.y"
                { (yyval.str) = template("!%s", (yyvsp[0].str)); }
#line 1574 "myanalyzer.tab.c"
    break;

  case 27: /* expr: expr KW_AND expr  */
#line 92 "myanalyzer.y"
                     { (yyval.str) = template("%s && %s",(yyvsp[-2].str), (yyvsp[0].str)); }
#line 1580 "myanalyzer.tab.c"
    break;

  case 28: /* expr: expr KW_OR expr  */
#line 93 "myanalyzer.y"
                    { (yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1586 "myanalyzer.tab.c"
    break;

  case 29: /* expr: expr INCR expr  */
#line 94 "myanalyzer.y"
                   { (yyval.str) = template("%s+=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1592 "myanalyzer.tab.c"
    break;

  case 30: /* expr: expr DECR expr  */
#line 95 "myanalyzer.y"
                   { (yyval.str) = template("%s-=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1598 "myanalyzer.tab.c"
    break;

  case 31: /* expr: expr MUL expr  */
#line 96 "myanalyzer.y"
                  { (yyval.str) = template("%s*=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1604 "myanalyzer.tab.c"
    break;

  case 32: /* expr: expr DIV expr  */
#line 97 "myanalyzer.y"
                  { (yyval.str) = template("%s/=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1610 "myanalyzer.tab.c"
    break;

  case 33: /* expr: expr MOD expr  */
#line 98 "myanalyzer.y"
                  { (yyval.str) = template("%s%%=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1616 "myanalyzer.tab.c"
    break;

  case 34: /* expr: expr '=' expr  */
#line 99 "myanalyzer.y"
                  { (yyval.str) = template("%s=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1622 "myanalyzer.tab.c"
    break;

  case 35: /* expr: '-' expr  */
#line 100 "myanalyzer.y"
             { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 1628 "myanalyzer.tab.c"
    break;

  case 36: /* expr: TK_INT  */
#line 101 "myanalyzer.y"
               { (yyval.str) = (yyvsp[0].str); }
#line 1634 "myanalyzer.tab.c"
    break;

  case 37: /* expr: TK_REAL  */
#line 102 "myanalyzer.y"
               { (yyval.str) = (yyvsp[0].str); }
#line 1640 "myanalyzer.tab.c"
    break;

  case 38: /* expr: TK_STRING  */
#line 103 "myanalyzer.y"
               { (yyval.str) = (yyvsp[0].str); }
#line 1646 "myanalyzer.tab.c"
    break;

  case 39: /* expr: TK_IDENT  */
#line 104 "myanalyzer.y"
               { if(strcmp((yyvsp[0].str), "True") == 0) (yyval.str) = "1"; 
                  else if(strcmp((yyvsp[0].str), "False") == 0) (yyval.str) = "0"; else (yyval.str) = (yyvsp[0].str); }
#line 1653 "myanalyzer.tab.c"
    break;

  case 40: /* commandList: command  */
#line 108 "myanalyzer.y"
                     { (yyval.str) = (yyvsp[0].str);}
#line 1659 "myanalyzer.tab.c"
    break;

  case 41: /* commandList: commandList command  */
#line 109 "myanalyzer.y"
                        { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1665 "myanalyzer.tab.c"
    break;

  case 42: /* command: assign  */
#line 113 "myanalyzer.y"
         { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1671 "myanalyzer.tab.c"
    break;

  case 43: /* command: if_block  */
#line 114 "myanalyzer.y"
             { (yyval.str) = (yyvsp[0].str); }
#line 1677 "myanalyzer.tab.c"
    break;

  case 44: /* command: for_block  */
#line 115 "myanalyzer.y"
              { (yyval.str) = (yyvsp[0].str); }
#line 1683 "myanalyzer.tab.c"
    break;

  case 45: /* command: return_block  */
#line 116 "myanalyzer.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1689 "myanalyzer.tab.c"
    break;

  case 46: /* command: while_block  */
#line 117 "myanalyzer.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 1695 "myanalyzer.tab.c"
    break;

  case 47: /* command: KW_BREAK ';'  */
#line 118 "myanalyzer.y"
                 { (yyval.str) = template("break;"); }
#line 1701 "myanalyzer.tab.c"
    break;

  case 48: /* command: KW_CONTINUE ';'  */
#line 119 "myanalyzer.y"
                    { (yyval.str) = template("continue;"); }
#line 1707 "myanalyzer.tab.c"
    break;

  case 49: /* command: lib_funcs ';'  */
#line 120 "myanalyzer.y"
                  { (yyval.str) = template("%s;", (yyvsp[-1].str)); }
#line 1713 "myanalyzer.tab.c"
    break;

  case 50: /* command: func_call ';'  */
#line 121 "myanalyzer.y"
                  { (yyval.str) = template("%s;", (yyvsp[-1].str)); }
#line 1719 "myanalyzer.tab.c"
    break;

  case 51: /* command: array_init  */
#line 122 "myanalyzer.y"
               { (yyval.str) = (yyvsp[0].str); }
#line 1725 "myanalyzer.tab.c"
    break;

  case 52: /* var_dec: identifier_list ':' data_types ';'  */
#line 125 "myanalyzer.y"
                                            { (yyval.str) = template("%s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1731 "myanalyzer.tab.c"
    break;

  case 53: /* const_dec: KW_CONST identifier_list ':' data_types ';'  */
#line 128 "myanalyzer.y"
                                                       { (yyval.str) = template("const %s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1737 "myanalyzer.tab.c"
    break;

  case 54: /* func_dec: KW_DEF TK_IDENT '(' arg_dec ')' ':' func_body KW_ENDDEF ';'  */
#line 132 "myanalyzer.y"
                                                             { (yyval.str) = template("void %s(%s){%s\n}", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1743 "myanalyzer.tab.c"
    break;

  case 55: /* func_dec: KW_DEF TK_IDENT '(' arg_dec ')' '-' '>' data_types ':' func_body KW_ENDDEF ';'  */
#line 133 "myanalyzer.y"
                                                                                 { (yyval.str) = template("%s %s(%s) {\n%s\n}", (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-8].str), (yyvsp[-2].str)); }
#line 1749 "myanalyzer.tab.c"
    break;

  case 56: /* func_body: command  */
#line 136 "myanalyzer.y"
                   { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1755 "myanalyzer.tab.c"
    break;

  case 57: /* func_body: var_dec func_body  */
#line 137 "myanalyzer.y"
                      { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1761 "myanalyzer.tab.c"
    break;

  case 58: /* func_body: const_dec func_body  */
#line 138 "myanalyzer.y"
                        { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1767 "myanalyzer.tab.c"
    break;

  case 59: /* func_body: command func_body  */
#line 139 "myanalyzer.y"
                      { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1773 "myanalyzer.tab.c"
    break;

  case 60: /* identifier_list: TK_IDENT  */
#line 142 "myanalyzer.y"
                          { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1779 "myanalyzer.tab.c"
    break;

  case 61: /* identifier_list: identifier_list ',' TK_IDENT  */
#line 143 "myanalyzer.y"
                                 { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1785 "myanalyzer.tab.c"
    break;

  case 62: /* identifier_list: TK_IDENT '[' TK_INT ']'  */
#line 144 "myanalyzer.y"
                            { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1791 "myanalyzer.tab.c"
    break;

  case 63: /* identifier_list: TK_IDENT '[' ']'  */
#line 145 "myanalyzer.y"
                     { (yyval.str) = template("*%s", (yyvsp[-2].str)); }
#line 1797 "myanalyzer.tab.c"
    break;

  case 64: /* identifier_list: TK_IDENT '=' expr  */
#line 146 "myanalyzer.y"
                      { (yyval.str) = template("%s=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1803 "myanalyzer.tab.c"
    break;

  case 65: /* identifier_list: identifier_list ',' TK_IDENT '=' expr  */
#line 147 "myanalyzer.y"
                                          { (yyval.str) = template("%s, %s=%s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1809 "myanalyzer.tab.c"
    break;

  case 66: /* data_types: KW_INTEGER  */
#line 150 "myanalyzer.y"
                       { (yyval.str) = template("int"); }
#line 1815 "myanalyzer.tab.c"
    break;

  case 67: /* data_types: KW_SCALAR  */
#line 151 "myanalyzer.y"
              { (yyval.str) = template("double"); }
#line 1821 "myanalyzer.tab.c"
    break;

  case 68: /* data_types: KW_STR  */
#line 152 "myanalyzer.y"
           { (yyval.str) = template("char*"); }
#line 1827 "myanalyzer.tab.c"
    break;

  case 69: /* data_types: KW_BOOLEAN  */
#line 153 "myanalyzer.y"
               { (yyval.str) = template("int"); }
#line 1833 "myanalyzer.tab.c"
    break;

  case 70: /* arg_dec: %empty  */
#line 156 "myanalyzer.y"
                { (yyval.str) = template("");}
#line 1839 "myanalyzer.tab.c"
    break;

  case 71: /* arg_dec: TK_IDENT ':' data_types  */
#line 157 "myanalyzer.y"
                            { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-2].str)); }
#line 1845 "myanalyzer.tab.c"
    break;

  case 72: /* arg_dec: arg_dec ',' TK_IDENT ':' data_types  */
#line 158 "myanalyzer.y"
                                        { (yyval.str) = template("%s, %s %s", (yyvsp[-4].str), (yyvsp[0].str), (yyvsp[-2].str)); }
#line 1851 "myanalyzer.tab.c"
    break;

  case 73: /* func_call: TK_IDENT '(' func_args ')'  */
#line 161 "myanalyzer.y"
                                      { (yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1857 "myanalyzer.tab.c"
    break;

  case 74: /* func_args: %empty  */
#line 164 "myanalyzer.y"
                  { }
#line 1863 "myanalyzer.tab.c"
    break;

  case 75: /* func_args: expr  */
#line 165 "myanalyzer.y"
         { (yyval.str) = (yyvsp[0].str);}
#line 1869 "myanalyzer.tab.c"
    break;

  case 76: /* func_args: func_args ',' expr  */
#line 166 "myanalyzer.y"
                       { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1875 "myanalyzer.tab.c"
    break;

  case 77: /* assign: TK_IDENT '=' expr ';'  */
#line 169 "myanalyzer.y"
                              { (yyval.str) = template("%s=%s;", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1881 "myanalyzer.tab.c"
    break;

  case 78: /* if_block: KW_IF '(' expr ')' ':' commandList KW_ENDIF ';'  */
#line 172 "myanalyzer.y"
                                                          { (yyval.str) = template("if(%s){\n%s\n}", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1887 "myanalyzer.tab.c"
    break;

  case 79: /* if_block: KW_IF '(' expr ')' ':' commandList KW_ELSE ':' commandList KW_ENDIF ';'  */
#line 173 "myanalyzer.y"
                                                                            { (yyval.str) = template("if(%s){\n%s\n}\nelse{\n%s\n}", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1893 "myanalyzer.tab.c"
    break;

  case 80: /* for_block: KW_FOR TK_IDENT KW_IN '[' expr ':' expr ':' expr ']' ':' commandList KW_ENDFOR ';'  */
#line 176 "myanalyzer.y"
                                                                                              { (yyval.str) = template("for(int %s=%s; %s<%s; %s=%s+%s){\n%s\n}", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-12].str), (yyvsp[-12].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1899 "myanalyzer.tab.c"
    break;

  case 81: /* for_block: KW_FOR TK_IDENT KW_IN '[' expr ':' expr ']' ':' commandList KW_ENDFOR ';'  */
#line 177 "myanalyzer.y"
                                                                              { (yyval.str) = template("for(int %s=%s; %s<%s; %s++){\n%s\n}", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-10].str), (yyvsp[-5].str), (yyvsp[-10].str), (yyvsp[-2].str)); }
#line 1905 "myanalyzer.tab.c"
    break;

  case 82: /* return_block: KW_RETURN ';'  */
#line 180 "myanalyzer.y"
                            { (yyval.str) = template("return;"); }
#line 1911 "myanalyzer.tab.c"
    break;

  case 83: /* return_block: KW_RETURN expr ';'  */
#line 181 "myanalyzer.y"
                       { (yyval.str) = template("return %s;", (yyvsp[-1].str)); }
#line 1917 "myanalyzer.tab.c"
    break;

  case 84: /* while_block: KW_WHILE '(' expr ')' ':' commandList KW_ENDWHILE ';'  */
#line 184 "myanalyzer.y"
                                                                   { (yyval.str) = template("while(%s){\n%s\n}", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1923 "myanalyzer.tab.c"
    break;

  case 85: /* array_init: TK_IDENT TK_ASSGN '[' expr KW_FOR expr ':' expr ']' ':' data_types ';'  */
#line 187 "myanalyzer.y"
                                                                                   { (yyval.str) = template("%s* %s=(%s*)malloc(%s*sizeof(%s));\nfor(int %s=0;%s<%s;++%s){\n%s[%s]=%s;\n}", (yyvsp[-1].str), (yyvsp[-11].str), (yyvsp[-1].str), (yyvsp[-4].str), (yyvsp[-1].str), (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-11].str), (yyvsp[-6].str), (yyvsp[-8].str)); }
#line 1929 "myanalyzer.tab.c"
    break;

  case 86: /* lib_funcs: KW_WRITESTR '(' func_args ')'  */
#line 191 "myanalyzer.y"
                                { (yyval.str) = template("writeStr(%s)", (yyvsp[-1].str)); }
#line 1935 "myanalyzer.tab.c"
    break;

  case 87: /* lib_funcs: KW_WRITEINT '(' func_args ')'  */
#line 192 "myanalyzer.y"
                                  { (yyval.str) = template("writeInteger(%s)", (yyvsp[-1].str)); }
#line 1941 "myanalyzer.tab.c"
    break;

  case 88: /* lib_funcs: KW_WRITESCAL '(' func_args ')'  */
#line 193 "myanalyzer.y"
                                   { (yyval.str) = template("writeScalar(%s)", (yyvsp[-1].str)); }
#line 1947 "myanalyzer.tab.c"
    break;

  case 89: /* lib_funcs: KW_READSTR '(' ')'  */
#line 194 "myanalyzer.y"
                       { (yyval.str) = template("readStr()"); }
#line 1953 "myanalyzer.tab.c"
    break;

  case 90: /* lib_funcs: KW_READINT '(' ')'  */
#line 195 "myanalyzer.y"
                       { (yyval.str) = template("readInteger()"); }
#line 1959 "myanalyzer.tab.c"
    break;

  case 91: /* lib_funcs: KW_READSCAL '(' ')'  */
#line 196 "myanalyzer.y"
                        { (yyval.str) = template("readScalar()"); }
#line 1965 "myanalyzer.tab.c"
    break;


#line 1969 "myanalyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 199 "myanalyzer.y"

int main ()
{
   if ( yyparse() == 0 )
		printf("Accepted!\n");
	else
		printf("Rejected!\n");
}
