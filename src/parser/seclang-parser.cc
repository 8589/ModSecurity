// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 348 "seclang-parser.yy" // lalr1.cc:413

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 96: // "Accuracy"
      case 97: // "Allow"
      case 98: // "Append"
      case 99: // "AuditLog"
      case 100: // "Block"
      case 101: // "Capture"
      case 102: // "Chain"
      case 103: // "ACTION_CTL_AUDIT_ENGINE"
      case 104: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 105: // "ACTION_CTL_BDY_JSON"
      case 106: // "ACTION_CTL_BDY_XML"
      case 107: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 108: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 109: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 110: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 111: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 112: // "Deny"
      case 113: // "DeprecateVar"
      case 114: // "Drop"
      case 115: // "Exec"
      case 116: // "ExpireVar"
      case 117: // "Id"
      case 118: // "InitCol"
      case 119: // "Log"
      case 120: // "LogData"
      case 121: // "Maturity"
      case 122: // "Msg"
      case 123: // "MultiMatch"
      case 124: // "NoAuditLog"
      case 125: // "NoLog"
      case 126: // "Pass"
      case 127: // "Pause"
      case 128: // "Phase"
      case 129: // "Prepend"
      case 130: // "Proxy"
      case 131: // "Redirect"
      case 132: // "Rev"
      case 133: // "SanatiseArg"
      case 134: // "SanatiseMatched"
      case 135: // "SanatiseMatchedBytes"
      case 136: // "SanatiseRequestHeader"
      case 137: // "SanatiseResponseHeader"
      case 138: // "SetEnv"
      case 139: // "SetRsc"
      case 140: // "SetSid"
      case 141: // "SetUID"
      case 142: // "Severity"
      case 143: // "Skip"
      case 144: // "SkipAfter"
      case 145: // "Status"
      case 146: // "Tag"
      case 147: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 148: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 149: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 151: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 152: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 153: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 154: // "ACTION_TRANSFORMATION_LENGTH"
      case 155: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 156: // "ACTION_TRANSFORMATION_MD5"
      case 157: // "ACTION_TRANSFORMATION_NONE"
      case 158: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 159: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 160: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 162: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 165: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 167: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 168: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 169: // "ACTION_TRANSFORMATION_SHA1"
      case 170: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 171: // "ACTION_TRANSFORMATION_TRIM"
      case 172: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 173: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 174: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 175: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 176: // "Ver"
      case 177: // "xmlns"
      case 178: // "CONFIG_COMPONENT_SIG"
      case 179: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 180: // "CONFIG_SEC_WEB_APP_ID"
      case 181: // "CONFIG_SEC_SERVER_SIG"
      case 182: // "CONFIG_DIR_AUDIT_DIR"
      case 183: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 184: // "CONFIG_DIR_AUDIT_ENG"
      case 185: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 186: // "CONFIG_DIR_AUDIT_LOG"
      case 187: // "CONFIG_DIR_AUDIT_LOG2"
      case 188: // "CONFIG_DIR_AUDIT_LOG_P"
      case 189: // "CONFIG_DIR_AUDIT_STS"
      case 190: // "CONFIG_DIR_AUDIT_TPE"
      case 191: // "CONFIG_DIR_DEBUG_LOG"
      case 192: // "CONFIG_DIR_DEBUG_LVL"
      case 193: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 194: // "CONFIG_DIR_GEO_DB"
      case 195: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 196: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 197: // "CONFIG_DIR_REQ_BODY"
      case 198: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 199: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 200: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 201: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 202: // "CONFIG_DIR_RES_BODY"
      case 203: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 204: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 205: // "CONFIG_DIR_RULE_ENG"
      case 206: // "CONFIG_DIR_SEC_ACTION"
      case 207: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 208: // "CONFIG_DIR_SEC_MARKER"
      case 209: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 210: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 211: // "CONFIG_SEC_HTTP_BLKEY"
      case 212: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 213: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 214: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 215: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 216: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 217: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 218: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 219: // "CONFIG_UPLOAD_DIR"
      case 220: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 221: // "CONFIG_UPLOAD_FILE_MODE"
      case 222: // "CONFIG_VALUE_ABORT"
      case 223: // "CONFIG_VALUE_DETC"
      case 224: // "CONFIG_VALUE_HTTPS"
      case 225: // "CONFIG_VALUE_OFF"
      case 226: // "CONFIG_VALUE_ON"
      case 227: // "CONFIG_VALUE_PARALLEL"
      case 228: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 229: // "CONFIG_VALUE_REJECT"
      case 230: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 231: // "CONFIG_VALUE_SERIAL"
      case 232: // "CONFIG_VALUE_WARN"
      case 233: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 234: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 235: // "CONGIG_DIR_SEC_ARG_SEP"
      case 236: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 237: // "CONGIG_DIR_SEC_DATA_DIR"
      case 238: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 239: // "CONGIG_DIR_SEC_TMP_DIR"
      case 240: // "DIRECTIVE"
      case 241: // "DIRECTIVE_SECRULESCRIPT"
      case 242: // "FREE_TEXT"
      case 243: // "OPERATOR"
      case 244: // "OPERATOR_BEGINS_WITH"
      case 245: // "OPERATOR_CONTAINS"
      case 246: // "OPERATOR_CONTAINS_WORD"
      case 247: // "OPERATOR_DETECT_SQLI"
      case 248: // "OPERATOR_DETECT_XSS"
      case 249: // "OPERATOR_ENDS_WITH"
      case 250: // "OPERATOR_EQ"
      case 251: // "OPERATOR_FUZZY_HASH"
      case 252: // "OPERATOR_GE"
      case 253: // "OPERATOR_GEOLOOKUP"
      case 254: // "OPERATOR_GSB_LOOKUP"
      case 255: // "OPERATOR_GT"
      case 256: // "OPERATOR_INSPECT_FILE"
      case 257: // "OPERATOR_IP_MATCH"
      case 258: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 259: // "OPERATOR_LE"
      case 260: // "OPERATOR_LT"
      case 261: // "OPERATOR_PM"
      case 262: // "OPERATOR_PM_FROM_FILE"
      case 263: // "OPERATOR_RBL"
      case 264: // "OPERATOR_RSUB"
      case 265: // "OPERATOR_RX"
      case 266: // "Operator RX (content only)"
      case 267: // "OPERATOR_STR_EQ"
      case 268: // "OPERATOR_STR_MATCH"
      case 269: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 270: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 271: // "OPERATOR_VALIDATE_DTD"
      case 272: // "OPERATOR_VALIDATE_HASH"
      case 273: // "OPERATOR_VALIDATE_SCHEMA"
      case 274: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 275: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 276: // "OPERATOR_VERIFY_CC"
      case 277: // "OPERATOR_VERIFY_CPF"
      case 278: // "OPERATOR_VERIFY_SSN"
      case 279: // "OPERATOR_WITHIN"
      case 280: // "OP_QUOTE"
      case 281: // "QUOTATION_MARK"
      case 282: // "RUN_TIME_VAR_BLD"
      case 283: // "RUN_TIME_VAR_DUR"
      case 284: // "RUN_TIME_VAR_HSV"
      case 285: // "RUN_TIME_VAR_REMOTE_USER"
      case 286: // "RUN_TIME_VAR_TIME"
      case 287: // "RUN_TIME_VAR_TIME_DAY"
      case 288: // "RUN_TIME_VAR_TIME_EPOCH"
      case 289: // "RUN_TIME_VAR_TIME_HOUR"
      case 290: // "RUN_TIME_VAR_TIME_MIN"
      case 291: // "RUN_TIME_VAR_TIME_MON"
      case 292: // "RUN_TIME_VAR_TIME_SEC"
      case 293: // "RUN_TIME_VAR_TIME_WDAY"
      case 294: // "RUN_TIME_VAR_TIME_YEAR"
      case 295: // "VARIABLE"
      case 296: // "Dictionary element"
      case 297: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 304: // op
      case 305: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 309: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 310: // act
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 307: // variables
      case 308: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 302: // actions
      case 303: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 96: // "Accuracy"
      case 97: // "Allow"
      case 98: // "Append"
      case 99: // "AuditLog"
      case 100: // "Block"
      case 101: // "Capture"
      case 102: // "Chain"
      case 103: // "ACTION_CTL_AUDIT_ENGINE"
      case 104: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 105: // "ACTION_CTL_BDY_JSON"
      case 106: // "ACTION_CTL_BDY_XML"
      case 107: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 108: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 109: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 110: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 111: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 112: // "Deny"
      case 113: // "DeprecateVar"
      case 114: // "Drop"
      case 115: // "Exec"
      case 116: // "ExpireVar"
      case 117: // "Id"
      case 118: // "InitCol"
      case 119: // "Log"
      case 120: // "LogData"
      case 121: // "Maturity"
      case 122: // "Msg"
      case 123: // "MultiMatch"
      case 124: // "NoAuditLog"
      case 125: // "NoLog"
      case 126: // "Pass"
      case 127: // "Pause"
      case 128: // "Phase"
      case 129: // "Prepend"
      case 130: // "Proxy"
      case 131: // "Redirect"
      case 132: // "Rev"
      case 133: // "SanatiseArg"
      case 134: // "SanatiseMatched"
      case 135: // "SanatiseMatchedBytes"
      case 136: // "SanatiseRequestHeader"
      case 137: // "SanatiseResponseHeader"
      case 138: // "SetEnv"
      case 139: // "SetRsc"
      case 140: // "SetSid"
      case 141: // "SetUID"
      case 142: // "Severity"
      case 143: // "Skip"
      case 144: // "SkipAfter"
      case 145: // "Status"
      case 146: // "Tag"
      case 147: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 148: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 149: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 151: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 152: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 153: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 154: // "ACTION_TRANSFORMATION_LENGTH"
      case 155: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 156: // "ACTION_TRANSFORMATION_MD5"
      case 157: // "ACTION_TRANSFORMATION_NONE"
      case 158: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 159: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 160: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 162: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 165: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 167: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 168: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 169: // "ACTION_TRANSFORMATION_SHA1"
      case 170: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 171: // "ACTION_TRANSFORMATION_TRIM"
      case 172: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 173: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 174: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 175: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 176: // "Ver"
      case 177: // "xmlns"
      case 178: // "CONFIG_COMPONENT_SIG"
      case 179: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 180: // "CONFIG_SEC_WEB_APP_ID"
      case 181: // "CONFIG_SEC_SERVER_SIG"
      case 182: // "CONFIG_DIR_AUDIT_DIR"
      case 183: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 184: // "CONFIG_DIR_AUDIT_ENG"
      case 185: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 186: // "CONFIG_DIR_AUDIT_LOG"
      case 187: // "CONFIG_DIR_AUDIT_LOG2"
      case 188: // "CONFIG_DIR_AUDIT_LOG_P"
      case 189: // "CONFIG_DIR_AUDIT_STS"
      case 190: // "CONFIG_DIR_AUDIT_TPE"
      case 191: // "CONFIG_DIR_DEBUG_LOG"
      case 192: // "CONFIG_DIR_DEBUG_LVL"
      case 193: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 194: // "CONFIG_DIR_GEO_DB"
      case 195: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 196: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 197: // "CONFIG_DIR_REQ_BODY"
      case 198: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 199: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 200: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 201: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 202: // "CONFIG_DIR_RES_BODY"
      case 203: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 204: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 205: // "CONFIG_DIR_RULE_ENG"
      case 206: // "CONFIG_DIR_SEC_ACTION"
      case 207: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 208: // "CONFIG_DIR_SEC_MARKER"
      case 209: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 210: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 211: // "CONFIG_SEC_HTTP_BLKEY"
      case 212: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 213: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 214: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 215: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 216: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 217: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 218: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 219: // "CONFIG_UPLOAD_DIR"
      case 220: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 221: // "CONFIG_UPLOAD_FILE_MODE"
      case 222: // "CONFIG_VALUE_ABORT"
      case 223: // "CONFIG_VALUE_DETC"
      case 224: // "CONFIG_VALUE_HTTPS"
      case 225: // "CONFIG_VALUE_OFF"
      case 226: // "CONFIG_VALUE_ON"
      case 227: // "CONFIG_VALUE_PARALLEL"
      case 228: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 229: // "CONFIG_VALUE_REJECT"
      case 230: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 231: // "CONFIG_VALUE_SERIAL"
      case 232: // "CONFIG_VALUE_WARN"
      case 233: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 234: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 235: // "CONGIG_DIR_SEC_ARG_SEP"
      case 236: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 237: // "CONGIG_DIR_SEC_DATA_DIR"
      case 238: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 239: // "CONGIG_DIR_SEC_TMP_DIR"
      case 240: // "DIRECTIVE"
      case 241: // "DIRECTIVE_SECRULESCRIPT"
      case 242: // "FREE_TEXT"
      case 243: // "OPERATOR"
      case 244: // "OPERATOR_BEGINS_WITH"
      case 245: // "OPERATOR_CONTAINS"
      case 246: // "OPERATOR_CONTAINS_WORD"
      case 247: // "OPERATOR_DETECT_SQLI"
      case 248: // "OPERATOR_DETECT_XSS"
      case 249: // "OPERATOR_ENDS_WITH"
      case 250: // "OPERATOR_EQ"
      case 251: // "OPERATOR_FUZZY_HASH"
      case 252: // "OPERATOR_GE"
      case 253: // "OPERATOR_GEOLOOKUP"
      case 254: // "OPERATOR_GSB_LOOKUP"
      case 255: // "OPERATOR_GT"
      case 256: // "OPERATOR_INSPECT_FILE"
      case 257: // "OPERATOR_IP_MATCH"
      case 258: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 259: // "OPERATOR_LE"
      case 260: // "OPERATOR_LT"
      case 261: // "OPERATOR_PM"
      case 262: // "OPERATOR_PM_FROM_FILE"
      case 263: // "OPERATOR_RBL"
      case 264: // "OPERATOR_RSUB"
      case 265: // "OPERATOR_RX"
      case 266: // "Operator RX (content only)"
      case 267: // "OPERATOR_STR_EQ"
      case 268: // "OPERATOR_STR_MATCH"
      case 269: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 270: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 271: // "OPERATOR_VALIDATE_DTD"
      case 272: // "OPERATOR_VALIDATE_HASH"
      case 273: // "OPERATOR_VALIDATE_SCHEMA"
      case 274: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 275: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 276: // "OPERATOR_VERIFY_CC"
      case 277: // "OPERATOR_VERIFY_CPF"
      case 278: // "OPERATOR_VERIFY_SSN"
      case 279: // "OPERATOR_WITHIN"
      case 280: // "OP_QUOTE"
      case 281: // "QUOTATION_MARK"
      case 282: // "RUN_TIME_VAR_BLD"
      case 283: // "RUN_TIME_VAR_DUR"
      case 284: // "RUN_TIME_VAR_HSV"
      case 285: // "RUN_TIME_VAR_REMOTE_USER"
      case 286: // "RUN_TIME_VAR_TIME"
      case 287: // "RUN_TIME_VAR_TIME_DAY"
      case 288: // "RUN_TIME_VAR_TIME_EPOCH"
      case 289: // "RUN_TIME_VAR_TIME_HOUR"
      case 290: // "RUN_TIME_VAR_TIME_MIN"
      case 291: // "RUN_TIME_VAR_TIME_MON"
      case 292: // "RUN_TIME_VAR_TIME_SEC"
      case 293: // "RUN_TIME_VAR_TIME_WDAY"
      case 294: // "RUN_TIME_VAR_TIME_YEAR"
      case 295: // "VARIABLE"
      case 296: // "Dictionary element"
      case 297: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 304: // op
      case 305: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 309: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 310: // act
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 307: // variables
      case 308: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 302: // actions
      case 303: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 341 "/home/zimmerle/core-trustwave/ModSecurity/src/parser/seclang-parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 873 "seclang-parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 96: // "Accuracy"
      case 97: // "Allow"
      case 98: // "Append"
      case 99: // "AuditLog"
      case 100: // "Block"
      case 101: // "Capture"
      case 102: // "Chain"
      case 103: // "ACTION_CTL_AUDIT_ENGINE"
      case 104: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 105: // "ACTION_CTL_BDY_JSON"
      case 106: // "ACTION_CTL_BDY_XML"
      case 107: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 108: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 109: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 110: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 111: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 112: // "Deny"
      case 113: // "DeprecateVar"
      case 114: // "Drop"
      case 115: // "Exec"
      case 116: // "ExpireVar"
      case 117: // "Id"
      case 118: // "InitCol"
      case 119: // "Log"
      case 120: // "LogData"
      case 121: // "Maturity"
      case 122: // "Msg"
      case 123: // "MultiMatch"
      case 124: // "NoAuditLog"
      case 125: // "NoLog"
      case 126: // "Pass"
      case 127: // "Pause"
      case 128: // "Phase"
      case 129: // "Prepend"
      case 130: // "Proxy"
      case 131: // "Redirect"
      case 132: // "Rev"
      case 133: // "SanatiseArg"
      case 134: // "SanatiseMatched"
      case 135: // "SanatiseMatchedBytes"
      case 136: // "SanatiseRequestHeader"
      case 137: // "SanatiseResponseHeader"
      case 138: // "SetEnv"
      case 139: // "SetRsc"
      case 140: // "SetSid"
      case 141: // "SetUID"
      case 142: // "Severity"
      case 143: // "Skip"
      case 144: // "SkipAfter"
      case 145: // "Status"
      case 146: // "Tag"
      case 147: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 148: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 149: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 151: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 152: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 153: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 154: // "ACTION_TRANSFORMATION_LENGTH"
      case 155: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 156: // "ACTION_TRANSFORMATION_MD5"
      case 157: // "ACTION_TRANSFORMATION_NONE"
      case 158: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 159: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 160: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 162: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 165: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 167: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 168: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 169: // "ACTION_TRANSFORMATION_SHA1"
      case 170: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 171: // "ACTION_TRANSFORMATION_TRIM"
      case 172: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 173: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 174: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 175: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 176: // "Ver"
      case 177: // "xmlns"
      case 178: // "CONFIG_COMPONENT_SIG"
      case 179: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 180: // "CONFIG_SEC_WEB_APP_ID"
      case 181: // "CONFIG_SEC_SERVER_SIG"
      case 182: // "CONFIG_DIR_AUDIT_DIR"
      case 183: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 184: // "CONFIG_DIR_AUDIT_ENG"
      case 185: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 186: // "CONFIG_DIR_AUDIT_LOG"
      case 187: // "CONFIG_DIR_AUDIT_LOG2"
      case 188: // "CONFIG_DIR_AUDIT_LOG_P"
      case 189: // "CONFIG_DIR_AUDIT_STS"
      case 190: // "CONFIG_DIR_AUDIT_TPE"
      case 191: // "CONFIG_DIR_DEBUG_LOG"
      case 192: // "CONFIG_DIR_DEBUG_LVL"
      case 193: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 194: // "CONFIG_DIR_GEO_DB"
      case 195: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 196: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 197: // "CONFIG_DIR_REQ_BODY"
      case 198: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 199: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 200: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 201: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 202: // "CONFIG_DIR_RES_BODY"
      case 203: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 204: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 205: // "CONFIG_DIR_RULE_ENG"
      case 206: // "CONFIG_DIR_SEC_ACTION"
      case 207: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 208: // "CONFIG_DIR_SEC_MARKER"
      case 209: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 210: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 211: // "CONFIG_SEC_HTTP_BLKEY"
      case 212: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 213: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 214: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 215: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 216: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 217: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 218: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 219: // "CONFIG_UPLOAD_DIR"
      case 220: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 221: // "CONFIG_UPLOAD_FILE_MODE"
      case 222: // "CONFIG_VALUE_ABORT"
      case 223: // "CONFIG_VALUE_DETC"
      case 224: // "CONFIG_VALUE_HTTPS"
      case 225: // "CONFIG_VALUE_OFF"
      case 226: // "CONFIG_VALUE_ON"
      case 227: // "CONFIG_VALUE_PARALLEL"
      case 228: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 229: // "CONFIG_VALUE_REJECT"
      case 230: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 231: // "CONFIG_VALUE_SERIAL"
      case 232: // "CONFIG_VALUE_WARN"
      case 233: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 234: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 235: // "CONGIG_DIR_SEC_ARG_SEP"
      case 236: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 237: // "CONGIG_DIR_SEC_DATA_DIR"
      case 238: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 239: // "CONGIG_DIR_SEC_TMP_DIR"
      case 240: // "DIRECTIVE"
      case 241: // "DIRECTIVE_SECRULESCRIPT"
      case 242: // "FREE_TEXT"
      case 243: // "OPERATOR"
      case 244: // "OPERATOR_BEGINS_WITH"
      case 245: // "OPERATOR_CONTAINS"
      case 246: // "OPERATOR_CONTAINS_WORD"
      case 247: // "OPERATOR_DETECT_SQLI"
      case 248: // "OPERATOR_DETECT_XSS"
      case 249: // "OPERATOR_ENDS_WITH"
      case 250: // "OPERATOR_EQ"
      case 251: // "OPERATOR_FUZZY_HASH"
      case 252: // "OPERATOR_GE"
      case 253: // "OPERATOR_GEOLOOKUP"
      case 254: // "OPERATOR_GSB_LOOKUP"
      case 255: // "OPERATOR_GT"
      case 256: // "OPERATOR_INSPECT_FILE"
      case 257: // "OPERATOR_IP_MATCH"
      case 258: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 259: // "OPERATOR_LE"
      case 260: // "OPERATOR_LT"
      case 261: // "OPERATOR_PM"
      case 262: // "OPERATOR_PM_FROM_FILE"
      case 263: // "OPERATOR_RBL"
      case 264: // "OPERATOR_RSUB"
      case 265: // "OPERATOR_RX"
      case 266: // "Operator RX (content only)"
      case 267: // "OPERATOR_STR_EQ"
      case 268: // "OPERATOR_STR_MATCH"
      case 269: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 270: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 271: // "OPERATOR_VALIDATE_DTD"
      case 272: // "OPERATOR_VALIDATE_HASH"
      case 273: // "OPERATOR_VALIDATE_SCHEMA"
      case 274: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 275: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 276: // "OPERATOR_VERIFY_CC"
      case 277: // "OPERATOR_VERIFY_CPF"
      case 278: // "OPERATOR_VERIFY_SSN"
      case 279: // "OPERATOR_WITHIN"
      case 280: // "OP_QUOTE"
      case 281: // "QUOTATION_MARK"
      case 282: // "RUN_TIME_VAR_BLD"
      case 283: // "RUN_TIME_VAR_DUR"
      case 284: // "RUN_TIME_VAR_HSV"
      case 285: // "RUN_TIME_VAR_REMOTE_USER"
      case 286: // "RUN_TIME_VAR_TIME"
      case 287: // "RUN_TIME_VAR_TIME_DAY"
      case 288: // "RUN_TIME_VAR_TIME_EPOCH"
      case 289: // "RUN_TIME_VAR_TIME_HOUR"
      case 290: // "RUN_TIME_VAR_TIME_MIN"
      case 291: // "RUN_TIME_VAR_TIME_MON"
      case 292: // "RUN_TIME_VAR_TIME_SEC"
      case 293: // "RUN_TIME_VAR_TIME_WDAY"
      case 294: // "RUN_TIME_VAR_TIME_YEAR"
      case 295: // "VARIABLE"
      case 296: // "Dictionary element"
      case 297: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 304: // op
      case 305: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 309: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 310: // act
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 307: // variables
      case 308: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 302: // actions
      case 303: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 681 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 694 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 700 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 706 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1237 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 710 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 714 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1253 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 720 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1261 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 726 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 732 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 738 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 744 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1294 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 751 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1302 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 755 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 759 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1318 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 765 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1326 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 769 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1334 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 773 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1343 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 778 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1352 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 783 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1361 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 788 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1369 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 792 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1377 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 799 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1385 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 803 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1393 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 810 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 816 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1414 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 826 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1427 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 835 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1441 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 845 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1454 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 854 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx("!" + utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1467 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 866 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1475 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 870 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1483 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 874 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1491 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 878 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1499 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 882 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1507 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 886 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::InspectFile($1); */
        OPERATOR_NOT_SUPPORTED("InspectFile", yystack_[2].location);
      }
