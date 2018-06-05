/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pascal.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "ast.h"
#include "utils.h"
#include "parser.hpp"
#include "ccalc.h"
#include "CodeGenContext.h"
using namespace std;

int yydebug = 1;
ast::Node* ast_root;

#line 83 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    IDD = 259,
    DOT = 260,
    EQUAL = 261,
    LTHAN = 262,
    LEQU = 263,
    GT = 264,
    GE = 265,
    PLUS = 266,
    MINUS = 267,
    MUL = 268,
    DIV = 269,
    RIGHTP = 270,
    LEFTP = 271,
    ASSIGN = 272,
    COLON = 273,
    COMMA = 274,
    SEMI = 275,
    UNTIL = 276,
    OR = 277,
    AND = 278,
    MOD = 279,
    OF = 280,
    READ = 281,
    REPEAT = 282,
    TO = 283,
    UNEQUAL = 284,
    IF = 285,
    THEN = 286,
    ELSE = 287,
    WHILE = 288,
    DO = 289,
    BEGINN = 290,
    END = 291,
    CASE = 292,
    DOWNTO = 293,
    FOR = 294,
    GOTO = 295,
    INTEGER = 296,
    LB = 297,
    RB = 298,
    NOT = 299,
    NUMBER = 300,
    SYS_CON = 301,
    SYS_BOOL = 302,
    SYS_FUNCT = 303,
    SYS_PROC = 304,
    SYS_TYPE = 305,
    CHAR = 306,
    CONST = 307,
    STRING = 308,
    REAL = 309,
    ARRAY = 310,
    VAR = 311,
    PROCEDURE = 312,
    RECORD = 313,
    FUNCTION = 314,
    TYPE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "pascal.y" /* yacc.c:355  */

	char* 					debug;

    ast::Node* 				ast_Node; 
    ast::Statement* 		ast_Statement;
    ast::Expression* 		ast_Expression;
    ast::Program* 			ast_Program;
    ast::Routine* 			ast_Routine;
    ast::TypeDecl* 			ast_TypeDecl;
    ast::VarDecl* 			ast_VarDecl;
    ast::Identifier* 		ast_Identifier;
    ast::AssignmentStmt* 	ast_AssignmentStmt;
    ast::ConstDecl*         ast_ConstDecl;
    ast::ConstValue*        ast_ConstValue;
    ast::RecordType*        ast_RecordType;
    ast::TypeConst*         ast_TypeConst;

    ast::StatementList* 	ast_StatementList;
    ast::VarDeclList* 		ast_VarDeclList;
    ast::IdentifierList* 	ast_IdentifierList;
    ast::RoutineList* 		ast_RoutineList;
    ast::NameList* 			ast_NameList;
    ast::ExpressionList* 	ast_ExpressionList;
    ast::ConstDeclList*     ast_ConstDeclList;
    ast::FieldDeclList*     ast_FieldDeclList;
    ast::TypeDeclList*      ast_TypeDeclList;
    ast::CaseList*          ast_CaseList;
    ast::CaseStmt*          ast_CaseStmt;

#line 214 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    90,    91,    91,    94,    98,   103,   112,
     113,   117,   118,   122,   123,   124,   126,   127,   132,   133,
     137,   138,   142,   146,   147,   148,   152,   153,   155,   156,
     157,   158,   159,   160,   164,   168,   172,   173,   177,   181,
     182,   186,   187,   191,   192,   196,   200,   201,   202,   206,
     210,   214,   218,   222,   223,   224,   228,   229,   233,   234,
     238,   242,   246,   247,   251,   252,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   272,   273,   274,   278,
     279,   280,   281,   286,   290,   291,   295,   298,   301,   304,
     309,   312,   313,   316,   317,   320,   324,   325,   328,   329,
     330,   331,   332,   333,   334,   335,   339,   340,   341,   342,
     346,   347,   348,   349,   350,   351,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "IDD", "DOT", "EQUAL",
  "LTHAN", "LEQU", "GT", "GE", "PLUS", "MINUS", "MUL", "DIV", "RIGHTP",
  "LEFTP", "ASSIGN", "COLON", "COMMA", "SEMI", "UNTIL", "OR", "AND", "MOD",
  "OF", "READ", "REPEAT", "TO", "UNEQUAL", "IF", "THEN", "ELSE", "WHILE",
  "DO", "BEGINN", "END", "CASE", "DOWNTO", "FOR", "GOTO", "INTEGER", "LB",
  "RB", "NOT", "NUMBER", "SYS_CON", "SYS_BOOL", "SYS_FUNCT", "SYS_PROC",
  "SYS_TYPE", "CHAR", "CONST", "STRING", "REAL", "ARRAY", "VAR",
  "PROCEDURE", "RECORD", "FUNCTION", "TYPE", "$accept", "NAME", "program",
  "program_head", "routine", "sub_routine", "routine_head", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "simple_type_decl", "array_type_decl",
  "record_type_decl", "field_decl_list", "field_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "function_head", "procedure_decl", "procedure_head", "parameters",
  "para_decl_list", "para_type_list", "routine_body", "compound_stmt",
  "stmt_list", "stmt", "non_label_stmt", "assign_stmt", "proc_stmt",
  "if_stmt", "else_clause", "repeat_stmt", "while_stmt", "for_stmt",
  "case_stmt", "case_expr_list", "case_expr", "goto_stmt",
  "expression_list", "expression", "expr", "term", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -111

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      50,    74,    54,    39,    78,  -138,    97,   104,    72,    69,
    -138,  -138,   126,    97,  -138,  -138,  -138,  -138,   137,   100,
     141,   164,   197,   167,   137,  -138,   158,  -138,  -138,  -138,
    -138,  -138,  -138,   151,   141,  -138,    71,  -138,   107,   107,
    -138,   107,   171,   142,   172,   173,  -138,   176,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,     9,  -138,  -138,
      22,   158,  -138,    47,  -138,   185,   204,   107,   107,   107,
     221,   367,    13,   165,   107,   165,   198,   199,  -138,   322,
      25,    76,  -138,   157,   348,   200,  -138,   263,   107,  -138,
     177,   215,   216,  -138,   218,   184,   158,   224,   211,  -138,
    -138,  -138,     9,   231,  -138,   235,   237,  -138,   225,  -138,
     229,  -138,   227,     5,   108,   108,    20,   107,   248,   107,
    -138,   353,  -138,   107,   107,   156,   156,   156,   156,   156,
     156,   246,   156,   156,   156,   165,   165,   165,   165,   246,
      98,   107,  -138,    16,   250,   252,   254,   260,    11,    35,
    -138,    67,   261,  -138,   243,  -138,   253,   253,    39,    39,
     107,  -138,   107,   251,   108,  -138,    36,  -138,    65,   112,
    -138,    25,    25,    25,    25,    25,    25,   239,    76,    76,
      76,  -138,  -138,  -138,  -138,  -138,   256,   257,    89,  -138,
     298,  -138,   267,   236,   233,   238,   241,  -138,  -138,     9,
      97,  -138,    10,  -138,   264,   268,    72,   271,   108,   108,
     107,  -138,  -138,  -138,   246,  -138,   246,   246,  -138,  -138,
     107,   107,     7,  -138,  -138,  -138,   269,   272,  -138,  -138,
     158,   102,    62,  -138,    11,  -138,  -138,  -138,   108,  -138,
     277,   279,   308,   314,   270,  -138,     9,  -138,   128,    11,
    -138,    12,  -138,  -138,  -138,   246,   246,  -138,  -138,    11,
    -138,  -138,  -138,  -138,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    10,     0,     1,     0,     0,     0,    19,
       4,     2,     0,     9,     3,    63,     6,    60,     0,    42,
       0,     0,     0,     0,    18,    21,     0,    48,    13,    17,
      16,    15,    14,     0,     0,    66,    79,    63,     0,     0,
      61,     0,     0,     0,     0,    81,    69,     0,    64,    67,
      68,    70,    71,    72,    73,    74,    75,     0,    20,    40,
       0,    41,    44,     8,    12,     0,     0,     0,     0,     0,
       0,    98,     2,     0,     0,     0,   118,   116,   120,     0,
      99,   109,   111,     0,     0,     0,    95,     0,     0,    62,
       0,     0,     0,    26,     0,     0,     0,    27,     0,    24,
      23,    25,     0,     0,    43,     0,     0,    46,     0,    47,
       0,    11,     0,     0,    97,    76,     0,     0,     0,     0,
     123,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,    22,     0,    39,    55,    55,    10,    10,
       0,    80,     0,     0,    86,   125,     0,   121,     0,     0,
     110,   104,   103,   102,   101,   100,   105,    85,   106,   107,
     108,   112,   113,   115,   114,    87,     0,     0,     0,    92,
       0,    82,     0,     0,     0,     0,     0,    35,    36,     0,
       0,    45,     0,    52,     0,     0,     0,     0,    78,    96,
       0,   124,   119,   117,     0,    83,     0,     0,    90,    91,
       0,     0,     0,    28,    30,    29,     0,     0,    33,    54,
       0,     0,     0,    57,     0,    49,     7,    51,    77,    84,
       0,     0,     0,     0,     0,    31,     0,    38,     0,     0,
      53,     0,    50,    94,    93,     0,     0,    32,    34,     0,
      59,    56,    88,    89,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,    -6,  -138,  -138,  -138,   119,   306,  -138,  -138,   -12,
    -138,  -138,   286,   -96,  -137,  -138,  -138,  -138,   152,   -92,
    -138,  -138,   273,  -138,  -138,  -138,  -138,  -138,   162,  -138,
      82,   129,    -7,   276,  -122,   259,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,   150,  -138,   -54,   -36,   258,
      46,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    77,     2,     3,     7,   205,   206,     9,    13,    78,
      19,    24,    25,    98,    99,   100,   101,   149,   150,    60,
      27,    61,    62,    63,   107,   108,   109,   110,   203,   232,
     233,    16,    46,    22,    47,    48,    49,    50,    51,   215,
      52,    53,    54,    55,   188,   189,    56,   113,   114,    80,
      81,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    17,    79,    83,   151,    84,   154,    21,    33,   177,
     120,   196,   122,    11,    59,    11,    59,   185,   118,   244,
     161,    90,    65,    90,   162,   229,   125,   126,   127,   128,
     129,   191,   115,   116,   143,   162,   132,   133,   121,    59,
     102,   103,   125,   126,   127,   128,   129,   134,   245,   130,
      91,    97,    91,     1,     5,   119,    92,   151,    92,    93,
      94,    93,    94,   163,    95,   130,   230,    96,   230,   168,
     169,   197,   181,   182,   183,   184,    66,   250,     4,   211,
     212,   164,   251,   166,   162,   199,   103,    67,    68,   135,
     136,     6,   239,   186,   240,   241,    97,   252,    10,   137,
     138,    11,   186,   227,   105,   190,   106,    15,    71,    14,
     231,    72,   260,    69,   125,   126,   127,   128,   129,    73,
     249,   103,   264,    74,   208,   218,   209,   213,   187,    18,
      28,   162,    20,   262,   263,    29,    30,   130,   248,    28,
      31,    23,    97,    32,    29,    30,   259,   103,    28,    31,
     258,    75,    32,    29,    30,    76,    26,   170,    31,   231,
      72,    32,    59,   125,   126,   127,   128,   129,    73,    72,
      34,    64,    74,    57,   238,    85,   187,    73,   178,   179,
     180,    74,    28,    86,   242,   243,   130,    29,    30,    88,
      87,   139,    31,    97,   228,    32,    89,    28,    35,    17,
      75,    36,    29,    30,    76,   111,    28,    31,   112,    75,
      32,    29,    30,    76,   123,   124,    31,   141,   144,    32,
     145,   146,    35,   147,    37,    36,   148,    38,    97,   152,
      39,   153,    15,    40,    41,   155,    42,    43,    44,   156,
      97,   157,   117,    97,   160,   158,    45,    35,    37,   159,
      36,    38,   165,    97,    39,   192,    15,   193,    41,   194,
      42,    43,    44,   201,    35,   195,   200,    36,   210,   202,
      45,   214,   222,    37,   216,   217,    38,   223,   207,    39,
     224,    15,   234,    41,   226,    42,    43,    44,   235,   225,
      37,   237,   247,    38,   246,    45,    39,   253,    15,   254,
      41,   198,    42,    43,   125,   126,   127,   128,   129,     8,
      58,   257,    45,    70,   125,   126,   127,   128,   129,   204,
     125,   126,   127,   128,   129,     0,   220,   130,   125,   126,
     127,   128,   129,   261,   104,   236,   221,   130,   219,     0,
       0,     0,   255,   130,     0,     0,   142,     0,   256,     0,
       0,   130,     0,   131,   125,   126,   127,   128,   129,   125,
     126,   127,   128,   129,     0,     0,     0,     0,   167,     0,
       0,     0,     0,   140,     0,     0,     0,   130,  -110,  -110,
    -110,  -110,   130,   171,   172,   173,   174,   175,   176,  -110,
    -110,  -110
};