#line 1516 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 891 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::FuzzyHash(); */
        OPERATOR_NOT_SUPPORTED("FuzzyHash", yystack_[2].location);
      }
#line 1525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 896 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(yystack_[0].value.as< std::string > ()));
      }
#line 1533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 900 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(yystack_[0].value.as< std::string > ()));
      }
#line 1541 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 904 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 909 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(yystack_[0].value.as< std::string > ()));
      }
#line 1558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 913 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(yystack_[0].value.as< std::string > ()));
      }
#line 1566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 917 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifyCPF($1); */
        OPERATOR_NOT_SUPPORTED("VerifyCPF", yystack_[2].location);
      }
#line 1575 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 922 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifySSN($1); */
        OPERATOR_NOT_SUPPORTED("VerifySSN", yystack_[2].location);
      }
#line 1584 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 927 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1593 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 932 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1602 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 937 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(yystack_[0].value.as< std::string > ()));
      }
#line 1610 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 941 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(yystack_[0].value.as< std::string > ()));
      }
#line 1618 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 945 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(yystack_[0].value.as< std::string > ()));
      }
#line 1626 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 949 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1634 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 953 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(yystack_[0].value.as< std::string > ()));
      }
#line 1642 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 957 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(yystack_[0].value.as< std::string > ()));
      }