static const yytype_int16 yycheck[] =
{
       6,     8,    38,    39,    96,    41,   102,    13,    20,   131,
      73,   148,    75,     4,     4,     4,     4,   139,     5,    12,
      15,    12,    34,    12,    19,    15,     6,     7,     8,     9,
      10,    15,    68,    69,    88,    19,    11,    12,    74,     4,
      18,    19,     6,     7,     8,     9,    10,    22,    41,    29,
      41,    57,    41,     3,     0,    42,    47,   149,    47,    50,
      51,    50,    51,    43,    55,    29,    56,    58,    56,   123,
     124,    36,   135,   136,   137,   138,     5,    15,     4,    43,
      15,   117,    20,   119,    19,    18,    19,    16,    17,    13,
      14,    52,   214,     4,   216,   217,   102,   234,    20,    23,
      24,     4,     4,   199,    57,   141,    59,    35,     1,     5,
     202,     4,   249,    42,     6,     7,     8,     9,    10,    12,
      18,    19,   259,    16,   160,    36,   162,    15,   140,    60,
      41,    19,     6,   255,   256,    46,    47,    29,   230,    41,
      51,     4,   148,    54,    46,    47,    18,    19,    41,    51,
     246,    44,    54,    46,    47,    48,    56,     1,    51,   251,
       4,    54,     4,     6,     7,     8,     9,    10,    12,     4,
       6,    20,    16,     6,   210,     4,   188,    12,   132,   133,
     134,    16,    41,    41,   220,   221,    29,    46,    47,    16,
      18,    34,    51,   199,   200,    54,    20,    41,     1,   206,
      44,     4,    46,    47,    48,    20,    41,    51,     4,    44,
      54,    46,    47,    48,    16,    16,    51,    17,    41,    54,
       5,     5,     1,     5,    27,     4,    42,    30,   234,     5,
      33,    20,    35,    36,    37,     4,    39,    40,    41,     4,
     246,     4,    21,   249,    17,    20,    49,     1,    27,    20,
       4,    30,     4,   259,    33,     5,    35,     5,    37,     5,
      39,    40,    41,    20,     1,     5,     5,     4,    17,    16,
      49,    32,     5,    27,    18,    18,    30,    41,   159,    33,
      47,    35,    18,    37,    43,    39,    40,    41,    20,    51,
      27,    20,    20,    30,    25,    49,    33,    20,    35,    20,
      37,   149,    39,    40,     6,     7,     8,     9,    10,     3,
      24,    41,    49,    37,     6,     7,     8,     9,    10,   157,
       6,     7,     8,     9,    10,    -1,    28,    29,     6,     7,
       8,     9,    10,   251,    61,   206,    38,    29,   188,    -1,
      -1,    -1,    34,    29,    -1,    -1,    87,    -1,    34,    -1,
      -1,    29,    -1,    31,     6,     7,     8,     9,    10,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    11,    12,
      13,    14,    29,   125,   126,   127,   128,   129,   130,    22,
      23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    63,    64,     4,     0,    52,    65,    67,    68,
      20,     4,    62,    69,     5,    35,    92,    93,    60,    71,
       6,    62,    94,     4,    72,    73,    56,    81,    41,    46,
      47,    51,    54,    70,     6,     1,     4,    27,    30,    33,
      36,    37,    39,    40,    41,    49,    93,    95,    96,    97,
      98,    99,   101,   102,   103,   104,   107,     6,    73,     4,
      80,    82,    83,    84,    20,    70,     5,    16,    17,    42,
      94,     1,     4,    12,    16,    44,    48,    62,    70,   109,
     110,   111,   112,   109,   109,     4,    41,    18,    16,    20,
      12,    41,    47,    50,    51,    55,    58,    62,    74,    75,
      76,    77,    18,    19,    83,    57,    59,    85,    86,    87,
      88,    20,     4,   108,   109,   109,   109,    21,     5,    42,
     112,   109,   112,    16,    16,     6,     7,     8,     9,    10,
      29,    31,    11,    12,    22,    13,    14,    23,    24,    34,
      25,    17,    96,   108,    41,     5,     5,     5,    42,    78,
      79,    80,     5,    20,    74,     4,     4,     4,    20,    20,
      17,    15,    19,    43,   109,     4,   109,    15,   108,   108,
       1,   110,   110,   110,   110,   110,   110,    95,   111,   111,
     111,   112,   112,   112,   112,    95,     4,    70,   105,   106,
     109,    15,     5,     5,     5,     5,    75,    36,    79,    18,
       5,    20,    16,    89,    89,    66,    67,    66,   109,   109,
      17,    43,    15,    15,    32,   100,    18,    18,    36,   106,
      28,    38,     5,    41,    47,    51,    43,    74,    62,    15,
      56,    80,    90,    91,    18,    20,    92,    20,   109,    95,
      95,    95,   109,   109,    12,    41,    25,    20,    80,    18,
      15,    20,    75,    20,    20,    34,    34,    41,    74,    18,
      75,    91,    95,    95,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    64,    64,    65,    66,    67,    68,
      68,    69,    69,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    78,    78,    79,    80,
      80,    81,    81,    82,    82,    83,    84,    84,    84,    85,
      86,    87,    88,    89,    89,    89,    90,    90,    91,    91,
      92,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    98,    99,   100,   100,   101,   102,   103,   103,
     104,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     0,     2,     2,     4,     2,
       0,     5,     4,     1,     1,     1,     1,     1,     2,     0,
       2,     1,     4,     1,     1,     1,     1,     1,     4,     4,
       4,     5,     6,     4,     6,     3,     2,     1,     4,     3,
       1,     2,     0,     2,     1,     4,     2,     2,     0,     4,
       5,     4,     3,     3,     2,     0,     3,     1,     4,     3,
       1,     3,     3,     0,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     1,
       4,     1,     4,     5,     2,     0,     4,     4,     8,     8,
       5,     2,     1,     4,     4,     2,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     1,     4,     1,     4,
       1,     3,     2,     2,     4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 88 "pascal.y" /* yacc.c:1646  */
    { (yyval.debug) = (yyvsp[0].debug); }
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "pascal.y" /* yacc.c:1646  */
    { ast_root = (yyvsp[-1].ast_Program); }
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "pascal.y" /* yacc.c:1646  */
    {}
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "pascal.y" /* yacc.c:1646  */
    {}
#line 1545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Program) = (yyvsp[-1].ast_Program); (yyval.ast_Program)->routine_body = (yyvsp[0].ast_StatementList); /*$$->print_node("", true, true);*/ }
#line 1551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Program) = (yyvsp[-1].ast_Program); (yyval.ast_Program)->routine_body = (yyvsp[0].ast_StatementList); }
#line 1557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 103 "pascal.y" /* yacc.c:1646  */
    { 
		(yyval.ast_Program) = new ast::Program(nullptr, (yyvsp[-3].ast_ConstDeclList), (yyvsp[-2].ast_TypeDeclList), (yyvsp[-1].ast_VarDeclList), (yyvsp[0].ast_RoutineList), nullptr); 
	}
#line 1565 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstDeclList) = (yyvsp[0].ast_ConstDeclList); }
#line 1571 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 113 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstDeclList) = new ast::ConstDeclList(); }
#line 1577 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstDeclList) = (yyvsp[-4].ast_ConstDeclList); (yyvsp[-4].ast_ConstDeclList)->push_back(new ast::ConstDecl(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ConstValue))); }
#line 1583 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstDeclList) = new ast::ConstDeclList(); (yyval.ast_ConstDeclList)->push_back(new ast::ConstDecl(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ConstValue))); }
#line 1589 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstValue) = new ast::IntegerType(atoi((yyvsp[0].debug))); (yyval.ast_ConstValue)->debug = (yyvsp[0].debug); }
#line 1595 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 123 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstValue) = new ast::RealType(atof((yyvsp[0].debug))); (yyval.ast_ConstValue)->debug = (yyvsp[0].debug); }
#line 1601 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 124 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstValue) = new ast::CharType((yyvsp[0].debug)); (yyval.ast_ConstValue)->debug = (yyvsp[0].debug); }
#line 1607 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 126 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstValue) = new ast::BooleanType((yyvsp[0].debug)); }
#line 1613 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 127 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ConstValue) = new ast::IntegerType(32767); }
#line 1619 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDeclList) = (yyvsp[0].ast_TypeDeclList); }
#line 1625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDeclList) = new ast::TypeDeclList(); }
#line 1631 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDeclList) = (yyvsp[-1].ast_TypeDeclList); (yyvsp[-1].ast_TypeDeclList)->push_back((yyvsp[0].ast_TypeConst)); }
#line 1637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 138 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDeclList) = new ast::TypeDeclList(); (yyval.ast_TypeDeclList)->push_back((yyvsp[0].ast_TypeConst)); }
#line 1643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeConst) = new ast::TypeConst(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_TypeDecl));  }
#line 1649 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = (yyvsp[0].ast_TypeDecl); DBMSG("array here"); }
#line 1655 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = (yyvsp[0].ast_TypeDecl); DBMSG("arary 1");}
#line 1661 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = (yyvsp[0].ast_TypeDecl); }
#line 1667 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl((yyvsp[0].debug)); }
#line 1673 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 153 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(std::string((yyvsp[0].debug))); DBMSG("parse name " << (yyvsp[0].debug));}
#line 1679 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 155 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(atoi((yyvsp[-3].debug)), atoi((yyvsp[0].debug)))); DBMSG("reach here, + to +");}
#line 1685 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 156 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(*(yyvsp[-3].debug),*(yyvsp[0].debug))); }
#line 1691 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 157 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(std::string((yyvsp[-3].debug)) == "true" ? 1 : 0, std::string((yyvsp[0].debug)) == "true" ? 1 : 0)); }
#line 1697 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(-atoi((yyvsp[-4].debug)), atoi((yyvsp[0].debug)))); }
#line 1703 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(-atoi((yyvsp[-5].debug)), -atoi((yyvsp[-4].debug)))); }
#line 1709 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RangeType(std::string((yyvsp[-3].debug)), std::string((yyvsp[0].debug)))); }
#line 1715 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::ArrayType((yyvsp[-3].ast_TypeDecl), (yyvsp[0].ast_TypeDecl))); std::cout << "finished here" << std::endl;}
#line 1721 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 168 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_TypeDecl) = new ast::TypeDecl(new ast::RecordType((yyvsp[-1].ast_FieldDeclList))); }
#line 1727 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 172 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_FieldDeclList) = (yyvsp[-1].ast_FieldDeclList); (yyvsp[-1].ast_FieldDeclList)->insert((yyvsp[-1].ast_FieldDeclList)->end(), (yyvsp[0].ast_FieldDeclList)->begin(), (yyvsp[0].ast_FieldDeclList)->end()); }
#line 1733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_FieldDeclList) = (yyvsp[0].ast_FieldDeclList); }
#line 1739 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_FieldDeclList) = new ast::FieldDeclList(); for(auto name : *((yyvsp[-3].ast_NameList))) (yyval.ast_FieldDeclList)->push_back(new ast::FieldDecl(new ast::Identifier(name),(yyvsp[-1].ast_TypeDecl))); }
#line 1745 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 181 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_NameList) = (yyvsp[-2].ast_NameList); (yyval.ast_NameList)->push_back((yyvsp[0].debug)); }
#line 1751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 182 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_NameList) = new ast::NameList(); (yyval.ast_NameList)->push_back((yyvsp[0].debug)); }
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[0].ast_VarDeclList); }
#line 1763 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 187 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); }
#line 1769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[-1].ast_VarDeclList); (yyvsp[-1].ast_VarDeclList)->insert((yyvsp[-1].ast_VarDeclList)->end(), (yyvsp[0].ast_VarDeclList)->begin(), (yyvsp[0].ast_VarDeclList)->end()); }
#line 1775 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[0].ast_VarDeclList); }
#line 1781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 196 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); for(auto name : *((yyvsp[-3].ast_NameList))) (yyval.ast_VarDeclList)->push_back(new ast::VarDecl(new ast::Identifier(name), (yyvsp[-1].ast_TypeDecl))); }
#line 1787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 200 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_RoutineList) = (yyvsp[-1].ast_RoutineList); (yyvsp[-1].ast_RoutineList)->push_back((yyvsp[0].ast_Routine)); }
#line 1793 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 201 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_RoutineList) = (yyvsp[-1].ast_RoutineList); (yyvsp[-1].ast_RoutineList)->push_back((yyvsp[0].ast_Routine)); }
#line 1799 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 202 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_RoutineList) = new ast::RoutineList(); }
#line 1805 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Routine) = new ast::Routine((yyvsp[-3].ast_Routine), (yyvsp[-1].ast_Program)); }
#line 1811 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Routine) = new ast::Routine(ast::Routine::RoutineType::function, new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-2].ast_VarDeclList), (yyvsp[0].ast_TypeDecl)); }
#line 1817 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 214 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Routine) = new ast::Routine((yyvsp[-3].ast_Routine), (yyvsp[-1].ast_Program)); }
#line 1823 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Routine) = new ast::Routine(ast::Routine::RoutineType::procedure, new ast::Identifier((yyvsp[-1].debug)), (yyvsp[0].ast_VarDeclList), nullptr); }
#line 1829 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[-1].ast_VarDeclList); }
#line 1835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 223 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); }
#line 1841 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 224 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); }
#line 1847 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 228 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[-2].ast_VarDeclList); (yyvsp[-2].ast_VarDeclList)->insert((yyvsp[-2].ast_VarDeclList)->end(), (yyvsp[0].ast_VarDeclList)->begin(), (yyvsp[0].ast_VarDeclList)->end()); }
#line 1853 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 229 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = (yyvsp[0].ast_VarDeclList); }
#line 1859 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 233 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); for(auto name: *((yyvsp[-2].ast_NameList))) (yyval.ast_VarDeclList)->push_back(new ast::VarDecl(new ast::Identifier(name), (yyvsp[0].ast_TypeDecl))); }
#line 1865 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_VarDeclList) = new ast::VarDeclList(); for(auto name: *((yyvsp[-2].ast_NameList))) (yyval.ast_VarDeclList)->push_back(new ast::VarDecl(new ast::Identifier(name), (yyvsp[0].ast_TypeDecl))); }
#line 1871 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_StatementList) = (yyvsp[0].ast_StatementList); }
#line 1877 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 242 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_StatementList) = (yyvsp[-1].ast_StatementList); }
#line 1883 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 246 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_StatementList) = (yyvsp[-2].ast_StatementList);(yyval.ast_StatementList)->getlist()->push_back((yyvsp[-1].ast_Statement));}
#line 1889 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 247 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_StatementList) = new ast::StatementList(); }
#line 1895 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 251 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (yyvsp[0].ast_Statement); }
#line 1901 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 252 "pascal.y" /* yacc.c:1646  */
    { 
		CodeGenContext::labels.push_back(atoi((yyvsp[-2].debug)));
		(yyval.ast_Statement) = new ast::LabelStmt(atoi((yyvsp[-2].debug)),(yyvsp[0].ast_Statement));
	}