#line 1650 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 961 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(yystack_[0].value.as< std::string > ()));
      }
#line 1658 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 965 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(yystack_[0].value.as< std::string > ()));
      }
#line 1666 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 969 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1674 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 973 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(yystack_[0].value.as< std::string > ()));
      }
#line 1682 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 977 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(yystack_[0].value.as< std::string > ()));
      }
#line 1690 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 981 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(yystack_[0].value.as< std::string > ()));
      }
#line 1698 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 985 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(yystack_[0].value.as< std::string > ()));
      }
#line 1706 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 989 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(yystack_[0].value.as< std::string > ()));
      }
#line 1714 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 993 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(yystack_[0].value.as< std::string > ()));
      }
#line 1722 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 997 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(yystack_[0].value.as< std::string > ()));
      }
#line 1730 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 1001 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1738 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 1005 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1746 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 1009 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1761 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1024 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        Rule *rule = new Rule(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[4].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1789 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1048 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Rule *rule = new Rule(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[3].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1812 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1067 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Rule *rule = new Rule(
            /* op */ NULL,
            /* variables */ NULL,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );
        driver.addSecAction(rule);
      }
#line 1831 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1082 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecRuleScript is not yet supported.");
        YYERROR;
      }
#line 1840 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 74:
#line 1087 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + a->m_name + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(a);
        }

        delete actions;
      }