#line 1910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 259 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_AssignmentStmt); }
#line 1916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 260 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *) (yyvsp[0].ast_Statement); }
#line 1922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 261 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (yyvsp[0].ast_StatementList);}
#line 1928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 262 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 263 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 264 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 265 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1952 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 266 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1958 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 267 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement *)(yyvsp[0].ast_Statement);}
#line 1964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 272 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_AssignmentStmt) = new ast::AssignmentStmt(new ast::Identifier((yyvsp[-2].debug)), (yyvsp[0].ast_Expression)); }
#line 1970 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 273 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_AssignmentStmt) = new ast::AssignmentStmt(new ast::ArrayRef(new ast::Identifier((yyvsp[-5].debug)), (yyvsp[-3].ast_Expression)), (yyvsp[0].ast_Expression)); }
#line 1976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 274 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_AssignmentStmt) = new ast::AssignmentStmt(new ast::RecordRef(new ast::Identifier((yyvsp[-4].debug)), new ast::Identifier((yyvsp[-2].debug))), (yyvsp[0].ast_Expression)); }
#line 1982 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 278 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::ProcCall(new ast::Identifier((yyvsp[0].debug))); }
#line 1988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 279 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::ProcCall(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ExpressionList)); }
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 280 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::SysProcCall(new ast::Identifier((yyvsp[0].debug))); }
#line 2000 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 281 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::SysProcCall(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ExpressionList)); }
#line 2006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 286 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement*)new ast::IfStmt((yyvsp[-3].ast_Expression),(yyvsp[-1].ast_Statement),(yyvsp[0].ast_Statement));}
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 290 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (yyvsp[0].ast_Statement);}
#line 2018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 291 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = nullptr;}
#line 2024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 295 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement*)new ast::RepeatStmt((yyvsp[0].ast_Expression),(yyvsp[-2].ast_StatementList));}
#line 2030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 298 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = (ast::Statement*)new ast::WhileStmt((yyvsp[-2].ast_Expression),(yyvsp[0].ast_Statement));}
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 301 "pascal.y" /* yacc.c:1646  */
    {
		(yyval.ast_Statement) = new ast::ForStmt(new ast::Identifier((yyvsp[-6].debug)), (yyvsp[-4].ast_Expression),(yyvsp[-2].ast_Expression),1,(yyvsp[0].ast_Statement)); 
	}