#line 1891 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 75:
#line 1134 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()));
      }
#line 1899 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1138 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DisabledRuleEngine;
      }
#line 1907 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1142 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::EnabledRuleEngine;
      }
#line 1915 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1146 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DetectionOnlyRuleEngine;
      }
#line 1923 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1150 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1931 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1154 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1939 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1158 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1947 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1162 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1955 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1166 "seclang-parser.yy" // lalr1.cc:859
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 1968 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1175 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 1976 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1179 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecWebAppId is not supported.");
        YYERROR;
      }
#line 1985 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1184 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 1994 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1189 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "ContentInjection is not yet supported.");
        YYERROR;
      }
#line 2003 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1194 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2012 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1199 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "ContentInjection is not yet supported.");
        YYERROR;
      }
#line 2021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1204 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2038 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1217 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2055 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1230 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2072 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1243 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1270 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2118 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1282 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1302 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as< std::string > (),
            driver.ref.back(), &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (GeoLookup::getInstance().setDataBase(file) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2172 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1330 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 98:
#line 1335 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2190 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 1340 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyInMemoryLimit.m_set = true;
        driver.m_requestBodyInMemoryLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2199 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 1345 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2208 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 1350 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2216 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1354 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2224 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 1358 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2232 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 1362 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2240 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 105:
#line 1366 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2248 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 106:
#line 1370 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2256 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 109:
#line 1376 "seclang-parser.yy" // lalr1.cc:859
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 2272 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 110:
#line 1388 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2282 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1394 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2290 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1398 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2298 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1408 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2305 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1411 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2314 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1419 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2322 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1423 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2330 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1430 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2339 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1435 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2349 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1441 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2359 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1447 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2369 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1453 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2380 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1460 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2391 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1470 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2399 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1474 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2407 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1478 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_NoDictElement());
      }
#line 2415 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1482 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2423 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1486 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2431 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1490 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_NoDictElement());
      }
#line 2439 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1494 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2447 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1498 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2455 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1502 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_NoDictElement());
      }
#line 2463 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1506 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2471 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1510 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2479 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 1514 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_NoDictElement());
      }
#line 2487 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 141:
#line 1518 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2495 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 142:
#line 1522 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2503 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1526 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_NoDictElement());
      }
#line 2511 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1530 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2519 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1534 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2527 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1538 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_NoDictElement());
      }
#line 2535 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 1542 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2543 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 148:
#line 1546 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2551 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 149:
#line 1550 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_NoDictElement());
      }
#line 2559 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1554 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2567 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 1558 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2575 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 152:
#line 1562 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_NoDictElement());
      }
#line 2583 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1566 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2591 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1570 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2599 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1574 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_NoDictElement());
      }
#line 2607 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1578 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1582 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2623 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1586 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_NoDictElement());
      }
#line 2631 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1590 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2639 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1594 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2647 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1598 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_NoDictElement());
      }
#line 2655 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1602 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2663 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1606 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2671 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1610 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_NoDictElement());
      }
#line 2679 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1614 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2687 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1618 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2695 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1622 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_NoDictElement());
      }
#line 2703 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1626 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2711 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1630 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2719 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1634 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_NoDictElement());
      }
#line 2727 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1638 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2735 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1642 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2743 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1646 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_NoDictElement());
      }
#line 2751 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1650 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2759 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1654 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2767 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1658 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_NoDictElement());
      }
#line 2775 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1662 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2783 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1666 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2791 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1670 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_NoDictElement());
      }
#line 2799 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1674 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2807 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1678 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2815 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1682 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV"));
      }
#line 2823 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1686 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2831 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1690 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2839 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1694 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML_NoDictElement());
      }
#line 2847 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1698 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2855 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1702 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2863 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1706 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_NoDictElement());
      }
#line 2871 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1711 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2879 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1715 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1719 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_NoDictElement());
      }
#line 2895 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1724 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2903 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1728 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2911 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1732 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_NoDictElement());
      }
#line 2919 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 1737 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2927 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 1741 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2935 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 1745 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_NoDictElement());
      }
#line 2943 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 1750 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2951 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 1754 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2959 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 1758 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_NoDictElement());
      }
#line 2967 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 1765 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames());
      }
#line 2975 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 1769 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames());
      }
#line 2983 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 1773 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames());
      }
#line 2991 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 1777 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames());
      }
#line 2999 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 1781 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentType());
      }
#line 3007 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 1785 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames());
      }
#line 3015 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 1789 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsCombinedSize());
      }
#line 3023 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 1793 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::AuthType());
      }
#line 3031 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 1797 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesCombinedSize());
      }
#line 3039 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 1801 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequest());
      }
#line 3047 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 1805 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequestLength());
      }
#line 3055 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 1809 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::InboundDataError());
      }
#line 3063 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 1813 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVar());
      }
#line 3071 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 1817 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarName());
      }
#line 3079 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 1821 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartCrlfLFLines());
      }
#line 3087 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 1825 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateAfter());
      }
#line 3095 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 1829 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartFileLimitExceeded());
      }
#line 3103 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 1833 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartHeaderFolding());
      }
#line 3111 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 1837 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidHeaderFolding());
      }
#line 3119 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 1841 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidQuoting());
      }
#line 3127 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 1845 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartStrictError());
      }
#line 3135 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 1849 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartUnmatchedBoundary());
      }
#line 3143 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 1853 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::OutboundDataError());
      }
#line 3151 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 1857 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::PathInfo());
      }
#line 3159 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 1861 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::QueryString());
      }
#line 3167 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 1865 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteAddr());
      }
#line 3175 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 1869 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteHost());
      }
#line 3183 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 1873 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemotePort());
      }
#line 3191 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 1877 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyError());
      }
#line 3199 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 1881 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyErrorMsg());
      }
#line 3207 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 1885 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessor());
      }
#line 3215 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 1889 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorError());
      }
#line 3223 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 1893 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorErrorMsg());
      }
#line 3231 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 1897 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBasename());
      }
#line 3239 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 1901 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBody());
      }
#line 3247 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 1905 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBodyLength());
      }
#line 3255 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 1909 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestFilename());
      }
#line 3263 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 1913 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestLine());
      }
#line 3271 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 1917 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestMethod());
      }
#line 3279 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 1921 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestProtocol());
      }
#line 3287 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 1925 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURI());
      }
#line 3295 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 1929 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURIRaw());
      }
#line 3303 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 1933 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource());
      }
#line 3311 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 1937 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseBody());
      }
#line 3319 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 1941 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentLength());
      }
#line 3327 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 1945 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseProtocol());
      }
#line 3335 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 1949 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseStatus());
      }
#line 3343 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 1953 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerAddr());
      }
#line 3351 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 1957 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerName());
      }