#line 2044 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 304 "pascal.y" /* yacc.c:1646  */
    { 
		(yyval.ast_Statement) = new ast::ForStmt(new ast::Identifier((yyvsp[-6].debug)), (yyvsp[-4].ast_Expression),(yyvsp[-2].ast_Expression),0,(yyvsp[0].ast_Statement)); 
	}
#line 2052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::SwitchStmt((yyvsp[-3].ast_Expression),(yyvsp[-1].ast_CaseList));}
#line 2058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 312 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_CaseList)->push_back((yyvsp[0].ast_CaseStmt));}
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 313 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_CaseList)= new ast::CaseList;(yyval.ast_CaseList)->push_back((yyvsp[0].ast_CaseStmt));}
#line 2070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 316 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_CaseStmt) = new ast::CaseStmt((yyvsp[-3].ast_ConstValue),(yyvsp[-1].ast_Statement));}
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 317 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_CaseStmt) = new ast::CaseStmt(new ast::Identifier((yyvsp[-3].debug)),(yyvsp[-1].ast_Statement));}
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 320 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Statement) = new ast::GotoStmt(atoi((yyvsp[0].debug)));}
#line 2088 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 324 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ExpressionList) = (yyvsp[-2].ast_ExpressionList); (yyvsp[-2].ast_ExpressionList)->push_back((yyvsp[0].ast_Expression)); }
#line 2094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 325 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_ExpressionList) = new ast::ExpressionList(); (yyval.ast_ExpressionList)->push_back((yyvsp[0].ast_Expression)); }
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 329 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = (yyvsp[0].ast_Expression); }
#line 2106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 330 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::ge, (yyvsp[0].ast_Expression));}
#line 2112 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 331 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::gt, (yyvsp[0].ast_Expression));}
#line 2118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 332 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::le, (yyvsp[0].ast_Expression));}
#line 2124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 333 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::lt, (yyvsp[0].ast_Expression));}
#line 2130 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 334 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::eq, (yyvsp[0].ast_Expression));}
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 335 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::ne, (yyvsp[0].ast_Expression));}
#line 2142 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 339 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::plus, (yyvsp[0].ast_Expression)); }
#line 2148 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 340 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::minus, (yyvsp[0].ast_Expression));}
#line 2154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 341 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::bit_or, (yyvsp[0].ast_Expression));}
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 342 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = (yyvsp[0].ast_Expression); }
#line 2166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 347 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = (yyvsp[0].ast_Expression); }
#line 2172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 348 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::mul, (yyvsp[0].ast_Expression));}
#line 2178 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 349 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::div, (yyvsp[0].ast_Expression));}
#line 2184 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 350 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::mod, (yyvsp[0].ast_Expression));}
#line 2190 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 351 "pascal.y" /* yacc.c:1646  */
    {(yyval.ast_Expression) = new ast::BinaryOperator((yyvsp[-2].ast_Expression), ast::BinaryOperator::OpType::bit_and, (yyvsp[0].ast_Expression));}