#line 3359 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 1961 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerPort());
      }
#line 3367 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 1965 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::SessionID());
      }
#line 3375 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 1969 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UniqueID());
      }
#line 3383 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 1973 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UrlEncodedError());
      }
#line 3391 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 1977 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UserID());
      }
#line 3399 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 1981 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 3407 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 1985 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3418 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 1993 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 2000 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3440 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 2007 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3451 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 2014 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3462 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 2021 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3473 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 2028 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3484 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 2035 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3495 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 2042 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3506 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 2049 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3517 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2056 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3528 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2063 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3539 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2070 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2080 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 3558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2084 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 3566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2088 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 3574 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2092 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2096 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Block(yystack_[0].value.as< std::string > ()));
      }
#line 3590 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2100 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 3598 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2104 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 3606 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2108 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2113 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3624 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2118 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3633 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2123 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 3641 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2127 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 3649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2131 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 3657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2135 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3666 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2140 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3675 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2145 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 3683 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2149 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 3691 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2153 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 3699 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2157 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 3707 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2161 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 3715 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2165 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 3723 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2169 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 3731 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2173 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 3739 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2177 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 3747 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2181 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 3755 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2185 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("Drop", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3764 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2190 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Exec", yystack_[1].location);
      }
#line 3772 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2194 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3781 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2199 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 3789 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2203 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[0].value.as< std::string > ()));
      }
#line 3797 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2207 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(yystack_[0].value.as< std::string > ()));
      }
#line 3805 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2211 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 3813 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2215 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 3821 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2219 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(yystack_[0].value.as< std::string > ()));
      }
#line 3829 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2223 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 3837 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2227 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3845 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2231 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 3853 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2235 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 3861 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2239 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 3869 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2243 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 3877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2247 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 3885 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2251 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 3893 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2255 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(yystack_[0].value.as< std::string > ()));
      }
#line 3901 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2259 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 3909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2263 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseArg", yystack_[1].location);
      }
#line 3917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2267 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatched", yystack_[1].location);
      }
#line 3925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2271 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatchedBytes", yystack_[1].location);
      }
#line 3933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2275 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseRequestHeader", yystack_[1].location);
      }
#line 3941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2279 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseResponseHeader", yystack_[1].location);
      }
#line 3949 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2283 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SetEnv", yystack_[1].location);
      }
#line 3957 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2287 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(yystack_[0].value.as< std::string > ()));
      }
#line 3965 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2291 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(yystack_[0].value.as< std::string > ()));
      }
#line 3973 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2295 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(yystack_[0].value.as< std::string > ()));
      }
#line 3981 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2299 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, yystack_[0].value.as< std::string > ()));
      }
#line 3989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2303 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, yystack_[0].value.as< std::string > ()));
      }
#line 3997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2307 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2311 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2315 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2319 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2323 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2327 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2331 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4053 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2335 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(yystack_[0].value.as< std::string > ()));
      }