#line 2196 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 355 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::Identifier((yyvsp[0].debug)); }
#line 2202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 356 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::FuncCall(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ExpressionList)); }
#line 2208 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 357 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::SysFuncCall(new ast::Identifier((yyvsp[0].debug))); }
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 358 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::SysFuncCall(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_ExpressionList)); }
#line 2220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 359 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = (yyvsp[0].ast_ConstValue); }
#line 2226 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 360 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = (yyvsp[-1].ast_Expression); }
#line 2232 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 361 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::BinaryOperator(new ast::BooleanType("true"), ast::BinaryOperator::OpType::bit_xor, (yyvsp[0].ast_Expression));}
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 362 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::BinaryOperator(new ast::IntegerType(0), ast::BinaryOperator::OpType::minus, (yyvsp[0].ast_Expression));}
#line 2244 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 363 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::ArrayRef(new ast::Identifier((yyvsp[-3].debug)), (yyvsp[-1].ast_Expression)); }
#line 2250 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 364 "pascal.y" /* yacc.c:1646  */
    { (yyval.ast_Expression) = new ast::RecordRef(new ast::Identifier((yyvsp[-2].debug)), new ast::Identifier((yyvsp[0].debug))); }
#line 2256 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2260 "parser.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 366 "pascal.y" /* yacc.c:1906  */