#line 4061 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2339 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2343 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2347 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4085 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2351 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2355 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4101 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2359 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2363 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4117 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2367 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2371 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4133 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2375 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2379 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4149 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2383 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4157 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2387 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4165 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2391 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 4173 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2395 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2399 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2403 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4197 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2407 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4205 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 2411 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 351:
#line 2415 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 352:
#line 2419 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 2423 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4237 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 2427 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 2431 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 4253 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 2435 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 4261 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 357:
#line 2439 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 4269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 358:
#line 2443 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 4277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 359:
#line 2447 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 4285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 360:
#line 2451 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 4293 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 361:
#line 2455 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 4301 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 362:
#line 2459 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 4309 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 4313 "seclang-parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -223;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
     393,  -223,    49,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -215,  -223,  -223,  -223,  -223,  -223,  -219,  -223,  -223,  -223,
    -223,  -223,  -223,    57,  -223,  -223,  -222,  -223,    59,  -223,
      58,    47,   556,   556,  -223,  -223,  -223,  -223,  -218,  -223,
    -223,    16,    16,    63,    65,  -223,  -223,  -223,    68,  -223,
    -223,  -223,  -223,  -223,  -223,    16,   556,   615,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     257,    55,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -208,
    -223,  -223,  -223,    70,   122,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   767,  -223,     6,  -223,  -223,  -223,
    -223,   465,   465,    56,    60,    62,    64,    66,    69,    71,
      73,    75,    77,    79,    81,   103,   105,   107,   109,  -223,
    -223,   111,  -223,  -223,  -223,  -223,   113,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,   115,   117,   119,   157,
     159,   161,    98,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,     7,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,   173,  -223,  -223,  -223,
    -192,   -72,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,    -2,   767,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,    -4,   180,    67,   -57,    29,    34,
    -223,  -223,    50,   112,   137,   152,  -223,   217,   218,   219,
     313,   314,   315,   316,   317,   318,   319,   320,   321,  -223,
     322,   323,  -223,   324,   325,   326,   328,  -223,  -223,   376,
     379,   380,   381,   556,  -223,  -223,   382,   383,   394,  -223,
    -223,  -223,   465,   465,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   110,    84,    83,    85,    86,     7,     6,
       0,    11,    14,    12,    13,    15,     0,    95,    94,    88,
      96,   108,   107,     0,    99,    97,     0,    98,     0,   100,
       0,     0,     0,     0,    75,   118,   119,   120,     0,    90,
      91,     0,     0,     0,     0,    23,    21,    22,     0,   109,
     115,   116,   114,   117,   113,     0,     0,     0,     4,    69,
       5,    89,    87,     9,    10,     8,    18,    17,    16,    80,
      79,   101,   102,    82,    81,   103,   104,    78,    76,    77,
       0,     0,   269,   270,   271,   272,   273,   274,   275,     0,
     279,   280,   281,     0,     0,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   300,   299,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   327,   328,
     329,   330,   331,   338,   348,   354,   341,   342,   352,   353,
     358,   343,   340,   347,   357,   356,   336,   335,   334,   361,
     360,   351,   349,   362,   350,   339,   337,   355,   344,   346,
     345,   359,   332,   333,     0,    72,    27,    29,    74,   105,
     106,     0,     0,   131,   134,   137,   140,   143,   146,   149,
     152,   155,   158,   161,   164,   167,   170,   173,   176,   207,
     202,   179,   201,   203,   208,   209,   188,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   230,   229,   233,   232,
     231,   234,   236,   235,   237,   204,   238,   239,   240,   242,
     241,   243,   244,   245,   205,   206,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   191,   194,   197,   200,
     182,   185,     0,   257,   256,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,    92,   121,   126,    93,
      20,    19,    25,    24,   111,   112,     0,    73,     1,     3,
       0,   323,   288,   287,   286,   277,   276,   278,   283,   282,
     285,   284,     0,     0,   128,   127,   129,   130,   132,   133,
     135,   136,   138,   139,   141,   142,   144,   145,   147,   148,
     150,   151,   153,   154,   156,   157,   159,   160,   162,   163,
     165,   166,   168,   169,   171,   172,   174,   175,   177,   178,
     186,   187,   189,   190,   192,   193,   195,   196,   198,   199,
     180,   181,   183,   184,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,    71,    30,   322,     0,     0,     0,    26,
      28,   122,     0,     0,   123,    33,    31,    67,    52,    51,
      53,    54,    40,    55,    48,    56,    39,    58,    57,    59,
      60,    62,    61,    63,    49,    64,    65,    66,    41,    42,
      43,    44,    45,    46,    47,    50,    70,   324,   325,   326,
     125,   124
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -223,  -223,   292,  -223,   -33,   191,  -223,    18,  -223,   -39,
     385,   224,   342
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    57,    58,    59,   165,   166,   383,   384,    60,   266,
     267,   268,   167
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     168,   293,   345,   269,   169,    66,    71,    72,    67,   293,
      63,    64,    68,   345,   170,    65,   276,   285,   286,   386,
     387,   388,   287,   277,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   385,   250,   251,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   397,   250,   251,   392,   393,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   346,   250,   251,
      77,   398,    78,    79,    61,    62,   399,   391,   282,   389,
     283,   284,    69,    70,    73,    74,    75,    76,   270,   271,
     272,   273,   400,   274,   275,   288,   289,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   395,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   290,   291,   279,
     426,   280,   296,   297,   401,   292,   298,   299,   300,   301,
     302,   303,   304,   305,   396,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   402,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     1,   403,   294,   295,     2,     3,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   338,   339,   340,   341,   342,   343,   404,
     405,   406,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   281,   250,   251,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   394,
     421,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   278,   430,   431,   422,     2,
       3,   423,   424,   425,   427,   428,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   390,   429,   344,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    80,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      33,     3,     6,    42,   222,   224,   228,   229,   227,     3,
     225,   226,   231,     6,   232,   230,    55,   225,   226,    91,
      92,    93,   230,    56,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   295,    88,    89,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   242,    88,    89,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    94,    88,    89,
     223,   242,   225,   226,   225,   226,   242,   281,   223,   281,
     225,   226,   225,   226,   225,   226,   228,   229,   225,   226,
     225,   226,   242,   225,   226,   225,   226,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   225,   226,    57,
     383,    94,   296,   297,   242,   164,   296,   297,   296,   297,
     296,   297,   296,   297,   346,   296,   297,   296,   297,   296,
     297,   296,   297,   296,   297,   296,   297,   296,   297,   242,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   242,   171,   172,     4,     5,   296,
     297,   296,   297,   296,   297,   296,   297,   296,   297,   296,
     297,   296,   297,   296,   297,   296,   297,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   296,   297,   296,   297,   296,   297,   242,
     242,   242,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   295,    88,    89,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   345,
     242,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,     0,   392,   393,   242,     4,
       5,   242,   242,   242,   242,   242,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   293,   242,   252,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   299,   300,   301,
     306,   225,   226,   225,   226,   230,   224,   227,   231,   225,
     226,   228,   229,   225,   226,   228,   229,   223,   225,   226,
      90,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   281,   302,   303,   310,   302,   222,
     232,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      88,    89,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   307,   308,   309,   307,
     225,   226,   225,   226,   225,   226,   307,   302,     0,   300,
      94,   295,   223,   225,   226,   225,   226,   230,   225,   226,
     225,   226,   303,     3,   309,   309,   296,   297,   296,   297,
     296,   297,   296,   297,   296,   297,   296,   297,   296,   297,
     296,   297,   296,   297,   296,   297,   296,   297,   296,   297,
     296,   297,   296,   297,   296,   297,   296,   297,   296,   297,
     296,   297,   296,   297,   296,   297,   296,   297,   296,   297,
     296,   297,   296,   297,   308,     6,    94,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   304,   305,   295,    91,    92,    93,   281,
     310,   281,     8,     9,   309,   266,   305,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   302,   242,   242,   242,
     309,   309
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   298,   299,   299,   299,   300,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   302,   302,   303,   303,
     304,   304,   304,   304,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   307,   307,   308,   308,   308,   308,   308,   308,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     3,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     4,     1,     2,     2,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_ARGS_COMBINED_SIZE",
  "VARIABLE_ARGS_GET_NAMES", "VARIABLE_RULE", "\"Variable ARGS_NAMES\"",
  "VARIABLE_ARGS_POST_NAMES", "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"",
  "\"FILES_TMPNAMES\"", "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"",
  "\"INBOUND_DATA_ERROR\"", "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "\"MULTIPART_CRLF_LF_LINES\"", "\"MULTIPART_DATA_AFTER\"",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"", "\"MULTIPART_INVALID_QUOTING\"",
  "\"MULTIPART_STRICT_ERROR\"", "\"MULTIPART_UNMATCHED_BOUNDARY\"",
  "\"OUTBOUND_DATA_ERROR\"", "\"PATH_INFO\"", "\"QUERY_STRING\"",
  "\"REMOTE_ADDR\"", "\"REMOTE_HOST\"", "\"REMOTE_PORT\"",
  "\"REQBODY_ERROR_MSG\"", "\"REQBODY_ERROR\"",
  "\"REQBODY_PROCESSOR_ERROR_MSG\"", "\"REQBODY_PROCESSOR_ERROR\"",
  "\"REQBODY_PROCESSOR\"", "\"REQUEST_BASENAME\"",
  "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"", "\"REQUEST_FILENAME\"",
  "VARIABLE_REQUEST_HEADERS_NAMES", "\"REQUEST_LINE\"",
  "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"", "\"REQUEST_URI_RAW\"",
  "\"REQUEST_URI\"", "\"RESOURCE\"", "\"RESPONSE_BODY\"",
  "\"RESPONSE_CONTENT_LENGTH\"", "VARIABLE_RESPONSE_CONTENT_TYPE",
  "VARIABLE_RESPONSE_HEADERS_NAMES", "\"RESPONSE_PROTOCOL\"",
  "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"", "\"SERVER_NAME\"",
  "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"VARIABLE_STATUS\"",
  "\"VARIABLE_IP\"", "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"",
  "\"VARIABLE_SESSION\"", "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"",
  "\"RUN_TIME_VAR_XML\"", "\"SetVar\"", "SETVAR_OPERATION_EQUALS",
  "SETVAR_OPERATION_EQUALS_PLUS", "SETVAR_OPERATION_EQUALS_MINUS",
  "\"NOT\"", "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"",
  "\"Append\"", "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanatiseArg\"", "\"SanatiseMatched\"", "\"SanatiseMatchedBytes\"",
  "\"SanatiseRequestHeader\"", "\"SanatiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"",
  "\"CONFIG_SEC_WEB_APP_ID\"", "\"CONFIG_SEC_SERVER_SIG\"",
  "\"CONFIG_DIR_AUDIT_DIR\"", "\"CONFIG_DIR_AUDIT_DIR_MOD\"",
  "\"CONFIG_DIR_AUDIT_ENG\"", "\"CONFIG_DIR_AUDIT_FLE_MOD\"",
  "\"CONFIG_DIR_AUDIT_LOG\"", "\"CONFIG_DIR_AUDIT_LOG2\"",
  "\"CONFIG_DIR_AUDIT_LOG_P\"", "\"CONFIG_DIR_AUDIT_STS\"",
  "\"CONFIG_DIR_AUDIT_TPE\"", "\"CONFIG_DIR_DEBUG_LOG\"",
  "\"CONFIG_DIR_DEBUG_LVL\"", "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_DIR_GEO_DB\"", "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_SEC_COLLECTION_TIMEOUT\"",
  "\"CONFIG_SEC_HTTP_BLKEY\"", "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONGIG_DIR_SEC_DATA_DIR\"", "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT\"", "\"OPERATOR\"",
  "\"OPERATOR_BEGINS_WITH\"", "\"OPERATOR_CONTAINS\"",
  "\"OPERATOR_CONTAINS_WORD\"", "\"OPERATOR_DETECT_SQLI\"",
  "\"OPERATOR_DETECT_XSS\"", "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"",
  "\"OPERATOR_FUZZY_HASH\"", "\"OPERATOR_GE\"", "\"OPERATOR_GEOLOOKUP\"",
  "\"OPERATOR_GSB_LOOKUP\"", "\"OPERATOR_GT\"",
  "\"OPERATOR_INSPECT_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_LE\"", "\"OPERATOR_LT\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_PM_FROM_FILE\"", "\"OPERATOR_RBL\"",
  "\"OPERATOR_RSUB\"", "\"OPERATOR_RX\"", "\"Operator RX (content only)\"",
  "\"OPERATOR_STR_EQ\"", "\"OPERATOR_STR_MATCH\"",
  "\"OPERATOR_UNCONDITIONAL_MATCH\"", "\"OPERATOR_VALIDATE_BYTE_RANGE\"",
  "\"OPERATOR_VALIDATE_DTD\"", "\"OPERATOR_VALIDATE_HASH\"",
  "\"OPERATOR_VALIDATE_SCHEMA\"", "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_WITHIN\"", "\"OP_QUOTE\"", "\"QUOTATION_MARK\"",
  "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"", "\"RUN_TIME_VAR_HSV\"",
  "\"RUN_TIME_VAR_REMOTE_USER\"", "\"RUN_TIME_VAR_TIME\"",
  "\"RUN_TIME_VAR_TIME_DAY\"", "\"RUN_TIME_VAR_TIME_EPOCH\"",
  "\"RUN_TIME_VAR_TIME_HOUR\"", "\"RUN_TIME_VAR_TIME_MIN\"",
  "\"RUN_TIME_VAR_TIME_MON\"", "\"RUN_TIME_VAR_TIME_SEC\"",
  "\"RUN_TIME_VAR_TIME_WDAY\"", "\"RUN_TIME_VAR_TIME_YEAR\"",
  "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_may_be_quoted", "var", "act", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   680,   680,   684,   685,   688,   693,   699,   705,   709,
     713,   719,   725,   731,   737,   743,   750,   754,   758,   764,
     768,   772,   777,   782,   787,   791,   798,   802,   809,   815,
     825,   834,   844,   853,   865,   869,   873,   877,   881,   885,
     890,   895,   899,   903,   908,   912,   916,   921,   926,   931,
     936,   940,   944,   948,   952,   956,   960,   964,   968,   972,
     976,   980,   984,   988,   992,   996,  1000,  1004,  1008,  1022,
    1023,  1047,  1066,  1081,  1086,  1133,  1137,  1141,  1145,  1149,
    1153,  1157,  1161,  1165,  1174,  1178,  1183,  1188,  1193,  1198,
    1203,  1216,  1229,  1242,  1269,  1281,  1301,  1329,  1334,  1339,
    1344,  1349,  1353,  1357,  1361,  1365,  1369,  1373,  1374,  1375,
    1387,  1393,  1397,  1401,  1402,  1403,  1404,  1405,  1406,  1407,
    1410,  1418,  1422,  1429,  1434,  1440,  1446,  1452,  1459,  1469,
    1473,  1477,  1481,  1485,  1489,  1493,  1497,  1501,  1505,  1509,
    1513,  1517,  1521,  1525,  1529,  1533,  1537,  1541,  1545,  1549,
    1553,  1557,  1561,  1565,  1569,  1573,  1577,  1581,  1585,  1589,
    1593,  1597,  1601,  1605,  1609,  1613,  1617,  1621,  1625,  1629,
    1633,  1637,  1641,  1645,  1649,  1653,  1657,  1661,  1665,  1669,
    1673,  1677,  1681,  1685,  1689,  1693,  1697,  1701,  1705,  1710,
    1714,  1718,  1723,  1727,  1731,  1736,  1740,  1744,  1749,  1753,
    1757,  1764,  1768,  1772,  1776,  1780,  1784,  1788,  1792,  1796,
    1800,  1804,  1808,  1812,  1816,  1820,  1824,  1828,  1832,  1836,
    1840,  1844,  1848,  1852,  1856,  1860,  1864,  1868,  1872,  1876,
    1880,  1884,  1888,  1892,  1896,  1900,  1904,  1908,  1912,  1916,
    1920,  1924,  1928,  1932,  1936,  1940,  1944,  1948,  1952,  1956,
    1960,  1964,  1968,  1972,  1976,  1980,  1984,  1992,  1999,  2006,
    2013,  2020,  2027,  2034,  2041,  2048,  2055,  2062,  2069,  2079,
    2083,  2087,  2091,  2095,  2099,  2103,  2107,  2112,  2117,  2122,
    2126,  2130,  2134,  2139,  2144,  2148,  2152,  2156,  2160,  2164,
    2168,  2172,  2176,  2180,  2184,  2189,  2193,  2198,  2202,  2206,
    2210,  2214,  2218,  2222,  2226,  2230,  2234,  2238,  2242,  2246,
    2250,  2254,  2258,  2262,  2266,  2270,  2274,  2278,  2282,  2286,
    2290,  2294,  2298,  2302,  2306,  2310,  2314,  2318,  2322,  2326,
    2330,  2334,  2338,  2342,  2346,  2350,  2354,  2358,  2362,  2366,
    2370,  2374,  2378,  2382,  2386,  2390,  2394,  2398,  2402,  2406,
    2410,  2414,  2418,  2422,  2426,  2430,  2434,  2438,  2442,  2446,
    2450,  2454,  2458
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 5240 "seclang-parser.cc" // lalr1.cc:1167
#line 2464 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}