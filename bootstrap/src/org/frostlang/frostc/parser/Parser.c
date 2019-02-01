#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/parser/Lexer.h"
#include "frost/core/Frost.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.h"
#include "frost/collections/Stack.h"
#include "frost/core/Bit.h"
#include "org/frostlang/regex/RegexParser.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/parser/Parser/AutoSyntaxHighlight.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Immutable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char8.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt8.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$Parser$class_type org$frostlang$frostc$parser$Parser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$Parser$cleanup, org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String, org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q, org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q, org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String, org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$Parser$startSpeculative, org$frostlang$frostc$parser$Parser$accept, org$frostlang$frostc$parser$Parser$rewind, org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String, org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode, org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$alignmentString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode, org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$bitwiseExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT, org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q} };

typedef void (*$fn54)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef frost$core$Int64 (*$fn59)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn71)(frost$collections$CollectionView*);
typedef void (*$fn94)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Bit (*$fn111)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn134)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn142)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn148)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn153)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Int64 (*$fn240)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn254)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn269)(frost$collections$CollectionView*);
typedef void (*$fn282)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn286)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef frost$core$Int64 (*$fn293)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn305)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn320)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn332)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn369)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn377)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int64 (*$fn396)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn499)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn544)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn558)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn668)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn682)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Position (*$fn767)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn774)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn782)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn789)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn813)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn824)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn847)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn892)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn908)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Position (*$fn999)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1007)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1018)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1035)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1071)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1079)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1098)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1116)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1195)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1259)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1438)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1746)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn1750)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef org$frostlang$frostc$Position (*$fn1766)(org$frostlang$frostc$ASTNode*);
typedef void (*$fn1770)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Bit (*$fn1792)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1802)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2109)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2255)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2264)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2295)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2378)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2470)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2661)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2815)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2954)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3190)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3354)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3450)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3958)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3983)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4019)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4036)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4356)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4513)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4521)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4849)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4882)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4893)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5018)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5040)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5061)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5121)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5194)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5220)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5285)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5383)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5413)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5594)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5702)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5720)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5795)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5900)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5919)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 34, 1088483445082520168, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67", 12, -673795321792812913, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 4872307991516742361, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 106, 2225543338790490809, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3d\x3e\x31\x27", 5, 14631941951, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65", 12, -7621261731150940370, NULL };
static frost$core$String $s2333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s3438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s4023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s4067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s4107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s4114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

void org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(org$frostlang$frostc$parser$Parser* param0, frost$threads$MessageQueue* param1) {

// line 37
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$parser$Lexer));
org$frostlang$frostc$parser$Lexer* $tmp2 = (org$frostlang$frostc$parser$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$parser$Lexer$class);
org$frostlang$frostc$parser$Lexer$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$parser$Lexer** $tmp3 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$parser$Lexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 47
FROST_ASSERT(40 == sizeof(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp6 = (frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp7 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 49
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp10 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Stack** $tmp11 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$Stack** $tmp13 = &param0->commaSeparatedExpressionContext;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// line 51
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp14 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Stack** $tmp15 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$Stack** $tmp17 = &param0->speculativeBuffers;
*$tmp17 = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 53
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp19 = &param0->allowLambdas;
*$tmp19 = $tmp18;
// line 55
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp21 = &param0->reportErrors;
*$tmp21 = $tmp20;
// line 60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$MessageQueue** $tmp22 = &param0->errors;
frost$threads$MessageQueue* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$threads$MessageQueue** $tmp24 = &param0->errors;
*$tmp24 = param1;
// line 61
frost$collections$Stack** $tmp25 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp28;
$tmp28 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp28->value = $tmp27;
frost$collections$Stack$push$frost$collections$Stack$T($tmp26, ((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 62
FROST_ASSERT(56 == sizeof(org$frostlang$regex$RegexParser));
org$frostlang$regex$RegexParser* $tmp29 = (org$frostlang$regex$RegexParser*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$regex$RegexParser$class);
org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp29, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$regex$RegexParser** $tmp30 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$regex$RegexParser** $tmp32 = &param0->regexParser;
*$tmp32 = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}
void org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String(org$frostlang$frostc$parser$Parser* param0, frost$io$File* param1, frost$core$String* param2) {

// line 66
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp34 = &param0->reportErrors;
*$tmp34 = $tmp33;
// line 67
org$frostlang$frostc$parser$Lexer** $tmp35 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp36 = *$tmp35;
org$frostlang$frostc$parser$Lexer$start$frost$core$String($tmp36, param2);
// line 68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp37 = &param0->path;
frost$io$File* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$io$File** $tmp39 = &param0->path;
*$tmp39 = param1;
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp40 = &param0->source;
frost$core$String* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String** $tmp42 = &param0->source;
*$tmp42 = param2;
// line 70
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp43 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp44 = *$tmp43;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$clear($tmp44);
// line 71
org$frostlang$regex$RegexParser** $tmp45 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp46 = *$tmp45;
org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$String($tmp46, param1, param2);
// line 72
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp47 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp48 = *$tmp47;
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block1:;
// line 73
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp51 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp52 = *$tmp51;
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[2];
$tmp53($tmp52);
goto block2;
block2:;
return;

}
org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$parser$Token local2;
// line 78
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp55 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp56 = *$tmp55;
ITable* $tmp57 = ((frost$collections$CollectionView*) $tmp56)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Int64 $tmp60 = $tmp58(((frost$collections$CollectionView*) $tmp56));
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 != $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
// line 79
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp67 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp68 = *$tmp67;
ITable* $tmp69 = ((frost$collections$CollectionView*) $tmp68)->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Int64 $tmp72 = $tmp70(((frost$collections$CollectionView*) $tmp68));
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 - $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local0) = $tmp77;
// line 80
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp78 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp79 = *$tmp78;
frost$core$Int64 $tmp80 = *(&local0);
org$frostlang$frostc$parser$Token $tmp81 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token($tmp79, $tmp80);
*(&local1) = $tmp81;
// line 81
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp82 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp83 = *$tmp82;
frost$core$Int64 $tmp84 = *(&local0);
org$frostlang$frostc$parser$Token $tmp85 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlang$frostc$parser$Token($tmp83, $tmp84);
// line 82
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp86 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp87 = *$tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block3; else goto block4;
block3:;
// line 83
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp90 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp91 = *$tmp90;
org$frostlang$frostc$parser$Token $tmp92 = *(&local1);
$fn94 $tmp93 = ($fn94) $tmp91->$class->vtable[6];
$tmp93($tmp91, $tmp92);
goto block4;
block4:;
// line 85
org$frostlang$frostc$parser$Token $tmp95 = *(&local1);
return $tmp95;
block2:;
// line 87
org$frostlang$frostc$parser$Lexer** $tmp96 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp97 = *$tmp96;
org$frostlang$frostc$parser$Token $tmp98 = org$frostlang$frostc$parser$Lexer$next$R$org$frostlang$frostc$parser$Token($tmp97);
*(&local2) = $tmp98;
// line 88
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp99 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp100 = *$tmp99;
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit($tmp100 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block5; else goto block6;
block5:;
// line 89
org$frostlang$frostc$parser$Token $tmp103 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp104 = $tmp103.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp105->value = $tmp104;
frost$core$Int64 $tmp106 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp107 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp106);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp108->value = $tmp107;
ITable* $tmp109 = ((frost$core$Equatable*) $tmp105)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110(((frost$core$Equatable*) $tmp105), ((frost$core$Equatable*) $tmp108));
bool $tmp113 = $tmp112.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp108)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp105)));
if ($tmp113) goto block7; else goto block8;
block7:;
// line 90
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp114 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp115 = *$tmp114;
frost$collections$Stack** $tmp116 = &$tmp115->stack;
frost$collections$Stack* $tmp117 = *$tmp116;
frost$core$Int64 $tmp118 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp117);
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
frost$core$Bit $tmp120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block9; else goto block12;
block12:;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp122 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp123 = *$tmp122;
frost$collections$Stack** $tmp124 = &$tmp123->stack;
frost$collections$Stack* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Object* $tmp127 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp125, $tmp126);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp128;
$tmp128 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp128->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp127)->value;
frost$core$Int64 $tmp129 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp130 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp129);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp131;
$tmp131 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp131->value = $tmp130;
ITable* $tmp132 = ((frost$core$Equatable*) $tmp128)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Bit $tmp135 = $tmp133(((frost$core$Equatable*) $tmp128), ((frost$core$Equatable*) $tmp131));
bool $tmp136 = $tmp135.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
if ($tmp136) goto block9; else goto block11;
block9:;
// line 92
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp137 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp140 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp139);
$fn142 $tmp141 = ($fn142) $tmp138->$class->vtable[3];
$tmp141($tmp138, $tmp140);
goto block10;
block11:;
// line 1
// line 95
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp143 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp144 = *$tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp146 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp145);
$fn148 $tmp147 = ($fn148) $tmp144->$class->vtable[4];
$tmp147($tmp144, $tmp146);
goto block10;
block10:;
goto block8;
block8:;
// line 98
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp149 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp150 = *$tmp149;
org$frostlang$frostc$parser$Token $tmp151 = *(&local2);
$fn153 $tmp152 = ($fn153) $tmp150->$class->vtable[6];
$tmp152($tmp150, $tmp151);
goto block6;
block6:;
// line 100
frost$collections$Stack** $tmp154 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp155 = *$tmp154;
frost$core$Int64 $tmp156 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp155);
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 > $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block13; else goto block14;
block13:;
// line 101
frost$collections$Stack** $tmp163 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp164 = *$tmp163;
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
frost$core$Object* $tmp166 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp164, $tmp165);
org$frostlang$frostc$parser$Token $tmp167 = *(&local2);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp166), $tmp167);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
goto block14;
block14:;
// line 103
org$frostlang$frostc$parser$Token $tmp168 = *(&local2);
return $tmp168;

}
org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$frostlang$frostc$parser$Token local4;
// line 107
goto block1;
block1:;
// line 108
org$frostlang$frostc$parser$Token $tmp169 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp169;
// line 109
org$frostlang$frostc$parser$Token $tmp170 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp171 = $tmp170.kind;
frost$core$Int64 $tmp172 = $tmp171.$rawValue;
frost$core$Int64 $tmp173 = (frost$core$Int64) {13};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block4:;
// line 111
goto block1;
block5:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {9};
frost$core$Bit $tmp177 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp176);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block6; else goto block7;
block6:;
// line 114
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp179 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp180 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp181 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp180);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp179, param0, $tmp181);
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = $tmp179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// line 115
goto block8;
block8:;
// line 116
org$frostlang$frostc$parser$Token $tmp183 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp183;
// line 117
org$frostlang$frostc$parser$Token $tmp184 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp185 = $tmp184.kind;
frost$core$Int64 $tmp186 = $tmp185.$rawValue;
frost$core$Int64 $tmp187 = (frost$core$Int64) {13};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp186, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block11; else goto block12;
block11:;
// line 119
org$frostlang$frostc$parser$Token $tmp190 = *(&local2);
frost$core$String* $tmp191 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp190);
frost$core$Bit $tmp192 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp191, &$s193);
bool $tmp194 = $tmp192.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
if ($tmp194) goto block13; else goto block14;
block13:;
// line 120
goto block9;
block14:;
goto block10;
block12:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {0};
frost$core$Bit $tmp196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp186, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block15; else goto block10;
block15:;
// line 124
org$frostlang$frostc$parser$Token $tmp198 = *(&local2);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp198;
block10:;
goto block8;
block9:;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {10};
frost$core$Bit $tmp202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block16; else goto block17;
block16:;
// line 130
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp204 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp205 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp206 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp205);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp204, param0, $tmp206);
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp207 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local3) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// line 131
goto block18;
block18:;
// line 132
org$frostlang$frostc$parser$Token $tmp208 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp208;
// line 133
org$frostlang$frostc$parser$Token $tmp209 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp210 = $tmp209.kind;
frost$core$Int64 $tmp211 = $tmp210.$rawValue;
frost$core$Int64 $tmp212 = (frost$core$Int64) {11};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp211, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block21; else goto block22;
block21:;
// line 135
goto block19;
block22:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {0};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp211, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block23; else goto block20;
block23:;
// line 138
org$frostlang$frostc$parser$Token $tmp218 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp218, &$s219);
// line 139
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp221 = &param0->reportErrors;
*$tmp221 = $tmp220;
// line 140
org$frostlang$frostc$parser$Token $tmp222 = *(&local4);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp222;
block20:;
goto block18;
block19:;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 146
org$frostlang$frostc$parser$Token $tmp225 = *(&local0);
return $tmp225;
block3:;
goto block1;
block2:;
goto block24;
block24:;

}
void org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

// line 153
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp226 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp227 = *$tmp226;
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 154
goto block3;
block3:;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp230 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp231 = *$tmp230;
frost$collections$Array** $tmp232 = &$tmp231->tokens;
frost$collections$Array* $tmp233 = *$tmp232;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp234 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp235 = *$tmp234;
frost$collections$Array** $tmp236 = &$tmp235->tokens;
frost$collections$Array* $tmp237 = *$tmp236;
ITable* $tmp238 = ((frost$collections$CollectionView*) $tmp237)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$core$Int64 $tmp241 = $tmp239(((frost$collections$CollectionView*) $tmp237));
frost$core$Int64 $tmp242 = (frost$core$Int64) {1};
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243 - $tmp244;
frost$core$Int64 $tmp246 = (frost$core$Int64) {$tmp245};
frost$core$Object* $tmp247 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp233, $tmp246);
frost$core$Object** $tmp248 = &((org$frostlang$frostc$Pair*) $tmp247)->first;
frost$core$Object* $tmp249 = *$tmp248;
frost$core$String* $tmp250 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp249)->value);
frost$core$String* $tmp251 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, param1);
ITable* $tmp252 = ((frost$core$Equatable*) $tmp250)->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[1];
frost$core$Bit $tmp255 = $tmp253(((frost$core$Equatable*) $tmp250), ((frost$core$Equatable*) $tmp251));
bool $tmp256 = $tmp255.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
if ($tmp256) goto block4; else goto block5;
block4:;
// line 156
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp257 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp258 = *$tmp257;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp259 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp260 = *$tmp259;
frost$collections$Array** $tmp261 = &$tmp260->tokens;
frost$collections$Array* $tmp262 = *$tmp261;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp263 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp264 = *$tmp263;
frost$collections$Array** $tmp265 = &$tmp264->tokens;
frost$collections$Array* $tmp266 = *$tmp265;
ITable* $tmp267 = ((frost$collections$CollectionView*) $tmp266)->$class->itable;
while ($tmp267->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[0];
frost$core$Int64 $tmp270 = $tmp268(((frost$collections$CollectionView*) $tmp266));
frost$core$Int64 $tmp271 = (frost$core$Int64) {1};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 - $tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {$tmp274};
frost$core$Object* $tmp276 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp262, $tmp275);
frost$core$Object** $tmp277 = &((org$frostlang$frostc$Pair*) $tmp276)->first;
frost$core$Object* $tmp278 = *$tmp277;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp258, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp278)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
// line 158
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp279 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp280 = *$tmp279;
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[7];
$tmp281($tmp280);
goto block3;
block5:;
// line 160
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp283 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp284 = *$tmp283;
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[7];
$tmp285($tmp284);
goto block2;
block2:;
// line 162
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp287 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp288 = *$tmp287;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp288, param1);
return;

}
org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0) {

// line 166
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp289 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp290 = *$tmp289;
ITable* $tmp291 = ((frost$collections$CollectionView*) $tmp290)->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
frost$core$Int64 $tmp294 = $tmp292(((frost$collections$CollectionView*) $tmp290));
frost$core$Int64 $tmp295 = (frost$core$Int64) {0};
frost$core$Bit $tmp296 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp294, $tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block1; else goto block2;
block1:;
// line 167
org$frostlang$frostc$parser$Token $tmp298 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp298);
goto block2;
block2:;
// line 169
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp299 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp300 = *$tmp299;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp301 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp302 = *$tmp301;
ITable* $tmp303 = ((frost$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
frost$core$Int64 $tmp306 = $tmp304(((frost$collections$CollectionView*) $tmp302));
frost$core$Int64 $tmp307 = (frost$core$Int64) {1};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
org$frostlang$frostc$parser$Token $tmp312 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token($tmp300, $tmp311);
return $tmp312;

}
org$frostlang$frostc$parser$Token$nullable org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token$Kind param1) {

org$frostlang$frostc$parser$Token local0;
// line 173
org$frostlang$frostc$parser$Token $tmp313 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp313;
// line 174
org$frostlang$frostc$parser$Token $tmp314 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp315 = $tmp314.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp316;
$tmp316 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp316->value = $tmp315;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp317->value = param1;
ITable* $tmp318 = ((frost$core$Equatable*) $tmp316)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$core$Bit $tmp321 = $tmp319(((frost$core$Equatable*) $tmp316), ((frost$core$Equatable*) $tmp317));
bool $tmp322 = $tmp321.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp317)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp316)));
if ($tmp322) goto block1; else goto block2;
block1:;
// line 175
org$frostlang$frostc$parser$Token $tmp323 = *(&local0);
return ((org$frostlang$frostc$parser$Token$nullable) { $tmp323, true });
block2:;
// line 177
org$frostlang$frostc$parser$Token $tmp324 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp324);
// line 178
return ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });

}
org$frostlang$frostc$parser$Token$nullable org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token$Kind param1, frost$core$String* param2) {

org$frostlang$frostc$parser$Token local0;
// line 182
org$frostlang$frostc$parser$Token $tmp325 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp325;
// line 183
org$frostlang$frostc$parser$Token $tmp326 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp327 = $tmp326.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp328->value = $tmp327;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp329;
$tmp329 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp329->value = param1;
ITable* $tmp330 = ((frost$core$Equatable*) $tmp328)->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
frost$core$Bit $tmp333 = $tmp331(((frost$core$Equatable*) $tmp328), ((frost$core$Equatable*) $tmp329));
bool $tmp334 = $tmp333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp329)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp328)));
if ($tmp334) goto block1; else goto block2;
block1:;
// line 184
org$frostlang$frostc$parser$Token $tmp335 = *(&local0);
return ((org$frostlang$frostc$parser$Token$nullable) { $tmp335, true });
block2:;
// line 186
org$frostlang$frostc$parser$Token $tmp336 = *(&local0);
frost$core$String* $tmp337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s338, param2);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp337, &$s340);
org$frostlang$frostc$parser$Token $tmp341 = *(&local0);
frost$core$String* $tmp342 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp341);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, $tmp342);
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s345);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp336, $tmp344);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// line 187
return ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });

}
void org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1, frost$core$String* param2) {

// line 191
frost$collections$Stack** $tmp346 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp347 = *$tmp346;
frost$core$Int64 $tmp348 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp347);
frost$core$Int64 $tmp349 = (frost$core$Int64) {0};
frost$core$Bit $tmp350 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp348, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block3; else goto block2;
block3:;
frost$core$Bit* $tmp352 = &param0->reportErrors;
frost$core$Bit $tmp353 = *$tmp352;
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block1; else goto block2;
block1:;
// line 192
frost$threads$MessageQueue** $tmp355 = &param0->errors;
frost$threads$MessageQueue* $tmp356 = *$tmp355;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp357 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0};
frost$io$File** $tmp359 = &param0->path;
frost$io$File* $tmp360 = *$tmp359;
org$frostlang$frostc$Position $tmp361 = param1.position;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$io$File$org$frostlang$frostc$Position$frost$core$String($tmp357, $tmp358, $tmp360, $tmp361, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp356, ((frost$core$Immutable*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 197
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp362 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp363 = *$tmp362;
frost$core$Bit $tmp364 = frost$core$Bit$init$builtin_bit($tmp363 != NULL);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block1; else goto block2;
block1:;
// line 198
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp366 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp367 = *$tmp366;
$fn369 $tmp368 = ($fn369) $tmp367->$class->vtable[3];
$tmp368($tmp367, param1);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 203
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp370 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp371 = *$tmp370;
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block1; else goto block2;
block1:;
// line 204
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp374 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp375 = *$tmp374;
$fn377 $tmp376 = ($fn377) $tmp375->$class->vtable[4];
$tmp376($tmp375, param1);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$startSpeculative(org$frostlang$frostc$parser$Parser* param0) {

// line 209
frost$collections$Stack** $tmp378 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp379 = *$tmp378;
FROST_ASSERT(40 == sizeof(frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp380 = (frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init($tmp380);
frost$collections$Stack$push$frost$collections$Stack$T($tmp379, ((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// line 210
frost$collections$Stack** $tmp381 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp382 = *$tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {0};
frost$core$Object* $tmp384 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp382, $tmp383);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp385 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp386 = *$tmp385;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp384), ((frost$collections$CollectionView*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q($tmp384);
return;

}
void org$frostlang$frostc$parser$Parser$accept(org$frostlang$frostc$parser$Parser* param0) {

// line 214
frost$collections$Stack** $tmp387 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp388 = *$tmp387;
frost$core$Object* $tmp389 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp388);
frost$core$Frost$unref$frost$core$Object$Q($tmp389);
return;

}
void org$frostlang$frostc$parser$Parser$rewind(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
// line 218
frost$collections$Stack** $tmp390 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp391 = *$tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {0};
frost$core$Object* $tmp393 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp391, $tmp392);
ITable* $tmp394 = ((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp393))->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[0];
frost$core$Int64 $tmp397 = $tmp395(((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp393)));
frost$core$Int64 $tmp398 = (frost$core$Int64) {1};
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399 - $tmp400;
frost$core$Int64 $tmp402 = (frost$core$Int64) {$tmp401};
frost$core$Int64 $tmp403 = (frost$core$Int64) {0};
frost$core$Int64 $tmp404 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp406 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp402, $tmp403, $tmp404, $tmp405);
frost$core$Int64 $tmp407 = $tmp406.start;
*(&local0) = $tmp407;
frost$core$Int64 $tmp408 = $tmp406.end;
frost$core$Int64 $tmp409 = $tmp406.step;
frost$core$UInt64 $tmp410 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp409);
frost$core$Int64 $tmp411 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp409);
frost$core$UInt64 $tmp412 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp411);
frost$core$Bit $tmp413 = $tmp406.inclusive;
bool $tmp414 = $tmp413.value;
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
int64_t $tmp416 = $tmp409.value;
int64_t $tmp417 = $tmp415.value;
bool $tmp418 = $tmp416 >= $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block4; else goto block5;
block4:;
if ($tmp414) goto block6; else goto block7;
block6:;
int64_t $tmp421 = $tmp407.value;
int64_t $tmp422 = $tmp408.value;
bool $tmp423 = $tmp421 <= $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block1; else goto block2;
block7:;
int64_t $tmp426 = $tmp407.value;
int64_t $tmp427 = $tmp408.value;
bool $tmp428 = $tmp426 < $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block1; else goto block2;
block5:;
if ($tmp414) goto block8; else goto block9;
block8:;
int64_t $tmp431 = $tmp407.value;
int64_t $tmp432 = $tmp408.value;
bool $tmp433 = $tmp431 >= $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block1; else goto block2;
block9:;
int64_t $tmp436 = $tmp407.value;
int64_t $tmp437 = $tmp408.value;
bool $tmp438 = $tmp436 > $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block1; else goto block2;
block1:;
// line 219
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp441 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp442 = *$tmp441;
frost$collections$Stack** $tmp443 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp444 = *$tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {0};
frost$core$Object* $tmp446 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp444, $tmp445);
frost$core$Int64 $tmp447 = *(&local0);
org$frostlang$frostc$parser$Token $tmp448 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp446), $tmp447);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp442, $tmp448);
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
goto block3;
block3:;
frost$core$Int64 $tmp449 = *(&local0);
if ($tmp420) goto block11; else goto block12;
block11:;
int64_t $tmp450 = $tmp408.value;
int64_t $tmp451 = $tmp449.value;
int64_t $tmp452 = $tmp450 - $tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {$tmp452};
frost$core$UInt64 $tmp454 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp453);
if ($tmp414) goto block13; else goto block14;
block13:;
uint64_t $tmp455 = $tmp454.value;
uint64_t $tmp456 = $tmp410.value;
bool $tmp457 = $tmp455 >= $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block10; else goto block2;
block14:;
uint64_t $tmp460 = $tmp454.value;
uint64_t $tmp461 = $tmp410.value;
bool $tmp462 = $tmp460 > $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block10; else goto block2;
block12:;
int64_t $tmp465 = $tmp449.value;
int64_t $tmp466 = $tmp408.value;
int64_t $tmp467 = $tmp465 - $tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {$tmp467};
frost$core$UInt64 $tmp469 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp468);
if ($tmp414) goto block15; else goto block16;
block15:;
uint64_t $tmp470 = $tmp469.value;
uint64_t $tmp471 = $tmp412.value;
bool $tmp472 = $tmp470 >= $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block10; else goto block2;
block16:;
uint64_t $tmp475 = $tmp469.value;
uint64_t $tmp476 = $tmp412.value;
bool $tmp477 = $tmp475 > $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block10; else goto block2;
block10:;
int64_t $tmp480 = $tmp449.value;
int64_t $tmp481 = $tmp409.value;
int64_t $tmp482 = $tmp480 + $tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {$tmp482};
*(&local0) = $tmp483;
goto block1;
block2:;
frost$core$Frost$unref$frost$core$Object$Q($tmp393);
// line 221
frost$collections$Stack** $tmp484 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp485 = *$tmp484;
frost$core$Object* $tmp486 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp485);
frost$core$Frost$unref$frost$core$Object$Q($tmp486);
return;

}
frost$core$String* org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

// line 225
frost$core$String** $tmp487 = &param0->source;
frost$core$String* $tmp488 = *$tmp487;
frost$core$String$Index $tmp489 = param1.start;
frost$core$String$Index $tmp490 = param1.end;
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp492 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp489, $tmp490, $tmp491);
frost$core$String* $tmp493 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp488, $tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
return $tmp493;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$ASTNode* param2) {

// line 229
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block1:;
// line 230
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// line 232
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp496 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp497 = (frost$core$Int64) {5};
$fn499 $tmp498 = ($fn499) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp500 = $tmp498(param1);
frost$core$Int64 $tmp501 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp502 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp501);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp496, $tmp497, $tmp500, param1, $tmp502, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
return $tmp496;

}
frost$core$String* org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$core$String* local4 = NULL;
frost$core$Char8 local5;
// line 236
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp503 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp503);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$MutableString* $tmp504 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local0) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// line 237
goto block1;
block1:;
// line 238
org$frostlang$frostc$parser$Token $tmp505 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp505;
// line 239
org$frostlang$frostc$parser$Token $tmp506 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp507 = $tmp506.kind;
frost$core$Int64 $tmp508 = $tmp507.$rawValue;
frost$core$Int64 $tmp509 = (frost$core$Int64) {13};
frost$core$Bit $tmp510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp508, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block4; else goto block5;
block4:;
// line 241
org$frostlang$frostc$parser$Token $tmp512 = *(&local1);
frost$core$String* $tmp513 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp512);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$String* $tmp514 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local2) = $tmp513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// line 242
frost$core$String* $tmp515 = *(&local2);
frost$core$Bit $tmp516 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp515, &$s517);
bool $tmp518 = $tmp516.value;
if ($tmp518) goto block6; else goto block7;
block6:;
// line 243
org$frostlang$frostc$parser$Token $tmp519 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp519, &$s520);
// line 244
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp521 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp522 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 246
frost$core$MutableString* $tmp523 = *(&local0);
frost$core$String* $tmp524 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp523, $tmp524);
frost$core$String* $tmp525 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {0};
frost$core$Bit $tmp527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp508, $tmp526);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block8; else goto block9;
block8:;
// line 249
org$frostlang$frostc$parser$Token $tmp529 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp529, &$s530);
// line 250
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {110};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp508, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block10; else goto block11;
block10:;
// line 253
org$frostlang$frostc$parser$Token $tmp535 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp535;
// line 254
org$frostlang$frostc$parser$Token $tmp536 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp537 = $tmp536.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp538;
$tmp538 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp538->value = $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp540 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp539);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp541;
$tmp541 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp541->value = $tmp540;
ITable* $tmp542 = ((frost$core$Equatable*) $tmp538)->$class->itable;
while ($tmp542->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
frost$core$Bit $tmp545 = $tmp543(((frost$core$Equatable*) $tmp538), ((frost$core$Equatable*) $tmp541));
bool $tmp546 = $tmp545.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp541)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp538)));
if ($tmp546) goto block12; else goto block13;
block12:;
// line 255
org$frostlang$frostc$parser$Token $tmp547 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp547, &$s548);
// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp549 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 258
org$frostlang$frostc$parser$Token $tmp550 = *(&local3);
frost$core$String* $tmp551 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp550);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$String* $tmp552 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local4) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// line 259
frost$core$String* $tmp553 = *(&local4);
frost$collections$ListView* $tmp554 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp553);
frost$core$Int64 $tmp555 = (frost$core$Int64) {0};
ITable* $tmp556 = $tmp554->$class->itable;
while ($tmp556->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp556 = $tmp556->next;
}
$fn558 $tmp557 = $tmp556->methods[0];
frost$core$Object* $tmp559 = $tmp557($tmp554, $tmp555);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp559)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp559);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// line 260
frost$core$Char8 $tmp560 = *(&local5);
frost$core$UInt8 $tmp561 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp562 = frost$core$Char8$init$frost$core$UInt8($tmp561);
frost$core$Bit $tmp563 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block15; else goto block16;
block15:;
// line 261
frost$core$MutableString* $tmp565 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp565, &$s566);
goto block14;
block16:;
frost$core$UInt8 $tmp567 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp568 = frost$core$Char8$init$frost$core$UInt8($tmp567);
frost$core$Bit $tmp569 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block17; else goto block18;
block17:;
// line 262
frost$core$MutableString* $tmp571 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp571, &$s572);
goto block14;
block18:;
frost$core$UInt8 $tmp573 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp574 = frost$core$Char8$init$frost$core$UInt8($tmp573);
frost$core$Bit $tmp575 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block19; else goto block20;
block19:;
// line 263
frost$core$MutableString* $tmp577 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp577, &$s578);
goto block14;
block20:;
frost$core$UInt8 $tmp579 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp580 = frost$core$Char8$init$frost$core$UInt8($tmp579);
frost$core$Bit $tmp581 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block21; else goto block22;
block21:;
// line 264
frost$core$MutableString* $tmp583 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp583, &$s584);
goto block14;
block22:;
frost$core$UInt8 $tmp585 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp586 = frost$core$Char8$init$frost$core$UInt8($tmp585);
frost$core$Bit $tmp587 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block23; else goto block24;
block23:;
// line 265
frost$core$MutableString* $tmp589 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp589, &$s590);
goto block14;
block24:;
frost$core$UInt8 $tmp591 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp592 = frost$core$Char8$init$frost$core$UInt8($tmp591);
frost$core$Bit $tmp593 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp592);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block25; else goto block26;
block25:;
// line 266
frost$core$MutableString* $tmp595 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp595, &$s596);
goto block14;
block26:;
frost$core$UInt8 $tmp597 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp598 = frost$core$Char8$init$frost$core$UInt8($tmp597);
frost$core$Bit $tmp599 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp560, $tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block27; else goto block28;
block27:;
// line 267
frost$core$MutableString* $tmp601 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp601, &$s602);
goto block14;
block28:;
// line 269
org$frostlang$frostc$parser$Token $tmp603 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp603, &$s604);
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp605 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp606 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 273
frost$core$MutableString* $tmp607 = *(&local0);
frost$core$String* $tmp608 = *(&local4);
frost$core$String* $tmp609 = *(&local4);
frost$core$String* $tmp610 = *(&local4);
frost$core$String$Index $tmp611 = frost$core$String$get_start$R$frost$core$String$Index($tmp610);
frost$core$String$Index $tmp612 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp609, $tmp611);
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp614 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp612, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp613);
frost$core$String* $tmp615 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp608, $tmp614);
frost$core$MutableString$append$frost$core$String($tmp607, $tmp615);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$String* $tmp616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {104};
frost$core$Bit $tmp618 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp508, $tmp617);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block29; else goto block30;
block29:;
// line 276
org$frostlang$frostc$parser$Token $tmp620 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp620);
// line 277
frost$core$MutableString* $tmp621 = *(&local0);
frost$core$String* $tmp622 = frost$core$MutableString$finish$R$frost$core$String($tmp621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$MutableString* $tmp623 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp622;
block30:;
// line 280
frost$core$MutableString* $tmp624 = *(&local0);
org$frostlang$frostc$parser$Token $tmp625 = *(&local1);
frost$core$String* $tmp626 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp625);
frost$core$MutableString$append$frost$core$String($tmp624, $tmp626);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
goto block3;
block3:;
goto block1;
block2:;
goto block31;
block31:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$alignmentString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$core$String* local4 = NULL;
frost$core$Char8 local5;
// line 287
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp627 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp627);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$MutableString* $tmp628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local0) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// line 288
goto block1;
block1:;
// line 289
org$frostlang$frostc$parser$Token $tmp629 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp629;
// line 290
org$frostlang$frostc$parser$Token $tmp630 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp631 = $tmp630.kind;
frost$core$Int64 $tmp632 = $tmp631.$rawValue;
frost$core$Int64 $tmp633 = (frost$core$Int64) {13};
frost$core$Bit $tmp634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block4; else goto block5;
block4:;
// line 292
org$frostlang$frostc$parser$Token $tmp636 = *(&local1);
frost$core$String* $tmp637 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp636);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$String* $tmp638 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local2) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// line 293
frost$core$String* $tmp639 = *(&local2);
frost$core$Bit $tmp640 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp639, &$s641);
bool $tmp642 = $tmp640.value;
if ($tmp642) goto block6; else goto block7;
block6:;
// line 294
org$frostlang$frostc$parser$Token $tmp643 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp643, &$s644);
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp645 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 297
frost$core$MutableString* $tmp647 = *(&local0);
frost$core$String* $tmp648 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp647, $tmp648);
frost$core$String* $tmp649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {0};
frost$core$Bit $tmp651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block8; else goto block9;
block8:;
// line 300
org$frostlang$frostc$parser$Token $tmp653 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp653, &$s654);
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {110};
frost$core$Bit $tmp657 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp656);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block10; else goto block11;
block10:;
// line 304
org$frostlang$frostc$parser$Token $tmp659 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp659;
// line 305
org$frostlang$frostc$parser$Token $tmp660 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp661 = $tmp660.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp662;
$tmp662 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp662->value = $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp664 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp663);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp665->value = $tmp664;
ITable* $tmp666 = ((frost$core$Equatable*) $tmp662)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[0];
frost$core$Bit $tmp669 = $tmp667(((frost$core$Equatable*) $tmp662), ((frost$core$Equatable*) $tmp665));
bool $tmp670 = $tmp669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp662)));
if ($tmp670) goto block12; else goto block13;
block12:;
// line 306
org$frostlang$frostc$parser$Token $tmp671 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp671, &$s672);
// line 307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp673 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 309
org$frostlang$frostc$parser$Token $tmp674 = *(&local3);
frost$core$String* $tmp675 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp674);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$String* $tmp676 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local4) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// line 310
frost$core$String* $tmp677 = *(&local4);
frost$collections$ListView* $tmp678 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp677);
frost$core$Int64 $tmp679 = (frost$core$Int64) {0};
ITable* $tmp680 = $tmp678->$class->itable;
while ($tmp680->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp680 = $tmp680->next;
}
$fn682 $tmp681 = $tmp680->methods[0];
frost$core$Object* $tmp683 = $tmp681($tmp678, $tmp679);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp683)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp683);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// line 311
frost$core$Char8 $tmp684 = *(&local5);
frost$core$UInt8 $tmp685 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp686 = frost$core$Char8$init$frost$core$UInt8($tmp685);
frost$core$Bit $tmp687 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp686);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block15; else goto block16;
block15:;
// line 312
frost$core$MutableString* $tmp689 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp689, &$s690);
goto block14;
block16:;
frost$core$UInt8 $tmp691 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp692 = frost$core$Char8$init$frost$core$UInt8($tmp691);
frost$core$Bit $tmp693 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp692);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block17; else goto block18;
block17:;
// line 313
frost$core$MutableString* $tmp695 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp695, &$s696);
goto block14;
block18:;
frost$core$UInt8 $tmp697 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp698 = frost$core$Char8$init$frost$core$UInt8($tmp697);
frost$core$Bit $tmp699 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp698);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block19; else goto block20;
block19:;
// line 314
frost$core$MutableString* $tmp701 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp701, &$s702);
goto block14;
block20:;
frost$core$UInt8 $tmp703 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp704 = frost$core$Char8$init$frost$core$UInt8($tmp703);
frost$core$Bit $tmp705 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block21; else goto block22;
block21:;
// line 315
frost$core$MutableString* $tmp707 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp707, &$s708);
goto block14;
block22:;
frost$core$UInt8 $tmp709 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp710 = frost$core$Char8$init$frost$core$UInt8($tmp709);
frost$core$Bit $tmp711 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp710);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block23; else goto block24;
block23:;
// line 316
frost$core$MutableString* $tmp713 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp713, &$s714);
goto block14;
block24:;
frost$core$UInt8 $tmp715 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp716 = frost$core$Char8$init$frost$core$UInt8($tmp715);
frost$core$Bit $tmp717 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp716);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block25; else goto block26;
block25:;
// line 317
frost$core$MutableString* $tmp719 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp719, &$s720);
goto block14;
block26:;
frost$core$UInt8 $tmp721 = (frost$core$UInt8) {58};
frost$core$Char8 $tmp722 = frost$core$Char8$init$frost$core$UInt8($tmp721);
frost$core$Bit $tmp723 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block27; else goto block28;
block27:;
// line 318
frost$core$MutableString* $tmp725 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp725, &$s726);
goto block14;
block28:;
frost$core$UInt8 $tmp727 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp728 = frost$core$Char8$init$frost$core$UInt8($tmp727);
frost$core$Bit $tmp729 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp684, $tmp728);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block29; else goto block30;
block29:;
// line 319
frost$core$MutableString* $tmp731 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp731, &$s732);
goto block14;
block30:;
// line 321
org$frostlang$frostc$parser$Token $tmp733 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp733, &$s734);
// line 322
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp735 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 325
frost$core$MutableString* $tmp737 = *(&local0);
frost$core$String* $tmp738 = *(&local4);
frost$core$String* $tmp739 = *(&local4);
frost$core$String* $tmp740 = *(&local4);
frost$core$String$Index $tmp741 = frost$core$String$get_start$R$frost$core$String$Index($tmp740);
frost$core$String$Index $tmp742 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp739, $tmp741);
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp744 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp742, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp743);
frost$core$String* $tmp745 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp738, $tmp744);
frost$core$MutableString$append$frost$core$String($tmp737, $tmp745);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$String* $tmp746 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp747 = (frost$core$Int64) {99};
frost$core$Bit $tmp748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block31; else goto block32;
block31:;
// line 328
org$frostlang$frostc$parser$Token $tmp750 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp750);
// line 329
frost$core$MutableString* $tmp751 = *(&local0);
frost$core$String* $tmp752 = frost$core$MutableString$finish$R$frost$core$String($tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$MutableString* $tmp753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp752;
block32:;
frost$core$Int64 $tmp754 = (frost$core$Int64) {104};
frost$core$Bit $tmp755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block33; else goto block34;
block33:;
// line 332
org$frostlang$frostc$parser$Token $tmp757 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp757);
// line 333
frost$core$MutableString* $tmp758 = *(&local0);
frost$core$String* $tmp759 = frost$core$MutableString$finish$R$frost$core$String($tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$MutableString* $tmp760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp759;
block34:;
// line 336
frost$core$MutableString* $tmp761 = *(&local0);
org$frostlang$frostc$parser$Token $tmp762 = *(&local1);
frost$core$String* $tmp763 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp762);
frost$core$MutableString$append$frost$core$String($tmp761, $tmp763);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
goto block3;
block3:;
goto block1;
block2:;
goto block35;
block35:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 344
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp764 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp765 = (frost$core$Int64) {16};
$fn767 $tmp766 = ($fn767) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp768 = $tmp766(param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp764, $tmp765, $tmp768, param1, &$s769);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
org$frostlang$frostc$ASTNode* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local0) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// line 345
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp771 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {9};
$fn774 $tmp773 = ($fn774) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp775 = $tmp773(param1);
org$frostlang$frostc$ASTNode* $tmp776 = *(&local0);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp777 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp777);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp771, $tmp772, $tmp775, $tmp776, $tmp777);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$ASTNode* $tmp778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local1) = $tmp771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// line 346
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp780 = (frost$core$Int64) {46};
$fn782 $tmp781 = ($fn782) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp783 = $tmp781(param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp779, $tmp780, $tmp783, &$s784);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$ASTNode* $tmp785 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local2) = $tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// line 347
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp786 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp787 = (frost$core$Int64) {5};
$fn789 $tmp788 = ($fn789) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp790 = $tmp788(param1);
org$frostlang$frostc$ASTNode* $tmp791 = *(&local1);
frost$core$Int64 $tmp792 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp793 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp792);
org$frostlang$frostc$ASTNode* $tmp794 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp786, $tmp787, $tmp790, $tmp791, $tmp793, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
org$frostlang$frostc$ASTNode* $tmp795 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp786;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$core$MutableString* local4 = NULL;
org$frostlang$frostc$parser$Token local5;
frost$core$String* local6 = NULL;
org$frostlang$frostc$parser$Token local7;
frost$core$String* local8 = NULL;
frost$core$Char8 local9;
frost$core$Bit local10;
org$frostlang$frostc$ASTNode* local11 = NULL;
frost$core$String* local12 = NULL;
frost$core$String* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$collections$Array* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$ASTNode* local19 = NULL;
frost$collections$Array* local20 = NULL;
frost$core$String* local21 = NULL;
frost$core$Bit* $tmp798 = &param0->allowLambdas;
frost$core$Bit $tmp799 = *$tmp798;
// line 352
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp800 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp801 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp802 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp801);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp800, param0, $tmp802);
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// line 353
org$frostlang$frostc$parser$Token $tmp804 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp804;
// line 354
org$frostlang$frostc$parser$Token $tmp805 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp806 = $tmp805.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp807;
$tmp807 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp807->value = $tmp806;
frost$core$Int64 $tmp808 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$Kind $tmp809 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp808);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp810;
$tmp810 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp810->value = $tmp809;
ITable* $tmp811 = ((frost$core$Equatable*) $tmp807)->$class->itable;
while ($tmp811->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp811 = $tmp811->next;
}
$fn813 $tmp812 = $tmp811->methods[1];
frost$core$Bit $tmp814 = $tmp812(((frost$core$Equatable*) $tmp807), ((frost$core$Equatable*) $tmp810));
bool $tmp815 = $tmp814.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp810)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp807)));
if ($tmp815) goto block6; else goto block5;
block6:;
org$frostlang$frostc$parser$Token $tmp816 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp817 = $tmp816.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp818;
$tmp818 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp818->value = $tmp817;
frost$core$Int64 $tmp819 = (frost$core$Int64) {7};
org$frostlang$frostc$parser$Token$Kind $tmp820 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp819);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp821;
$tmp821 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp821->value = $tmp820;
ITable* $tmp822 = ((frost$core$Equatable*) $tmp818)->$class->itable;
while ($tmp822->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp822 = $tmp822->next;
}
$fn824 $tmp823 = $tmp822->methods[1];
frost$core$Bit $tmp825 = $tmp823(((frost$core$Equatable*) $tmp818), ((frost$core$Equatable*) $tmp821));
bool $tmp826 = $tmp825.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp821)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp818)));
if ($tmp826) goto block4; else goto block5;
block4:;
// line 355
org$frostlang$frostc$parser$Token $tmp827 = *(&local2);
org$frostlang$frostc$parser$Token $tmp828 = *(&local2);
frost$core$String* $tmp829 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp828);
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s831, $tmp829);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp830, &$s833);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp827, $tmp832);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// line 356
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
// line 358
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp835 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 359
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp836 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp836);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$MutableString* $tmp837 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local4) = $tmp836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// line 360
goto block7;
block7:;
// line 361
org$frostlang$frostc$parser$Token $tmp838 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp838;
// line 362
org$frostlang$frostc$parser$Token $tmp839 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp840 = $tmp839.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp841;
$tmp841 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp841->value = $tmp840;
org$frostlang$frostc$parser$Token $tmp842 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp843 = $tmp842.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp844;
$tmp844 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp844->value = $tmp843;
ITable* $tmp845 = ((frost$core$Equatable*) $tmp841)->$class->itable;
while ($tmp845->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp845 = $tmp845->next;
}
$fn847 $tmp846 = $tmp845->methods[0];
frost$core$Bit $tmp848 = $tmp846(((frost$core$Equatable*) $tmp841), ((frost$core$Equatable*) $tmp844));
bool $tmp849 = $tmp848.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp844)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp841)));
if ($tmp849) goto block9; else goto block10;
block9:;
// line 363
goto block8;
block10:;
// line 365
org$frostlang$frostc$parser$Token $tmp850 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp851 = $tmp850.kind;
frost$core$Int64 $tmp852 = $tmp851.$rawValue;
frost$core$Int64 $tmp853 = (frost$core$Int64) {13};
frost$core$Bit $tmp854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp852, $tmp853);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block12; else goto block13;
block12:;
// line 367
org$frostlang$frostc$parser$Token $tmp856 = *(&local5);
frost$core$String* $tmp857 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp856);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$String* $tmp858 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local6) = $tmp857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// line 368
frost$core$String* $tmp859 = *(&local6);
frost$core$Bit $tmp860 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp859, &$s861);
bool $tmp862 = $tmp860.value;
if ($tmp862) goto block14; else goto block15;
block14:;
// line 369
org$frostlang$frostc$parser$Token $tmp863 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp863, &$s864);
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp865 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp866 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp867 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block15:;
// line 372
frost$core$MutableString* $tmp869 = *(&local4);
frost$core$String* $tmp870 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp869, $tmp870);
frost$core$String* $tmp871 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local6) = ((frost$core$String*) NULL);
goto block11;
block13:;
frost$core$Int64 $tmp872 = (frost$core$Int64) {0};
frost$core$Bit $tmp873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp852, $tmp872);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block16; else goto block17;
block16:;
// line 375
org$frostlang$frostc$parser$Token $tmp875 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp875, &$s876);
// line 376
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp877 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp878 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp879 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp880 = (frost$core$Int64) {110};
frost$core$Bit $tmp881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp852, $tmp880);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block18; else goto block19;
block18:;
// line 379
org$frostlang$frostc$parser$Token $tmp883 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local7) = $tmp883;
// line 380
org$frostlang$frostc$parser$Token $tmp884 = *(&local7);
org$frostlang$frostc$parser$Token$Kind $tmp885 = $tmp884.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp886;
$tmp886 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp886->value = $tmp885;
frost$core$Int64 $tmp887 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp888 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp887);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp889;
$tmp889 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp889->value = $tmp888;
ITable* $tmp890 = ((frost$core$Equatable*) $tmp886)->$class->itable;
while ($tmp890->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp890 = $tmp890->next;
}
$fn892 $tmp891 = $tmp890->methods[0];
frost$core$Bit $tmp893 = $tmp891(((frost$core$Equatable*) $tmp886), ((frost$core$Equatable*) $tmp889));
bool $tmp894 = $tmp893.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp889)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp886)));
if ($tmp894) goto block20; else goto block21;
block20:;
// line 381
org$frostlang$frostc$parser$Token $tmp895 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp895, &$s896);
// line 382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp897 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp899 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
// line 384
org$frostlang$frostc$parser$Token $tmp900 = *(&local7);
frost$core$String* $tmp901 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp900);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$String* $tmp902 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local8) = $tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// line 385
frost$core$String* $tmp903 = *(&local8);
frost$collections$ListView* $tmp904 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp903);
frost$core$Int64 $tmp905 = (frost$core$Int64) {0};
ITable* $tmp906 = $tmp904->$class->itable;
while ($tmp906->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[0];
frost$core$Object* $tmp909 = $tmp907($tmp904, $tmp905);
*(&local9) = ((frost$core$Char8$wrapper*) $tmp909)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp909);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// line 386
frost$core$Char8 $tmp910 = *(&local9);
frost$core$UInt8 $tmp911 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp912 = frost$core$Char8$init$frost$core$UInt8($tmp911);
frost$core$Bit $tmp913 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp912);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block23; else goto block24;
block23:;
// line 387
frost$core$MutableString* $tmp915 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp915, &$s916);
goto block22;
block24:;
frost$core$UInt8 $tmp917 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp918 = frost$core$Char8$init$frost$core$UInt8($tmp917);
frost$core$Bit $tmp919 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp918);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block25; else goto block26;
block25:;
// line 388
frost$core$MutableString* $tmp921 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp921, &$s922);
goto block22;
block26:;
frost$core$UInt8 $tmp923 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp924 = frost$core$Char8$init$frost$core$UInt8($tmp923);
frost$core$Bit $tmp925 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp924);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block27; else goto block28;
block27:;
// line 389
frost$core$MutableString* $tmp927 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp927, &$s928);
goto block22;
block28:;
frost$core$UInt8 $tmp929 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp930 = frost$core$Char8$init$frost$core$UInt8($tmp929);
frost$core$Bit $tmp931 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp930);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block29; else goto block30;
block29:;
// line 390
frost$core$MutableString* $tmp933 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp933, &$s934);
goto block22;
block30:;
frost$core$UInt8 $tmp935 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp936 = frost$core$Char8$init$frost$core$UInt8($tmp935);
frost$core$Bit $tmp937 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp936);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block31; else goto block32;
block31:;
// line 391
frost$core$MutableString* $tmp939 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp939, &$s940);
goto block22;
block32:;
frost$core$UInt8 $tmp941 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp942 = frost$core$Char8$init$frost$core$UInt8($tmp941);
frost$core$Bit $tmp943 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp942);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block33; else goto block34;
block33:;
// line 392
frost$core$MutableString* $tmp945 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp945, &$s946);
goto block22;
block34:;
frost$core$UInt8 $tmp947 = (frost$core$UInt8) {123};
frost$core$Char8 $tmp948 = frost$core$Char8$init$frost$core$UInt8($tmp947);
frost$core$Bit $tmp949 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp910, $tmp948);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block35; else goto block36;
block35:;
// line 395
frost$core$Bit* $tmp951 = &param0->allowLambdas;
frost$core$Bit $tmp952 = *$tmp951;
*(&local10) = $tmp952;
// line 396
frost$core$Bit $tmp953 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp954 = &param0->allowLambdas;
*$tmp954 = $tmp953;
// line 397
org$frostlang$frostc$ASTNode* $tmp955 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlang$frostc$ASTNode* $tmp956 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local11) = $tmp955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 398
frost$core$Bit $tmp957 = *(&local10);
frost$core$Bit* $tmp958 = &param0->allowLambdas;
*$tmp958 = $tmp957;
// line 399
org$frostlang$frostc$ASTNode* $tmp959 = *(&local11);
frost$core$Bit $tmp960 = frost$core$Bit$init$builtin_bit($tmp959 == NULL);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block37; else goto block38;
block37:;
// line 400
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp962 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp963 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp964 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp965 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp966 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block38:;
// line 402
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp967 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local12) = ((frost$core$String*) NULL);
// line 403
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp968 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local13) = ((frost$core$String*) NULL);
// line 404
frost$core$Int64 $tmp969 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp970 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp969);
org$frostlang$frostc$parser$Token$nullable $tmp971 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp970);
frost$core$Bit $tmp972 = frost$core$Bit$init$builtin_bit($tmp971.nonnull);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block39; else goto block40;
block39:;
// line 405
org$frostlang$frostc$parser$Token $tmp974 = *(&local2);
frost$core$String* $tmp975 = org$frostlang$frostc$parser$Parser$alignmentString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$String* $tmp976 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local12) = $tmp975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
goto block40;
block40:;
// line 407
frost$core$Int64 $tmp977 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp978 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp977);
org$frostlang$frostc$parser$Token$nullable $tmp979 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp978);
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit($tmp979.nonnull);
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block41; else goto block42;
block41:;
// line 408
org$frostlang$frostc$parser$Token $tmp982 = *(&local2);
frost$core$String* $tmp983 = org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp982);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$String* $tmp984 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local13) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// line 409
frost$core$String* $tmp985 = *(&local13);
frost$core$Bit $tmp986 = frost$core$Bit$init$builtin_bit($tmp985 == NULL);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block43; else goto block44;
block43:;
// line 410
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp988 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp989 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local12) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp990 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp991 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp992 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp993 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp994 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block44:;
// line 412
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp995 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp996 = (frost$core$Int64) {46};
org$frostlang$frostc$ASTNode* $tmp997 = *(&local11);
$fn999 $tmp998 = ($fn999) $tmp997->$class->vtable[2];
org$frostlang$frostc$Position $tmp1000 = $tmp998($tmp997);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp995, $tmp996, $tmp1000, &$s1001);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
org$frostlang$frostc$ASTNode* $tmp1002 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local14) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// line 414
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1003 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp1005 = *(&local11);
$fn1007 $tmp1006 = ($fn1007) $tmp1005->$class->vtable[2];
org$frostlang$frostc$Position $tmp1008 = $tmp1006($tmp1005);
org$frostlang$frostc$ASTNode* $tmp1009 = *(&local11);
frost$core$Int64 $tmp1010 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp1011 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp1010);
org$frostlang$frostc$ASTNode* $tmp1012 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1003, $tmp1004, $tmp1008, $tmp1009, $tmp1011, $tmp1012);
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$ASTNode* $tmp1013 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local15) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// line 416
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1014 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1015 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1016 = *(&local11);
$fn1018 $tmp1017 = ($fn1018) $tmp1016->$class->vtable[2];
org$frostlang$frostc$Position $tmp1019 = $tmp1017($tmp1016);
org$frostlang$frostc$ASTNode* $tmp1020 = *(&local15);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1014, $tmp1015, $tmp1019, $tmp1020, &$s1021);
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local16) = $tmp1014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// line 417
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1023 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1023);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$collections$Array* $tmp1024 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local17) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// line 418
frost$collections$Array* $tmp1025 = *(&local17);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1026 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1027 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1028 = *(&local2);
org$frostlang$frostc$Position $tmp1029 = $tmp1028.position;
frost$core$String* $tmp1030 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1026, $tmp1027, $tmp1029, $tmp1030);
frost$collections$Array$add$frost$collections$Array$T($tmp1025, ((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 419
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1031 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp1033 = *(&local11);
$fn1035 $tmp1034 = ($fn1035) $tmp1033->$class->vtable[2];
org$frostlang$frostc$Position $tmp1036 = $tmp1034($tmp1033);
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local16);
frost$collections$Array* $tmp1038 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp1039 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1038);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1031, $tmp1032, $tmp1036, $tmp1037, $tmp1039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local11) = $tmp1031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$collections$Array* $tmp1041 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block42;
block42:;
// line 422
frost$core$Int64 $tmp1045 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp1046 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1045);
org$frostlang$frostc$parser$Token$nullable $tmp1047 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1046, &$s1048);
frost$core$Bit $tmp1049 = frost$core$Bit$init$builtin_bit(!$tmp1047.nonnull);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block45; else goto block46;
block45:;
// line 423
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1051 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp1052 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local12) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1053 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1054 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1055 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1057 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block46:;
// line 425
frost$core$String* $tmp1058 = *(&local12);
frost$core$Bit $tmp1059 = frost$core$Bit$init$builtin_bit($tmp1058 != NULL);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block47; else goto block48;
block47:;
// line 426
frost$core$String* $tmp1061 = *(&local13);
frost$core$Bit $tmp1062 = frost$core$Bit$init$builtin_bit($tmp1061 == NULL);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block49; else goto block50;
block49:;
// line 427
org$frostlang$frostc$ASTNode* $tmp1064 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1065 = org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1064);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
org$frostlang$frostc$ASTNode* $tmp1066 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local11) = $tmp1065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
goto block50;
block50:;
// line 429
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1067 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1068 = (frost$core$Int64) {46};
org$frostlang$frostc$ASTNode* $tmp1069 = *(&local11);
$fn1071 $tmp1070 = ($fn1071) $tmp1069->$class->vtable[2];
org$frostlang$frostc$Position $tmp1072 = $tmp1070($tmp1069);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1067, $tmp1068, $tmp1072, &$s1073);
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$ASTNode* $tmp1074 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local18) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// line 430
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1075 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1076 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1077 = *(&local11);
$fn1079 $tmp1078 = ($fn1079) $tmp1077->$class->vtable[2];
org$frostlang$frostc$Position $tmp1080 = $tmp1078($tmp1077);
org$frostlang$frostc$ASTNode* $tmp1081 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1075, $tmp1076, $tmp1080, $tmp1081, &$s1082);
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
org$frostlang$frostc$ASTNode* $tmp1083 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local19) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// line 431
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1084 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1084);
*(&local20) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$collections$Array* $tmp1085 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local20) = $tmp1084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// line 432
frost$collections$Array* $tmp1086 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1087 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp1086, ((frost$core$Object*) $tmp1087));
// line 433
frost$collections$Array* $tmp1088 = *(&local20);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1089 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1090 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1091 = *(&local2);
org$frostlang$frostc$Position $tmp1092 = $tmp1091.position;
frost$core$String* $tmp1093 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1089, $tmp1090, $tmp1092, $tmp1093);
frost$collections$Array$add$frost$collections$Array$T($tmp1088, ((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// line 434
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1094 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp1096 = *(&local11);
$fn1098 $tmp1097 = ($fn1098) $tmp1096->$class->vtable[2];
org$frostlang$frostc$Position $tmp1099 = $tmp1097($tmp1096);
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local19);
frost$collections$Array* $tmp1101 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp1102 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1101);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1094, $tmp1095, $tmp1099, $tmp1100, $tmp1102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
org$frostlang$frostc$ASTNode* $tmp1103 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local11) = $tmp1094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$collections$Array* $tmp1104 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1106 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block48;
block48:;
// line 437
frost$core$MutableString* $tmp1107 = *(&local4);
frost$core$String* $tmp1108 = frost$core$MutableString$finish$R$frost$core$String($tmp1107);
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$String* $tmp1109 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local21) = $tmp1108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// line 438
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1110 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$MutableString* $tmp1111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local4) = $tmp1110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// line 439
frost$core$String* $tmp1112 = *(&local21);
ITable* $tmp1114 = ((frost$core$Equatable*) $tmp1112)->$class->itable;
while ($tmp1114->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1114 = $tmp1114->next;
}
$fn1116 $tmp1115 = $tmp1114->methods[1];
frost$core$Bit $tmp1117 = $tmp1115(((frost$core$Equatable*) $tmp1112), ((frost$core$Equatable*) &$s1113));
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block51; else goto block54;
block54:;
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local3);
frost$core$Bit $tmp1120 = frost$core$Bit$init$builtin_bit($tmp1119 != NULL);
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block51; else goto block53;
block51:;
// line 440
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local3);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1123 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1124 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1125 = *(&local2);
org$frostlang$frostc$Position $tmp1126 = $tmp1125.position;
frost$core$String* $tmp1127 = *(&local21);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1123, $tmp1124, $tmp1126, $tmp1127);
org$frostlang$frostc$ASTNode* $tmp1128 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1122, $tmp1123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
org$frostlang$frostc$ASTNode* $tmp1129 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local3) = $tmp1128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
// line 442
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp1131 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1132 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1130, $tmp1131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local3) = $tmp1132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
goto block52;
block53:;
// line 1
// line 445
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1135 = org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local3) = $tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
goto block52;
block52:;
frost$core$String* $tmp1137 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local21) = ((frost$core$String*) NULL);
frost$core$String* $tmp1138 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp1139 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local12) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1140 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block36:;
// line 449
org$frostlang$frostc$parser$Token $tmp1141 = *(&local5);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1141, &$s1142);
// line 450
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1143 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1144 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block22:;
// line 453
frost$core$MutableString* $tmp1147 = *(&local4);
frost$core$String* $tmp1148 = *(&local8);
frost$core$String* $tmp1149 = *(&local8);
frost$core$String* $tmp1150 = *(&local8);
frost$core$String$Index $tmp1151 = frost$core$String$get_start$R$frost$core$String$Index($tmp1150);
frost$core$String$Index $tmp1152 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp1149, $tmp1151);
frost$core$Bit $tmp1153 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1154 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1152, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1153);
frost$core$String* $tmp1155 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1148, $tmp1154);
frost$core$MutableString$append$frost$core$String($tmp1147, $tmp1155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$String* $tmp1156 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local8) = ((frost$core$String*) NULL);
goto block11;
block19:;
// line 456
frost$core$MutableString* $tmp1157 = *(&local4);
org$frostlang$frostc$parser$Token $tmp1158 = *(&local5);
frost$core$String* $tmp1159 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1158);
frost$core$MutableString$append$frost$core$String($tmp1157, $tmp1159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
goto block11;
block11:;
goto block7;
block8:;
// line 460
org$frostlang$frostc$ASTNode* $tmp1160 = *(&local3);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1161 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1162 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1163 = *(&local2);
org$frostlang$frostc$Position $tmp1164 = $tmp1163.position;
frost$core$MutableString* $tmp1165 = *(&local4);
frost$core$String* $tmp1166 = frost$core$MutableString$finish$R$frost$core$String($tmp1165);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1161, $tmp1162, $tmp1164, $tmp1166);
org$frostlang$frostc$ASTNode* $tmp1167 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1160, $tmp1161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$MutableString* $tmp1168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = $tmp1167;
goto block1;
block1:;
frost$core$Bit* $tmp1171 = &param0->allowLambdas;
frost$core$Bit $tmp1172 = *$tmp1171;
frost$core$Bit $tmp1173 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp1172, $tmp799);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block3;
block2:;
org$frostlang$frostc$ASTNode* $tmp1175 = *(&local0);
return $tmp1175;
block3:;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {351};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1177, $tmp1176, &$s1178);
abort(); // unreachable

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$parser$Token local2;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$parser$Token$nullable local5;
org$frostlang$frostc$ASTNode* local6 = NULL;
frost$core$Bit local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$core$Bit local10;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
frost$collections$Array* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
// line 469
frost$core$Int64 $tmp1179 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1180 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1179);
org$frostlang$frostc$parser$Token$nullable $tmp1181 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1180, &$s1182);
*(&local0) = $tmp1181;
// line 470
org$frostlang$frostc$parser$Token$nullable $tmp1183 = *(&local0);
frost$core$Bit $tmp1184 = frost$core$Bit$init$builtin_bit(!$tmp1183.nonnull);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block1; else goto block2;
block1:;
// line 471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 473
org$frostlang$frostc$parser$Token $tmp1186 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp1186;
// line 474
org$frostlang$frostc$parser$Token $tmp1187 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp1188 = $tmp1187.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1189;
$tmp1189 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1189->value = $tmp1188;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1191 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1190);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1192;
$tmp1192 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1192->value = $tmp1191;
ITable* $tmp1193 = ((frost$core$Equatable*) $tmp1189)->$class->itable;
while ($tmp1193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1193 = $tmp1193->next;
}
$fn1195 $tmp1194 = $tmp1193->methods[0];
frost$core$Bit $tmp1196 = $tmp1194(((frost$core$Equatable*) $tmp1189), ((frost$core$Equatable*) $tmp1192));
bool $tmp1197 = $tmp1196.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1192)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1189)));
if ($tmp1197) goto block3; else goto block4;
block3:;
// line 476
org$frostlang$frostc$parser$Token $tmp1198 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp1198;
// line 477
org$frostlang$frostc$parser$Token $tmp1199 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp1200 = $tmp1199.kind;
frost$core$Int64 $tmp1201 = $tmp1200.$rawValue;
frost$core$Int64 $tmp1202 = (frost$core$Int64) {99};
frost$core$Bit $tmp1203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1202);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block6; else goto block7;
block6:;
// line 480
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1205);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$collections$Array* $tmp1206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local3) = $tmp1205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// line 481
org$frostlang$frostc$ASTNode* $tmp1207 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
org$frostlang$frostc$ASTNode* $tmp1208 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local4) = $tmp1207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// line 482
org$frostlang$frostc$ASTNode* $tmp1209 = *(&local4);
frost$core$Bit $tmp1210 = frost$core$Bit$init$builtin_bit($tmp1209 == NULL);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block8; else goto block9;
block8:;
// line 483
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1212 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1213 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 485
frost$collections$Array* $tmp1214 = *(&local3);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1216 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token $tmp1217 = *(&local1);
org$frostlang$frostc$Position $tmp1218 = $tmp1217.position;
org$frostlang$frostc$parser$Token $tmp1219 = *(&local1);
frost$core$String* $tmp1220 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1219);
org$frostlang$frostc$ASTNode* $tmp1221 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1215, $tmp1216, $tmp1218, $tmp1220, $tmp1221);
frost$collections$Array$add$frost$collections$Array$T($tmp1214, ((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
// line 486
goto block10;
block10:;
frost$core$Int64 $tmp1222 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1223 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1222);
org$frostlang$frostc$parser$Token$nullable $tmp1224 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1223);
frost$core$Bit $tmp1225 = frost$core$Bit$init$builtin_bit($tmp1224.nonnull);
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block11; else goto block12;
block11:;
// line 487
frost$core$Int64 $tmp1227 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1228 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1227);
org$frostlang$frostc$parser$Token$nullable $tmp1229 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1228, &$s1230);
*(&local5) = $tmp1229;
// line 488
frost$core$Int64 $tmp1231 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1232 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1231);
org$frostlang$frostc$parser$Token$nullable $tmp1233 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1232, &$s1234);
frost$core$Bit $tmp1235 = frost$core$Bit$init$builtin_bit(!$tmp1233.nonnull);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block13; else goto block14;
block13:;
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1237 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1238 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 491
org$frostlang$frostc$ASTNode* $tmp1239 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
org$frostlang$frostc$ASTNode* $tmp1240 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local6) = $tmp1239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// line 492
org$frostlang$frostc$ASTNode* $tmp1241 = *(&local6);
frost$core$Bit $tmp1242 = frost$core$Bit$init$builtin_bit($tmp1241 == NULL);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block15; else goto block16;
block15:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1244 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1246 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 495
frost$collections$Array* $tmp1247 = *(&local3);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1248 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1249 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1250 = *(&local5);
org$frostlang$frostc$Position $tmp1251 = ((org$frostlang$frostc$parser$Token) $tmp1250.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1252 = *(&local5);
frost$core$String* $tmp1253 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1252.value));
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1248, $tmp1249, $tmp1251, $tmp1253, $tmp1254);
frost$collections$Array$add$frost$collections$Array$T($tmp1247, ((frost$core$Object*) $tmp1248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
org$frostlang$frostc$ASTNode* $tmp1255 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block10;
block12:;
// line 500
// line 501
frost$collections$Array* $tmp1256 = *(&local3);
ITable* $tmp1257 = ((frost$collections$CollectionView*) $tmp1256)->$class->itable;
while ($tmp1257->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1257 = $tmp1257->next;
}
$fn1259 $tmp1258 = $tmp1257->methods[0];
frost$core$Int64 $tmp1260 = $tmp1258(((frost$collections$CollectionView*) $tmp1256));
frost$core$Int64 $tmp1261 = (frost$core$Int64) {1};
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 > $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block17; else goto block19;
block17:;
// line 502
frost$core$Int64 $tmp1267 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1268 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1267);
org$frostlang$frostc$parser$Token$nullable $tmp1269 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1268, &$s1270);
frost$core$Bit $tmp1271 = frost$core$Bit$init$builtin_bit(!$tmp1269.nonnull);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block20; else goto block21;
block20:;
// line 503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
goto block18;
block19:;
// line 1
// line 507
frost$core$Int64 $tmp1275 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1276 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1275);
org$frostlang$frostc$parser$Token$nullable $tmp1277 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1276);
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit(!$tmp1277.nonnull);
*(&local7) = $tmp1278;
goto block18;
block18:;
// line 509
frost$core$Int64 $tmp1279 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1280 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1279);
org$frostlang$frostc$parser$Token$nullable $tmp1281 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1280, &$s1282);
frost$core$Bit $tmp1283 = frost$core$Bit$init$builtin_bit(!$tmp1281.nonnull);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block22; else goto block23;
block22:;
// line 510
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1286 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block23:;
// line 512
org$frostlang$frostc$ASTNode* $tmp1287 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
org$frostlang$frostc$ASTNode* $tmp1288 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local8) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// line 513
org$frostlang$frostc$ASTNode* $tmp1289 = *(&local8);
frost$core$Bit $tmp1290 = frost$core$Bit$init$builtin_bit($tmp1289 == NULL);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block24; else goto block25;
block24:;
// line 514
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1292 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1294 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 516
frost$core$Bit $tmp1295 = *(&local7);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block26; else goto block27;
block26:;
// line 517
frost$core$Int64 $tmp1297 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1298 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1297);
org$frostlang$frostc$parser$Token$nullable $tmp1299 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1298, &$s1300);
goto block27;
block27:;
// line 519
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1301 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp1303 = *(&local0);
org$frostlang$frostc$Position $tmp1304 = ((org$frostlang$frostc$parser$Token) $tmp1303.value).position;
frost$collections$Array* $tmp1305 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1306 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1305);
org$frostlang$frostc$ASTNode* $tmp1307 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1301, $tmp1302, $tmp1304, $tmp1306, $tmp1307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1309 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1310 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local3) = ((frost$collections$Array*) NULL);
return $tmp1301;
block7:;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {109};
frost$core$Bit $tmp1312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1311);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block28; else goto block29;
block28:;
// line 524
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1314 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1314);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$collections$Array* $tmp1315 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local9) = $tmp1314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// line 525
frost$collections$Array* $tmp1316 = *(&local9);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1317 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1319 = *(&local1);
org$frostlang$frostc$Position $tmp1320 = $tmp1319.position;
org$frostlang$frostc$parser$Token $tmp1321 = *(&local1);
frost$core$String* $tmp1322 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1321);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1317, $tmp1318, $tmp1320, $tmp1322);
frost$collections$Array$add$frost$collections$Array$T($tmp1316, ((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
// line 526
frost$core$Bit $tmp1323 = frost$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1323;
// line 527
goto block30;
block30:;
// line 528
org$frostlang$frostc$ASTNode* $tmp1324 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$ASTNode* $tmp1325 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local11) = $tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// line 529
org$frostlang$frostc$ASTNode* $tmp1326 = *(&local11);
frost$core$Bit $tmp1327 = frost$core$Bit$init$builtin_bit($tmp1326 == NULL);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block33; else goto block34;
block33:;
// line 530
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1329 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1330 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// line 532
org$frostlang$frostc$ASTNode* $tmp1331 = *(&local11);
frost$core$Int64* $tmp1332 = &$tmp1331->$rawValue;
frost$core$Int64 $tmp1333 = *$tmp1332;
frost$core$Int64 $tmp1334 = (frost$core$Int64) {22};
frost$core$Bit $tmp1335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1333, $tmp1334);
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block36; else goto block37;
block36:;
goto block35;
block37:;
// line 537
frost$core$Bit $tmp1337 = frost$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1337;
goto block35;
block35:;
// line 540
frost$collections$Array* $tmp1338 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp1339 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp1338, ((frost$core$Object*) $tmp1339));
org$frostlang$frostc$ASTNode* $tmp1340 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block31;
block31:;
frost$core$Int64 $tmp1341 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1342 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1341);
org$frostlang$frostc$parser$Token$nullable $tmp1343 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1342);
frost$core$Bit $tmp1344 = frost$core$Bit$init$builtin_bit($tmp1343.nonnull);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block30; else goto block32;
block32:;
// line 543
frost$core$Int64 $tmp1346 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1347 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1346);
org$frostlang$frostc$parser$Token$nullable $tmp1348 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1347, &$s1349);
frost$core$Bit $tmp1350 = frost$core$Bit$init$builtin_bit(!$tmp1348.nonnull);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block38; else goto block39;
block38:;
// line 544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1352 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block39:;
// line 546
frost$core$Bit $tmp1353 = *(&local10);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block42; else goto block41;
block42:;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1356 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1355);
org$frostlang$frostc$parser$Token$nullable $tmp1357 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1356);
frost$core$Bit $tmp1358 = frost$core$Bit$init$builtin_bit($tmp1357.nonnull);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block40; else goto block41;
block40:;
// line 547
org$frostlang$frostc$ASTNode* $tmp1360 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
org$frostlang$frostc$ASTNode* $tmp1361 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local12) = $tmp1360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// line 548
org$frostlang$frostc$ASTNode* $tmp1362 = *(&local12);
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit($tmp1362 == NULL);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block43; else goto block44;
block43:;
// line 549
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1365 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1366 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 551
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1367 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1368 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp1369 = *(&local0);
org$frostlang$frostc$Position $tmp1370 = ((org$frostlang$frostc$parser$Token) $tmp1369.value).position;
frost$collections$Array* $tmp1371 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1372 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1371);
org$frostlang$frostc$ASTNode* $tmp1373 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1367, $tmp1368, $tmp1370, $tmp1372, $tmp1373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
org$frostlang$frostc$ASTNode* $tmp1374 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1375 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local9) = ((frost$collections$Array*) NULL);
return $tmp1367;
block41:;
// line 554
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1376 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1377 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1378 = *(&local0);
org$frostlang$frostc$Position $tmp1379 = ((org$frostlang$frostc$parser$Token) $tmp1378.value).position;
frost$collections$Array* $tmp1380 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1381 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1380);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1376, $tmp1377, $tmp1379, $tmp1381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$collections$Array* $tmp1382 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local9) = ((frost$collections$Array*) NULL);
return $tmp1376;
block29:;
frost$core$Int64 $tmp1383 = (frost$core$Int64) {108};
frost$core$Bit $tmp1384 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1383);
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block45; else goto block46;
block45:;
// line 558
frost$core$Int64 $tmp1386 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1387 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1386);
org$frostlang$frostc$parser$Token$nullable $tmp1388 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1387);
frost$core$Bit $tmp1389 = frost$core$Bit$init$builtin_bit($tmp1388.nonnull);
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block47; else goto block48;
block47:;
// line 559
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1391 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1391);
*(&local13) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$collections$Array* $tmp1392 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local13) = $tmp1391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// line 560
frost$collections$Array* $tmp1393 = *(&local13);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1394 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1396 = *(&local1);
org$frostlang$frostc$Position $tmp1397 = $tmp1396.position;
org$frostlang$frostc$parser$Token $tmp1398 = *(&local1);
frost$core$String* $tmp1399 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1398);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1394, $tmp1395, $tmp1397, $tmp1399);
frost$collections$Array$add$frost$collections$Array$T($tmp1393, ((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// line 561
org$frostlang$frostc$ASTNode* $tmp1400 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
org$frostlang$frostc$ASTNode* $tmp1401 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local14) = $tmp1400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// line 562
org$frostlang$frostc$ASTNode* $tmp1402 = *(&local14);
frost$core$Bit $tmp1403 = frost$core$Bit$init$builtin_bit($tmp1402 == NULL);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block49; else goto block50;
block49:;
// line 563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1406 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local13) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block50:;
// line 565
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1407 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1408 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp1409 = *(&local0);
org$frostlang$frostc$Position $tmp1410 = ((org$frostlang$frostc$parser$Token) $tmp1409.value).position;
frost$collections$Array* $tmp1411 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp1412 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1411);
org$frostlang$frostc$ASTNode* $tmp1413 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1407, $tmp1408, $tmp1410, $tmp1412, $tmp1413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
org$frostlang$frostc$ASTNode* $tmp1414 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1415 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local13) = ((frost$collections$Array*) NULL);
return $tmp1407;
block48:;
// line 569
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1416 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1417 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1418 = *(&local1);
org$frostlang$frostc$Position $tmp1419 = $tmp1418.position;
org$frostlang$frostc$parser$Token $tmp1420 = *(&local1);
frost$core$String* $tmp1421 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1420);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1416, $tmp1417, $tmp1419, $tmp1421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
return $tmp1416;
block46:;
// line 572
org$frostlang$frostc$parser$Token $tmp1422 = *(&local2);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1422);
goto block5;
block5:;
goto block4;
block4:;
// line 576
org$frostlang$frostc$parser$Token $tmp1423 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1423);
// line 577
org$frostlang$frostc$ASTNode* $tmp1424 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
org$frostlang$frostc$ASTNode* $tmp1425 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local15) = $tmp1424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// line 578
org$frostlang$frostc$ASTNode* $tmp1426 = *(&local15);
frost$core$Bit $tmp1427 = frost$core$Bit$init$builtin_bit($tmp1426 == NULL);
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block51; else goto block52;
block51:;
// line 579
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1429 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block52:;
// line 581
org$frostlang$frostc$parser$Token $tmp1430 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1431 = $tmp1430.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1432;
$tmp1432 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1432->value = $tmp1431;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1434 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1433);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1435;
$tmp1435 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1435->value = $tmp1434;
ITable* $tmp1436 = ((frost$core$Equatable*) $tmp1432)->$class->itable;
while ($tmp1436->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1436 = $tmp1436->next;
}
$fn1438 $tmp1437 = $tmp1436->methods[0];
frost$core$Bit $tmp1439 = $tmp1437(((frost$core$Equatable*) $tmp1432), ((frost$core$Equatable*) $tmp1435));
bool $tmp1440 = $tmp1439.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1435)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1432)));
if ($tmp1440) goto block53; else goto block54;
block53:;
// line 583
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1441 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1442 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1441, $tmp1442);
org$frostlang$frostc$ASTNode* $tmp1443 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1441, ((frost$core$Object*) $tmp1443));
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$collections$Array* $tmp1444 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
*(&local16) = $tmp1441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
// line 584
goto block55;
block55:;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1446 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1445);
org$frostlang$frostc$parser$Token$nullable $tmp1447 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1446);
frost$core$Bit $tmp1448 = frost$core$Bit$init$builtin_bit($tmp1447.nonnull);
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block56; else goto block57;
block56:;
// line 585
org$frostlang$frostc$ASTNode* $tmp1450 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
org$frostlang$frostc$ASTNode* $tmp1451 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local17) = $tmp1450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// line 586
org$frostlang$frostc$ASTNode* $tmp1452 = *(&local17);
frost$core$Bit $tmp1453 = frost$core$Bit$init$builtin_bit($tmp1452 == NULL);
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block58; else goto block59;
block58:;
// line 587
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1455 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1456 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1457 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block59:;
// line 589
frost$collections$Array* $tmp1458 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1459 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp1458, ((frost$core$Object*) $tmp1459));
org$frostlang$frostc$ASTNode* $tmp1460 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block55;
block57:;
// line 591
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1461 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1462 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1463 = *(&local0);
org$frostlang$frostc$Position $tmp1464 = ((org$frostlang$frostc$parser$Token) $tmp1463.value).position;
frost$collections$Array* $tmp1465 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1466 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1465);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1461, $tmp1462, $tmp1464, $tmp1466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
org$frostlang$frostc$ASTNode* $tmp1467 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local15) = $tmp1461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$collections$Array* $tmp1468 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local16) = ((frost$collections$Array*) NULL);
goto block54;
block54:;
// line 593
frost$core$Int64 $tmp1469 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1470 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1469);
org$frostlang$frostc$parser$Token$nullable $tmp1471 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1470, &$s1472);
// line 594
org$frostlang$frostc$ASTNode* $tmp1473 = *(&local15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
org$frostlang$frostc$ASTNode* $tmp1474 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1473;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 601
frost$core$Int64 $tmp1475 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp1476 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1475);
org$frostlang$frostc$parser$Token$nullable $tmp1477 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1476, &$s1478);
*(&local0) = $tmp1477;
// line 602
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1479 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1479);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
frost$collections$Array* $tmp1480 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local1) = $tmp1479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
// line 603
frost$core$Int64 $tmp1481 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1482 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1481);
org$frostlang$frostc$parser$Token$nullable $tmp1483 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1482);
frost$core$Bit $tmp1484 = frost$core$Bit$init$builtin_bit(!$tmp1483.nonnull);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block1; else goto block2;
block1:;
// line 604
frost$collections$Stack** $tmp1486 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1487 = *$tmp1486;
frost$core$Bit $tmp1488 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1489;
$tmp1489 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1489->value = $tmp1488;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1487, ((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
// line 605
frost$core$Int64 $tmp1490 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1491 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1490);
org$frostlang$frostc$parser$Token$nullable $tmp1492 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1491);
frost$core$Bit $tmp1493 = frost$core$Bit$init$builtin_bit(!$tmp1492.nonnull);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block3; else goto block4;
block3:;
// line 606
org$frostlang$frostc$ASTNode* $tmp1495 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
org$frostlang$frostc$ASTNode* $tmp1496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local2) = $tmp1495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
// line 607
org$frostlang$frostc$ASTNode* $tmp1497 = *(&local2);
frost$core$Bit $tmp1498 = frost$core$Bit$init$builtin_bit($tmp1497 == NULL);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block5; else goto block6;
block5:;
// line 608
frost$collections$Stack** $tmp1500 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1501 = *$tmp1500;
frost$core$Object* $tmp1502 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1501);
frost$core$Frost$unref$frost$core$Object$Q($tmp1502);
// line 609
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 611
frost$collections$Array* $tmp1505 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1506 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1505, ((frost$core$Object*) $tmp1506));
// line 612
goto block7;
block7:;
frost$core$Int64 $tmp1507 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1508 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1507);
org$frostlang$frostc$parser$Token$nullable $tmp1509 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1508);
frost$core$Bit $tmp1510 = frost$core$Bit$init$builtin_bit($tmp1509.nonnull);
bool $tmp1511 = $tmp1510.value;
if ($tmp1511) goto block8; else goto block9;
block8:;
// line 613
org$frostlang$frostc$ASTNode* $tmp1512 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
org$frostlang$frostc$ASTNode* $tmp1513 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local2) = $tmp1512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
// line 614
org$frostlang$frostc$ASTNode* $tmp1514 = *(&local2);
frost$core$Bit $tmp1515 = frost$core$Bit$init$builtin_bit($tmp1514 == NULL);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block10; else goto block11;
block10:;
// line 615
frost$collections$Stack** $tmp1517 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1518 = *$tmp1517;
frost$core$Object* $tmp1519 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1518);
frost$core$Frost$unref$frost$core$Object$Q($tmp1519);
// line 616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 618
frost$collections$Array* $tmp1522 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1523 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1522, ((frost$core$Object*) $tmp1523));
goto block7;
block9:;
// line 620
frost$core$Int64 $tmp1524 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1525 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1524);
org$frostlang$frostc$parser$Token$nullable $tmp1526 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1525, &$s1527);
frost$core$Bit $tmp1528 = frost$core$Bit$init$builtin_bit(!$tmp1526.nonnull);
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block12; else goto block13;
block12:;
// line 621
frost$collections$Stack** $tmp1530 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1531 = *$tmp1530;
frost$core$Object* $tmp1532 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1531);
frost$core$Frost$unref$frost$core$Object$Q($tmp1532);
// line 622
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1534 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp1535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 625
frost$collections$Stack** $tmp1536 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1537 = *$tmp1536;
frost$core$Object* $tmp1538 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1537);
frost$core$Frost$unref$frost$core$Object$Q($tmp1538);
goto block2;
block2:;
// line 627
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1539 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1540 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$Token$nullable $tmp1541 = *(&local0);
org$frostlang$frostc$Position $tmp1542 = ((org$frostlang$frostc$parser$Token) $tmp1541.value).position;
frost$collections$Array* $tmp1543 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1544 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1543);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1539, $tmp1540, $tmp1542, $tmp1544);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$collections$Array* $tmp1545 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1539;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 634
frost$core$Int64 $tmp1546 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1547 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1546);
org$frostlang$frostc$parser$Token$nullable $tmp1548 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1547, &$s1549);
*(&local0) = $tmp1548;
// line 635
frost$core$Int64 $tmp1550 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1551 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1550);
org$frostlang$frostc$parser$Token$nullable $tmp1552 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1551);
frost$core$Bit $tmp1553 = frost$core$Bit$init$builtin_bit($tmp1552.nonnull);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block1; else goto block2;
block1:;
// line 636
org$frostlang$frostc$ASTNode* $tmp1555 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
org$frostlang$frostc$ASTNode* $tmp1556 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local1) = $tmp1555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// line 637
org$frostlang$frostc$ASTNode* $tmp1557 = *(&local1);
frost$core$Bit $tmp1558 = frost$core$Bit$init$builtin_bit($tmp1557 == NULL);
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block3; else goto block4;
block3:;
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 640
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1561 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1561);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$collections$Array* $tmp1562 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local2) = $tmp1561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
// line 641
frost$collections$Array* $tmp1563 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1564 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1565 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1566 = *(&local0);
org$frostlang$frostc$Position $tmp1567 = ((org$frostlang$frostc$parser$Token) $tmp1566.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1568 = *(&local0);
frost$core$String* $tmp1569 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1568.value));
org$frostlang$frostc$ASTNode* $tmp1570 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1564, $tmp1565, $tmp1567, $tmp1569, $tmp1570);
frost$collections$Array$add$frost$collections$Array$T($tmp1563, ((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// line 642
frost$core$Int64 $tmp1571 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1572 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1571);
org$frostlang$frostc$parser$Token$nullable $tmp1573 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1572, &$s1574);
frost$core$Bit $tmp1575 = frost$core$Bit$init$builtin_bit(!$tmp1573.nonnull);
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block5; else goto block6;
block5:;
// line 643
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 645
org$frostlang$frostc$ASTNode* $tmp1579 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
org$frostlang$frostc$ASTNode* $tmp1580 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local3) = $tmp1579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// line 646
org$frostlang$frostc$ASTNode* $tmp1581 = *(&local3);
frost$core$Bit $tmp1582 = frost$core$Bit$init$builtin_bit($tmp1581 == NULL);
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block7; else goto block8;
block7:;
// line 647
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1584 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1585 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 649
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1587 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1588 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp1589 = *(&local0);
org$frostlang$frostc$Position $tmp1590 = ((org$frostlang$frostc$parser$Token) $tmp1589.value).position;
frost$collections$Array* $tmp1591 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp1592 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1591);
org$frostlang$frostc$ASTNode* $tmp1593 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1587, $tmp1588, $tmp1590, $tmp1592, $tmp1593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
org$frostlang$frostc$ASTNode* $tmp1594 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1596 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1587;
block2:;
// line 652
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1597 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1597);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$collections$Array* $tmp1598 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local4) = $tmp1597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// line 653
frost$collections$Array* $tmp1599 = *(&local4);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1600 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1601 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp1602 = *(&local0);
org$frostlang$frostc$Position $tmp1603 = ((org$frostlang$frostc$parser$Token) $tmp1602.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1604 = *(&local0);
frost$core$String* $tmp1605 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1604.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1600, $tmp1601, $tmp1603, $tmp1605);
frost$collections$Array$add$frost$collections$Array$T($tmp1599, ((frost$core$Object*) $tmp1600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
// line 654
frost$core$Int64 $tmp1606 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1607 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1606);
org$frostlang$frostc$parser$Token$nullable $tmp1608 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1607, &$s1609);
frost$core$Bit $tmp1610 = frost$core$Bit$init$builtin_bit(!$tmp1608.nonnull);
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block9; else goto block10;
block9:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1612 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 657
org$frostlang$frostc$ASTNode* $tmp1613 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
org$frostlang$frostc$ASTNode* $tmp1614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local5) = $tmp1613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// line 658
org$frostlang$frostc$ASTNode* $tmp1615 = *(&local5);
frost$core$Bit $tmp1616 = frost$core$Bit$init$builtin_bit($tmp1615 == NULL);
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block11; else goto block12;
block11:;
// line 659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 661
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1620 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1621 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp1622 = *(&local0);
org$frostlang$frostc$Position $tmp1623 = ((org$frostlang$frostc$parser$Token) $tmp1622.value).position;
frost$collections$Array* $tmp1624 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp1625 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1624);
org$frostlang$frostc$ASTNode* $tmp1626 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1620, $tmp1621, $tmp1623, $tmp1625, $tmp1626);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
org$frostlang$frostc$ASTNode* $tmp1627 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1628 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1620;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 669
frost$core$Int64 $tmp1629 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1630 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1629);
org$frostlang$frostc$parser$Token$nullable $tmp1631 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1630, &$s1632);
frost$core$Bit $tmp1633 = frost$core$Bit$init$builtin_bit(!$tmp1631.nonnull);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block1; else goto block2;
block1:;
// line 670
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 673
org$frostlang$frostc$parser$Lexer** $tmp1635 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1636 = *$tmp1635;
org$frostlang$plex$runtime$DFA** $tmp1637 = &$tmp1636->dfa;
org$frostlang$plex$runtime$DFA* $tmp1638 = *$tmp1637;
frost$core$Int64* $tmp1639 = &$tmp1638->offset;
frost$core$Int64 $tmp1640 = *$tmp1639;
frost$core$Int64 $tmp1641 = (frost$core$Int64) {1};
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641.value;
int64_t $tmp1644 = $tmp1642 - $tmp1643;
frost$core$Int64 $tmp1645 = (frost$core$Int64) {$tmp1644};
*(&local0) = $tmp1645;
// line 674
org$frostlang$regex$RegexParser** $tmp1646 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1647 = *$tmp1646;
org$frostlang$regex$RegexLexer** $tmp1648 = &$tmp1647->lexer;
org$frostlang$regex$RegexLexer* $tmp1649 = *$tmp1648;
org$frostlang$plex$runtime$DFA** $tmp1650 = &$tmp1649->dfa;
org$frostlang$plex$runtime$DFA* $tmp1651 = *$tmp1650;
org$frostlang$frostc$parser$Lexer** $tmp1652 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1653 = *$tmp1652;
org$frostlang$plex$runtime$DFA** $tmp1654 = &$tmp1653->dfa;
org$frostlang$plex$runtime$DFA* $tmp1655 = *$tmp1654;
frost$core$Int64* $tmp1656 = &$tmp1655->offset;
frost$core$Int64 $tmp1657 = *$tmp1656;
frost$core$Int64* $tmp1658 = &$tmp1651->offset;
*$tmp1658 = $tmp1657;
// line 675
org$frostlang$regex$RegexParser** $tmp1659 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1660 = *$tmp1659;
org$frostlang$regex$RegexLexer** $tmp1661 = &$tmp1660->lexer;
org$frostlang$regex$RegexLexer* $tmp1662 = *$tmp1661;
org$frostlang$plex$runtime$DFA** $tmp1663 = &$tmp1662->dfa;
org$frostlang$plex$runtime$DFA* $tmp1664 = *$tmp1663;
org$frostlang$frostc$parser$Lexer** $tmp1665 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1666 = *$tmp1665;
org$frostlang$plex$runtime$DFA** $tmp1667 = &$tmp1666->dfa;
org$frostlang$plex$runtime$DFA* $tmp1668 = *$tmp1667;
frost$core$Int64* $tmp1669 = &$tmp1668->line;
frost$core$Int64 $tmp1670 = *$tmp1669;
frost$core$Int64* $tmp1671 = &$tmp1664->line;
*$tmp1671 = $tmp1670;
// line 676
org$frostlang$regex$RegexParser** $tmp1672 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1673 = *$tmp1672;
org$frostlang$regex$RegexLexer** $tmp1674 = &$tmp1673->lexer;
org$frostlang$regex$RegexLexer* $tmp1675 = *$tmp1674;
org$frostlang$plex$runtime$DFA** $tmp1676 = &$tmp1675->dfa;
org$frostlang$plex$runtime$DFA* $tmp1677 = *$tmp1676;
org$frostlang$frostc$parser$Lexer** $tmp1678 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1679 = *$tmp1678;
org$frostlang$plex$runtime$DFA** $tmp1680 = &$tmp1679->dfa;
org$frostlang$plex$runtime$DFA* $tmp1681 = *$tmp1680;
frost$core$Int64* $tmp1682 = &$tmp1681->column;
frost$core$Int64 $tmp1683 = *$tmp1682;
frost$core$Int64* $tmp1684 = &$tmp1677->column;
*$tmp1684 = $tmp1683;
// line 677
org$frostlang$regex$RegexParser** $tmp1685 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1686 = *$tmp1685;
org$frostlang$frostc$ASTNode* $tmp1687 = org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q($tmp1686);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
org$frostlang$frostc$ASTNode* $tmp1688 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local1) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
// line 678
org$frostlang$frostc$parser$Lexer** $tmp1689 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1690 = *$tmp1689;
org$frostlang$plex$runtime$DFA** $tmp1691 = &$tmp1690->dfa;
org$frostlang$plex$runtime$DFA* $tmp1692 = *$tmp1691;
org$frostlang$regex$RegexParser** $tmp1693 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1694 = *$tmp1693;
org$frostlang$regex$RegexLexer** $tmp1695 = &$tmp1694->lexer;
org$frostlang$regex$RegexLexer* $tmp1696 = *$tmp1695;
org$frostlang$plex$runtime$DFA** $tmp1697 = &$tmp1696->dfa;
org$frostlang$plex$runtime$DFA* $tmp1698 = *$tmp1697;
frost$core$Int64* $tmp1699 = &$tmp1698->offset;
frost$core$Int64 $tmp1700 = *$tmp1699;
frost$core$Int64* $tmp1701 = &$tmp1692->offset;
*$tmp1701 = $tmp1700;
// line 679
org$frostlang$frostc$parser$Lexer** $tmp1702 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1703 = *$tmp1702;
org$frostlang$plex$runtime$DFA** $tmp1704 = &$tmp1703->dfa;
org$frostlang$plex$runtime$DFA* $tmp1705 = *$tmp1704;
org$frostlang$regex$RegexParser** $tmp1706 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1707 = *$tmp1706;
org$frostlang$regex$RegexLexer** $tmp1708 = &$tmp1707->lexer;
org$frostlang$regex$RegexLexer* $tmp1709 = *$tmp1708;
org$frostlang$plex$runtime$DFA** $tmp1710 = &$tmp1709->dfa;
org$frostlang$plex$runtime$DFA* $tmp1711 = *$tmp1710;
frost$core$Int64* $tmp1712 = &$tmp1711->line;
frost$core$Int64 $tmp1713 = *$tmp1712;
frost$core$Int64* $tmp1714 = &$tmp1705->line;
*$tmp1714 = $tmp1713;
// line 680
org$frostlang$frostc$parser$Lexer** $tmp1715 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1716 = *$tmp1715;
org$frostlang$plex$runtime$DFA** $tmp1717 = &$tmp1716->dfa;
org$frostlang$plex$runtime$DFA* $tmp1718 = *$tmp1717;
org$frostlang$regex$RegexParser** $tmp1719 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1720 = *$tmp1719;
org$frostlang$regex$RegexLexer** $tmp1721 = &$tmp1720->lexer;
org$frostlang$regex$RegexLexer* $tmp1722 = *$tmp1721;
org$frostlang$plex$runtime$DFA** $tmp1723 = &$tmp1722->dfa;
org$frostlang$plex$runtime$DFA* $tmp1724 = *$tmp1723;
frost$core$Int64* $tmp1725 = &$tmp1724->column;
frost$core$Int64 $tmp1726 = *$tmp1725;
frost$core$Int64* $tmp1727 = &$tmp1718->column;
*$tmp1727 = $tmp1726;
// line 681
org$frostlang$frostc$ASTNode* $tmp1728 = *(&local1);
frost$core$Bit $tmp1729 = frost$core$Bit$init$builtin_bit($tmp1728 == NULL);
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block3; else goto block4;
block3:;
// line 682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 684
frost$core$Int64 $tmp1732 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1733 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1732);
org$frostlang$frostc$parser$Token$nullable $tmp1734 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1733, &$s1735);
frost$core$Bit $tmp1736 = frost$core$Bit$init$builtin_bit(!$tmp1734.nonnull);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block5; else goto block6;
block5:;
// line 685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 687
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1739 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1740 = *$tmp1739;
frost$core$Bit $tmp1741 = frost$core$Bit$init$builtin_bit($tmp1740 != NULL);
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block7; else goto block8;
block7:;
// line 689
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1743 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1744 = *$tmp1743;
$fn1746 $tmp1745 = ($fn1746) $tmp1744->$class->vtable[7];
$tmp1745($tmp1744);
// line 690
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1747 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1748 = *$tmp1747;
$fn1750 $tmp1749 = ($fn1750) $tmp1748->$class->vtable[7];
$tmp1749($tmp1748);
// line 692
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1751 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1752 = *$tmp1751;
frost$core$Int64 $tmp1753 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$Kind $tmp1754 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1753);
frost$core$Int64 $tmp1755 = *(&local0);
frost$core$String$Index $tmp1756 = frost$core$String$Index$init$frost$core$Int64($tmp1755);
org$frostlang$frostc$parser$Lexer** $tmp1757 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1758 = *$tmp1757;
org$frostlang$plex$runtime$DFA** $tmp1759 = &$tmp1758->dfa;
org$frostlang$plex$runtime$DFA* $tmp1760 = *$tmp1759;
frost$core$Int64* $tmp1761 = &$tmp1760->offset;
frost$core$Int64 $tmp1762 = *$tmp1761;
frost$core$String$Index $tmp1763 = frost$core$String$Index$init$frost$core$Int64($tmp1762);
org$frostlang$frostc$ASTNode* $tmp1764 = *(&local1);
$fn1766 $tmp1765 = ($fn1766) $tmp1764->$class->vtable[2];
org$frostlang$frostc$Position $tmp1767 = $tmp1765($tmp1764);
org$frostlang$frostc$parser$Token $tmp1768 = org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp1754, $tmp1756, $tmp1763, $tmp1767);
$fn1770 $tmp1769 = ($fn1770) $tmp1752->$class->vtable[6];
$tmp1769($tmp1752, $tmp1768);
goto block8;
block8:;
// line 695
org$frostlang$frostc$ASTNode* $tmp1771 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
org$frostlang$frostc$ASTNode* $tmp1772 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1771;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$Kind local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 705
org$frostlang$frostc$parser$Token $tmp1773 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp1773;
// line 706
org$frostlang$frostc$parser$Token $tmp1774 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp1775 = $tmp1774.kind;
frost$core$Int64 $tmp1776 = $tmp1775.$rawValue;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {52};
frost$core$Bit $tmp1778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block2; else goto block3;
block2:;
// line 708
org$frostlang$frostc$parser$Token $tmp1780 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1781 = $tmp1780.kind;
*(&local1) = $tmp1781;
// line 709
frost$core$Bit* $tmp1782 = &param0->allowLambdas;
frost$core$Bit $tmp1783 = *$tmp1782;
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$Token$Kind $tmp1785 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1786;
$tmp1786 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1786->value = $tmp1785;
frost$core$Int64 $tmp1787 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1788 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1787);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1789;
$tmp1789 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1789->value = $tmp1788;
ITable* $tmp1790 = ((frost$core$Equatable*) $tmp1786)->$class->itable;
while ($tmp1790->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1790 = $tmp1790->next;
}
$fn1792 $tmp1791 = $tmp1790->methods[0];
frost$core$Bit $tmp1793 = $tmp1791(((frost$core$Equatable*) $tmp1786), ((frost$core$Equatable*) $tmp1789));
bool $tmp1794 = $tmp1793.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1789)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1786)));
if ($tmp1794) goto block4; else goto block6;
block6:;
org$frostlang$frostc$parser$Token$Kind $tmp1795 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1796;
$tmp1796 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1796->value = $tmp1795;
frost$core$Int64 $tmp1797 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1798 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1797);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1799;
$tmp1799 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1799->value = $tmp1798;
ITable* $tmp1800 = ((frost$core$Equatable*) $tmp1796)->$class->itable;
while ($tmp1800->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1800 = $tmp1800->next;
}
$fn1802 $tmp1801 = $tmp1800->methods[0];
frost$core$Bit $tmp1803 = $tmp1801(((frost$core$Equatable*) $tmp1796), ((frost$core$Equatable*) $tmp1799));
bool $tmp1804 = $tmp1803.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1799)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1796)));
if ($tmp1804) goto block4; else goto block5;
block4:;
// line 710
org$frostlang$frostc$parser$Token $tmp1805 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1805);
// line 711
org$frostlang$frostc$ASTNode* $tmp1806 = org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
return $tmp1806;
block5:;
// line 713
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1807 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1809 = *(&local0);
org$frostlang$frostc$Position $tmp1810 = $tmp1809.position;
org$frostlang$frostc$parser$Token $tmp1811 = *(&local0);
frost$core$String* $tmp1812 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1811);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1807, $tmp1808, $tmp1810, $tmp1812);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
return $tmp1807;
block3:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {3};
frost$core$Bit $tmp1814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1813);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block8; else goto block9;
block8:;
// line 716
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1816 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1817 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1818 = *(&local0);
org$frostlang$frostc$Position $tmp1819 = $tmp1818.position;
org$frostlang$frostc$parser$Token $tmp1820 = *(&local0);
frost$core$String* $tmp1821 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1820);
frost$core$UInt64$nullable $tmp1822 = frost$core$String$get_asUInt64$R$frost$core$UInt64$Q($tmp1821);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1816, $tmp1817, $tmp1819, ((frost$core$UInt64) $tmp1822.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
return $tmp1816;
block9:;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {4};
frost$core$Bit $tmp1824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1823);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block10; else goto block11;
block10:;
// line 719
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1826 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1828 = *(&local0);
org$frostlang$frostc$Position $tmp1829 = $tmp1828.position;
org$frostlang$frostc$parser$Token $tmp1830 = *(&local0);
frost$core$String* $tmp1831 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1830);
frost$core$Int64 $tmp1832 = (frost$core$Int64) {2};
frost$core$Bit $tmp1833 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1834 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1832, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1833);
frost$core$String* $tmp1835 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1831, $tmp1834);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {2};
frost$core$UInt64$nullable $tmp1837 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1835, $tmp1836);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1826, $tmp1827, $tmp1829, ((frost$core$UInt64) $tmp1837.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
return $tmp1826;
block11:;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {5};
frost$core$Bit $tmp1839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1838);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block12; else goto block13;
block12:;
// line 722
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1841 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1842 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1843 = *(&local0);
org$frostlang$frostc$Position $tmp1844 = $tmp1843.position;
org$frostlang$frostc$parser$Token $tmp1845 = *(&local0);
frost$core$String* $tmp1846 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1845);
frost$core$Int64 $tmp1847 = (frost$core$Int64) {2};
frost$core$Bit $tmp1848 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1849 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1847, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1848);
frost$core$String* $tmp1850 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1846, $tmp1849);
frost$core$Int64 $tmp1851 = (frost$core$Int64) {16};
frost$core$UInt64$nullable $tmp1852 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1850, $tmp1851);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1841, $tmp1842, $tmp1844, ((frost$core$UInt64) $tmp1852.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
return $tmp1841;
block13:;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {6};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block14; else goto block15;
block14:;
// line 725
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1856 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token $tmp1858 = *(&local0);
org$frostlang$frostc$Position $tmp1859 = $tmp1858.position;
org$frostlang$frostc$parser$Token $tmp1860 = *(&local0);
frost$core$String* $tmp1861 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1860);
frost$core$Real64$nullable $tmp1862 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp1861);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64($tmp1856, $tmp1857, $tmp1859, ((frost$core$Real64) $tmp1862.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
return $tmp1856;
block15:;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {49};
frost$core$Bit $tmp1864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block16; else goto block17;
block16:;
// line 728
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1866 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1867 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token $tmp1868 = *(&local0);
org$frostlang$frostc$Position $tmp1869 = $tmp1868.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1866, $tmp1867, $tmp1869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
return $tmp1866;
block17:;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {50};
frost$core$Bit $tmp1871 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1870);
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block18; else goto block19;
block18:;
// line 731
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1873 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1874 = (frost$core$Int64) {41};
org$frostlang$frostc$parser$Token $tmp1875 = *(&local0);
org$frostlang$frostc$Position $tmp1876 = $tmp1875.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1873, $tmp1874, $tmp1876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
return $tmp1873;
block19:;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {44};
frost$core$Bit $tmp1878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1877);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block20; else goto block21;
block20:;
// line 734
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1880 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1881 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token $tmp1882 = *(&local0);
org$frostlang$frostc$Position $tmp1883 = $tmp1882.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1880, $tmp1881, $tmp1883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
return $tmp1880;
block21:;
frost$core$Int64 $tmp1884 = (frost$core$Int64) {42};
frost$core$Bit $tmp1885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block22; else goto block23;
block22:;
// line 737
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1887 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1888 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1889 = *(&local0);
org$frostlang$frostc$Position $tmp1890 = $tmp1889.position;
frost$core$Bit $tmp1891 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1887, $tmp1888, $tmp1890, $tmp1891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
return $tmp1887;
block23:;
frost$core$Int64 $tmp1892 = (frost$core$Int64) {43};
frost$core$Bit $tmp1893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1892);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block24; else goto block25;
block24:;
// line 740
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1895 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1896 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1897 = *(&local0);
org$frostlang$frostc$Position $tmp1898 = $tmp1897.position;
frost$core$Bit $tmp1899 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1895, $tmp1896, $tmp1898, $tmp1899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
return $tmp1895;
block25:;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {8};
frost$core$Bit $tmp1901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1900);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1903 = (frost$core$Int64) {7};
frost$core$Bit $tmp1904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block26; else goto block28;
block26:;
// line 743
org$frostlang$frostc$parser$Token $tmp1906 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1906);
// line 744
org$frostlang$frostc$ASTNode* $tmp1907 = org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
return $tmp1907;
block28:;
frost$core$Int64 $tmp1908 = (frost$core$Int64) {107};
frost$core$Bit $tmp1909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1908);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block29; else goto block30;
block29:;
// line 747
org$frostlang$frostc$parser$Token $tmp1911 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1911);
// line 748
org$frostlang$frostc$ASTNode* $tmp1912 = org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
return $tmp1912;
block30:;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {105};
frost$core$Bit $tmp1914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block31; else goto block32;
block31:;
// line 751
org$frostlang$frostc$parser$Token $tmp1916 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1916);
// line 752
org$frostlang$frostc$ASTNode* $tmp1917 = org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
return $tmp1917;
block32:;
frost$core$Int64 $tmp1918 = (frost$core$Int64) {14};
frost$core$Bit $tmp1919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1918);
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block33; else goto block34;
block33:;
// line 755
org$frostlang$frostc$parser$Token $tmp1921 = *(&local0);
frost$core$String* $tmp1922 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1921);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$String* $tmp1923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local2) = $tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// line 756
frost$core$String* $tmp1924 = *(&local2);
frost$core$Bit $tmp1925 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1924, &$s1926);
bool $tmp1927 = $tmp1925.value;
if ($tmp1927) goto block35; else goto block37;
block35:;
// line 757
frost$core$Int64 $tmp1928 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1929 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1928);
org$frostlang$frostc$parser$Token$nullable $tmp1930 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1929, &$s1931);
// line 758
org$frostlang$frostc$ASTNode* $tmp1932 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
org$frostlang$frostc$ASTNode* $tmp1933 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local3) = $tmp1932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// line 759
org$frostlang$frostc$ASTNode* $tmp1934 = *(&local3);
frost$core$Bit $tmp1935 = frost$core$Bit$init$builtin_bit($tmp1934 == NULL);
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block38; else goto block39;
block38:;
// line 760
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1937 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1938 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block39:;
// line 762
frost$core$Int64 $tmp1939 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1940 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1939);
org$frostlang$frostc$parser$Token$nullable $tmp1941 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1940, &$s1942);
// line 763
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1943 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1944 = (frost$core$Int64) {3};
org$frostlang$frostc$parser$Token $tmp1945 = *(&local0);
org$frostlang$frostc$Position $tmp1946 = $tmp1945.position;
org$frostlang$frostc$ASTNode* $tmp1947 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp1943, $tmp1944, $tmp1946, $tmp1947);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
org$frostlang$frostc$ASTNode* $tmp1948 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1943;
block37:;
// line 765
frost$core$String* $tmp1950 = *(&local2);
frost$core$Bit $tmp1951 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1950, &$s1952);
bool $tmp1953 = $tmp1951.value;
if ($tmp1953) goto block40; else goto block41;
block40:;
// line 766
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1954 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1955 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$Token $tmp1956 = *(&local0);
org$frostlang$frostc$Position $tmp1957 = $tmp1956.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1954, $tmp1955, $tmp1957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$core$String* $tmp1958 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1954;
block41:;
goto block36;
block36:;
// line 768
org$frostlang$frostc$parser$Token $tmp1959 = *(&local0);
frost$core$String* $tmp1960 = *(&local2);
frost$core$String* $tmp1961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1962, $tmp1960);
frost$core$String* $tmp1963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1961, &$s1964);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1959, $tmp1963);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
// line 769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1965 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {21};
frost$core$Bit $tmp1967 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1966);
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1969 = (frost$core$Int64) {22};
frost$core$Bit $tmp1970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1969);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block42; else goto block44;
block42:;
// line 772
org$frostlang$frostc$parser$Token $tmp1972 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1972);
// line 773
org$frostlang$frostc$ASTNode* $tmp1973 = org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
return $tmp1973;
block44:;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {58};
frost$core$Bit $tmp1975 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1776, $tmp1974);
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block45; else goto block46;
block45:;
// line 776
org$frostlang$frostc$parser$Token $tmp1977 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1977);
// line 777
org$frostlang$frostc$ASTNode* $tmp1978 = org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
return $tmp1978;
block46:;
// line 780
org$frostlang$frostc$parser$Token $tmp1979 = *(&local0);
org$frostlang$frostc$parser$Token $tmp1980 = *(&local0);
frost$core$String* $tmp1981 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1980);
frost$core$String* $tmp1982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1983, $tmp1981);
frost$core$String* $tmp1984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1982, &$s1985);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1979, $tmp1984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
// line 781
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block47;
block47:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 788
frost$core$Int64* $tmp1986 = &param0->$rawValue;
frost$core$Int64 $tmp1987 = *$tmp1986;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {22};
frost$core$Bit $tmp1989 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1987, $tmp1988);
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1991 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1992 = *$tmp1991;
frost$core$String** $tmp1993 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1994 = *$tmp1993;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
frost$core$String* $tmp1995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local0) = $tmp1994;
// line 790
frost$core$String* $tmp1996 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$String* $tmp1997 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1996;
block3:;
frost$core$Int64 $tmp1998 = (frost$core$Int64) {16};
frost$core$Bit $tmp1999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1987, $tmp1998);
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2002 = *$tmp2001;
org$frostlang$frostc$ASTNode** $tmp2003 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2004 = *$tmp2003;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
org$frostlang$frostc$ASTNode* $tmp2005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local1) = $tmp2004;
frost$core$String** $tmp2006 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2007 = *$tmp2006;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$String* $tmp2008 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local2) = $tmp2007;
// line 793
org$frostlang$frostc$ASTNode* $tmp2009 = *(&local1);
frost$core$String* $tmp2010 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2009);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$core$String* $tmp2011 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local3) = $tmp2010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
// line 794
frost$core$String* $tmp2012 = *(&local3);
frost$core$Bit $tmp2013 = frost$core$Bit$init$builtin_bit($tmp2012 != NULL);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block6; else goto block7;
block6:;
// line 795
frost$core$String* $tmp2015 = *(&local3);
frost$core$String* $tmp2016 = *(&local2);
frost$core$String* $tmp2017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2018, $tmp2016);
frost$core$String* $tmp2019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2015, $tmp2017);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$String* $tmp2020 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local3) = $tmp2019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
goto block7;
block7:;
// line 797
frost$core$String* $tmp2021 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$String* $tmp2022 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2023 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2024 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2021;
block5:;
// line 800
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token local1;
// line 811
org$frostlang$frostc$parser$Token $tmp2025 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2025;
// line 812
org$frostlang$frostc$parser$Token $tmp2026 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2027 = $tmp2026.kind;
frost$core$Int64 $tmp2028 = $tmp2027.$rawValue;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {52};
frost$core$Bit $tmp2030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2029);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {55};
frost$core$Bit $tmp2033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2032);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {56};
frost$core$Bit $tmp2036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {57};
frost$core$Bit $tmp2039 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2038);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {58};
frost$core$Bit $tmp2042 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {59};
frost$core$Bit $tmp2045 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2044);
bool $tmp2046 = $tmp2045.value;
if ($tmp2046) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp2047 = (frost$core$Int64) {61};
frost$core$Bit $tmp2048 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2047);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {62};
frost$core$Bit $tmp2051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2050);
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {63};
frost$core$Bit $tmp2054 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2053);
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp2056 = (frost$core$Int64) {66};
frost$core$Bit $tmp2057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2056);
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp2059 = (frost$core$Int64) {69};
frost$core$Bit $tmp2060 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2059);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp2062 = (frost$core$Int64) {68};
frost$core$Bit $tmp2063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2062);
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {60};
frost$core$Bit $tmp2066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2065);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp2068 = (frost$core$Int64) {70};
frost$core$Bit $tmp2069 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2068);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {71};
frost$core$Bit $tmp2072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2071);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp2074 = (frost$core$Int64) {72};
frost$core$Bit $tmp2075 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2074);
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block2; else goto block18;
block18:;
frost$core$Int64 $tmp2077 = (frost$core$Int64) {73};
frost$core$Bit $tmp2078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2077);
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp2080 = (frost$core$Int64) {74};
frost$core$Bit $tmp2081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2080);
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block2; else goto block20;
block20:;
frost$core$Int64 $tmp2083 = (frost$core$Int64) {75};
frost$core$Bit $tmp2084 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2083);
bool $tmp2085 = $tmp2084.value;
if ($tmp2085) goto block2; else goto block21;
block21:;
frost$core$Int64 $tmp2086 = (frost$core$Int64) {53};
frost$core$Bit $tmp2087 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2086);
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block2; else goto block22;
block22:;
frost$core$Int64 $tmp2089 = (frost$core$Int64) {54};
frost$core$Bit $tmp2090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2089);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block2; else goto block23;
block23:;
frost$core$Int64 $tmp2092 = (frost$core$Int64) {76};
frost$core$Bit $tmp2093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2092);
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block2; else goto block24;
block2:;
// line 819
org$frostlang$frostc$parser$Token $tmp2095 = *(&local0);
frost$core$String* $tmp2096 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
return $tmp2096;
block24:;
frost$core$Int64 $tmp2097 = (frost$core$Int64) {67};
frost$core$Bit $tmp2098 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2097);
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block25; else goto block26;
block25:;
// line 822
org$frostlang$frostc$parser$Token $tmp2100 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2100;
// line 823
org$frostlang$frostc$parser$Token $tmp2101 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2102 = $tmp2101.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2103;
$tmp2103 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2103->value = $tmp2102;
frost$core$Int64 $tmp2104 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2105 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2104);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2106;
$tmp2106 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2106->value = $tmp2105;
ITable* $tmp2107 = ((frost$core$Equatable*) $tmp2103)->$class->itable;
while ($tmp2107->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2107 = $tmp2107->next;
}
$fn2109 $tmp2108 = $tmp2107->methods[0];
frost$core$Bit $tmp2110 = $tmp2108(((frost$core$Equatable*) $tmp2103), ((frost$core$Equatable*) $tmp2106));
bool $tmp2111 = $tmp2110.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2106)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2103)));
if ($tmp2111) goto block27; else goto block29;
block27:;
// line 824
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2112));
return &$s2112;
block29:;
// line 1
// line 827
org$frostlang$frostc$parser$Token $tmp2113 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2113);
// line 828
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2114));
return &$s2114;
block28:;
goto block1;
block26:;
frost$core$Int64 $tmp2115 = (frost$core$Int64) {105};
frost$core$Bit $tmp2116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2028, $tmp2115);
bool $tmp2117 = $tmp2116.value;
if ($tmp2117) goto block30; else goto block31;
block30:;
// line 832
frost$core$Int64 $tmp2118 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2119 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2118);
org$frostlang$frostc$parser$Token$nullable $tmp2120 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2119, &$s2121);
frost$core$Bit $tmp2122 = frost$core$Bit$init$builtin_bit(!$tmp2120.nonnull);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block32; else goto block33;
block32:;
// line 833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block33:;
// line 835
frost$core$Int64 $tmp2124 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp2125 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2124);
org$frostlang$frostc$parser$Token$nullable $tmp2126 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2125);
frost$core$Bit $tmp2127 = frost$core$Bit$init$builtin_bit($tmp2126.nonnull);
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block34; else goto block35;
block34:;
// line 836
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2129));
return &$s2129;
block35:;
// line 838
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2130));
return &$s2130;
block31:;
// line 841
org$frostlang$frostc$parser$Token $tmp2131 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2132 = *(&local0);
frost$core$String* $tmp2133 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2132);
frost$core$String* $tmp2134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2135, $tmp2133);
frost$core$String* $tmp2136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2134, &$s2137);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp2131, $tmp2136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// line 843
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block36;
block36:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 849
frost$core$Bit $tmp2138 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode* $tmp2139 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
return $tmp2139;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 857
frost$core$Int64 $tmp2140 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2141 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2140);
org$frostlang$frostc$parser$Token$nullable $tmp2142 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2141, &$s2143);
*(&local0) = $tmp2142;
// line 858
org$frostlang$frostc$parser$Token$nullable $tmp2144 = *(&local0);
frost$core$Bit $tmp2145 = frost$core$Bit$init$builtin_bit(!$tmp2144.nonnull);
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block1; else goto block2;
block1:;
// line 859
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 861
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2147 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2147);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$collections$Array* $tmp2148 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local1) = $tmp2147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// line 862
frost$core$Int64 $tmp2149 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2150 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2149);
org$frostlang$frostc$parser$Token$nullable $tmp2151 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2150);
frost$core$Bit $tmp2152 = frost$core$Bit$init$builtin_bit(!$tmp2151.nonnull);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block3; else goto block4;
block3:;
// line 863
org$frostlang$frostc$ASTNode* $tmp2154 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
org$frostlang$frostc$ASTNode* $tmp2155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
*(&local2) = $tmp2154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// line 864
org$frostlang$frostc$ASTNode* $tmp2156 = *(&local2);
frost$core$Bit $tmp2157 = frost$core$Bit$init$builtin_bit($tmp2156 == NULL);
bool $tmp2158 = $tmp2157.value;
if ($tmp2158) goto block5; else goto block6;
block5:;
// line 865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2159 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 867
frost$collections$Array* $tmp2161 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2162 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2161, ((frost$core$Object*) $tmp2162));
// line 868
goto block7;
block7:;
frost$core$Int64 $tmp2163 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2164 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2163);
org$frostlang$frostc$parser$Token$nullable $tmp2165 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2164);
frost$core$Bit $tmp2166 = frost$core$Bit$init$builtin_bit($tmp2165.nonnull);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block8; else goto block9;
block8:;
// line 869
org$frostlang$frostc$ASTNode* $tmp2168 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
org$frostlang$frostc$ASTNode* $tmp2169 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local2) = $tmp2168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
// line 870
org$frostlang$frostc$ASTNode* $tmp2170 = *(&local2);
frost$core$Bit $tmp2171 = frost$core$Bit$init$builtin_bit($tmp2170 == NULL);
bool $tmp2172 = $tmp2171.value;
if ($tmp2172) goto block10; else goto block11;
block10:;
// line 871
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 873
frost$collections$Array* $tmp2175 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2176 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2175, ((frost$core$Object*) $tmp2176));
goto block7;
block9:;
// line 875
frost$core$Int64 $tmp2177 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2178 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2177);
org$frostlang$frostc$parser$Token$nullable $tmp2179 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2178, &$s2180);
frost$core$Bit $tmp2181 = frost$core$Bit$init$builtin_bit(!$tmp2179.nonnull);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block12; else goto block13;
block12:;
// line 876
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp2185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 879
org$frostlang$frostc$parser$Token $tmp2186 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2186;
// line 880
org$frostlang$frostc$parser$Token $tmp2187 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2188 = $tmp2187.kind;
frost$core$Int64 $tmp2189 = $tmp2188.$rawValue;
frost$core$Int64 $tmp2190 = (frost$core$Int64) {94};
frost$core$Bit $tmp2191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2189, $tmp2190);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2193 = (frost$core$Int64) {95};
frost$core$Bit $tmp2194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2189, $tmp2193);
bool $tmp2195 = $tmp2194.value;
if ($tmp2195) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp2196 = (frost$core$Int64) {96};
frost$core$Bit $tmp2197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2189, $tmp2196);
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp2199 = (frost$core$Int64) {97};
frost$core$Bit $tmp2200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2189, $tmp2199);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block15; else goto block19;
block15:;
// line 883
org$frostlang$frostc$parser$Token $tmp2202 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 884
frost$core$Int64 $tmp2203 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2204 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2203);
org$frostlang$frostc$parser$Token$nullable $tmp2205 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2204, &$s2206);
frost$core$Bit $tmp2207 = frost$core$Bit$init$builtin_bit(!$tmp2205.nonnull);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block20; else goto block21;
block20:;
// line 885
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 887
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2210 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2210);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$collections$Array* $tmp2211 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local4) = $tmp2210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
// line 888
frost$core$Int64 $tmp2212 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2213 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2212);
org$frostlang$frostc$parser$Token$nullable $tmp2214 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2213);
frost$core$Bit $tmp2215 = frost$core$Bit$init$builtin_bit(!$tmp2214.nonnull);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block22; else goto block23;
block22:;
// line 889
org$frostlang$frostc$ASTNode* $tmp2217 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
org$frostlang$frostc$ASTNode* $tmp2218 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local5) = $tmp2217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// line 890
org$frostlang$frostc$ASTNode* $tmp2219 = *(&local5);
frost$core$Bit $tmp2220 = frost$core$Bit$init$builtin_bit($tmp2219 == NULL);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block24; else goto block25;
block24:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2222 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 893
frost$collections$Array* $tmp2225 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2226 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2225, ((frost$core$Object*) $tmp2226));
// line 894
goto block26;
block26:;
frost$core$Int64 $tmp2227 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2228 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2227);
org$frostlang$frostc$parser$Token$nullable $tmp2229 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2228);
frost$core$Bit $tmp2230 = frost$core$Bit$init$builtin_bit($tmp2229.nonnull);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block27; else goto block28;
block27:;
// line 895
org$frostlang$frostc$ASTNode* $tmp2232 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
org$frostlang$frostc$ASTNode* $tmp2233 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local5) = $tmp2232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// line 896
org$frostlang$frostc$ASTNode* $tmp2234 = *(&local5);
frost$core$Bit $tmp2235 = frost$core$Bit$init$builtin_bit($tmp2234 == NULL);
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block29; else goto block30;
block29:;
// line 897
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2237 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2238 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block30:;
// line 899
frost$collections$Array* $tmp2240 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2241 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2240, ((frost$core$Object*) $tmp2241));
goto block26;
block28:;
// line 901
frost$core$Int64 $tmp2242 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2243 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2242);
org$frostlang$frostc$parser$Token$nullable $tmp2244 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2243, &$s2245);
frost$core$Bit $tmp2246 = frost$core$Bit$init$builtin_bit(!$tmp2244.nonnull);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block31; else goto block32;
block31:;
// line 902
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2249 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block32:;
org$frostlang$frostc$ASTNode* $tmp2251 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 905
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 906
frost$collections$Array* $tmp2252 = *(&local4);
ITable* $tmp2253 = ((frost$collections$CollectionView*) $tmp2252)->$class->itable;
while ($tmp2253->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2253 = $tmp2253->next;
}
$fn2255 $tmp2254 = $tmp2253->methods[0];
frost$core$Int64 $tmp2256 = $tmp2254(((frost$collections$CollectionView*) $tmp2252));
frost$core$Int64 $tmp2257 = (frost$core$Int64) {0};
frost$core$Bit $tmp2258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2256, $tmp2257);
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block33; else goto block35;
block33:;
// line 907
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2260 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block35:;
// line 909
frost$collections$Array* $tmp2261 = *(&local4);
ITable* $tmp2262 = ((frost$collections$CollectionView*) $tmp2261)->$class->itable;
while ($tmp2262->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2262 = $tmp2262->next;
}
$fn2264 $tmp2263 = $tmp2262->methods[0];
frost$core$Int64 $tmp2265 = $tmp2263(((frost$collections$CollectionView*) $tmp2261));
frost$core$Int64 $tmp2266 = (frost$core$Int64) {1};
frost$core$Bit $tmp2267 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2265, $tmp2266);
bool $tmp2268 = $tmp2267.value;
if ($tmp2268) goto block36; else goto block38;
block36:;
// line 910
frost$collections$Array* $tmp2269 = *(&local4);
frost$core$Int64 $tmp2270 = (frost$core$Int64) {0};
frost$core$Object* $tmp2271 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2269, $tmp2270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2271)));
org$frostlang$frostc$ASTNode* $tmp2272 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2271);
frost$core$Frost$unref$frost$core$Object$Q($tmp2271);
goto block37;
block38:;
// line 1
// line 913
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2273 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2274 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2275 = *(&local0);
org$frostlang$frostc$Position $tmp2276 = ((org$frostlang$frostc$parser$Token) $tmp2275.value).position;
frost$collections$Array* $tmp2277 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp2278 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2277);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2273, $tmp2274, $tmp2276, $tmp2278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
org$frostlang$frostc$ASTNode* $tmp2279 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local6) = $tmp2273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
goto block37;
block37:;
goto block34;
block34:;
// line 916
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2281 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$nullable $tmp2282 = *(&local0);
org$frostlang$frostc$Position $tmp2283 = ((org$frostlang$frostc$parser$Token) $tmp2282.value).position;
org$frostlang$frostc$parser$Token $tmp2284 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2285 = $tmp2284.kind;
frost$collections$Array* $tmp2286 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2287 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2286);
org$frostlang$frostc$ASTNode* $tmp2288 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp2280, $tmp2281, $tmp2283, $tmp2285, $tmp2287, $tmp2288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
org$frostlang$frostc$ASTNode* $tmp2289 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2280;
block19:;
// line 920
frost$collections$Array* $tmp2292 = *(&local1);
ITable* $tmp2293 = ((frost$collections$CollectionView*) $tmp2292)->$class->itable;
while ($tmp2293->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2293 = $tmp2293->next;
}
$fn2295 $tmp2294 = $tmp2293->methods[0];
frost$core$Int64 $tmp2296 = $tmp2294(((frost$collections$CollectionView*) $tmp2292));
frost$core$Int64 $tmp2297 = (frost$core$Int64) {1};
int64_t $tmp2298 = $tmp2296.value;
int64_t $tmp2299 = $tmp2297.value;
bool $tmp2300 = $tmp2298 < $tmp2299;
frost$core$Bit $tmp2301 = (frost$core$Bit) {$tmp2300};
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block39; else goto block40;
block39:;
// line 921
org$frostlang$frostc$parser$Token$nullable $tmp2303 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2303.value), &$s2304);
// line 922
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 924
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2306 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2307 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2308 = *(&local0);
org$frostlang$frostc$Position $tmp2309 = ((org$frostlang$frostc$parser$Token) $tmp2308.value).position;
frost$collections$Array* $tmp2310 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2311 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2310);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2306, $tmp2307, $tmp2309, $tmp2311);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
frost$collections$Array* $tmp2312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2306;
block14:;
goto block41;
block41:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$Bit param1) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
frost$core$String* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 934
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 935
org$frostlang$frostc$parser$Token $tmp2313 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2314 = $tmp2313.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2315;
$tmp2315 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2315->value = $tmp2314;
frost$core$Int64 $tmp2316 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2317 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2316);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2318;
$tmp2318 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2318->value = $tmp2317;
ITable* $tmp2319 = ((frost$core$Equatable*) $tmp2315)->$class->itable;
while ($tmp2319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2319 = $tmp2319->next;
}
$fn2321 $tmp2320 = $tmp2319->methods[0];
frost$core$Bit $tmp2322 = $tmp2320(((frost$core$Equatable*) $tmp2315), ((frost$core$Equatable*) $tmp2318));
bool $tmp2323 = $tmp2322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2315)));
if ($tmp2323) goto block1; else goto block3;
block1:;
// line 936
org$frostlang$frostc$ASTNode* $tmp2324 = org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
org$frostlang$frostc$ASTNode* $tmp2325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local0) = $tmp2324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// line 937
org$frostlang$frostc$ASTNode* $tmp2326 = *(&local0);
frost$core$Bit $tmp2327 = frost$core$Bit$init$builtin_bit($tmp2326 == NULL);
bool $tmp2328 = $tmp2327.value;
if ($tmp2328) goto block4; else goto block5;
block4:;
// line 938
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 942
frost$core$Int64 $tmp2330 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2331 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2330);
org$frostlang$frostc$parser$Token$nullable $tmp2332 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2331, &$s2333);
*(&local1) = $tmp2332;
// line 943
org$frostlang$frostc$parser$Token$nullable $tmp2334 = *(&local1);
frost$core$Bit $tmp2335 = frost$core$Bit$init$builtin_bit(!$tmp2334.nonnull);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block6; else goto block7;
block6:;
// line 944
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 946
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2338 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp2339 = *(&local1);
frost$core$String* $tmp2340 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2339.value));
frost$core$MutableString$init$frost$core$String($tmp2338, $tmp2340);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$MutableString* $tmp2341 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local2) = $tmp2338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
// line 947
goto block8;
block8:;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp2343 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2342);
org$frostlang$frostc$parser$Token$nullable $tmp2344 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2343);
frost$core$Bit $tmp2345 = frost$core$Bit$init$builtin_bit($tmp2344.nonnull);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block9; else goto block10;
block9:;
// line 948
frost$core$Int64 $tmp2347 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2348 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2347);
org$frostlang$frostc$parser$Token$nullable $tmp2349 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2348, &$s2350);
*(&local3) = $tmp2349;
// line 949
org$frostlang$frostc$parser$Token$nullable $tmp2351 = *(&local3);
frost$core$Bit $tmp2352 = frost$core$Bit$init$builtin_bit(!$tmp2351.nonnull);
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block11; else goto block12;
block11:;
// line 950
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2354 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 952
frost$core$MutableString* $tmp2356 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2356, &$s2357);
// line 953
frost$core$MutableString* $tmp2358 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp2359 = *(&local3);
frost$core$String* $tmp2360 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2359.value));
frost$core$MutableString$append$frost$core$String($tmp2358, $tmp2360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
goto block8;
block10:;
// line 955
frost$core$MutableString* $tmp2361 = *(&local2);
frost$core$String* $tmp2362 = frost$core$MutableString$finish$R$frost$core$String($tmp2361);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$String* $tmp2363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local4) = $tmp2362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// line 956
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2364 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2365 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp2366 = *(&local1);
org$frostlang$frostc$Position $tmp2367 = ((org$frostlang$frostc$parser$Token) $tmp2366.value).position;
frost$core$String* $tmp2368 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2364, $tmp2365, $tmp2367, $tmp2368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
org$frostlang$frostc$ASTNode* $tmp2369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
*(&local0) = $tmp2364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// line 957
org$frostlang$frostc$parser$Token $tmp2370 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2371 = $tmp2370.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2372;
$tmp2372 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2372->value = $tmp2371;
frost$core$Int64 $tmp2373 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2374 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2373);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2375;
$tmp2375 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2375->value = $tmp2374;
ITable* $tmp2376 = ((frost$core$Equatable*) $tmp2372)->$class->itable;
while ($tmp2376->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2376 = $tmp2376->next;
}
$fn2378 $tmp2377 = $tmp2376->methods[0];
frost$core$Bit $tmp2379 = $tmp2377(((frost$core$Equatable*) $tmp2372), ((frost$core$Equatable*) $tmp2375));
bool $tmp2380 = $tmp2379.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2375)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2372)));
if ($tmp2380) goto block13; else goto block14;
block13:;
// line 960
bool $tmp2381 = param1.value;
if ($tmp2381) goto block15; else goto block16;
block15:;
// line 961
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 963
org$frostlang$frostc$parser$Token $tmp2382 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 964
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2383 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2383);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$collections$Array* $tmp2384 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local5) = $tmp2383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
// line 965
frost$core$Bit $tmp2385 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2386 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2385);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local6) = $tmp2386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
// line 966
org$frostlang$frostc$ASTNode* $tmp2388 = *(&local6);
frost$core$Bit $tmp2389 = frost$core$Bit$init$builtin_bit($tmp2388 == NULL);
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block17; else goto block18;
block17:;
// line 967
bool $tmp2391 = param1.value;
if ($tmp2391) goto block19; else goto block20;
block19:;
// line 968
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 969
org$frostlang$frostc$ASTNode* $tmp2392 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
org$frostlang$frostc$ASTNode* $tmp2393 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2394 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2396 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2392;
block20:;
// line 971
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2398 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2399 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2400 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 973
frost$collections$Array* $tmp2403 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2404 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2403, ((frost$core$Object*) $tmp2404));
// line 974
goto block21;
block21:;
frost$core$Int64 $tmp2405 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2406 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2405);
org$frostlang$frostc$parser$Token$nullable $tmp2407 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2406);
frost$core$Bit $tmp2408 = frost$core$Bit$init$builtin_bit($tmp2407.nonnull);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block22; else goto block23;
block22:;
// line 975
frost$core$Bit $tmp2410 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2411 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2410);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
org$frostlang$frostc$ASTNode* $tmp2412 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local6) = $tmp2411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
// line 976
org$frostlang$frostc$ASTNode* $tmp2413 = *(&local6);
frost$core$Bit $tmp2414 = frost$core$Bit$init$builtin_bit($tmp2413 == NULL);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block24; else goto block25;
block24:;
// line 977
bool $tmp2416 = param1.value;
if ($tmp2416) goto block26; else goto block27;
block26:;
// line 978
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 979
org$frostlang$frostc$ASTNode* $tmp2417 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
org$frostlang$frostc$ASTNode* $tmp2418 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2419 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2420 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2417;
block27:;
// line 981
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2423 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2425 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2426 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 983
frost$collections$Array* $tmp2428 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2429 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2428, ((frost$core$Object*) $tmp2429));
goto block21;
block23:;
// line 985
frost$core$Int64 $tmp2430 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2431 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2430);
org$frostlang$frostc$parser$Token$nullable $tmp2432 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2431, &$s2433);
frost$core$Bit $tmp2434 = frost$core$Bit$init$builtin_bit(!$tmp2432.nonnull);
bool $tmp2435 = $tmp2434.value;
if ($tmp2435) goto block28; else goto block29;
block28:;
// line 986
bool $tmp2436 = param1.value;
if ($tmp2436) goto block30; else goto block31;
block30:;
// line 987
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 988
org$frostlang$frostc$ASTNode* $tmp2437 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
org$frostlang$frostc$ASTNode* $tmp2438 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2439 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2437;
block31:;
// line 990
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2443 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2444 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2445 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 992
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2448 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2449 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$nullable $tmp2450 = *(&local1);
org$frostlang$frostc$Position $tmp2451 = ((org$frostlang$frostc$parser$Token) $tmp2450.value).position;
frost$core$String* $tmp2452 = *(&local4);
frost$collections$Array* $tmp2453 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2454 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2453);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2448, $tmp2449, $tmp2451, $tmp2452, $tmp2454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlang$frostc$ASTNode* $tmp2455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = $tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// line 994
bool $tmp2456 = param1.value;
if ($tmp2456) goto block32; else goto block33;
block32:;
// line 995
org$frostlang$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2457 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2458 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2460 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 999
frost$core$Int64 $tmp2461 = (frost$core$Int64) {98};
org$frostlang$frostc$parser$Token$Kind $tmp2462 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2461);
org$frostlang$frostc$parser$Token$nullable $tmp2463 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2462);
frost$core$Bit $tmp2464 = frost$core$Bit$init$builtin_bit($tmp2463.nonnull);
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block34; else goto block35;
block34:;
// line 1000
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2466 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2467 = (frost$core$Int64) {32};
org$frostlang$frostc$ASTNode* $tmp2468 = *(&local0);
$fn2470 $tmp2469 = ($fn2470) $tmp2468->$class->vtable[2];
org$frostlang$frostc$Position $tmp2471 = $tmp2469($tmp2468);
org$frostlang$frostc$ASTNode* $tmp2472 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp2466, $tmp2467, $tmp2471, $tmp2472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local0) = $tmp2466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
goto block35;
block35:;
// line 1002
org$frostlang$frostc$ASTNode* $tmp2474 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlang$frostc$ASTNode* $tmp2475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2474;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1009
frost$core$Int64 $tmp2476 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2477 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2476);
org$frostlang$frostc$parser$Token$nullable $tmp2478 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2477, &$s2479);
frost$core$Bit $tmp2480 = frost$core$Bit$init$builtin_bit(!$tmp2478.nonnull);
bool $tmp2481 = $tmp2480.value;
if ($tmp2481) goto block1; else goto block2;
block1:;
// line 1010
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1012
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2482 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2482);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$collections$Array* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = $tmp2482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
// line 1
// line 1014
org$frostlang$frostc$ASTNode* $tmp2484 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
org$frostlang$frostc$ASTNode* $tmp2485 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local1) = $tmp2484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
// line 1015
org$frostlang$frostc$ASTNode* $tmp2486 = *(&local1);
frost$core$Bit $tmp2487 = frost$core$Bit$init$builtin_bit($tmp2486 == NULL);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block3; else goto block4;
block3:;
// line 1016
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2489 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2490 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 1018
frost$collections$Array* $tmp2491 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2492 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2491, ((frost$core$Object*) $tmp2492));
org$frostlang$frostc$ASTNode* $tmp2493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1020
goto block5;
block5:;
frost$core$Int64 $tmp2494 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2495 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2494);
org$frostlang$frostc$parser$Token$nullable $tmp2496 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2495);
frost$core$Bit $tmp2497 = frost$core$Bit$init$builtin_bit($tmp2496.nonnull);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block6; else goto block7;
block6:;
// line 1021
org$frostlang$frostc$ASTNode* $tmp2499 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$ASTNode* $tmp2500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local2) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// line 1022
org$frostlang$frostc$ASTNode* $tmp2501 = *(&local2);
frost$core$Bit $tmp2502 = frost$core$Bit$init$builtin_bit($tmp2501 == NULL);
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block8; else goto block9;
block8:;
// line 1023
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 1025
frost$collections$Array* $tmp2506 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2506, ((frost$core$Object*) $tmp2507));
org$frostlang$frostc$ASTNode* $tmp2508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1027
frost$core$Int64 $tmp2509 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2510 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2509);
org$frostlang$frostc$parser$Token$nullable $tmp2511 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2510, &$s2512);
frost$core$Bit $tmp2513 = frost$core$Bit$init$builtin_bit(!$tmp2511.nonnull);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block10; else goto block11;
block10:;
// line 1028
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 1030
frost$collections$Array* $tmp2516 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp2517 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2516);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$collections$Array* $tmp2518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2517;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$FixedArray* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$parser$Token$nullable local12;
frost$core$Bit local13;
org$frostlang$frostc$parser$Token local14;
frost$core$Bit local15;
// line 1044
org$frostlang$frostc$ASTNode* $tmp2519 = org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlang$frostc$ASTNode* $tmp2520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local0) = $tmp2519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// line 1045
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local0);
frost$core$Bit $tmp2522 = frost$core$Bit$init$builtin_bit($tmp2521 == NULL);
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block1; else goto block2;
block1:;
// line 1046
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1048
goto block3;
block3:;
// line 1049
org$frostlang$frostc$parser$Token $tmp2525 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2525;
// line 1050
org$frostlang$frostc$parser$Token $tmp2526 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2527 = $tmp2526.kind;
frost$core$Int64 $tmp2528 = $tmp2527.$rawValue;
frost$core$Int64 $tmp2529 = (frost$core$Int64) {107};
frost$core$Bit $tmp2530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2529);
bool $tmp2531 = $tmp2530.value;
if ($tmp2531) goto block6; else goto block7;
block6:;
// line 1052
frost$collections$Stack** $tmp2532 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2533 = *$tmp2532;
frost$core$Bit $tmp2534 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2535;
$tmp2535 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2535->value = $tmp2534;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2533, ((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
// line 1053
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2536 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2536);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$collections$Array* $tmp2537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local2) = $tmp2536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
// line 1054
frost$core$Int64 $tmp2538 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2539 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2538);
org$frostlang$frostc$parser$Token$nullable $tmp2540 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2539);
frost$core$Bit $tmp2541 = frost$core$Bit$init$builtin_bit(!$tmp2540.nonnull);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block8; else goto block9;
block8:;
// line 1055
org$frostlang$frostc$ASTNode* $tmp2543 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
org$frostlang$frostc$ASTNode* $tmp2544 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
*(&local3) = $tmp2543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
// line 1056
org$frostlang$frostc$ASTNode* $tmp2545 = *(&local3);
frost$core$Bit $tmp2546 = frost$core$Bit$init$builtin_bit($tmp2545 == NULL);
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block10; else goto block11;
block10:;
// line 1057
frost$collections$Stack** $tmp2548 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2549 = *$tmp2548;
frost$core$Object* $tmp2550 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2549);
frost$core$Frost$unref$frost$core$Object$Q($tmp2550);
// line 1058
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2551 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2552 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2553 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1060
frost$collections$Array* $tmp2554 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2555 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2554, ((frost$core$Object*) $tmp2555));
// line 1061
goto block12;
block12:;
frost$core$Int64 $tmp2556 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2557 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2556);
org$frostlang$frostc$parser$Token$nullable $tmp2558 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2557);
frost$core$Bit $tmp2559 = frost$core$Bit$init$builtin_bit($tmp2558.nonnull);
bool $tmp2560 = $tmp2559.value;
if ($tmp2560) goto block13; else goto block14;
block13:;
// line 1062
org$frostlang$frostc$ASTNode* $tmp2561 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local3) = $tmp2561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// line 1063
org$frostlang$frostc$ASTNode* $tmp2563 = *(&local3);
frost$core$Bit $tmp2564 = frost$core$Bit$init$builtin_bit($tmp2563 == NULL);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block15; else goto block16;
block15:;
// line 1064
frost$collections$Stack** $tmp2566 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2567 = *$tmp2566;
frost$core$Object* $tmp2568 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2567);
frost$core$Frost$unref$frost$core$Object$Q($tmp2568);
// line 1065
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2569 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2571 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1067
frost$collections$Array* $tmp2572 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2572, ((frost$core$Object*) $tmp2573));
goto block12;
block14:;
// line 1069
frost$core$Int64 $tmp2574 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2575 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2574);
org$frostlang$frostc$parser$Token$nullable $tmp2576 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2575, &$s2577);
frost$core$Bit $tmp2578 = frost$core$Bit$init$builtin_bit(!$tmp2576.nonnull);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block17; else goto block18;
block17:;
// line 1070
frost$collections$Stack** $tmp2580 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2581 = *$tmp2580;
frost$core$Object* $tmp2582 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2581);
frost$core$Frost$unref$frost$core$Object$Q($tmp2582);
// line 1071
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2583 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
org$frostlang$frostc$ASTNode* $tmp2586 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1074
frost$collections$Stack** $tmp2587 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2588 = *$tmp2587;
frost$core$Object* $tmp2589 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2588);
frost$core$Frost$unref$frost$core$Object$Q($tmp2589);
// line 1075
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2590 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2591 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token $tmp2592 = *(&local1);
org$frostlang$frostc$Position $tmp2593 = $tmp2592.position;
org$frostlang$frostc$ASTNode* $tmp2594 = *(&local0);
frost$collections$Array* $tmp2595 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2596 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2595);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2590, $tmp2591, $tmp2593, $tmp2594, $tmp2596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
org$frostlang$frostc$ASTNode* $tmp2597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local0) = $tmp2590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$collections$Array* $tmp2598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {105};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block19; else goto block20;
block19:;
// line 1079
org$frostlang$frostc$ASTNode* $tmp2602 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlang$frostc$ASTNode* $tmp2603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local4) = $tmp2602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// line 1080
org$frostlang$frostc$ASTNode* $tmp2604 = *(&local4);
frost$core$Bit $tmp2605 = frost$core$Bit$init$builtin_bit($tmp2604 == NULL);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block21; else goto block22;
block21:;
// line 1081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1083
frost$core$Int64 $tmp2609 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2610 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2609);
org$frostlang$frostc$parser$Token$nullable $tmp2611 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2610, &$s2612);
frost$core$Bit $tmp2613 = frost$core$Bit$init$builtin_bit(!$tmp2611.nonnull);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block23; else goto block24;
block23:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2616 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block24:;
// line 1086
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2617 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2618 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2619 = *(&local1);
org$frostlang$frostc$Position $tmp2620 = $tmp2619.position;
org$frostlang$frostc$ASTNode* $tmp2621 = *(&local0);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp2623 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2622);
org$frostlang$frostc$ASTNode* $tmp2624 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2617, $tmp2618, $tmp2620, $tmp2621, $tmp2623, $tmp2624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
org$frostlang$frostc$ASTNode* $tmp2625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local0) = $tmp2617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
org$frostlang$frostc$ASTNode* $tmp2626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {102};
frost$core$Bit $tmp2628 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2627);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block25; else goto block26;
block25:;
// line 1089
*(&local5) = ((frost$core$String*) NULL);
// line 1090
frost$core$Int64 $tmp2630 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp2631 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2630);
org$frostlang$frostc$parser$Token$nullable $tmp2632 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2631);
frost$core$Bit $tmp2633 = frost$core$Bit$init$builtin_bit($tmp2632.nonnull);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block27; else goto block29;
block27:;
// line 1091
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2635));
frost$core$String* $tmp2636 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
*(&local5) = &$s2635;
goto block28;
block29:;
// line 1
// line 1094
frost$core$String* $tmp2637 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
frost$core$String* $tmp2638 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local5) = $tmp2637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// line 1095
frost$core$String* $tmp2639 = *(&local5);
frost$core$Bit $tmp2640 = frost$core$Bit$init$builtin_bit($tmp2639 == NULL);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block30; else goto block31;
block30:;
// line 1096
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2642 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1099
org$frostlang$frostc$ASTNode* $tmp2644 = *(&local0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlang$frostc$ASTNode* $tmp2645 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local6) = $tmp2644;
// line 1100
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2646 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2647 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token $tmp2648 = *(&local1);
org$frostlang$frostc$Position $tmp2649 = $tmp2648.position;
org$frostlang$frostc$ASTNode* $tmp2650 = *(&local6);
frost$core$String* $tmp2651 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2646, $tmp2647, $tmp2649, $tmp2650, $tmp2651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$ASTNode* $tmp2652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local0) = $tmp2646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// line 1101
org$frostlang$frostc$parser$Token $tmp2653 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2654 = $tmp2653.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2655;
$tmp2655 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2655->value = $tmp2654;
frost$core$Int64 $tmp2656 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2657 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2656);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2658;
$tmp2658 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2658->value = $tmp2657;
ITable* $tmp2659 = ((frost$core$Equatable*) $tmp2655)->$class->itable;
while ($tmp2659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2659 = $tmp2659->next;
}
$fn2661 $tmp2660 = $tmp2659->methods[0];
frost$core$Bit $tmp2662 = $tmp2660(((frost$core$Equatable*) $tmp2655), ((frost$core$Equatable*) $tmp2658));
bool $tmp2663 = $tmp2662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2658)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2655)));
if ($tmp2663) goto block32; else goto block33;
block32:;
// line 1102
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1103
org$frostlang$frostc$FixedArray* $tmp2664 = org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
org$frostlang$frostc$FixedArray* $tmp2665 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local7) = $tmp2664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// line 1104
org$frostlang$frostc$FixedArray* $tmp2666 = *(&local7);
frost$core$Bit $tmp2667 = frost$core$Bit$init$builtin_bit($tmp2666 != NULL);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block34; else goto block36;
block34:;
// line 1105
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1106
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2669 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2670 = (frost$core$Int64) {17};
org$frostlang$frostc$parser$Token $tmp2671 = *(&local1);
org$frostlang$frostc$Position $tmp2672 = $tmp2671.position;
org$frostlang$frostc$ASTNode* $tmp2673 = *(&local6);
frost$core$String* $tmp2674 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2675 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2669, $tmp2670, $tmp2672, $tmp2673, $tmp2674, $tmp2675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
org$frostlang$frostc$ASTNode* $tmp2676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local0) = $tmp2669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
goto block35;
block36:;
// line 1
// line 1109
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1110
org$frostlang$frostc$ASTNode* $tmp2677 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
org$frostlang$frostc$FixedArray* $tmp2678 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2679 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2680 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2677;
block35:;
org$frostlang$frostc$FixedArray* $tmp2682 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2683 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2684 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {93};
frost$core$Bit $tmp2686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block37; else goto block38;
block37:;
// line 1115
org$frostlang$frostc$ASTNode* $tmp2688 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
org$frostlang$frostc$ASTNode* $tmp2689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local8) = $tmp2688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
// line 1116
org$frostlang$frostc$ASTNode* $tmp2690 = *(&local8);
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit($tmp2690 == NULL);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block39; else goto block40;
block39:;
// line 1117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2693 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 1119
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2695 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2696 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2697 = *(&local1);
org$frostlang$frostc$Position $tmp2698 = $tmp2697.position;
org$frostlang$frostc$ASTNode* $tmp2699 = *(&local0);
frost$core$Int64 $tmp2700 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp2701 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2700);
org$frostlang$frostc$ASTNode* $tmp2702 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2695, $tmp2696, $tmp2698, $tmp2699, $tmp2701, $tmp2702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
org$frostlang$frostc$ASTNode* $tmp2703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local0) = $tmp2695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2705 = (frost$core$Int64) {66};
frost$core$Bit $tmp2706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2705);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block41; else goto block42;
block41:;
// line 1124
org$frostlang$frostc$parser$Token $tmp2708 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2708);
// line 1125
org$frostlang$frostc$ASTNode* $tmp2709 = *(&local0);
frost$core$String* $tmp2710 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2709);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$String* $tmp2711 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local9) = $tmp2710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// line 1126
frost$core$String* $tmp2712 = *(&local9);
frost$core$Bit $tmp2713 = frost$core$Bit$init$builtin_bit($tmp2712 != NULL);
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block43; else goto block44;
block43:;
// line 1127
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1128
org$frostlang$frostc$parser$Token $tmp2715 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1131
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2716 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2716);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$collections$Array* $tmp2717 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local10) = $tmp2716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// line 1132
frost$core$Bit $tmp2718 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2719 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2718);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local11) = $tmp2719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
// line 1133
org$frostlang$frostc$ASTNode* $tmp2721 = *(&local11);
frost$core$Bit $tmp2722 = frost$core$Bit$init$builtin_bit($tmp2721 == NULL);
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block45; else goto block46;
block45:;
// line 1134
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1135
org$frostlang$frostc$ASTNode* $tmp2724 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2726 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2727 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2724;
block46:;
// line 1137
frost$collections$Array* $tmp2729 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2730 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2729, ((frost$core$Object*) $tmp2730));
// line 1138
goto block47;
block47:;
frost$core$Int64 $tmp2731 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2732 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2731);
org$frostlang$frostc$parser$Token$nullable $tmp2733 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2732);
frost$core$Bit $tmp2734 = frost$core$Bit$init$builtin_bit($tmp2733.nonnull);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block48; else goto block49;
block48:;
// line 1139
frost$core$Bit $tmp2736 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2737 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$ASTNode* $tmp2738 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local11) = $tmp2737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
// line 1140
org$frostlang$frostc$ASTNode* $tmp2739 = *(&local11);
frost$core$Bit $tmp2740 = frost$core$Bit$init$builtin_bit($tmp2739 == NULL);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block50; else goto block51;
block50:;
// line 1141
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1142
org$frostlang$frostc$ASTNode* $tmp2742 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
org$frostlang$frostc$ASTNode* $tmp2743 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2744 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2745 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2742;
block51:;
// line 1144
frost$collections$Array* $tmp2747 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2748 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2747, ((frost$core$Object*) $tmp2748));
goto block47;
block49:;
// line 1146
frost$core$Int64 $tmp2749 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2750 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2749);
org$frostlang$frostc$parser$Token$nullable $tmp2751 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2750, &$s2752);
*(&local12) = $tmp2751;
// line 1147
org$frostlang$frostc$parser$Token$nullable $tmp2753 = *(&local12);
frost$core$Bit $tmp2754 = frost$core$Bit$init$builtin_bit(!$tmp2753.nonnull);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block52; else goto block53;
block52:;
// line 1148
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1149
org$frostlang$frostc$ASTNode* $tmp2756 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlang$frostc$ASTNode* $tmp2757 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2758 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2759 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2756;
block53:;
// line 1178
// line 1179
frost$collections$Stack** $tmp2761 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2762 = *$tmp2761;
frost$core$Int64 $tmp2763 = (frost$core$Int64) {0};
frost$core$Object* $tmp2764 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2762, $tmp2763);
bool $tmp2765 = ((frost$core$Bit$wrapper*) $tmp2764)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2764);
if ($tmp2765) goto block54; else goto block56;
block54:;
// line 1180
org$frostlang$frostc$parser$Token $tmp2766 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local14) = $tmp2766;
// line 1181
org$frostlang$frostc$parser$Token $tmp2767 = *(&local14);
org$frostlang$frostc$parser$Token$Kind $tmp2768 = $tmp2767.kind;
frost$core$Int64 $tmp2769 = $tmp2768.$rawValue;
frost$core$Int64 $tmp2770 = (frost$core$Int64) {102};
frost$core$Bit $tmp2771 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2770);
bool $tmp2772 = $tmp2771.value;
if ($tmp2772) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2773 = (frost$core$Int64) {109};
frost$core$Bit $tmp2774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2776 = (frost$core$Int64) {93};
frost$core$Bit $tmp2777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2776);
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block58; else goto block61;
block58:;
// line 1183
frost$core$Bit $tmp2779 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2779;
goto block57;
block61:;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {107};
frost$core$Bit $tmp2781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2780);
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block62; else goto block63;
block62:;
// line 1186
org$frostlang$frostc$parser$Token $tmp2783 = *(&local14);
org$frostlang$frostc$Position $tmp2784 = $tmp2783.position;
frost$core$Int64 $tmp2785 = $tmp2784.line;
org$frostlang$frostc$parser$Token$nullable $tmp2786 = *(&local12);
org$frostlang$frostc$Position $tmp2787 = ((org$frostlang$frostc$parser$Token) $tmp2786.value).position;
frost$core$Int64 $tmp2788 = $tmp2787.line;
frost$core$Bit $tmp2789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2785, $tmp2788);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block64; else goto block65;
block64:;
org$frostlang$frostc$parser$Token $tmp2791 = *(&local14);
org$frostlang$frostc$Position $tmp2792 = $tmp2791.position;
frost$core$Int64 $tmp2793 = $tmp2792.column;
org$frostlang$frostc$parser$Token$nullable $tmp2794 = *(&local12);
org$frostlang$frostc$Position $tmp2795 = ((org$frostlang$frostc$parser$Token) $tmp2794.value).position;
frost$core$Int64 $tmp2796 = $tmp2795.column;
frost$core$Int64 $tmp2797 = (frost$core$Int64) {1};
int64_t $tmp2798 = $tmp2796.value;
int64_t $tmp2799 = $tmp2797.value;
int64_t $tmp2800 = $tmp2798 + $tmp2799;
frost$core$Int64 $tmp2801 = (frost$core$Int64) {$tmp2800};
frost$core$Bit $tmp2802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2793, $tmp2801);
*(&local15) = $tmp2802;
goto block66;
block65:;
*(&local15) = $tmp2789;
goto block66;
block66:;
frost$core$Bit $tmp2803 = *(&local15);
*(&local13) = $tmp2803;
goto block57;
block63:;
// line 1190
frost$core$Bit $tmp2804 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2804;
goto block57;
block57:;
// line 1193
frost$core$Bit $tmp2805 = *(&local13);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block67; else goto block68;
block67:;
// line 1194
org$frostlang$frostc$parser$Token $tmp2807 = *(&local14);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2807);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1198
frost$core$Bit $tmp2808 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2808;
goto block55;
block55:;
// line 1200
frost$core$Bit $tmp2809 = *(&local13);
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block69; else goto block71;
block69:;
// line 1201
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1202
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2811 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2812 = (frost$core$Int64) {21};
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local0);
$fn2815 $tmp2814 = ($fn2815) $tmp2813->$class->vtable[2];
org$frostlang$frostc$Position $tmp2816 = $tmp2814($tmp2813);
frost$core$String* $tmp2817 = *(&local9);
frost$collections$Array* $tmp2818 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2819 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2818);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2811, $tmp2812, $tmp2816, $tmp2817, $tmp2819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local0) = $tmp2811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// line 1204
org$frostlang$frostc$ASTNode* $tmp2821 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2822 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2823 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1207
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1208
org$frostlang$frostc$ASTNode* $tmp2824 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
org$frostlang$frostc$ASTNode* $tmp2825 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2826 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2827 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2824;
block70:;
org$frostlang$frostc$ASTNode* $tmp2829 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2830 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1211
org$frostlang$frostc$ASTNode* $tmp2831 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$String* $tmp2832 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2831;
block42:;
// line 1214
org$frostlang$frostc$parser$Token $tmp2834 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2834);
// line 1215
org$frostlang$frostc$ASTNode* $tmp2835 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
org$frostlang$frostc$ASTNode* $tmp2836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2835;
block5:;
goto block3;
block4:;
goto block72;
block72:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1225
org$frostlang$frostc$ASTNode* $tmp2837 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
org$frostlang$frostc$ASTNode* $tmp2838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
*(&local0) = $tmp2837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
// line 1226
org$frostlang$frostc$ASTNode* $tmp2839 = *(&local0);
frost$core$Bit $tmp2840 = frost$core$Bit$init$builtin_bit($tmp2839 == NULL);
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block1; else goto block2;
block1:;
// line 1227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1229
goto block3;
block3:;
// line 1230
frost$core$Int64 $tmp2843 = (frost$core$Int64) {61};
org$frostlang$frostc$parser$Token$Kind $tmp2844 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2843);
org$frostlang$frostc$parser$Token$nullable $tmp2845 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2844);
*(&local1) = $tmp2845;
// line 1231
org$frostlang$frostc$parser$Token$nullable $tmp2846 = *(&local1);
frost$core$Bit $tmp2847 = frost$core$Bit$init$builtin_bit(!$tmp2846.nonnull);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block5; else goto block6;
block5:;
// line 1232
goto block4;
block6:;
// line 1234
org$frostlang$frostc$ASTNode* $tmp2849 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
org$frostlang$frostc$ASTNode* $tmp2850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local2) = $tmp2849;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
// line 1235
org$frostlang$frostc$ASTNode* $tmp2851 = *(&local2);
frost$core$Bit $tmp2852 = frost$core$Bit$init$builtin_bit($tmp2851 == NULL);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block7; else goto block8;
block7:;
// line 1236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2854 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1238
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2856 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2857 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp2858 = *(&local1);
org$frostlang$frostc$Position $tmp2859 = ((org$frostlang$frostc$parser$Token) $tmp2858.value).position;
org$frostlang$frostc$ASTNode* $tmp2860 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp2861 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2862 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp2861.value));
org$frostlang$frostc$ASTNode* $tmp2863 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2856, $tmp2857, $tmp2859, $tmp2860, $tmp2862, $tmp2863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
org$frostlang$frostc$ASTNode* $tmp2864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local0) = $tmp2856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
org$frostlang$frostc$ASTNode* $tmp2865 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1240
org$frostlang$frostc$ASTNode* $tmp2866 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
org$frostlang$frostc$ASTNode* $tmp2867 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2866;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1247
org$frostlang$frostc$parser$Token $tmp2868 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2868;
// line 1248
org$frostlang$frostc$parser$Token $tmp2869 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2870 = $tmp2869.kind;
frost$core$Int64 $tmp2871 = $tmp2870.$rawValue;
frost$core$Int64 $tmp2872 = (frost$core$Int64) {56};
frost$core$Bit $tmp2873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2872);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2875 = (frost$core$Int64) {53};
frost$core$Bit $tmp2876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2875);
bool $tmp2877 = $tmp2876.value;
if ($tmp2877) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2878 = (frost$core$Int64) {54};
frost$core$Bit $tmp2879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2878);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block2; else goto block5;
block2:;
// line 1250
org$frostlang$frostc$ASTNode* $tmp2881 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
org$frostlang$frostc$ASTNode* $tmp2882 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local1) = $tmp2881;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
// line 1251
org$frostlang$frostc$ASTNode* $tmp2883 = *(&local1);
frost$core$Bit $tmp2884 = frost$core$Bit$init$builtin_bit($tmp2883 == NULL);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block6; else goto block7;
block6:;
// line 1252
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2886 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 1254
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2887 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2888 = (frost$core$Int64) {49};
org$frostlang$frostc$parser$Token $tmp2889 = *(&local0);
org$frostlang$frostc$Position $tmp2890 = $tmp2889.position;
org$frostlang$frostc$parser$Token $tmp2891 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator $tmp2892 = org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator($tmp2891);
org$frostlang$frostc$ASTNode* $tmp2893 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode($tmp2887, $tmp2888, $tmp2890, $tmp2892, $tmp2893);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
org$frostlang$frostc$ASTNode* $tmp2894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2887;
block5:;
// line 1257
org$frostlang$frostc$parser$Token $tmp2895 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2895);
// line 1258
org$frostlang$frostc$ASTNode* $tmp2896 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
return $tmp2896;
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1270
org$frostlang$frostc$ASTNode* $tmp2897 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
org$frostlang$frostc$ASTNode* $tmp2898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local0) = $tmp2897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// line 1271
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local0);
frost$core$Bit $tmp2900 = frost$core$Bit$init$builtin_bit($tmp2899 == NULL);
bool $tmp2901 = $tmp2900.value;
if ($tmp2901) goto block1; else goto block2;
block1:;
// line 1272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1274
goto block3;
block3:;
// line 1275
org$frostlang$frostc$parser$Token $tmp2903 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2903;
// line 1276
org$frostlang$frostc$parser$Token $tmp2904 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2905 = $tmp2904.kind;
frost$core$Int64 $tmp2906 = $tmp2905.$rawValue;
frost$core$Int64 $tmp2907 = (frost$core$Int64) {57};
frost$core$Bit $tmp2908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2907);
bool $tmp2909 = $tmp2908.value;
if ($tmp2909) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2910 = (frost$core$Int64) {58};
frost$core$Bit $tmp2911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2910);
bool $tmp2912 = $tmp2911.value;
if ($tmp2912) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2913 = (frost$core$Int64) {59};
frost$core$Bit $tmp2914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2913);
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2916 = (frost$core$Int64) {60};
frost$core$Bit $tmp2917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2916);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2919 = (frost$core$Int64) {76};
frost$core$Bit $tmp2920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2919);
bool $tmp2921 = $tmp2920.value;
if ($tmp2921) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2922 = (frost$core$Int64) {71};
frost$core$Bit $tmp2923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2922);
bool $tmp2924 = $tmp2923.value;
if ($tmp2924) goto block6; else goto block12;
block6:;
// line 1279
org$frostlang$frostc$ASTNode* $tmp2925 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
org$frostlang$frostc$ASTNode* $tmp2926 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
*(&local2) = $tmp2925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// line 1280
org$frostlang$frostc$ASTNode* $tmp2927 = *(&local2);
frost$core$Bit $tmp2928 = frost$core$Bit$init$builtin_bit($tmp2927 == NULL);
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block13; else goto block14;
block13:;
// line 1281
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 1283
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2932 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2933 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2934 = *(&local1);
org$frostlang$frostc$Position $tmp2935 = $tmp2934.position;
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2937 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2938 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2937);
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2932, $tmp2933, $tmp2935, $tmp2936, $tmp2938, $tmp2939);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
org$frostlang$frostc$ASTNode* $tmp2940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local0) = $tmp2932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block12:;
frost$core$Int64 $tmp2942 = (frost$core$Int64) {67};
frost$core$Bit $tmp2943 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2942);
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block15; else goto block16;
block15:;
// line 1287
org$frostlang$frostc$parser$Token $tmp2945 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2945;
// line 1288
org$frostlang$frostc$parser$Token $tmp2946 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2947 = $tmp2946.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2948;
$tmp2948 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2948->value = $tmp2947;
frost$core$Int64 $tmp2949 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2950 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2949);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2951;
$tmp2951 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2951->value = $tmp2950;
ITable* $tmp2952 = ((frost$core$Equatable*) $tmp2948)->$class->itable;
while ($tmp2952->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2952 = $tmp2952->next;
}
$fn2954 $tmp2953 = $tmp2952->methods[0];
frost$core$Bit $tmp2955 = $tmp2953(((frost$core$Equatable*) $tmp2948), ((frost$core$Equatable*) $tmp2951));
bool $tmp2956 = $tmp2955.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2951)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2948)));
if ($tmp2956) goto block17; else goto block19;
block17:;
// line 1290
org$frostlang$frostc$ASTNode* $tmp2957 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
org$frostlang$frostc$ASTNode* $tmp2958 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local4) = $tmp2957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// line 1291
org$frostlang$frostc$ASTNode* $tmp2959 = *(&local4);
frost$core$Bit $tmp2960 = frost$core$Bit$init$builtin_bit($tmp2959 == NULL);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block20; else goto block21;
block20:;
// line 1292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2962 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1294
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2964 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2965 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2966 = *(&local1);
org$frostlang$frostc$Position $tmp2967 = $tmp2966.position;
org$frostlang$frostc$ASTNode* $tmp2968 = *(&local0);
frost$core$Int64 $tmp2969 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2970 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2969);
org$frostlang$frostc$ASTNode* $tmp2971 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2964, $tmp2965, $tmp2967, $tmp2968, $tmp2970, $tmp2971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
org$frostlang$frostc$ASTNode* $tmp2972 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
*(&local0) = $tmp2964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
org$frostlang$frostc$ASTNode* $tmp2973 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block19:;
// line 1
// line 1298
org$frostlang$frostc$parser$Token $tmp2974 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2974);
// line 1299
org$frostlang$frostc$parser$Token $tmp2975 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2975);
// line 1300
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
org$frostlang$frostc$ASTNode* $tmp2977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2976;
block18:;
goto block5;
block16:;
// line 1304
org$frostlang$frostc$parser$Token $tmp2978 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2978);
// line 1305
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
org$frostlang$frostc$ASTNode* $tmp2980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2979;
block5:;
goto block3;
block4:;
goto block22;
block22:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bitwiseExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1316
org$frostlang$frostc$ASTNode* $tmp2981 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local0) = $tmp2981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
// line 1317
org$frostlang$frostc$ASTNode* $tmp2983 = *(&local0);
frost$core$Bit $tmp2984 = frost$core$Bit$init$builtin_bit($tmp2983 == NULL);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block1; else goto block2;
block1:;
// line 1318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1320
goto block3;
block3:;
// line 1321
org$frostlang$frostc$parser$Token $tmp2987 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2987;
// line 1322
org$frostlang$frostc$parser$Token $tmp2988 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2989 = $tmp2988.kind;
frost$core$Int64 $tmp2990 = $tmp2989.$rawValue;
frost$core$Int64 $tmp2991 = (frost$core$Int64) {73};
frost$core$Bit $tmp2992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2990, $tmp2991);
bool $tmp2993 = $tmp2992.value;
if ($tmp2993) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {71};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2990, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {75};
frost$core$Bit $tmp2998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2990, $tmp2997);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block6; else goto block9;
block6:;
// line 1324
org$frostlang$frostc$ASTNode* $tmp3000 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
org$frostlang$frostc$ASTNode* $tmp3001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
*(&local2) = $tmp3000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
// line 1325
org$frostlang$frostc$ASTNode* $tmp3002 = *(&local2);
frost$core$Bit $tmp3003 = frost$core$Bit$init$builtin_bit($tmp3002 == NULL);
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block10; else goto block11;
block10:;
// line 1326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3005 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3006 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1328
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3007 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3008 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3009 = *(&local1);
org$frostlang$frostc$Position $tmp3010 = $tmp3009.position;
org$frostlang$frostc$ASTNode* $tmp3011 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3012 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3013 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3012);
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3007, $tmp3008, $tmp3010, $tmp3011, $tmp3013, $tmp3014);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$ASTNode* $tmp3015 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local0) = $tmp3007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$ASTNode* $tmp3016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1332
org$frostlang$frostc$parser$Token $tmp3017 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3017);
// line 1333
org$frostlang$frostc$ASTNode* $tmp3018 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
org$frostlang$frostc$ASTNode* $tmp3019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3018;
block5:;
goto block3;
block4:;
goto block12;
block12:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1344
org$frostlang$frostc$ASTNode* $tmp3020 = org$frostlang$frostc$parser$Parser$bitwiseExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
org$frostlang$frostc$ASTNode* $tmp3021 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local0) = $tmp3020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
// line 1345
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local0);
frost$core$Bit $tmp3023 = frost$core$Bit$init$builtin_bit($tmp3022 == NULL);
bool $tmp3024 = $tmp3023.value;
if ($tmp3024) goto block1; else goto block2;
block1:;
// line 1346
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3025 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1348
goto block3;
block3:;
// line 1349
org$frostlang$frostc$parser$Token $tmp3026 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3026;
// line 1350
org$frostlang$frostc$parser$Token $tmp3027 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3028 = $tmp3027.kind;
frost$core$Int64 $tmp3029 = $tmp3028.$rawValue;
frost$core$Int64 $tmp3030 = (frost$core$Int64) {55};
frost$core$Bit $tmp3031 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3029, $tmp3030);
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3033 = (frost$core$Int64) {56};
frost$core$Bit $tmp3034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3029, $tmp3033);
bool $tmp3035 = $tmp3034.value;
if ($tmp3035) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3036 = (frost$core$Int64) {75};
frost$core$Bit $tmp3037 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3029, $tmp3036);
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block6; else goto block9;
block6:;
// line 1352
org$frostlang$frostc$ASTNode* $tmp3039 = org$frostlang$frostc$parser$Parser$bitwiseExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
org$frostlang$frostc$ASTNode* $tmp3040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local2) = $tmp3039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
// line 1353
org$frostlang$frostc$ASTNode* $tmp3041 = *(&local2);
frost$core$Bit $tmp3042 = frost$core$Bit$init$builtin_bit($tmp3041 == NULL);
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block10; else goto block11;
block10:;
// line 1354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3044 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1356
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3046 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3047 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3048 = *(&local1);
org$frostlang$frostc$Position $tmp3049 = $tmp3048.position;
org$frostlang$frostc$ASTNode* $tmp3050 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3051 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3052 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3051);
org$frostlang$frostc$ASTNode* $tmp3053 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3046, $tmp3047, $tmp3049, $tmp3050, $tmp3052, $tmp3053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local0) = $tmp3046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1360
org$frostlang$frostc$parser$Token $tmp3056 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3056);
// line 1361
org$frostlang$frostc$ASTNode* $tmp3057 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
org$frostlang$frostc$ASTNode* $tmp3058 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3057;
block5:;
goto block3;
block4:;
goto block12;
block12:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$parser$Token local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1372
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1373
org$frostlang$frostc$parser$Token $tmp3059 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3060 = $tmp3059.kind;
frost$core$Int64 $tmp3061 = $tmp3060.$rawValue;
frost$core$Int64 $tmp3062 = (frost$core$Int64) {101};
frost$core$Bit $tmp3063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3061, $tmp3062);
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp3065 = (frost$core$Int64) {100};
frost$core$Bit $tmp3066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3061, $tmp3065);
bool $tmp3067 = $tmp3066.value;
if ($tmp3067) goto block2; else goto block4;
block2:;
// line 1375
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1378
org$frostlang$frostc$ASTNode* $tmp3069 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
org$frostlang$frostc$ASTNode* $tmp3070 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
*(&local0) = $tmp3069;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// line 1379
org$frostlang$frostc$ASTNode* $tmp3071 = *(&local0);
frost$core$Bit $tmp3072 = frost$core$Bit$init$builtin_bit($tmp3071 == NULL);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block5; else goto block6;
block5:;
// line 1380
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3074 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1384
org$frostlang$frostc$parser$Token $tmp3075 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3075;
// line 1385
org$frostlang$frostc$parser$Token $tmp3076 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3077 = $tmp3076.kind;
frost$core$Int64 $tmp3078 = $tmp3077.$rawValue;
frost$core$Int64 $tmp3079 = (frost$core$Int64) {101};
frost$core$Bit $tmp3080 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3078, $tmp3079);
bool $tmp3081 = $tmp3080.value;
if ($tmp3081) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3082 = (frost$core$Int64) {100};
frost$core$Bit $tmp3083 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3078, $tmp3082);
bool $tmp3084 = $tmp3083.value;
if ($tmp3084) goto block8; else goto block10;
block8:;
// line 1387
org$frostlang$frostc$parser$Token $tmp3085 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3085;
// line 1388
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1389
org$frostlang$frostc$parser$Token $tmp3086 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3087 = $tmp3086.kind;
frost$core$Int64 $tmp3088 = $tmp3087.$rawValue;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {106};
frost$core$Bit $tmp3090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3089);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {108};
frost$core$Bit $tmp3093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3092);
bool $tmp3094 = $tmp3093.value;
if ($tmp3094) goto block12; else goto block14;
block14:;
frost$core$Int64 $tmp3095 = (frost$core$Int64) {34};
frost$core$Bit $tmp3096 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3095);
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block12; else goto block15;
block15:;
frost$core$Int64 $tmp3098 = (frost$core$Int64) {103};
frost$core$Bit $tmp3099 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3098);
bool $tmp3100 = $tmp3099.value;
if ($tmp3100) goto block12; else goto block16;
block16:;
frost$core$Int64 $tmp3101 = (frost$core$Int64) {104};
frost$core$Bit $tmp3102 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3101);
bool $tmp3103 = $tmp3102.value;
if ($tmp3103) goto block12; else goto block17;
block17:;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {109};
frost$core$Bit $tmp3105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3104);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block12; else goto block18;
block18:;
frost$core$Int64 $tmp3107 = (frost$core$Int64) {37};
frost$core$Bit $tmp3108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3107);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block12; else goto block19;
block19:;
frost$core$Int64 $tmp3110 = (frost$core$Int64) {33};
frost$core$Bit $tmp3111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3110);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block12; else goto block20;
block20:;
frost$core$Int64 $tmp3113 = (frost$core$Int64) {32};
frost$core$Bit $tmp3114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3113);
bool $tmp3115 = $tmp3114.value;
if ($tmp3115) goto block12; else goto block21;
block21:;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {31};
frost$core$Bit $tmp3117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3116);
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block12; else goto block22;
block22:;
frost$core$Int64 $tmp3119 = (frost$core$Int64) {36};
frost$core$Bit $tmp3120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3119);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block12; else goto block23;
block23:;
frost$core$Int64 $tmp3122 = (frost$core$Int64) {45};
frost$core$Bit $tmp3123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3122);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block12; else goto block24;
block24:;
frost$core$Int64 $tmp3125 = (frost$core$Int64) {39};
frost$core$Bit $tmp3126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3125);
bool $tmp3127 = $tmp3126.value;
if ($tmp3127) goto block12; else goto block25;
block25:;
frost$core$Int64 $tmp3128 = (frost$core$Int64) {24};
frost$core$Bit $tmp3129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3128);
bool $tmp3130 = $tmp3129.value;
if ($tmp3130) goto block12; else goto block26;
block26:;
frost$core$Int64 $tmp3131 = (frost$core$Int64) {25};
frost$core$Bit $tmp3132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3131);
bool $tmp3133 = $tmp3132.value;
if ($tmp3133) goto block12; else goto block27;
block27:;
frost$core$Int64 $tmp3134 = (frost$core$Int64) {26};
frost$core$Bit $tmp3135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3134);
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block12; else goto block28;
block28:;
frost$core$Int64 $tmp3137 = (frost$core$Int64) {27};
frost$core$Bit $tmp3138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3137);
bool $tmp3139 = $tmp3138.value;
if ($tmp3139) goto block12; else goto block29;
block29:;
frost$core$Int64 $tmp3140 = (frost$core$Int64) {23};
frost$core$Bit $tmp3141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3140);
bool $tmp3142 = $tmp3141.value;
if ($tmp3142) goto block12; else goto block30;
block30:;
frost$core$Int64 $tmp3143 = (frost$core$Int64) {22};
frost$core$Bit $tmp3144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3143);
bool $tmp3145 = $tmp3144.value;
if ($tmp3145) goto block12; else goto block31;
block31:;
frost$core$Int64 $tmp3146 = (frost$core$Int64) {21};
frost$core$Bit $tmp3147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3146);
bool $tmp3148 = $tmp3147.value;
if ($tmp3148) goto block12; else goto block32;
block32:;
frost$core$Int64 $tmp3149 = (frost$core$Int64) {47};
frost$core$Bit $tmp3150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3149);
bool $tmp3151 = $tmp3150.value;
if ($tmp3151) goto block12; else goto block33;
block33:;
frost$core$Int64 $tmp3152 = (frost$core$Int64) {46};
frost$core$Bit $tmp3153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3088, $tmp3152);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block12; else goto block34;
block12:;
// line 1403
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block34:;
// line 1406
org$frostlang$frostc$ASTNode* $tmp3156 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
org$frostlang$frostc$ASTNode* $tmp3157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local3) = $tmp3156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
// line 1407
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local3);
frost$core$Bit $tmp3159 = frost$core$Bit$init$builtin_bit($tmp3158 == NULL);
bool $tmp3160 = $tmp3159.value;
if ($tmp3160) goto block35; else goto block36;
block35:;
// line 1408
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block11;
block11:;
// line 1412
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1413
frost$core$Int64 $tmp3163 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3164 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3163);
org$frostlang$frostc$parser$Token$nullable $tmp3165 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3164);
frost$core$Bit $tmp3166 = frost$core$Bit$init$builtin_bit($tmp3165.nonnull);
bool $tmp3167 = $tmp3166.value;
if ($tmp3167) goto block37; else goto block39;
block37:;
// line 1414
org$frostlang$frostc$ASTNode* $tmp3168 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
org$frostlang$frostc$ASTNode* $tmp3169 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local4) = $tmp3168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
// line 1415
org$frostlang$frostc$ASTNode* $tmp3170 = *(&local4);
frost$core$Bit $tmp3171 = frost$core$Bit$init$builtin_bit($tmp3170 == NULL);
bool $tmp3172 = $tmp3171.value;
if ($tmp3172) goto block40; else goto block41;
block40:;
// line 1416
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3173 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3174 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
goto block38;
block39:;
// line 1
// line 1420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block38:;
// line 1422
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3177 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3178 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3179 = *(&local1);
org$frostlang$frostc$Position $tmp3180 = $tmp3179.position;
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3182 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3183 = $tmp3182.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3184;
$tmp3184 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3184->value = $tmp3183;
frost$core$Int64 $tmp3185 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3186 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3185);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3187;
$tmp3187 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3187->value = $tmp3186;
ITable* $tmp3188 = ((frost$core$Equatable*) $tmp3184)->$class->itable;
while ($tmp3188->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3188 = $tmp3188->next;
}
$fn3190 $tmp3189 = $tmp3188->methods[0];
frost$core$Bit $tmp3191 = $tmp3189(((frost$core$Equatable*) $tmp3184), ((frost$core$Equatable*) $tmp3187));
org$frostlang$frostc$ASTNode* $tmp3192 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3193 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3177, $tmp3178, $tmp3180, $tmp3181, $tmp3191, $tmp3192, $tmp3193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3187)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3184)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
org$frostlang$frostc$ASTNode* $tmp3194 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3195 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3177;
block10:;
// line 1426
org$frostlang$frostc$parser$Token $tmp3197 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3197);
// line 1427
org$frostlang$frostc$ASTNode* $tmp3198 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
org$frostlang$frostc$ASTNode* $tmp3199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3198;
block7:;
goto block42;
block42:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1437
org$frostlang$frostc$ASTNode* $tmp3200 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
org$frostlang$frostc$ASTNode* $tmp3201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local0) = $tmp3200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// line 1438
org$frostlang$frostc$ASTNode* $tmp3202 = *(&local0);
frost$core$Bit $tmp3203 = frost$core$Bit$init$builtin_bit($tmp3202 == NULL);
bool $tmp3204 = $tmp3203.value;
if ($tmp3204) goto block1; else goto block2;
block1:;
// line 1439
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1441
goto block3;
block3:;
// line 1442
org$frostlang$frostc$parser$Token $tmp3206 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3206;
// line 1443
org$frostlang$frostc$parser$Token $tmp3207 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3208 = $tmp3207.kind;
frost$core$Int64 $tmp3209 = $tmp3208.$rawValue;
frost$core$Int64 $tmp3210 = (frost$core$Int64) {62};
frost$core$Bit $tmp3211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3210);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3213 = (frost$core$Int64) {63};
frost$core$Bit $tmp3214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3213);
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3216 = (frost$core$Int64) {64};
frost$core$Bit $tmp3217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3216);
bool $tmp3218 = $tmp3217.value;
if ($tmp3218) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3219 = (frost$core$Int64) {65};
frost$core$Bit $tmp3220 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3219);
bool $tmp3221 = $tmp3220.value;
if ($tmp3221) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3222 = (frost$core$Int64) {66};
frost$core$Bit $tmp3223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3222);
bool $tmp3224 = $tmp3223.value;
if ($tmp3224) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3225 = (frost$core$Int64) {67};
frost$core$Bit $tmp3226 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3225);
bool $tmp3227 = $tmp3226.value;
if ($tmp3227) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3228 = (frost$core$Int64) {68};
frost$core$Bit $tmp3229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3228);
bool $tmp3230 = $tmp3229.value;
if ($tmp3230) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3231 = (frost$core$Int64) {69};
frost$core$Bit $tmp3232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3231);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block6; else goto block14;
block6:;
// line 1452
org$frostlang$frostc$ASTNode* $tmp3234 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local2) = $tmp3234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// line 1453
org$frostlang$frostc$ASTNode* $tmp3236 = *(&local2);
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit($tmp3236 == NULL);
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block15; else goto block16;
block15:;
// line 1454
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1456
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3241 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3242 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3243 = *(&local1);
org$frostlang$frostc$Position $tmp3244 = $tmp3243.position;
org$frostlang$frostc$ASTNode* $tmp3245 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3246 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3247 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3246);
org$frostlang$frostc$ASTNode* $tmp3248 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3241, $tmp3242, $tmp3244, $tmp3245, $tmp3247, $tmp3248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
org$frostlang$frostc$ASTNode* $tmp3249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
*(&local0) = $tmp3241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
org$frostlang$frostc$ASTNode* $tmp3250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1460
org$frostlang$frostc$parser$Token $tmp3251 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3251);
// line 1461
org$frostlang$frostc$ASTNode* $tmp3252 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$ASTNode* $tmp3253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3252;
block5:;
goto block3;
block4:;
goto block17;
block17:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1471
org$frostlang$frostc$ASTNode* $tmp3254 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
org$frostlang$frostc$ASTNode* $tmp3255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
*(&local0) = $tmp3254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
// line 1472
org$frostlang$frostc$ASTNode* $tmp3256 = *(&local0);
frost$core$Bit $tmp3257 = frost$core$Bit$init$builtin_bit($tmp3256 == NULL);
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block1; else goto block2;
block1:;
// line 1473
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1475
goto block3;
block3:;
// line 1476
org$frostlang$frostc$parser$Token $tmp3260 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3260;
// line 1477
org$frostlang$frostc$parser$Token $tmp3261 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3262 = $tmp3261.kind;
frost$core$Int64 $tmp3263 = $tmp3262.$rawValue;
frost$core$Int64 $tmp3264 = (frost$core$Int64) {70};
frost$core$Bit $tmp3265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3263, $tmp3264);
bool $tmp3266 = $tmp3265.value;
if ($tmp3266) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3267 = (frost$core$Int64) {74};
frost$core$Bit $tmp3268 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3263, $tmp3267);
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block6; else goto block8;
block6:;
// line 1479
org$frostlang$frostc$ASTNode* $tmp3270 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
org$frostlang$frostc$ASTNode* $tmp3271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
*(&local2) = $tmp3270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
// line 1480
org$frostlang$frostc$ASTNode* $tmp3272 = *(&local2);
frost$core$Bit $tmp3273 = frost$core$Bit$init$builtin_bit($tmp3272 == NULL);
bool $tmp3274 = $tmp3273.value;
if ($tmp3274) goto block9; else goto block10;
block9:;
// line 1481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3276 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1483
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3277 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3278 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3279 = *(&local1);
org$frostlang$frostc$Position $tmp3280 = $tmp3279.position;
org$frostlang$frostc$ASTNode* $tmp3281 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3282 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3283 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3282);
org$frostlang$frostc$ASTNode* $tmp3284 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3277, $tmp3278, $tmp3280, $tmp3281, $tmp3283, $tmp3284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
org$frostlang$frostc$ASTNode* $tmp3285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
*(&local0) = $tmp3277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
org$frostlang$frostc$ASTNode* $tmp3286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1487
org$frostlang$frostc$parser$Token $tmp3287 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3287);
// line 1488
org$frostlang$frostc$ASTNode* $tmp3288 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
org$frostlang$frostc$ASTNode* $tmp3289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3288;
block5:;
goto block3;
block4:;
goto block11;
block11:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1498
org$frostlang$frostc$ASTNode* $tmp3290 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
org$frostlang$frostc$ASTNode* $tmp3291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
*(&local0) = $tmp3290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
// line 1499
org$frostlang$frostc$ASTNode* $tmp3292 = *(&local0);
frost$core$Bit $tmp3293 = frost$core$Bit$init$builtin_bit($tmp3292 == NULL);
bool $tmp3294 = $tmp3293.value;
if ($tmp3294) goto block1; else goto block2;
block1:;
// line 1500
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1502
goto block3;
block3:;
// line 1503
frost$core$Int64 $tmp3296 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3297 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3296);
org$frostlang$frostc$parser$Token$nullable $tmp3298 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3297);
*(&local1) = $tmp3298;
// line 1504
org$frostlang$frostc$parser$Token$nullable $tmp3299 = *(&local1);
frost$core$Bit $tmp3300 = frost$core$Bit$init$builtin_bit(!$tmp3299.nonnull);
bool $tmp3301 = $tmp3300.value;
if ($tmp3301) goto block5; else goto block6;
block5:;
// line 1505
goto block4;
block6:;
// line 1507
org$frostlang$frostc$ASTNode* $tmp3302 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
org$frostlang$frostc$ASTNode* $tmp3303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
*(&local2) = $tmp3302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
// line 1508
org$frostlang$frostc$ASTNode* $tmp3304 = *(&local2);
frost$core$Bit $tmp3305 = frost$core$Bit$init$builtin_bit($tmp3304 == NULL);
bool $tmp3306 = $tmp3305.value;
if ($tmp3306) goto block7; else goto block8;
block7:;
// line 1509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1511
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3309 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3310 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3311 = *(&local1);
org$frostlang$frostc$Position $tmp3312 = ((org$frostlang$frostc$parser$Token) $tmp3311.value).position;
org$frostlang$frostc$ASTNode* $tmp3313 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3314 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3315 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3314.value));
org$frostlang$frostc$ASTNode* $tmp3316 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3309, $tmp3310, $tmp3312, $tmp3313, $tmp3315, $tmp3316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
org$frostlang$frostc$ASTNode* $tmp3317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local0) = $tmp3309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
org$frostlang$frostc$ASTNode* $tmp3318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1513
org$frostlang$frostc$ASTNode* $tmp3319 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
org$frostlang$frostc$ASTNode* $tmp3320 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3319;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1520
frost$core$Int64 $tmp3321 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3322 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3321);
org$frostlang$frostc$parser$Token$nullable $tmp3323 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3322, &$s3324);
*(&local0) = $tmp3323;
// line 1521
org$frostlang$frostc$parser$Token$nullable $tmp3325 = *(&local0);
frost$core$Bit $tmp3326 = frost$core$Bit$init$builtin_bit(!$tmp3325.nonnull);
bool $tmp3327 = $tmp3326.value;
if ($tmp3327) goto block1; else goto block2;
block1:;
// line 1522
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1524
org$frostlang$frostc$ASTNode* $tmp3328 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
org$frostlang$frostc$ASTNode* $tmp3329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local1) = $tmp3328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
// line 1525
org$frostlang$frostc$ASTNode* $tmp3330 = *(&local1);
frost$core$Bit $tmp3331 = frost$core$Bit$init$builtin_bit($tmp3330 == NULL);
bool $tmp3332 = $tmp3331.value;
if ($tmp3332) goto block3; else goto block4;
block3:;
// line 1526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1528
org$frostlang$frostc$FixedArray* $tmp3334 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
org$frostlang$frostc$FixedArray* $tmp3335 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local2) = $tmp3334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
// line 1529
org$frostlang$frostc$FixedArray* $tmp3336 = *(&local2);
frost$core$Bit $tmp3337 = frost$core$Bit$init$builtin_bit($tmp3336 == NULL);
bool $tmp3338 = $tmp3337.value;
if ($tmp3338) goto block5; else goto block6;
block5:;
// line 1530
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3339 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1532
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1533
frost$core$Int64 $tmp3341 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3342 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3341);
org$frostlang$frostc$parser$Token$nullable $tmp3343 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3342);
frost$core$Bit $tmp3344 = frost$core$Bit$init$builtin_bit($tmp3343.nonnull);
bool $tmp3345 = $tmp3344.value;
if ($tmp3345) goto block7; else goto block9;
block7:;
// line 1534
org$frostlang$frostc$parser$Token $tmp3346 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3347 = $tmp3346.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3348;
$tmp3348 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3348->value = $tmp3347;
frost$core$Int64 $tmp3349 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3350 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3349);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3351;
$tmp3351 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3351->value = $tmp3350;
ITable* $tmp3352 = ((frost$core$Equatable*) $tmp3348)->$class->itable;
while ($tmp3352->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3352 = $tmp3352->next;
}
$fn3354 $tmp3353 = $tmp3352->methods[0];
frost$core$Bit $tmp3355 = $tmp3353(((frost$core$Equatable*) $tmp3348), ((frost$core$Equatable*) $tmp3351));
bool $tmp3356 = $tmp3355.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3348)));
if ($tmp3356) goto block10; else goto block12;
block10:;
// line 1535
org$frostlang$frostc$ASTNode* $tmp3357 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
org$frostlang$frostc$ASTNode* $tmp3358 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
*(&local3) = $tmp3357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
// line 1536
org$frostlang$frostc$ASTNode* $tmp3359 = *(&local3);
frost$core$Bit $tmp3360 = frost$core$Bit$init$builtin_bit($tmp3359 == NULL);
bool $tmp3361 = $tmp3360.value;
if ($tmp3361) goto block13; else goto block14;
block13:;
// line 1537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3362 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3363 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1541
org$frostlang$frostc$ASTNode* $tmp3365 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
org$frostlang$frostc$ASTNode* $tmp3366 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
*(&local3) = $tmp3365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
// line 1542
org$frostlang$frostc$ASTNode* $tmp3367 = *(&local3);
frost$core$Bit $tmp3368 = frost$core$Bit$init$builtin_bit($tmp3367 == NULL);
bool $tmp3369 = $tmp3368.value;
if ($tmp3369) goto block15; else goto block16;
block15:;
// line 1543
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3370 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1548
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3373 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1550
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3374 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3375 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3376 = *(&local0);
org$frostlang$frostc$Position $tmp3377 = ((org$frostlang$frostc$parser$Token) $tmp3376.value).position;
org$frostlang$frostc$ASTNode* $tmp3378 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3379 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3380 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3374, $tmp3375, $tmp3377, $tmp3378, $tmp3379, $tmp3380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
org$frostlang$frostc$ASTNode* $tmp3381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3382 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3374;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1557
frost$core$Int64 $tmp3384 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3385 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3384);
org$frostlang$frostc$parser$Token$nullable $tmp3386 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3385, &$s3387);
frost$core$Bit $tmp3388 = frost$core$Bit$init$builtin_bit(!$tmp3386.nonnull);
bool $tmp3389 = $tmp3388.value;
if ($tmp3389) goto block1; else goto block2;
block1:;
// line 1558
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1560
frost$core$Bit $tmp3390 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3391 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
return $tmp3391;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1567
frost$core$Int64 $tmp3392 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp3393 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3392);
org$frostlang$frostc$parser$Token$nullable $tmp3394 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3393);
*(&local0) = $tmp3394;
// line 1568
org$frostlang$frostc$parser$Token$nullable $tmp3395 = *(&local0);
frost$core$Bit $tmp3396 = frost$core$Bit$init$builtin_bit($tmp3395.nonnull);
bool $tmp3397 = $tmp3396.value;
if ($tmp3397) goto block1; else goto block2;
block1:;
// line 1569
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3398 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3398);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$collections$Array* $tmp3399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
*(&local1) = $tmp3398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
// line 1570
org$frostlang$frostc$ASTNode* $tmp3400 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
org$frostlang$frostc$ASTNode* $tmp3401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
*(&local2) = $tmp3400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
// line 1571
org$frostlang$frostc$ASTNode* $tmp3402 = *(&local2);
frost$core$Bit $tmp3403 = frost$core$Bit$init$builtin_bit($tmp3402 == NULL);
bool $tmp3404 = $tmp3403.value;
if ($tmp3404) goto block3; else goto block4;
block3:;
// line 1572
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1574
frost$collections$Array* $tmp3407 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3408 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3407, ((frost$core$Object*) $tmp3408));
// line 1575
goto block5;
block5:;
frost$core$Int64 $tmp3409 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3410 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3409);
org$frostlang$frostc$parser$Token$nullable $tmp3411 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3410);
frost$core$Bit $tmp3412 = frost$core$Bit$init$builtin_bit($tmp3411.nonnull);
bool $tmp3413 = $tmp3412.value;
if ($tmp3413) goto block6; else goto block7;
block6:;
// line 1576
org$frostlang$frostc$ASTNode* $tmp3414 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
org$frostlang$frostc$ASTNode* $tmp3415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local2) = $tmp3414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
// line 1577
org$frostlang$frostc$ASTNode* $tmp3416 = *(&local2);
frost$core$Bit $tmp3417 = frost$core$Bit$init$builtin_bit($tmp3416 == NULL);
bool $tmp3418 = $tmp3417.value;
if ($tmp3418) goto block8; else goto block9;
block8:;
// line 1578
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 1580
frost$collections$Array* $tmp3421 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3422 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3421, ((frost$core$Object*) $tmp3422));
goto block5;
block7:;
// line 1582
frost$core$Int64 $tmp3423 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3424 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3423);
org$frostlang$frostc$parser$Token$nullable $tmp3425 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3424, &$s3426);
// line 1583
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3427 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3428 = (frost$core$Int64) {44};
org$frostlang$frostc$parser$Token$nullable $tmp3429 = *(&local0);
org$frostlang$frostc$Position $tmp3430 = ((org$frostlang$frostc$parser$Token) $tmp3429.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3431 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp3432 = *(&local1);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3431, ((frost$collections$ListView*) $tmp3432));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3427, $tmp3428, $tmp3430, $tmp3431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
org$frostlang$frostc$ASTNode* $tmp3433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3434 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3427;
block2:;
// line 1585
frost$core$Int64 $tmp3435 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3436 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3435);
org$frostlang$frostc$parser$Token$nullable $tmp3437 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3436, &$s3438);
*(&local3) = $tmp3437;
// line 1586
org$frostlang$frostc$parser$Token$nullable $tmp3439 = *(&local3);
frost$core$Bit $tmp3440 = frost$core$Bit$init$builtin_bit(!$tmp3439.nonnull);
bool $tmp3441 = $tmp3440.value;
if ($tmp3441) goto block10; else goto block11;
block10:;
// line 1587
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1589
org$frostlang$frostc$parser$Token $tmp3442 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3443 = $tmp3442.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3444;
$tmp3444 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3444->value = $tmp3443;
frost$core$Int64 $tmp3445 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3446 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3445);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3447;
$tmp3447 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3447->value = $tmp3446;
ITable* $tmp3448 = ((frost$core$Equatable*) $tmp3444)->$class->itable;
while ($tmp3448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3448 = $tmp3448->next;
}
$fn3450 $tmp3449 = $tmp3448->methods[0];
frost$core$Bit $tmp3451 = $tmp3449(((frost$core$Equatable*) $tmp3444), ((frost$core$Equatable*) $tmp3447));
bool $tmp3452 = $tmp3451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3444)));
if ($tmp3452) goto block12; else goto block13;
block12:;
// line 1590
org$frostlang$frostc$ASTNode* $tmp3453 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
org$frostlang$frostc$ASTNode* $tmp3454 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
*(&local4) = $tmp3453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
// line 1591
org$frostlang$frostc$ASTNode* $tmp3455 = *(&local4);
frost$core$Bit $tmp3456 = frost$core$Bit$init$builtin_bit($tmp3455 == NULL);
bool $tmp3457 = $tmp3456.value;
if ($tmp3457) goto block14; else goto block15;
block14:;
// line 1592
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3458 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1594
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3459 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3460 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp3461 = *(&local3);
org$frostlang$frostc$Position $tmp3462 = ((org$frostlang$frostc$parser$Token) $tmp3461.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3463 = *(&local3);
frost$core$String* $tmp3464 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3463.value));
org$frostlang$frostc$ASTNode* $tmp3465 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3459, $tmp3460, $tmp3462, $tmp3464, $tmp3465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
org$frostlang$frostc$ASTNode* $tmp3466 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3459;
block13:;
// line 1596
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3467 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3468 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3469 = *(&local3);
org$frostlang$frostc$Position $tmp3470 = ((org$frostlang$frostc$parser$Token) $tmp3469.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3471 = *(&local3);
frost$core$String* $tmp3472 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3471.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3467, $tmp3468, $tmp3470, $tmp3472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
return $tmp3467;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1603
frost$core$Int64 $tmp3473 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3474 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3473);
org$frostlang$frostc$parser$Token$nullable $tmp3475 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3474, &$s3476);
*(&local0) = $tmp3475;
// line 1604
org$frostlang$frostc$parser$Token$nullable $tmp3477 = *(&local0);
frost$core$Bit $tmp3478 = frost$core$Bit$init$builtin_bit(!$tmp3477.nonnull);
bool $tmp3479 = $tmp3478.value;
if ($tmp3479) goto block1; else goto block2;
block1:;
// line 1605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1607
org$frostlang$frostc$ASTNode* $tmp3480 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
org$frostlang$frostc$ASTNode* $tmp3481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local1) = $tmp3480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
// line 1608
org$frostlang$frostc$ASTNode* $tmp3482 = *(&local1);
frost$core$Bit $tmp3483 = frost$core$Bit$init$builtin_bit($tmp3482 == NULL);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block3; else goto block4;
block3:;
// line 1609
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3485 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1611
frost$core$Int64 $tmp3486 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3487 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3486);
org$frostlang$frostc$parser$Token$nullable $tmp3488 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3487, &$s3489);
frost$core$Bit $tmp3490 = frost$core$Bit$init$builtin_bit(!$tmp3488.nonnull);
bool $tmp3491 = $tmp3490.value;
if ($tmp3491) goto block5; else goto block6;
block5:;
// line 1612
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1614
org$frostlang$frostc$ASTNode* $tmp3493 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
org$frostlang$frostc$ASTNode* $tmp3494 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local2) = $tmp3493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
// line 1615
org$frostlang$frostc$ASTNode* $tmp3495 = *(&local2);
frost$core$Bit $tmp3496 = frost$core$Bit$init$builtin_bit($tmp3495 == NULL);
bool $tmp3497 = $tmp3496.value;
if ($tmp3497) goto block7; else goto block8;
block7:;
// line 1616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1618
org$frostlang$frostc$FixedArray* $tmp3500 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
org$frostlang$frostc$FixedArray* $tmp3501 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
*(&local3) = $tmp3500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
// line 1619
org$frostlang$frostc$FixedArray* $tmp3502 = *(&local3);
frost$core$Bit $tmp3503 = frost$core$Bit$init$builtin_bit($tmp3502 == NULL);
bool $tmp3504 = $tmp3503.value;
if ($tmp3504) goto block9; else goto block10;
block9:;
// line 1620
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3505 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1622
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3508 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3509 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3510 = *(&local0);
org$frostlang$frostc$Position $tmp3511 = ((org$frostlang$frostc$parser$Token) $tmp3510.value).position;
org$frostlang$frostc$ASTNode* $tmp3512 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3513 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3514 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3508, $tmp3509, $tmp3511, param1, $tmp3512, $tmp3513, $tmp3514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
org$frostlang$frostc$FixedArray* $tmp3515 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3508;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1629
frost$core$Int64 $tmp3518 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3519 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3518);
org$frostlang$frostc$parser$Token$nullable $tmp3520 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3519, &$s3521);
*(&local0) = $tmp3520;
// line 1630
org$frostlang$frostc$parser$Token$nullable $tmp3522 = *(&local0);
frost$core$Bit $tmp3523 = frost$core$Bit$init$builtin_bit(!$tmp3522.nonnull);
bool $tmp3524 = $tmp3523.value;
if ($tmp3524) goto block1; else goto block2;
block1:;
// line 1631
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1633
org$frostlang$frostc$ASTNode* $tmp3525 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
org$frostlang$frostc$ASTNode* $tmp3526 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
*(&local1) = $tmp3525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
// line 1634
org$frostlang$frostc$ASTNode* $tmp3527 = *(&local1);
frost$core$Bit $tmp3528 = frost$core$Bit$init$builtin_bit($tmp3527 == NULL);
bool $tmp3529 = $tmp3528.value;
if ($tmp3529) goto block3; else goto block4;
block3:;
// line 1635
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1637
org$frostlang$frostc$FixedArray* $tmp3531 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
org$frostlang$frostc$FixedArray* $tmp3532 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local2) = $tmp3531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
// line 1638
org$frostlang$frostc$FixedArray* $tmp3533 = *(&local2);
frost$core$Bit $tmp3534 = frost$core$Bit$init$builtin_bit($tmp3533 == NULL);
bool $tmp3535 = $tmp3534.value;
if ($tmp3535) goto block5; else goto block6;
block5:;
// line 1639
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3536 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3537 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1641
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3538 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3539 = (frost$core$Int64) {55};
org$frostlang$frostc$parser$Token$nullable $tmp3540 = *(&local0);
org$frostlang$frostc$Position $tmp3541 = ((org$frostlang$frostc$parser$Token) $tmp3540.value).position;
org$frostlang$frostc$ASTNode* $tmp3542 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3543 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3538, $tmp3539, $tmp3541, param1, $tmp3542, $tmp3543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
org$frostlang$frostc$FixedArray* $tmp3544 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3545 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3538;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1648
frost$core$Int64 $tmp3546 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3547 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3546);
org$frostlang$frostc$parser$Token$nullable $tmp3548 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3547, &$s3549);
*(&local0) = $tmp3548;
// line 1649
org$frostlang$frostc$parser$Token$nullable $tmp3550 = *(&local0);
frost$core$Bit $tmp3551 = frost$core$Bit$init$builtin_bit(!$tmp3550.nonnull);
bool $tmp3552 = $tmp3551.value;
if ($tmp3552) goto block1; else goto block2;
block1:;
// line 1650
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1652
org$frostlang$frostc$FixedArray* $tmp3553 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
org$frostlang$frostc$FixedArray* $tmp3554 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
*(&local1) = $tmp3553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
// line 1653
org$frostlang$frostc$FixedArray* $tmp3555 = *(&local1);
frost$core$Bit $tmp3556 = frost$core$Bit$init$builtin_bit($tmp3555 == NULL);
bool $tmp3557 = $tmp3556.value;
if ($tmp3557) goto block3; else goto block4;
block3:;
// line 1654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1656
frost$core$Int64 $tmp3559 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3560 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3559);
org$frostlang$frostc$parser$Token$nullable $tmp3561 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3560, &$s3562);
frost$core$Bit $tmp3563 = frost$core$Bit$init$builtin_bit(!$tmp3561.nonnull);
bool $tmp3564 = $tmp3563.value;
if ($tmp3564) goto block5; else goto block6;
block5:;
// line 1657
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3565 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1659
org$frostlang$frostc$ASTNode* $tmp3566 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
org$frostlang$frostc$ASTNode* $tmp3567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local2) = $tmp3566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
// line 1660
org$frostlang$frostc$ASTNode* $tmp3568 = *(&local2);
frost$core$Bit $tmp3569 = frost$core$Bit$init$builtin_bit($tmp3568 == NULL);
bool $tmp3570 = $tmp3569.value;
if ($tmp3570) goto block7; else goto block8;
block7:;
// line 1661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3571 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1663
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3573 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3574 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3575 = *(&local0);
org$frostlang$frostc$Position $tmp3576 = ((org$frostlang$frostc$parser$Token) $tmp3575.value).position;
org$frostlang$frostc$FixedArray* $tmp3577 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3578 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3573, $tmp3574, $tmp3576, param1, $tmp3577, $tmp3578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
org$frostlang$frostc$ASTNode* $tmp3579 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3573;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1670
frost$core$Int64 $tmp3581 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3582 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3581);
org$frostlang$frostc$parser$Token$nullable $tmp3583 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3582, &$s3584);
*(&local0) = $tmp3583;
// line 1671
org$frostlang$frostc$parser$Token$nullable $tmp3585 = *(&local0);
frost$core$Bit $tmp3586 = frost$core$Bit$init$builtin_bit(!$tmp3585.nonnull);
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block1; else goto block2;
block1:;
// line 1672
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1674
org$frostlang$frostc$FixedArray* $tmp3588 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
org$frostlang$frostc$FixedArray* $tmp3589 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
*(&local1) = $tmp3588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
// line 1675
org$frostlang$frostc$FixedArray* $tmp3590 = *(&local1);
frost$core$Bit $tmp3591 = frost$core$Bit$init$builtin_bit($tmp3590 == NULL);
bool $tmp3592 = $tmp3591.value;
if ($tmp3592) goto block3; else goto block4;
block3:;
// line 1676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1678
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3594 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3595 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3596 = *(&local0);
org$frostlang$frostc$Position $tmp3597 = ((org$frostlang$frostc$parser$Token) $tmp3596.value).position;
org$frostlang$frostc$FixedArray* $tmp3598 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3594, $tmp3595, $tmp3597, param1, $tmp3598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
org$frostlang$frostc$FixedArray* $tmp3599 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3594;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1685
frost$core$Int64 $tmp3600 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3601 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3600);
org$frostlang$frostc$parser$Token$nullable $tmp3602 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3601, &$s3603);
*(&local0) = $tmp3602;
// line 1686
org$frostlang$frostc$parser$Token$nullable $tmp3604 = *(&local0);
frost$core$Bit $tmp3605 = frost$core$Bit$init$builtin_bit(!$tmp3604.nonnull);
bool $tmp3606 = $tmp3605.value;
if ($tmp3606) goto block1; else goto block2;
block1:;
// line 1687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1689
org$frostlang$frostc$ASTNode* $tmp3607 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
org$frostlang$frostc$ASTNode* $tmp3608 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
*(&local1) = $tmp3607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
// line 1690
org$frostlang$frostc$ASTNode* $tmp3609 = *(&local1);
frost$core$Bit $tmp3610 = frost$core$Bit$init$builtin_bit($tmp3609 == NULL);
bool $tmp3611 = $tmp3610.value;
if ($tmp3611) goto block3; else goto block4;
block3:;
// line 1691
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3612 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1693
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1694
frost$core$Int64 $tmp3613 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3614 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3613);
org$frostlang$frostc$parser$Token$nullable $tmp3615 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3614);
frost$core$Bit $tmp3616 = frost$core$Bit$init$builtin_bit($tmp3615.nonnull);
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block5; else goto block7;
block5:;
// line 1695
org$frostlang$frostc$ASTNode* $tmp3618 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
org$frostlang$frostc$ASTNode* $tmp3619 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
*(&local2) = $tmp3618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
// line 1696
org$frostlang$frostc$ASTNode* $tmp3620 = *(&local2);
frost$core$Bit $tmp3621 = frost$core$Bit$init$builtin_bit($tmp3620 == NULL);
bool $tmp3622 = $tmp3621.value;
if ($tmp3622) goto block8; else goto block9;
block8:;
// line 1697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3624 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3625 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1703
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3626 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3627 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3628 = *(&local0);
org$frostlang$frostc$Position $tmp3629 = ((org$frostlang$frostc$parser$Token) $tmp3628.value).position;
org$frostlang$frostc$ASTNode* $tmp3630 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3631 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3626, $tmp3627, $tmp3629, $tmp3630, $tmp3631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
org$frostlang$frostc$ASTNode* $tmp3632 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3626;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1710
frost$core$Int64 $tmp3634 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3635 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3634);
org$frostlang$frostc$parser$Token$nullable $tmp3636 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3635, &$s3637);
*(&local0) = $tmp3636;
// line 1711
org$frostlang$frostc$parser$Token$nullable $tmp3638 = *(&local0);
frost$core$Bit $tmp3639 = frost$core$Bit$init$builtin_bit(!$tmp3638.nonnull);
bool $tmp3640 = $tmp3639.value;
if ($tmp3640) goto block1; else goto block2;
block1:;
// line 1712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1714
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1715
frost$core$Int64 $tmp3641 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3642 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3641);
org$frostlang$frostc$parser$Token$nullable $tmp3643 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3642);
frost$core$Bit $tmp3644 = frost$core$Bit$init$builtin_bit($tmp3643.nonnull);
bool $tmp3645 = $tmp3644.value;
if ($tmp3645) goto block3; else goto block5;
block3:;
// line 1716
org$frostlang$frostc$ASTNode* $tmp3646 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
org$frostlang$frostc$ASTNode* $tmp3647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
*(&local1) = $tmp3646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
// line 1717
org$frostlang$frostc$ASTNode* $tmp3648 = *(&local1);
frost$core$Bit $tmp3649 = frost$core$Bit$init$builtin_bit($tmp3648 == NULL);
bool $tmp3650 = $tmp3649.value;
if ($tmp3650) goto block6; else goto block7;
block6:;
// line 1718
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1724
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3653 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3654 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp3655 = *(&local0);
org$frostlang$frostc$Position $tmp3656 = ((org$frostlang$frostc$parser$Token) $tmp3655.value).position;
org$frostlang$frostc$ASTNode* $tmp3657 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3653, $tmp3654, $tmp3656, $tmp3657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
org$frostlang$frostc$ASTNode* $tmp3658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3653;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3659 = &param0->allowLambdas;
frost$core$Bit $tmp3660 = *$tmp3659;
bool $tmp3661 = $tmp3660.value;
if ($tmp3661) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3662 = (frost$core$Int64) {1732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3663, $tmp3662, &$s3664);
abort(); // unreachable
block1:;
// line 1733
frost$core$Int64 $tmp3665 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3666 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3665);
org$frostlang$frostc$parser$Token$nullable $tmp3667 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3666, &$s3668);
*(&local1) = $tmp3667;
// line 1734
org$frostlang$frostc$parser$Token$nullable $tmp3669 = *(&local1);
frost$core$Bit $tmp3670 = frost$core$Bit$init$builtin_bit(!$tmp3669.nonnull);
bool $tmp3671 = $tmp3670.value;
if ($tmp3671) goto block6; else goto block7;
block6:;
// line 1735
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1737
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3672 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3672);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
frost$collections$Array* $tmp3673 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
*(&local2) = $tmp3672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
// line 1738
org$frostlang$frostc$ASTNode* $tmp3674 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
org$frostlang$frostc$ASTNode* $tmp3675 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
*(&local3) = $tmp3674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
// line 1739
org$frostlang$frostc$ASTNode* $tmp3676 = *(&local3);
frost$core$Bit $tmp3677 = frost$core$Bit$init$builtin_bit($tmp3676 == NULL);
bool $tmp3678 = $tmp3677.value;
if ($tmp3678) goto block8; else goto block9;
block8:;
// line 1740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3679 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3680 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1742
frost$collections$Array* $tmp3681 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3682 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3681, ((frost$core$Object*) $tmp3682));
// line 1743
goto block10;
block10:;
frost$core$Int64 $tmp3683 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3684 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3683);
org$frostlang$frostc$parser$Token$nullable $tmp3685 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3684);
frost$core$Bit $tmp3686 = frost$core$Bit$init$builtin_bit($tmp3685.nonnull);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block11; else goto block12;
block11:;
// line 1744
org$frostlang$frostc$ASTNode* $tmp3688 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
org$frostlang$frostc$ASTNode* $tmp3689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local3) = $tmp3688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
// line 1745
org$frostlang$frostc$ASTNode* $tmp3690 = *(&local3);
frost$core$Bit $tmp3691 = frost$core$Bit$init$builtin_bit($tmp3690 == NULL);
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block13; else goto block14;
block13:;
// line 1746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3693 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3694 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1748
frost$collections$Array* $tmp3695 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3696 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3695, ((frost$core$Object*) $tmp3696));
goto block10;
block12:;
// line 1750
org$frostlang$frostc$FixedArray* $tmp3697 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
org$frostlang$frostc$FixedArray* $tmp3698 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
*(&local4) = $tmp3697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
// line 1751
org$frostlang$frostc$FixedArray* $tmp3699 = *(&local4);
frost$core$Bit $tmp3700 = frost$core$Bit$init$builtin_bit($tmp3699 == NULL);
bool $tmp3701 = $tmp3700.value;
if ($tmp3701) goto block15; else goto block16;
block15:;
// line 1752
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3702 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3703 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3704 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1754
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3705 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3706 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3707 = *(&local1);
org$frostlang$frostc$Position $tmp3708 = ((org$frostlang$frostc$parser$Token) $tmp3707.value).position;
frost$collections$Array* $tmp3709 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3710 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3709);
org$frostlang$frostc$FixedArray* $tmp3711 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3705, $tmp3706, $tmp3708, $tmp3710, $tmp3711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
org$frostlang$frostc$FixedArray* $tmp3712 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3713 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3714 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3705;
goto block3;
block3:;
frost$core$Bit* $tmp3715 = &param0->allowLambdas;
frost$core$Bit $tmp3716 = *$tmp3715;
bool $tmp3717 = $tmp3716.value;
if ($tmp3717) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3718 = *(&local0);
return $tmp3718;
block5:;
frost$core$Int64 $tmp3719 = (frost$core$Int64) {1732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3720, $tmp3719, &$s3721);
abort(); // unreachable

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$parser$Token local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$parser$Token local6;
// line 1761
frost$core$Int64 $tmp3722 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3723 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3722);
org$frostlang$frostc$parser$Token$nullable $tmp3724 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3723, &$s3725);
*(&local0) = $tmp3724;
// line 1762
org$frostlang$frostc$parser$Token$nullable $tmp3726 = *(&local0);
frost$core$Bit $tmp3727 = frost$core$Bit$init$builtin_bit(!$tmp3726.nonnull);
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block1; else goto block2;
block1:;
// line 1763
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1765
org$frostlang$frostc$ASTNode* $tmp3729 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
org$frostlang$frostc$ASTNode* $tmp3730 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
*(&local1) = $tmp3729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
// line 1766
org$frostlang$frostc$ASTNode* $tmp3731 = *(&local1);
frost$core$Bit $tmp3732 = frost$core$Bit$init$builtin_bit($tmp3731 == NULL);
bool $tmp3733 = $tmp3732.value;
if ($tmp3733) goto block3; else goto block4;
block3:;
// line 1767
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1769
frost$core$Int64 $tmp3735 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3736 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3735);
org$frostlang$frostc$parser$Token$nullable $tmp3737 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3736, &$s3738);
frost$core$Bit $tmp3739 = frost$core$Bit$init$builtin_bit(!$tmp3737.nonnull);
bool $tmp3740 = $tmp3739.value;
if ($tmp3740) goto block5; else goto block6;
block5:;
// line 1770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1772
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3742 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3742);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
frost$collections$Array* $tmp3743 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
*(&local2) = $tmp3742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
// line 1773
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3744 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1774
goto block7;
block7:;
// line 1775
org$frostlang$frostc$parser$Token $tmp3745 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3745;
// line 1776
org$frostlang$frostc$parser$Token $tmp3746 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3747 = $tmp3746.kind;
frost$core$Int64 $tmp3748 = $tmp3747.$rawValue;
frost$core$Int64 $tmp3749 = (frost$core$Int64) {104};
frost$core$Bit $tmp3750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3748, $tmp3749);
bool $tmp3751 = $tmp3750.value;
if ($tmp3751) goto block10; else goto block11;
block10:;
// line 1778
goto block8;
block11:;
frost$core$Int64 $tmp3752 = (frost$core$Int64) {40};
frost$core$Bit $tmp3753 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3748, $tmp3752);
bool $tmp3754 = $tmp3753.value;
if ($tmp3754) goto block12; else goto block13;
block12:;
// line 1781
org$frostlang$frostc$ASTNode* $tmp3755 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
org$frostlang$frostc$ASTNode* $tmp3756 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local5) = $tmp3755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
// line 1782
org$frostlang$frostc$ASTNode* $tmp3757 = *(&local5);
frost$core$Bit $tmp3758 = frost$core$Bit$init$builtin_bit($tmp3757 == NULL);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block14; else goto block15;
block14:;
// line 1783
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3760 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3761 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1785
frost$collections$Array* $tmp3764 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3765 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3764, ((frost$core$Object*) $tmp3765));
org$frostlang$frostc$ASTNode* $tmp3766 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3767 = (frost$core$Int64) {41};
frost$core$Bit $tmp3768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3748, $tmp3767);
bool $tmp3769 = $tmp3768.value;
if ($tmp3769) goto block16; else goto block17;
block16:;
// line 1788
org$frostlang$frostc$parser$Token $tmp3770 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3770;
// line 1789
org$frostlang$frostc$FixedArray* $tmp3771 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
org$frostlang$frostc$FixedArray* $tmp3772 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
*(&local3) = $tmp3771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
// line 1790
org$frostlang$frostc$FixedArray* $tmp3773 = *(&local3);
frost$core$Bit $tmp3774 = frost$core$Bit$init$builtin_bit($tmp3773 == NULL);
bool $tmp3775 = $tmp3774.value;
if ($tmp3775) goto block18; else goto block19;
block18:;
// line 1791
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3776 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1793
goto block8;
block17:;
// line 1796
org$frostlang$frostc$parser$Token $tmp3779 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1797
org$frostlang$frostc$parser$Token $tmp3780 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3781 = *(&local4);
frost$core$String* $tmp3782 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3781);
frost$core$String* $tmp3783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3784, $tmp3782);
frost$core$String* $tmp3785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3783, &$s3786);
frost$core$String* $tmp3787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3788, $tmp3785);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3780, $tmp3787);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
// line 1799
goto block8;
block9:;
goto block7;
block8:;
// line 1803
frost$core$Int64 $tmp3789 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3790 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3789);
org$frostlang$frostc$parser$Token$nullable $tmp3791 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3790, &$s3792);
frost$core$Bit $tmp3793 = frost$core$Bit$init$builtin_bit(!$tmp3791.nonnull);
bool $tmp3794 = $tmp3793.value;
if ($tmp3794) goto block20; else goto block21;
block20:;
// line 1804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3795 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3797));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1806
org$frostlang$frostc$FixedArray* $tmp3798 = *(&local3);
frost$core$Bit $tmp3799 = frost$core$Bit$init$builtin_bit($tmp3798 != NULL);
bool $tmp3800 = $tmp3799.value;
if ($tmp3800) goto block22; else goto block23;
block22:;
// line 1807
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3801 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3802 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3803 = *(&local0);
org$frostlang$frostc$Position $tmp3804 = ((org$frostlang$frostc$parser$Token) $tmp3803.value).position;
org$frostlang$frostc$ASTNode* $tmp3805 = *(&local1);
frost$collections$Array* $tmp3806 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3807 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3806);
org$frostlang$frostc$FixedArray* $tmp3808 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3801, $tmp3802, $tmp3804, $tmp3805, $tmp3807, $tmp3808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3801));
org$frostlang$frostc$FixedArray* $tmp3809 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3810 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3811 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3801;
block23:;
// line 1809
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3812 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3813 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3814 = *(&local0);
org$frostlang$frostc$Position $tmp3815 = ((org$frostlang$frostc$parser$Token) $tmp3814.value).position;
org$frostlang$frostc$ASTNode* $tmp3816 = *(&local1);
frost$collections$Array* $tmp3817 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3818 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3817);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3812, $tmp3813, $tmp3815, $tmp3816, $tmp3818, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
org$frostlang$frostc$FixedArray* $tmp3819 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3820 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3812;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1816
frost$core$Int64 $tmp3822 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3823 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3822);
org$frostlang$frostc$parser$Token$nullable $tmp3824 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3823, &$s3825);
*(&local0) = $tmp3824;
// line 1817
org$frostlang$frostc$parser$Token$nullable $tmp3826 = *(&local0);
frost$core$Bit $tmp3827 = frost$core$Bit$init$builtin_bit(!$tmp3826.nonnull);
bool $tmp3828 = $tmp3827.value;
if ($tmp3828) goto block1; else goto block2;
block1:;
// line 1818
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1820
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3829 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3829);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
frost$collections$Array* $tmp3830 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local1) = $tmp3829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
// line 1821
goto block3;
block3:;
// line 1822
org$frostlang$frostc$parser$Token $tmp3831 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3832 = $tmp3831.kind;
frost$core$Int64 $tmp3833 = $tmp3832.$rawValue;
frost$core$Int64 $tmp3834 = (frost$core$Int64) {104};
frost$core$Bit $tmp3835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3833, $tmp3834);
bool $tmp3836 = $tmp3835.value;
if ($tmp3836) goto block6; else goto block7;
block6:;
// line 1824
org$frostlang$frostc$parser$Token $tmp3837 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1825
goto block4;
block7:;
frost$core$Int64 $tmp3838 = (frost$core$Int64) {29};
frost$core$Bit $tmp3839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3833, $tmp3838);
bool $tmp3840 = $tmp3839.value;
if ($tmp3840) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3841 = (frost$core$Int64) {30};
frost$core$Bit $tmp3842 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3833, $tmp3841);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3844 = (frost$core$Int64) {28};
frost$core$Bit $tmp3845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3833, $tmp3844);
bool $tmp3846 = $tmp3845.value;
if ($tmp3846) goto block8; else goto block11;
block8:;
// line 1828
org$frostlang$frostc$ASTNode* $tmp3847 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
org$frostlang$frostc$ASTNode* $tmp3848 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
*(&local2) = $tmp3847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
// line 1829
org$frostlang$frostc$ASTNode* $tmp3849 = *(&local2);
frost$core$Bit $tmp3850 = frost$core$Bit$init$builtin_bit($tmp3849 == NULL);
bool $tmp3851 = $tmp3850.value;
if ($tmp3851) goto block12; else goto block13;
block12:;
// line 1830
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3852 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1832
frost$core$Int64 $tmp3854 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3855 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3854);
org$frostlang$frostc$parser$Token$nullable $tmp3856 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3855, &$s3857);
frost$core$Bit $tmp3858 = frost$core$Bit$init$builtin_bit(!$tmp3856.nonnull);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block14; else goto block15;
block14:;
// line 1833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3860 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3861 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3861));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1835
frost$collections$Array* $tmp3862 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3863 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3862, ((frost$core$Object*) $tmp3863));
// line 1836
org$frostlang$frostc$ASTNode* $tmp3864 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1839
org$frostlang$frostc$ASTNode* $tmp3865 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
org$frostlang$frostc$ASTNode* $tmp3866 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
*(&local3) = $tmp3865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
// line 1840
org$frostlang$frostc$ASTNode* $tmp3867 = *(&local3);
frost$core$Bit $tmp3868 = frost$core$Bit$init$builtin_bit($tmp3867 == NULL);
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block16; else goto block17;
block16:;
// line 1841
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3870));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3871 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1843
frost$collections$Array* $tmp3872 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3873 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3872, ((frost$core$Object*) $tmp3873));
org$frostlang$frostc$ASTNode* $tmp3874 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1847
frost$collections$Array* $tmp3875 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3876 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$collections$Array* $tmp3877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3876;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1854
org$frostlang$frostc$FixedArray* $tmp3878 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
org$frostlang$frostc$FixedArray* $tmp3879 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
*(&local0) = $tmp3878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
// line 1855
org$frostlang$frostc$FixedArray* $tmp3880 = *(&local0);
frost$core$Bit $tmp3881 = frost$core$Bit$init$builtin_bit($tmp3880 == NULL);
bool $tmp3882 = $tmp3881.value;
if ($tmp3882) goto block1; else goto block2;
block1:;
// line 1856
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3883 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3883));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1858
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3884 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3885 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3886 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3887 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3884, $tmp3885, $tmp3886, $tmp3887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
org$frostlang$frostc$FixedArray* $tmp3888 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3884;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1865
org$frostlang$frostc$ASTNode* $tmp3889 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
org$frostlang$frostc$ASTNode* $tmp3890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
*(&local0) = $tmp3889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
// line 1866
org$frostlang$frostc$ASTNode* $tmp3891 = *(&local0);
frost$core$Bit $tmp3892 = frost$core$Bit$init$builtin_bit($tmp3891 == NULL);
bool $tmp3893 = $tmp3892.value;
if ($tmp3893) goto block1; else goto block2;
block1:;
// line 1867
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3894 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1869
org$frostlang$frostc$parser$Token $tmp3895 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3896 = $tmp3895.kind;
frost$core$Int64 $tmp3897 = $tmp3896.$rawValue;
frost$core$Int64 $tmp3898 = (frost$core$Int64) {77};
frost$core$Bit $tmp3899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3901 = (frost$core$Int64) {78};
frost$core$Bit $tmp3902 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3901);
bool $tmp3903 = $tmp3902.value;
if ($tmp3903) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3904 = (frost$core$Int64) {79};
frost$core$Bit $tmp3905 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3904);
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3907 = (frost$core$Int64) {80};
frost$core$Bit $tmp3908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3907);
bool $tmp3909 = $tmp3908.value;
if ($tmp3909) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3910 = (frost$core$Int64) {81};
frost$core$Bit $tmp3911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3910);
bool $tmp3912 = $tmp3911.value;
if ($tmp3912) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3913 = (frost$core$Int64) {82};
frost$core$Bit $tmp3914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3913);
bool $tmp3915 = $tmp3914.value;
if ($tmp3915) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3916 = (frost$core$Int64) {83};
frost$core$Bit $tmp3917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3916);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {84};
frost$core$Bit $tmp3920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3919);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3922 = (frost$core$Int64) {85};
frost$core$Bit $tmp3923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3922);
bool $tmp3924 = $tmp3923.value;
if ($tmp3924) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3925 = (frost$core$Int64) {86};
frost$core$Bit $tmp3926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3925);
bool $tmp3927 = $tmp3926.value;
if ($tmp3927) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3928 = (frost$core$Int64) {87};
frost$core$Bit $tmp3929 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3928);
bool $tmp3930 = $tmp3929.value;
if ($tmp3930) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3931 = (frost$core$Int64) {88};
frost$core$Bit $tmp3932 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3931);
bool $tmp3933 = $tmp3932.value;
if ($tmp3933) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3934 = (frost$core$Int64) {89};
frost$core$Bit $tmp3935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3934);
bool $tmp3936 = $tmp3935.value;
if ($tmp3936) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3937 = (frost$core$Int64) {90};
frost$core$Bit $tmp3938 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3937);
bool $tmp3939 = $tmp3938.value;
if ($tmp3939) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3940 = (frost$core$Int64) {91};
frost$core$Bit $tmp3941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3940);
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3943 = (frost$core$Int64) {92};
frost$core$Bit $tmp3944 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3943);
bool $tmp3945 = $tmp3944.value;
if ($tmp3945) goto block4; else goto block20;
block4:;
// line 1875
org$frostlang$frostc$parser$Token $tmp3946 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3946;
// line 1876
org$frostlang$frostc$ASTNode* $tmp3947 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
org$frostlang$frostc$ASTNode* $tmp3948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local2) = $tmp3947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// line 1877
org$frostlang$frostc$ASTNode* $tmp3949 = *(&local2);
frost$core$Bit $tmp3950 = frost$core$Bit$init$builtin_bit($tmp3949 == NULL);
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block21; else goto block22;
block21:;
// line 1878
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3952 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1880
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3954 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3955 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3956 = *(&local0);
$fn3958 $tmp3957 = ($fn3958) $tmp3956->$class->vtable[2];
org$frostlang$frostc$Position $tmp3959 = $tmp3957($tmp3956);
org$frostlang$frostc$ASTNode* $tmp3960 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3961 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3962 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3961);
org$frostlang$frostc$ASTNode* $tmp3963 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3954, $tmp3955, $tmp3959, $tmp3960, $tmp3962, $tmp3963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
org$frostlang$frostc$ASTNode* $tmp3964 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3965 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3954;
block20:;
frost$core$Int64 $tmp3966 = (frost$core$Int64) {62};
frost$core$Bit $tmp3967 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3966);
bool $tmp3968 = $tmp3967.value;
if ($tmp3968) goto block23; else goto block24;
block23:;
// line 1884
org$frostlang$frostc$parser$Token $tmp3969 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3969, &$s3970);
// line 1885
org$frostlang$frostc$parser$Token $tmp3971 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3971;
// line 1886
org$frostlang$frostc$ASTNode* $tmp3972 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
org$frostlang$frostc$ASTNode* $tmp3973 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
*(&local4) = $tmp3972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
// line 1887
org$frostlang$frostc$ASTNode* $tmp3974 = *(&local4);
frost$core$Bit $tmp3975 = frost$core$Bit$init$builtin_bit($tmp3974 == NULL);
bool $tmp3976 = $tmp3975.value;
if ($tmp3976) goto block25; else goto block26;
block25:;
// line 1888
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3977 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3978 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1890
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3979 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3980 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3981 = *(&local0);
$fn3983 $tmp3982 = ($fn3983) $tmp3981->$class->vtable[2];
org$frostlang$frostc$Position $tmp3984 = $tmp3982($tmp3981);
org$frostlang$frostc$ASTNode* $tmp3985 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3986 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3987 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3986);
org$frostlang$frostc$ASTNode* $tmp3988 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3979, $tmp3980, $tmp3984, $tmp3985, $tmp3987, $tmp3988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
org$frostlang$frostc$ASTNode* $tmp3989 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3979;
block24:;
// line 1894
org$frostlang$frostc$ASTNode* $tmp3991 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
org$frostlang$frostc$ASTNode* $tmp3992 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3991;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1903
org$frostlang$frostc$ASTNode* $tmp3993 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
org$frostlang$frostc$ASTNode* $tmp3994 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3994));
*(&local0) = $tmp3993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
// line 1904
org$frostlang$frostc$ASTNode* $tmp3995 = *(&local0);
frost$core$Bit $tmp3996 = frost$core$Bit$init$builtin_bit($tmp3995 == NULL);
bool $tmp3997 = $tmp3996.value;
if ($tmp3997) goto block1; else goto block2;
block1:;
// line 1905
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1907
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1908
frost$core$Int64 $tmp3999 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp4000 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3999);
org$frostlang$frostc$parser$Token$nullable $tmp4001 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4000);
frost$core$Bit $tmp4002 = frost$core$Bit$init$builtin_bit($tmp4001.nonnull);
bool $tmp4003 = $tmp4002.value;
if ($tmp4003) goto block3; else goto block5;
block3:;
// line 1909
org$frostlang$frostc$ASTNode* $tmp4004 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
org$frostlang$frostc$ASTNode* $tmp4005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
*(&local1) = $tmp4004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
// line 1910
org$frostlang$frostc$ASTNode* $tmp4006 = *(&local1);
frost$core$Bit $tmp4007 = frost$core$Bit$init$builtin_bit($tmp4006 == NULL);
bool $tmp4008 = $tmp4007.value;
if ($tmp4008) goto block6; else goto block7;
block6:;
// line 1911
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4010 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4010));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1914
org$frostlang$frostc$parser$Token $tmp4011 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4012 = $tmp4011.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4013;
$tmp4013 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4013->value = $tmp4012;
frost$core$Int64 $tmp4014 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp4015 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4014);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4016;
$tmp4016 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4016->value = $tmp4015;
ITable* $tmp4017 = ((frost$core$Equatable*) $tmp4013)->$class->itable;
while ($tmp4017->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4017 = $tmp4017->next;
}
$fn4019 $tmp4018 = $tmp4017->methods[0];
frost$core$Bit $tmp4020 = $tmp4018(((frost$core$Equatable*) $tmp4013), ((frost$core$Equatable*) $tmp4016));
bool $tmp4021 = $tmp4020.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4016)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4013)));
if ($tmp4021) goto block8; else goto block10;
block8:;
// line 1915
org$frostlang$frostc$parser$Token $tmp4022 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp4022, &$s4023);
// line 1916
org$frostlang$frostc$ASTNode* $tmp4024 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
org$frostlang$frostc$ASTNode* $tmp4025 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local1) = $tmp4024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
// line 1917
org$frostlang$frostc$ASTNode* $tmp4026 = *(&local1);
frost$core$Bit $tmp4027 = frost$core$Bit$init$builtin_bit($tmp4026 == NULL);
bool $tmp4028 = $tmp4027.value;
if ($tmp4028) goto block11; else goto block12;
block11:;
// line 1918
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4030 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1922
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1924
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4032 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4033 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp4034 = *(&local0);
$fn4036 $tmp4035 = ($fn4036) $tmp4034->$class->vtable[2];
org$frostlang$frostc$Position $tmp4037 = $tmp4035($tmp4034);
org$frostlang$frostc$ASTNode* $tmp4038 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4039 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp4032, $tmp4033, $tmp4037, $tmp4038, $tmp4039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
org$frostlang$frostc$ASTNode* $tmp4040 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4041 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4032;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1931
org$frostlang$frostc$parser$Token $tmp4042 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4042;
// line 1932
// line 1933
org$frostlang$frostc$parser$Token $tmp4043 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp4044 = $tmp4043.kind;
frost$core$Int64 $tmp4045 = $tmp4044.$rawValue;
frost$core$Int64 $tmp4046 = (frost$core$Int64) {24};
frost$core$Bit $tmp4047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4045, $tmp4046);
bool $tmp4048 = $tmp4047.value;
if ($tmp4048) goto block2; else goto block3;
block2:;
// line 1935
frost$core$Int64 $tmp4049 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp4050 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4049);
*(&local1) = $tmp4050;
goto block1;
block3:;
frost$core$Int64 $tmp4051 = (frost$core$Int64) {25};
frost$core$Bit $tmp4052 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4045, $tmp4051);
bool $tmp4053 = $tmp4052.value;
if ($tmp4053) goto block4; else goto block5;
block4:;
// line 1938
frost$core$Int64 $tmp4054 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp4055 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4054);
*(&local1) = $tmp4055;
goto block1;
block5:;
frost$core$Int64 $tmp4056 = (frost$core$Int64) {26};
frost$core$Bit $tmp4057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4045, $tmp4056);
bool $tmp4058 = $tmp4057.value;
if ($tmp4058) goto block6; else goto block7;
block6:;
// line 1941
frost$core$Int64 $tmp4059 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp4060 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4059);
*(&local1) = $tmp4060;
goto block1;
block7:;
frost$core$Int64 $tmp4061 = (frost$core$Int64) {27};
frost$core$Bit $tmp4062 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4045, $tmp4061);
bool $tmp4063 = $tmp4062.value;
if ($tmp4063) goto block8; else goto block9;
block8:;
// line 1944
frost$core$Int64 $tmp4064 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp4065 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4064);
*(&local1) = $tmp4065;
goto block1;
block9:;
// line 1947
org$frostlang$frostc$parser$Token $tmp4066 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp4066, &$s4067);
goto block1;
block1:;
// line 1950
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4068 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4068);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
frost$collections$Array* $tmp4069 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
*(&local2) = $tmp4068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
// line 1951
org$frostlang$frostc$ASTNode* $tmp4070 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
org$frostlang$frostc$ASTNode* $tmp4071 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
*(&local3) = $tmp4070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
// line 1952
org$frostlang$frostc$ASTNode* $tmp4072 = *(&local3);
frost$core$Bit $tmp4073 = frost$core$Bit$init$builtin_bit($tmp4072 == NULL);
bool $tmp4074 = $tmp4073.value;
if ($tmp4074) goto block10; else goto block11;
block10:;
// line 1953
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4075 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4076 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1955
frost$collections$Array* $tmp4077 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4078 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4077, ((frost$core$Object*) $tmp4078));
// line 1956
goto block12;
block12:;
frost$core$Int64 $tmp4079 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4080 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4079);
org$frostlang$frostc$parser$Token$nullable $tmp4081 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4080);
frost$core$Bit $tmp4082 = frost$core$Bit$init$builtin_bit($tmp4081.nonnull);
bool $tmp4083 = $tmp4082.value;
if ($tmp4083) goto block13; else goto block14;
block13:;
// line 1957
org$frostlang$frostc$ASTNode* $tmp4084 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
org$frostlang$frostc$ASTNode* $tmp4085 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
*(&local4) = $tmp4084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
// line 1958
org$frostlang$frostc$ASTNode* $tmp4086 = *(&local4);
frost$core$Bit $tmp4087 = frost$core$Bit$init$builtin_bit($tmp4086 == NULL);
bool $tmp4088 = $tmp4087.value;
if ($tmp4088) goto block15; else goto block16;
block15:;
// line 1959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4089 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4090 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1961
frost$collections$Array* $tmp4092 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4093 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp4092, ((frost$core$Object*) $tmp4093));
org$frostlang$frostc$ASTNode* $tmp4094 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1963
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4095 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4096 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token $tmp4097 = *(&local0);
org$frostlang$frostc$Position $tmp4098 = $tmp4097.position;
org$frostlang$frostc$Variable$Kind $tmp4099 = *(&local1);
frost$collections$Array* $tmp4100 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4101 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4100);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4095, $tmp4096, $tmp4098, $tmp4099, $tmp4101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
org$frostlang$frostc$ASTNode* $tmp4102 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4095;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1970
frost$core$Int64 $tmp4104 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp4105 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4104);
org$frostlang$frostc$parser$Token$nullable $tmp4106 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4105, &$s4107);
*(&local0) = $tmp4106;
// line 1971
org$frostlang$frostc$parser$Token$nullable $tmp4108 = *(&local0);
frost$core$Bit $tmp4109 = frost$core$Bit$init$builtin_bit(!$tmp4108.nonnull);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block1; else goto block2;
block1:;
// line 1972
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1974
frost$core$Int64 $tmp4111 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4112 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4111);
org$frostlang$frostc$parser$Token$nullable $tmp4113 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4112, &$s4114);
frost$core$Bit $tmp4115 = frost$core$Bit$init$builtin_bit(!$tmp4113.nonnull);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block3; else goto block4;
block3:;
// line 1975
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1977
frost$collections$Stack** $tmp4117 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4118 = *$tmp4117;
frost$core$Bit $tmp4119 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp4120;
$tmp4120 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp4120->value = $tmp4119;
frost$collections$Stack$push$frost$collections$Stack$T($tmp4118, ((frost$core$Object*) $tmp4120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4120));
// line 1978
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4121 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4122 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4123 = *(&local0);
org$frostlang$frostc$Position $tmp4124 = ((org$frostlang$frostc$parser$Token) $tmp4123.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4125 = *(&local0);
frost$core$String* $tmp4126 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4125.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4121, $tmp4122, $tmp4124, $tmp4126);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
org$frostlang$frostc$ASTNode* $tmp4127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local1) = $tmp4121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
// line 1979
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4128 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4128);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
frost$collections$Array* $tmp4129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
*(&local2) = $tmp4128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
// line 1980
frost$core$Int64 $tmp4130 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4131 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4130);
org$frostlang$frostc$parser$Token$nullable $tmp4132 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4131);
frost$core$Bit $tmp4133 = frost$core$Bit$init$builtin_bit(!$tmp4132.nonnull);
bool $tmp4134 = $tmp4133.value;
if ($tmp4134) goto block5; else goto block6;
block5:;
// line 1981
org$frostlang$frostc$ASTNode* $tmp4135 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4135));
org$frostlang$frostc$ASTNode* $tmp4136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
*(&local3) = $tmp4135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4135));
// line 1982
org$frostlang$frostc$ASTNode* $tmp4137 = *(&local3);
frost$core$Bit $tmp4138 = frost$core$Bit$init$builtin_bit($tmp4137 == NULL);
bool $tmp4139 = $tmp4138.value;
if ($tmp4139) goto block7; else goto block8;
block7:;
// line 1983
frost$collections$Stack** $tmp4140 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4141 = *$tmp4140;
frost$core$Object* $tmp4142 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4141);
frost$core$Frost$unref$frost$core$Object$Q($tmp4142);
// line 1984
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4143));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4144));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4145));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1986
frost$collections$Array* $tmp4146 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4147 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4146, ((frost$core$Object*) $tmp4147));
// line 1987
goto block9;
block9:;
frost$core$Int64 $tmp4148 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4149 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4148);
org$frostlang$frostc$parser$Token$nullable $tmp4150 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4149);
frost$core$Bit $tmp4151 = frost$core$Bit$init$builtin_bit($tmp4150.nonnull);
bool $tmp4152 = $tmp4151.value;
if ($tmp4152) goto block10; else goto block11;
block10:;
// line 1988
org$frostlang$frostc$ASTNode* $tmp4153 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
org$frostlang$frostc$ASTNode* $tmp4154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4154));
*(&local3) = $tmp4153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
// line 1989
org$frostlang$frostc$ASTNode* $tmp4155 = *(&local3);
frost$core$Bit $tmp4156 = frost$core$Bit$init$builtin_bit($tmp4155 == NULL);
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block12; else goto block13;
block12:;
// line 1990
frost$collections$Stack** $tmp4158 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4159 = *$tmp4158;
frost$core$Object* $tmp4160 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4159);
frost$core$Frost$unref$frost$core$Object$Q($tmp4160);
// line 1991
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1993
frost$collections$Array* $tmp4164 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4165 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4164, ((frost$core$Object*) $tmp4165));
goto block9;
block11:;
// line 1995
frost$core$Int64 $tmp4166 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4167 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4166);
org$frostlang$frostc$parser$Token$nullable $tmp4168 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4167, &$s4169);
frost$core$Bit $tmp4170 = frost$core$Bit$init$builtin_bit(!$tmp4168.nonnull);
bool $tmp4171 = $tmp4170.value;
if ($tmp4171) goto block14; else goto block15;
block14:;
// line 1996
frost$collections$Stack** $tmp4172 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4173 = *$tmp4172;
frost$core$Object* $tmp4174 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4173);
frost$core$Frost$unref$frost$core$Object$Q($tmp4174);
// line 1997
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4175 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4175));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4176 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4176));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4177 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4177));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4178 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4178));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2000
frost$collections$Stack** $tmp4179 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4180 = *$tmp4179;
frost$core$Object* $tmp4181 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4180);
frost$core$Frost$unref$frost$core$Object$Q($tmp4181);
// line 2001
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4182 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4183 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4184 = *(&local0);
org$frostlang$frostc$Position $tmp4185 = ((org$frostlang$frostc$parser$Token) $tmp4184.value).position;
org$frostlang$frostc$ASTNode* $tmp4186 = *(&local1);
frost$collections$Array* $tmp4187 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4188 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4187);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4182, $tmp4183, $tmp4185, $tmp4186, $tmp4188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
frost$collections$Array* $tmp4189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4182;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2008
frost$core$Int64 $tmp4191 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4192 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4191);
org$frostlang$frostc$parser$Token$nullable $tmp4193 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4192, &$s4194);
*(&local0) = $tmp4193;
// line 2009
org$frostlang$frostc$parser$Token$nullable $tmp4195 = *(&local0);
frost$core$Bit $tmp4196 = frost$core$Bit$init$builtin_bit(!$tmp4195.nonnull);
bool $tmp4197 = $tmp4196.value;
if ($tmp4197) goto block1; else goto block2;
block1:;
// line 2010
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2012
frost$core$Int64 $tmp4198 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4199 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4198);
org$frostlang$frostc$parser$Token$nullable $tmp4200 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4199);
*(&local1) = $tmp4200;
// line 2013
org$frostlang$frostc$parser$Token$nullable $tmp4201 = *(&local1);
frost$core$Bit $tmp4202 = frost$core$Bit$init$builtin_bit($tmp4201.nonnull);
bool $tmp4203 = $tmp4202.value;
if ($tmp4203) goto block3; else goto block4;
block3:;
// line 2014
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4204 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4205 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4206 = *(&local0);
org$frostlang$frostc$Position $tmp4207 = ((org$frostlang$frostc$parser$Token) $tmp4206.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4208 = *(&local1);
frost$core$String* $tmp4209 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4208.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4204, $tmp4205, $tmp4207, $tmp4209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4204));
return $tmp4204;
block4:;
// line 2016
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4210 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4211 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4212 = *(&local0);
org$frostlang$frostc$Position $tmp4213 = ((org$frostlang$frostc$parser$Token) $tmp4212.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4210, $tmp4211, $tmp4213, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
return $tmp4210;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2023
frost$core$Int64 $tmp4214 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4215 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4214);
org$frostlang$frostc$parser$Token$nullable $tmp4216 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4215, &$s4217);
*(&local0) = $tmp4216;
// line 2024
org$frostlang$frostc$parser$Token$nullable $tmp4218 = *(&local0);
frost$core$Bit $tmp4219 = frost$core$Bit$init$builtin_bit(!$tmp4218.nonnull);
bool $tmp4220 = $tmp4219.value;
if ($tmp4220) goto block1; else goto block2;
block1:;
// line 2025
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2027
frost$core$Int64 $tmp4221 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4222 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4221);
org$frostlang$frostc$parser$Token$nullable $tmp4223 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4222);
*(&local1) = $tmp4223;
// line 2028
org$frostlang$frostc$parser$Token$nullable $tmp4224 = *(&local1);
frost$core$Bit $tmp4225 = frost$core$Bit$init$builtin_bit($tmp4224.nonnull);
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block3; else goto block4;
block3:;
// line 2029
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4227 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4228 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4229 = *(&local0);
org$frostlang$frostc$Position $tmp4230 = ((org$frostlang$frostc$parser$Token) $tmp4229.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4231 = *(&local1);
frost$core$String* $tmp4232 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4231.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4227, $tmp4228, $tmp4230, $tmp4232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
return $tmp4227;
block4:;
// line 2031
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4233 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4234 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4235 = *(&local0);
org$frostlang$frostc$Position $tmp4236 = ((org$frostlang$frostc$parser$Token) $tmp4235.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4233, $tmp4234, $tmp4236, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4233));
return $tmp4233;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2038
frost$core$Int64 $tmp4237 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4238 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4237);
org$frostlang$frostc$parser$Token$nullable $tmp4239 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4238, &$s4240);
*(&local0) = $tmp4239;
// line 2039
org$frostlang$frostc$parser$Token$nullable $tmp4241 = *(&local0);
frost$core$Bit $tmp4242 = frost$core$Bit$init$builtin_bit(!$tmp4241.nonnull);
bool $tmp4243 = $tmp4242.value;
if ($tmp4243) goto block1; else goto block2;
block1:;
// line 2040
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2042
org$frostlang$frostc$parser$Token $tmp4244 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4245 = $tmp4244.kind;
frost$core$Int64 $tmp4246 = $tmp4245.$rawValue;
frost$core$Int64 $tmp4247 = (frost$core$Int64) {104};
frost$core$Bit $tmp4248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4246, $tmp4247);
bool $tmp4249 = $tmp4248.value;
if ($tmp4249) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4250 = (frost$core$Int64) {40};
frost$core$Bit $tmp4251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4246, $tmp4250);
bool $tmp4252 = $tmp4251.value;
if ($tmp4252) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4253 = (frost$core$Int64) {41};
frost$core$Bit $tmp4254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4246, $tmp4253);
bool $tmp4255 = $tmp4254.value;
if ($tmp4255) goto block4; else goto block7;
block4:;
// line 2044
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4256 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4257 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4258 = *(&local0);
org$frostlang$frostc$Position $tmp4259 = ((org$frostlang$frostc$parser$Token) $tmp4258.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4256, $tmp4257, $tmp4259, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
return $tmp4256;
block7:;
// line 2047
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4260 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4260);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
frost$collections$Array* $tmp4261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
*(&local1) = $tmp4260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
// line 2048
org$frostlang$frostc$ASTNode* $tmp4262 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
org$frostlang$frostc$ASTNode* $tmp4263 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
*(&local2) = $tmp4262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
// line 2049
org$frostlang$frostc$ASTNode* $tmp4264 = *(&local2);
frost$core$Bit $tmp4265 = frost$core$Bit$init$builtin_bit($tmp4264 == NULL);
bool $tmp4266 = $tmp4265.value;
if ($tmp4266) goto block8; else goto block9;
block8:;
// line 2050
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2052
frost$collections$Array* $tmp4269 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4270 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4269, ((frost$core$Object*) $tmp4270));
// line 2053
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4271 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4272 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4273 = *(&local0);
org$frostlang$frostc$Position $tmp4274 = ((org$frostlang$frostc$parser$Token) $tmp4273.value).position;
org$frostlang$frostc$ASTNode* $tmp4275 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4271, $tmp4272, $tmp4274, $tmp4275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
org$frostlang$frostc$ASTNode* $tmp4276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4271;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2062
org$frostlang$frostc$parser$Token $tmp4278 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4279 = $tmp4278.kind;
frost$core$Int64 $tmp4280 = $tmp4279.$rawValue;
frost$core$Int64 $tmp4281 = (frost$core$Int64) {29};
frost$core$Bit $tmp4282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4280, $tmp4281);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block2; else goto block3;
block2:;
// line 2063
org$frostlang$frostc$ASTNode* $tmp4284 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
return $tmp4284;
block3:;
frost$core$Int64 $tmp4285 = (frost$core$Int64) {30};
frost$core$Bit $tmp4286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4280, $tmp4285);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block4; else goto block5;
block4:;
// line 2064
org$frostlang$frostc$ASTNode* $tmp4288 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
return $tmp4288;
block5:;
frost$core$Int64 $tmp4289 = (frost$core$Int64) {28};
frost$core$Bit $tmp4290 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4280, $tmp4289);
bool $tmp4291 = $tmp4290.value;
if ($tmp4291) goto block6; else goto block7;
block6:;
// line 2065
org$frostlang$frostc$ASTNode* $tmp4292 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
return $tmp4292;
block7:;
// line 2066
frost$core$Int64 $tmp4293 = (frost$core$Int64) {2066};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4294, $tmp4293);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2074
org$frostlang$frostc$parser$Token $tmp4295 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4296 = $tmp4295.kind;
frost$core$Int64 $tmp4297 = $tmp4296.$rawValue;
frost$core$Int64 $tmp4298 = (frost$core$Int64) {31};
frost$core$Bit $tmp4299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4297, $tmp4298);
bool $tmp4300 = $tmp4299.value;
if ($tmp4300) goto block2; else goto block3;
block2:;
// line 2075
org$frostlang$frostc$ASTNode* $tmp4301 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
return $tmp4301;
block3:;
frost$core$Int64 $tmp4302 = (frost$core$Int64) {33};
frost$core$Bit $tmp4303 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4297, $tmp4302);
bool $tmp4304 = $tmp4303.value;
if ($tmp4304) goto block4; else goto block5;
block4:;
// line 2076
org$frostlang$frostc$ASTNode* $tmp4305 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4305));
return $tmp4305;
block5:;
frost$core$Int64 $tmp4306 = (frost$core$Int64) {36};
frost$core$Bit $tmp4307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4297, $tmp4306);
bool $tmp4308 = $tmp4307.value;
if ($tmp4308) goto block6; else goto block7;
block6:;
// line 2077
org$frostlang$frostc$ASTNode* $tmp4309 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
return $tmp4309;
block7:;
frost$core$Int64 $tmp4310 = (frost$core$Int64) {32};
frost$core$Bit $tmp4311 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4297, $tmp4310);
bool $tmp4312 = $tmp4311.value;
if ($tmp4312) goto block8; else goto block9;
block8:;
// line 2078
org$frostlang$frostc$ASTNode* $tmp4313 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
return $tmp4313;
block9:;
// line 2081
frost$core$Int64 $tmp4314 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4315 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4314);
org$frostlang$frostc$parser$Token$nullable $tmp4316 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4315, &$s4317);
// line 2082
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$parser$Token$nullable local2;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$FixedArray* local5 = NULL;
// line 2091
// line 2092
frost$core$Int64 $tmp4318 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4319 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4318);
org$frostlang$frostc$parser$Token$nullable $tmp4320 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4319);
*(&local1) = $tmp4320;
// line 2093
org$frostlang$frostc$parser$Token$nullable $tmp4321 = *(&local1);
frost$core$Bit $tmp4322 = frost$core$Bit$init$builtin_bit(!$tmp4321.nonnull);
bool $tmp4323 = $tmp4322.value;
if ($tmp4323) goto block1; else goto block3;
block1:;
// line 2094
frost$core$Int64 $tmp4324 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4325 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4324);
org$frostlang$frostc$parser$Token$nullable $tmp4326 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4325, &$s4327);
*(&local1) = $tmp4326;
// line 2095
org$frostlang$frostc$parser$Token$nullable $tmp4328 = *(&local1);
frost$core$Bit $tmp4329 = frost$core$Bit$init$builtin_bit(!$tmp4328.nonnull);
bool $tmp4330 = $tmp4329.value;
if ($tmp4330) goto block4; else goto block5;
block4:;
// line 2096
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2098
frost$core$Int64 $tmp4331 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4332 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4331);
*(&local0) = $tmp4332;
goto block2;
block3:;
// line 1
// line 2101
frost$core$Int64 $tmp4333 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4334 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4333);
*(&local0) = $tmp4334;
goto block2;
block2:;
// line 2103
frost$core$Int64 $tmp4335 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4336 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4335);
org$frostlang$frostc$parser$Token$nullable $tmp4337 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4336, &$s4338);
*(&local2) = $tmp4337;
// line 2104
org$frostlang$frostc$parser$Token$nullable $tmp4339 = *(&local2);
frost$core$Bit $tmp4340 = frost$core$Bit$init$builtin_bit(!$tmp4339.nonnull);
bool $tmp4341 = $tmp4340.value;
if ($tmp4341) goto block6; else goto block7;
block6:;
// line 2105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2107
org$frostlang$frostc$FixedArray* $tmp4342 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
org$frostlang$frostc$FixedArray* $tmp4343 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
*(&local3) = $tmp4342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
// line 2108
org$frostlang$frostc$FixedArray* $tmp4344 = *(&local3);
frost$core$Bit $tmp4345 = frost$core$Bit$init$builtin_bit($tmp4344 == NULL);
bool $tmp4346 = $tmp4345.value;
if ($tmp4346) goto block8; else goto block9;
block8:;
// line 2109
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4347 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2111
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2112
org$frostlang$frostc$parser$Token $tmp4348 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4349 = $tmp4348.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4350;
$tmp4350 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4350->value = $tmp4349;
frost$core$Int64 $tmp4351 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4352 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4351);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4353;
$tmp4353 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4353->value = $tmp4352;
ITable* $tmp4354 = ((frost$core$Equatable*) $tmp4350)->$class->itable;
while ($tmp4354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4354 = $tmp4354->next;
}
$fn4356 $tmp4355 = $tmp4354->methods[0];
frost$core$Bit $tmp4357 = $tmp4355(((frost$core$Equatable*) $tmp4350), ((frost$core$Equatable*) $tmp4353));
bool $tmp4358 = $tmp4357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4353)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4350)));
if ($tmp4358) goto block10; else goto block12;
block10:;
// line 2113
org$frostlang$frostc$ASTNode* $tmp4359 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4359));
org$frostlang$frostc$ASTNode* $tmp4360 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
*(&local4) = $tmp4359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4359));
// line 2114
org$frostlang$frostc$ASTNode* $tmp4361 = *(&local4);
frost$core$Bit $tmp4362 = frost$core$Bit$init$builtin_bit($tmp4361 == NULL);
bool $tmp4363 = $tmp4362.value;
if ($tmp4363) goto block13; else goto block14;
block13:;
// line 2115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4364 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4365 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4366 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2121
org$frostlang$frostc$FixedArray* $tmp4367 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
org$frostlang$frostc$FixedArray* $tmp4368 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
*(&local5) = $tmp4367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
// line 2122
org$frostlang$frostc$FixedArray* $tmp4369 = *(&local5);
frost$core$Bit $tmp4370 = frost$core$Bit$init$builtin_bit($tmp4369 == NULL);
bool $tmp4371 = $tmp4370.value;
if ($tmp4371) goto block15; else goto block16;
block15:;
// line 2123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4372 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4373 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2125
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4375 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4376 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4377 = *(&local1);
org$frostlang$frostc$Position $tmp4378 = ((org$frostlang$frostc$parser$Token) $tmp4377.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4379 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4379);
org$frostlang$frostc$MethodDecl$Kind $tmp4380 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4381 = *(&local2);
frost$core$String* $tmp4382 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4381.value));
org$frostlang$frostc$FixedArray* $tmp4383 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4384 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4385 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4375, $tmp4376, $tmp4378, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4379, $tmp4380, $tmp4382, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4383, $tmp4384, $tmp4385);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
org$frostlang$frostc$FixedArray* $tmp4386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4386));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4387 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4388 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4375;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2133
frost$core$Int64 $tmp4389 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4390 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4389);
org$frostlang$frostc$parser$Token$nullable $tmp4391 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4390, &$s4392);
*(&local0) = $tmp4391;
// line 2134
org$frostlang$frostc$parser$Token$nullable $tmp4393 = *(&local0);
frost$core$Bit $tmp4394 = frost$core$Bit$init$builtin_bit(!$tmp4393.nonnull);
bool $tmp4395 = $tmp4394.value;
if ($tmp4395) goto block1; else goto block2;
block1:;
// line 2135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2137
org$frostlang$frostc$FixedArray* $tmp4396 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
org$frostlang$frostc$FixedArray* $tmp4397 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4397));
*(&local1) = $tmp4396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
// line 2138
org$frostlang$frostc$FixedArray* $tmp4398 = *(&local1);
frost$core$Bit $tmp4399 = frost$core$Bit$init$builtin_bit($tmp4398 == NULL);
bool $tmp4400 = $tmp4399.value;
if ($tmp4400) goto block3; else goto block4;
block3:;
// line 2139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2141
frost$core$Int64 $tmp4402 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4403 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4402);
org$frostlang$frostc$parser$Token$nullable $tmp4404 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4403, &$s4405);
frost$core$Bit $tmp4406 = frost$core$Bit$init$builtin_bit(!$tmp4404.nonnull);
bool $tmp4407 = $tmp4406.value;
if ($tmp4407) goto block5; else goto block6;
block5:;
// line 2142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2144
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2145
frost$core$Int64 $tmp4409 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4410 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4409);
org$frostlang$frostc$parser$Token$nullable $tmp4411 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4410);
frost$core$Bit $tmp4412 = frost$core$Bit$init$builtin_bit($tmp4411.nonnull);
bool $tmp4413 = $tmp4412.value;
if ($tmp4413) goto block7; else goto block9;
block7:;
// line 2146
frost$core$Int64 $tmp4414 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4415 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4414);
org$frostlang$frostc$parser$Token$nullable $tmp4416 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4415, &$s4417);
*(&local3) = $tmp4416;
// line 2147
org$frostlang$frostc$parser$Token$nullable $tmp4418 = *(&local3);
frost$core$Bit $tmp4419 = frost$core$Bit$init$builtin_bit(!$tmp4418.nonnull);
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block10; else goto block11;
block10:;
// line 2148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4421));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4422 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4422));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2150
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4423 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4424 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4425 = *(&local3);
org$frostlang$frostc$Position $tmp4426 = ((org$frostlang$frostc$parser$Token) $tmp4425.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4427 = *(&local3);
frost$core$String* $tmp4428 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4427.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4423, $tmp4424, $tmp4426, $tmp4428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4423));
org$frostlang$frostc$ASTNode* $tmp4429 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4429));
*(&local2) = $tmp4423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4423));
// line 2151
frost$core$Int64 $tmp4430 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4431 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4430);
org$frostlang$frostc$parser$Token$nullable $tmp4432 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4431, &$s4433);
frost$core$Bit $tmp4434 = frost$core$Bit$init$builtin_bit(!$tmp4432.nonnull);
bool $tmp4435 = $tmp4434.value;
if ($tmp4435) goto block12; else goto block13;
block12:;
// line 2152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4436 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4436));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4437 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2158
org$frostlang$frostc$FixedArray* $tmp4439 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
org$frostlang$frostc$FixedArray* $tmp4440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
*(&local4) = $tmp4439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
// line 2159
org$frostlang$frostc$FixedArray* $tmp4441 = *(&local4);
frost$core$Bit $tmp4442 = frost$core$Bit$init$builtin_bit($tmp4441 == NULL);
bool $tmp4443 = $tmp4442.value;
if ($tmp4443) goto block14; else goto block15;
block14:;
// line 2160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4445 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4445));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4446));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2162
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4447 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4448 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4449 = *(&local0);
org$frostlang$frostc$Position $tmp4450 = ((org$frostlang$frostc$parser$Token) $tmp4449.value).position;
org$frostlang$frostc$FixedArray* $tmp4451 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4452 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4453 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4447, $tmp4448, $tmp4450, $tmp4451, $tmp4452, $tmp4453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
org$frostlang$frostc$FixedArray* $tmp4454 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4456));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4447;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2170
org$frostlang$frostc$parser$Token $tmp4457 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4458 = $tmp4457.kind;
frost$core$Int64 $tmp4459 = $tmp4458.$rawValue;
frost$core$Int64 $tmp4460 = (frost$core$Int64) {37};
frost$core$Bit $tmp4461 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4460);
bool $tmp4462 = $tmp4461.value;
if ($tmp4462) goto block2; else goto block3;
block2:;
// line 2171
org$frostlang$frostc$ASTNode* $tmp4463 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
return $tmp4463;
block3:;
frost$core$Int64 $tmp4464 = (frost$core$Int64) {33};
frost$core$Bit $tmp4465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4464);
bool $tmp4466 = $tmp4465.value;
if ($tmp4466) goto block4; else goto block5;
block4:;
// line 2172
org$frostlang$frostc$ASTNode* $tmp4467 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
return $tmp4467;
block5:;
frost$core$Int64 $tmp4468 = (frost$core$Int64) {32};
frost$core$Bit $tmp4469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4468);
bool $tmp4470 = $tmp4469.value;
if ($tmp4470) goto block6; else goto block7;
block6:;
// line 2173
org$frostlang$frostc$ASTNode* $tmp4471 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
return $tmp4471;
block7:;
frost$core$Int64 $tmp4472 = (frost$core$Int64) {31};
frost$core$Bit $tmp4473 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4472);
bool $tmp4474 = $tmp4473.value;
if ($tmp4474) goto block8; else goto block9;
block8:;
// line 2174
org$frostlang$frostc$ASTNode* $tmp4475 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
return $tmp4475;
block9:;
frost$core$Int64 $tmp4476 = (frost$core$Int64) {36};
frost$core$Bit $tmp4477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4476);
bool $tmp4478 = $tmp4477.value;
if ($tmp4478) goto block10; else goto block11;
block10:;
// line 2175
org$frostlang$frostc$ASTNode* $tmp4479 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
return $tmp4479;
block11:;
frost$core$Int64 $tmp4480 = (frost$core$Int64) {45};
frost$core$Bit $tmp4481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4480);
bool $tmp4482 = $tmp4481.value;
if ($tmp4482) goto block12; else goto block13;
block12:;
// line 2176
org$frostlang$frostc$ASTNode* $tmp4483 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
return $tmp4483;
block13:;
frost$core$Int64 $tmp4484 = (frost$core$Int64) {39};
frost$core$Bit $tmp4485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4484);
bool $tmp4486 = $tmp4485.value;
if ($tmp4486) goto block14; else goto block15;
block14:;
// line 2177
org$frostlang$frostc$ASTNode* $tmp4487 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
return $tmp4487;
block15:;
frost$core$Int64 $tmp4488 = (frost$core$Int64) {103};
frost$core$Bit $tmp4489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4488);
bool $tmp4490 = $tmp4489.value;
if ($tmp4490) goto block16; else goto block17;
block16:;
// line 2178
org$frostlang$frostc$ASTNode* $tmp4491 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
return $tmp4491;
block17:;
frost$core$Int64 $tmp4492 = (frost$core$Int64) {52};
frost$core$Bit $tmp4493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4492);
bool $tmp4494 = $tmp4493.value;
if ($tmp4494) goto block18; else goto block19;
block18:;
// line 2180
org$frostlang$frostc$parser$Token $tmp4495 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4495;
// line 2181
frost$core$Int64 $tmp4496 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4497 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4496);
org$frostlang$frostc$parser$Token$nullable $tmp4498 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4497);
*(&local1) = $tmp4498;
// line 2182
org$frostlang$frostc$parser$Token$nullable $tmp4499 = *(&local1);
frost$core$Bit $tmp4500 = frost$core$Bit$init$builtin_bit($tmp4499.nonnull);
bool $tmp4501 = $tmp4500.value;
if ($tmp4501) goto block20; else goto block21;
block20:;
// line 2183
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4502 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4503 = *$tmp4502;
frost$core$Bit $tmp4504 = frost$core$Bit$init$builtin_bit($tmp4503 != NULL);
bool $tmp4505 = $tmp4504.value;
if ($tmp4505) goto block22; else goto block23;
block22:;
// line 2184
org$frostlang$frostc$parser$Token$nullable $tmp4506 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4506.value));
// line 2185
org$frostlang$frostc$parser$Token $tmp4507 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4507);
// line 2186
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4508 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4509 = *$tmp4508;
frost$core$Int64 $tmp4510 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4511 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4510);
$fn4513 $tmp4512 = ($fn4513) $tmp4509->$class->vtable[3];
$tmp4512($tmp4509, $tmp4511);
// line 2187
org$frostlang$frostc$parser$Token $tmp4514 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2188
org$frostlang$frostc$parser$Token $tmp4515 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2189
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4516 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4517 = *$tmp4516;
frost$core$Int64 $tmp4518 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4519 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4518);
$fn4521 $tmp4520 = ($fn4521) $tmp4517->$class->vtable[4];
$tmp4520($tmp4517, $tmp4519);
goto block23;
block23:;
// line 2191
org$frostlang$frostc$parser$Token $tmp4522 = *(&local0);
frost$core$String* $tmp4523 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4522);
org$frostlang$frostc$ASTNode* $tmp4524 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
return $tmp4524;
block21:;
// line 2193
org$frostlang$frostc$parser$Token $tmp4525 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4525);
// line 2194
org$frostlang$frostc$ASTNode* $tmp4526 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
return $tmp4526;
block19:;
frost$core$Int64 $tmp4527 = (frost$core$Int64) {49};
frost$core$Bit $tmp4528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4527);
bool $tmp4529 = $tmp4528.value;
if ($tmp4529) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4530 = (frost$core$Int64) {50};
frost$core$Bit $tmp4531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4530);
bool $tmp4532 = $tmp4531.value;
if ($tmp4532) goto block24; else goto block26;
block24:;
// line 2197
org$frostlang$frostc$ASTNode* $tmp4533 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
return $tmp4533;
block26:;
frost$core$Int64 $tmp4534 = (frost$core$Int64) {24};
frost$core$Bit $tmp4535 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4534);
bool $tmp4536 = $tmp4535.value;
if ($tmp4536) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4537 = (frost$core$Int64) {25};
frost$core$Bit $tmp4538 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4537);
bool $tmp4539 = $tmp4538.value;
if ($tmp4539) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4540 = (frost$core$Int64) {26};
frost$core$Bit $tmp4541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4540);
bool $tmp4542 = $tmp4541.value;
if ($tmp4542) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4543 = (frost$core$Int64) {27};
frost$core$Bit $tmp4544 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4543);
bool $tmp4545 = $tmp4544.value;
if ($tmp4545) goto block27; else goto block31;
block27:;
// line 2200
org$frostlang$frostc$ASTNode* $tmp4546 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
return $tmp4546;
block31:;
frost$core$Int64 $tmp4547 = (frost$core$Int64) {23};
frost$core$Bit $tmp4548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4547);
bool $tmp4549 = $tmp4548.value;
if ($tmp4549) goto block32; else goto block33;
block32:;
// line 2203
org$frostlang$frostc$ASTNode* $tmp4550 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
return $tmp4550;
block33:;
frost$core$Int64 $tmp4551 = (frost$core$Int64) {22};
frost$core$Bit $tmp4552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4551);
bool $tmp4553 = $tmp4552.value;
if ($tmp4553) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4554 = (frost$core$Int64) {21};
frost$core$Bit $tmp4555 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4554);
bool $tmp4556 = $tmp4555.value;
if ($tmp4556) goto block34; else goto block36;
block34:;
// line 2206
org$frostlang$frostc$ASTNode* $tmp4557 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4557));
return $tmp4557;
block36:;
frost$core$Int64 $tmp4558 = (frost$core$Int64) {47};
frost$core$Bit $tmp4559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4558);
bool $tmp4560 = $tmp4559.value;
if ($tmp4560) goto block37; else goto block38;
block37:;
// line 2209
org$frostlang$frostc$ASTNode* $tmp4561 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
return $tmp4561;
block38:;
frost$core$Int64 $tmp4562 = (frost$core$Int64) {46};
frost$core$Bit $tmp4563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4459, $tmp4562);
bool $tmp4564 = $tmp4563.value;
if ($tmp4564) goto block39; else goto block40;
block39:;
// line 2212
org$frostlang$frostc$ASTNode* $tmp4565 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
return $tmp4565;
block40:;
// line 2216
frost$core$Int64 $tmp4566 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4567 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4566);
org$frostlang$frostc$parser$Token$nullable $tmp4568 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4567, &$s4569);
// line 2217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block41;
block41:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2226
frost$core$Int64 $tmp4570 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4571 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4570);
org$frostlang$frostc$parser$Token$nullable $tmp4572 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4571, &$s4573);
*(&local0) = $tmp4572;
// line 2227
org$frostlang$frostc$parser$Token$nullable $tmp4574 = *(&local0);
frost$core$Bit $tmp4575 = frost$core$Bit$init$builtin_bit(!$tmp4574.nonnull);
bool $tmp4576 = $tmp4575.value;
if ($tmp4576) goto block1; else goto block2;
block1:;
// line 2228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2230
frost$core$Int64 $tmp4577 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4578 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4577);
org$frostlang$frostc$parser$Token$nullable $tmp4579 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4578, &$s4580);
*(&local1) = $tmp4579;
// line 2231
org$frostlang$frostc$parser$Token$nullable $tmp4581 = *(&local1);
frost$core$Bit $tmp4582 = frost$core$Bit$init$builtin_bit(!$tmp4581.nonnull);
bool $tmp4583 = $tmp4582.value;
if ($tmp4583) goto block3; else goto block4;
block3:;
// line 2232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2234
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4584 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4585 = *(&local1);
frost$core$String* $tmp4586 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4585.value));
frost$core$MutableString$init$frost$core$String($tmp4584, $tmp4586);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
frost$core$MutableString* $tmp4587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4587));
*(&local2) = $tmp4584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
// line 2235
goto block5;
block5:;
// line 2236
frost$core$Int64 $tmp4588 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4589 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4588);
org$frostlang$frostc$parser$Token$nullable $tmp4590 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4589);
*(&local1) = $tmp4590;
// line 2237
org$frostlang$frostc$parser$Token$nullable $tmp4591 = *(&local1);
frost$core$Bit $tmp4592 = frost$core$Bit$init$builtin_bit(!$tmp4591.nonnull);
bool $tmp4593 = $tmp4592.value;
if ($tmp4593) goto block7; else goto block8;
block7:;
// line 2238
goto block6;
block8:;
// line 2240
frost$core$MutableString* $tmp4594 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4594, &$s4595);
// line 2241
frost$core$Int64 $tmp4596 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4597 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4596);
org$frostlang$frostc$parser$Token$nullable $tmp4598 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4597, &$s4599);
*(&local1) = $tmp4598;
// line 2242
org$frostlang$frostc$parser$Token$nullable $tmp4600 = *(&local1);
frost$core$Bit $tmp4601 = frost$core$Bit$init$builtin_bit(!$tmp4600.nonnull);
bool $tmp4602 = $tmp4601.value;
if ($tmp4602) goto block9; else goto block10;
block9:;
// line 2243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4603 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4603));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2245
frost$core$MutableString* $tmp4604 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4605 = *(&local1);
frost$core$String* $tmp4606 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4605.value));
frost$core$MutableString$append$frost$core$String($tmp4604, $tmp4606);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
goto block5;
block6:;
// line 2247
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4607 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4608 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4609 = *(&local0);
org$frostlang$frostc$Position $tmp4610 = ((org$frostlang$frostc$parser$Token) $tmp4609.value).position;
frost$core$MutableString* $tmp4611 = *(&local2);
frost$core$String* $tmp4612 = frost$core$MutableString$finish$R$frost$core$String($tmp4611);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4607, $tmp4608, $tmp4610, $tmp4612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4607));
frost$core$MutableString* $tmp4613 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4607;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2254
frost$core$Int64 $tmp4614 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4615 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4614);
org$frostlang$frostc$parser$Token$nullable $tmp4616 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4615, &$s4617);
*(&local0) = $tmp4616;
// line 2255
org$frostlang$frostc$parser$Token$nullable $tmp4618 = *(&local0);
frost$core$Bit $tmp4619 = frost$core$Bit$init$builtin_bit(!$tmp4618.nonnull);
bool $tmp4620 = $tmp4619.value;
if ($tmp4620) goto block1; else goto block2;
block1:;
// line 2256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2258
frost$core$Int64 $tmp4621 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4622 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4621);
org$frostlang$frostc$parser$Token$nullable $tmp4623 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4622, &$s4624);
*(&local1) = $tmp4623;
// line 2259
org$frostlang$frostc$parser$Token$nullable $tmp4625 = *(&local1);
frost$core$Bit $tmp4626 = frost$core$Bit$init$builtin_bit(!$tmp4625.nonnull);
bool $tmp4627 = $tmp4626.value;
if ($tmp4627) goto block3; else goto block4;
block3:;
// line 2260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2262
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4628 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4629 = *(&local1);
frost$core$String* $tmp4630 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4629.value));
frost$core$MutableString$init$frost$core$String($tmp4628, $tmp4630);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4628));
frost$core$MutableString* $tmp4631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local2) = $tmp4628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4628));
// line 2263
goto block5;
block5:;
// line 2264
frost$core$Int64 $tmp4632 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4633 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4632);
org$frostlang$frostc$parser$Token$nullable $tmp4634 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4633);
*(&local1) = $tmp4634;
// line 2265
org$frostlang$frostc$parser$Token$nullable $tmp4635 = *(&local1);
frost$core$Bit $tmp4636 = frost$core$Bit$init$builtin_bit(!$tmp4635.nonnull);
bool $tmp4637 = $tmp4636.value;
if ($tmp4637) goto block7; else goto block8;
block7:;
// line 2266
goto block6;
block8:;
// line 2268
frost$core$MutableString* $tmp4638 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4638, &$s4639);
// line 2269
frost$core$Int64 $tmp4640 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4641 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4640);
org$frostlang$frostc$parser$Token$nullable $tmp4642 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4641, &$s4643);
*(&local1) = $tmp4642;
// line 2270
org$frostlang$frostc$parser$Token$nullable $tmp4644 = *(&local1);
frost$core$Bit $tmp4645 = frost$core$Bit$init$builtin_bit(!$tmp4644.nonnull);
bool $tmp4646 = $tmp4645.value;
if ($tmp4646) goto block9; else goto block10;
block9:;
// line 2271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2273
frost$core$MutableString* $tmp4648 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4649 = *(&local1);
frost$core$String* $tmp4650 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4649.value));
frost$core$MutableString$append$frost$core$String($tmp4648, $tmp4650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
goto block5;
block6:;
// line 2275
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4651 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4652 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$nullable $tmp4653 = *(&local0);
org$frostlang$frostc$Position $tmp4654 = ((org$frostlang$frostc$parser$Token) $tmp4653.value).position;
frost$core$MutableString* $tmp4655 = *(&local2);
frost$core$String* $tmp4656 = frost$core$MutableString$finish$R$frost$core$String($tmp4655);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4651, $tmp4652, $tmp4654, $tmp4656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
frost$core$MutableString* $tmp4657 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4657));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4651;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2282
frost$core$Int64 $tmp4658 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4659 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4658);
org$frostlang$frostc$parser$Token$nullable $tmp4660 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4659, &$s4661);
*(&local0) = $tmp4660;
// line 2283
org$frostlang$frostc$parser$Token$nullable $tmp4662 = *(&local0);
frost$core$Bit $tmp4663 = frost$core$Bit$init$builtin_bit(!$tmp4662.nonnull);
bool $tmp4664 = $tmp4663.value;
if ($tmp4664) goto block1; else goto block2;
block1:;
// line 2284
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2286
frost$core$Int64 $tmp4665 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4666 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4665);
org$frostlang$frostc$parser$Token$nullable $tmp4667 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4666, &$s4668);
*(&local1) = $tmp4667;
// line 2287
org$frostlang$frostc$parser$Token$nullable $tmp4669 = *(&local1);
frost$core$Bit $tmp4670 = frost$core$Bit$init$builtin_bit(!$tmp4669.nonnull);
bool $tmp4671 = $tmp4670.value;
if ($tmp4671) goto block3; else goto block4;
block3:;
// line 2288
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2290
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4672 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4672);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
frost$collections$Array* $tmp4673 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
*(&local2) = $tmp4672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
// line 2291
frost$core$Int64 $tmp4674 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4675 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4674);
org$frostlang$frostc$parser$Token$nullable $tmp4676 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4675);
frost$core$Bit $tmp4677 = frost$core$Bit$init$builtin_bit($tmp4676.nonnull);
bool $tmp4678 = $tmp4677.value;
if ($tmp4678) goto block5; else goto block7;
block5:;
// line 2292
org$frostlang$frostc$ASTNode* $tmp4679 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4679));
org$frostlang$frostc$ASTNode* $tmp4680 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
*(&local3) = $tmp4679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4679));
// line 2293
org$frostlang$frostc$ASTNode* $tmp4681 = *(&local3);
frost$core$Bit $tmp4682 = frost$core$Bit$init$builtin_bit($tmp4681 == NULL);
bool $tmp4683 = $tmp4682.value;
if ($tmp4683) goto block8; else goto block9;
block8:;
// line 2294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4684 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4685 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2296
frost$collections$Array* $tmp4686 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4687 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4688 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp4689 = *(&local1);
org$frostlang$frostc$Position $tmp4690 = ((org$frostlang$frostc$parser$Token) $tmp4689.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4691 = *(&local1);
frost$core$String* $tmp4692 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4691.value));
org$frostlang$frostc$ASTNode* $tmp4693 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4687, $tmp4688, $tmp4690, $tmp4692, $tmp4693);
frost$collections$Array$add$frost$collections$Array$T($tmp4686, ((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
org$frostlang$frostc$ASTNode* $tmp4694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2299
frost$collections$Array* $tmp4695 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4696 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4697 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4698 = *(&local1);
org$frostlang$frostc$Position $tmp4699 = ((org$frostlang$frostc$parser$Token) $tmp4698.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4700 = *(&local1);
frost$core$String* $tmp4701 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4700.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4696, $tmp4697, $tmp4699, $tmp4701);
frost$collections$Array$add$frost$collections$Array$T($tmp4695, ((frost$core$Object*) $tmp4696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
goto block6;
block6:;
// line 2301
goto block10;
block10:;
frost$core$Int64 $tmp4702 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4703 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4702);
org$frostlang$frostc$parser$Token$nullable $tmp4704 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4703);
frost$core$Bit $tmp4705 = frost$core$Bit$init$builtin_bit($tmp4704.nonnull);
bool $tmp4706 = $tmp4705.value;
if ($tmp4706) goto block11; else goto block12;
block11:;
// line 2302
frost$core$Int64 $tmp4707 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4708 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4707);
org$frostlang$frostc$parser$Token$nullable $tmp4709 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4708, &$s4710);
*(&local1) = $tmp4709;
// line 2303
org$frostlang$frostc$parser$Token$nullable $tmp4711 = *(&local1);
frost$core$Bit $tmp4712 = frost$core$Bit$init$builtin_bit(!$tmp4711.nonnull);
bool $tmp4713 = $tmp4712.value;
if ($tmp4713) goto block13; else goto block14;
block13:;
// line 2304
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4714 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2306
frost$core$Int64 $tmp4715 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4716 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4715);
org$frostlang$frostc$parser$Token$nullable $tmp4717 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4716);
frost$core$Bit $tmp4718 = frost$core$Bit$init$builtin_bit($tmp4717.nonnull);
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block15; else goto block17;
block15:;
// line 2307
org$frostlang$frostc$ASTNode* $tmp4720 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
org$frostlang$frostc$ASTNode* $tmp4721 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
*(&local4) = $tmp4720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
// line 2308
org$frostlang$frostc$ASTNode* $tmp4722 = *(&local4);
frost$core$Bit $tmp4723 = frost$core$Bit$init$builtin_bit($tmp4722 == NULL);
bool $tmp4724 = $tmp4723.value;
if ($tmp4724) goto block18; else goto block19;
block18:;
// line 2309
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4725 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4726 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2311
frost$collections$Array* $tmp4727 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4728 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4729 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp4730 = *(&local1);
org$frostlang$frostc$Position $tmp4731 = ((org$frostlang$frostc$parser$Token) $tmp4730.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4732 = *(&local1);
frost$core$String* $tmp4733 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4732.value));
org$frostlang$frostc$ASTNode* $tmp4734 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4728, $tmp4729, $tmp4731, $tmp4733, $tmp4734);
frost$collections$Array$add$frost$collections$Array$T($tmp4727, ((frost$core$Object*) $tmp4728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
org$frostlang$frostc$ASTNode* $tmp4735 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2314
frost$collections$Array* $tmp4736 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4737 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4738 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4739 = *(&local1);
org$frostlang$frostc$Position $tmp4740 = ((org$frostlang$frostc$parser$Token) $tmp4739.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4741 = *(&local1);
frost$core$String* $tmp4742 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4741.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4737, $tmp4738, $tmp4740, $tmp4742);
frost$collections$Array$add$frost$collections$Array$T($tmp4736, ((frost$core$Object*) $tmp4737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
goto block16;
block16:;
goto block10;
block12:;
// line 2317
frost$core$Int64 $tmp4743 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4744 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4743);
org$frostlang$frostc$parser$Token$nullable $tmp4745 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4744, &$s4746);
frost$core$Bit $tmp4747 = frost$core$Bit$init$builtin_bit(!$tmp4745.nonnull);
bool $tmp4748 = $tmp4747.value;
if ($tmp4748) goto block20; else goto block21;
block20:;
// line 2318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4749 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4749));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2320
frost$collections$Array* $tmp4750 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4751 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$collections$Array* $tmp4752 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4751;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2327
frost$core$Int64 $tmp4753 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4754 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4753);
org$frostlang$frostc$parser$Token$nullable $tmp4755 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4754, &$s4756);
*(&local0) = $tmp4755;
// line 2328
org$frostlang$frostc$parser$Token$nullable $tmp4757 = *(&local0);
frost$core$Bit $tmp4758 = frost$core$Bit$init$builtin_bit(!$tmp4757.nonnull);
bool $tmp4759 = $tmp4758.value;
if ($tmp4759) goto block1; else goto block2;
block1:;
// line 2329
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2331
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4760 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4760);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
frost$collections$Array* $tmp4761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
*(&local1) = $tmp4760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
// line 2332
org$frostlang$frostc$ASTNode* $tmp4762 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4762));
org$frostlang$frostc$ASTNode* $tmp4763 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
*(&local2) = $tmp4762;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4762));
// line 2333
org$frostlang$frostc$ASTNode* $tmp4764 = *(&local2);
frost$core$Bit $tmp4765 = frost$core$Bit$init$builtin_bit($tmp4764 == NULL);
bool $tmp4766 = $tmp4765.value;
if ($tmp4766) goto block3; else goto block4;
block3:;
// line 2334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4768 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4768));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2336
frost$collections$Array* $tmp4769 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4770 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4769, ((frost$core$Object*) $tmp4770));
// line 2337
goto block5;
block5:;
frost$core$Int64 $tmp4771 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4772 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4771);
org$frostlang$frostc$parser$Token$nullable $tmp4773 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4772);
frost$core$Bit $tmp4774 = frost$core$Bit$init$builtin_bit($tmp4773.nonnull);
bool $tmp4775 = $tmp4774.value;
if ($tmp4775) goto block6; else goto block7;
block6:;
// line 2338
org$frostlang$frostc$ASTNode* $tmp4776 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4776));
org$frostlang$frostc$ASTNode* $tmp4777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4777));
*(&local2) = $tmp4776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4776));
// line 2339
org$frostlang$frostc$ASTNode* $tmp4778 = *(&local2);
frost$core$Bit $tmp4779 = frost$core$Bit$init$builtin_bit($tmp4778 == NULL);
bool $tmp4780 = $tmp4779.value;
if ($tmp4780) goto block8; else goto block9;
block8:;
// line 2340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4781 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4781));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4782 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4782));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2342
frost$collections$Array* $tmp4783 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4784 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4783, ((frost$core$Object*) $tmp4784));
goto block5;
block7:;
// line 2344
frost$collections$Array* $tmp4785 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4786 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4785);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
org$frostlang$frostc$ASTNode* $tmp4787 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4786;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2351
frost$core$Int64 $tmp4789 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4790 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4789);
org$frostlang$frostc$parser$Token$nullable $tmp4791 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4790, &$s4792);
*(&local0) = $tmp4791;
// line 2352
*(&local1) = ((frost$core$String*) NULL);
// line 2353
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4793 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2354
frost$core$Int64 $tmp4794 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4795 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4794);
org$frostlang$frostc$parser$Token$nullable $tmp4796 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4795);
*(&local3) = $tmp4796;
// line 2355
org$frostlang$frostc$parser$Token$nullable $tmp4797 = *(&local3);
frost$core$Bit $tmp4798 = frost$core$Bit$init$builtin_bit($tmp4797.nonnull);
bool $tmp4799 = $tmp4798.value;
if ($tmp4799) goto block1; else goto block2;
block1:;
// line 2356
org$frostlang$frostc$ASTNode* $tmp4800 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4800));
org$frostlang$frostc$ASTNode* $tmp4801 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
*(&local2) = $tmp4800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4800));
// line 2357
org$frostlang$frostc$ASTNode* $tmp4802 = *(&local2);
frost$core$Bit $tmp4803 = frost$core$Bit$init$builtin_bit($tmp4802 == NULL);
bool $tmp4804 = $tmp4803.value;
if ($tmp4804) goto block3; else goto block4;
block3:;
// line 2358
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4805 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4806 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2360
frost$core$Int64 $tmp4807 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4808 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4807);
org$frostlang$frostc$parser$Token$nullable $tmp4809 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4808, &$s4810);
*(&local4) = $tmp4809;
// line 2361
org$frostlang$frostc$parser$Token$nullable $tmp4811 = *(&local4);
frost$core$Bit $tmp4812 = frost$core$Bit$init$builtin_bit(!$tmp4811.nonnull);
bool $tmp4813 = $tmp4812.value;
if ($tmp4813) goto block5; else goto block6;
block5:;
// line 2362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4814 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4815 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2364
frost$core$String** $tmp4816 = &param0->source;
frost$core$String* $tmp4817 = *$tmp4816;
frost$core$String** $tmp4818 = &param0->source;
frost$core$String* $tmp4819 = *$tmp4818;
org$frostlang$frostc$parser$Token$nullable $tmp4820 = *(&local3);
frost$core$String$Index $tmp4821 = ((org$frostlang$frostc$parser$Token) $tmp4820.value).start;
frost$core$String$Index $tmp4822 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4819, $tmp4821);
org$frostlang$frostc$parser$Token$nullable $tmp4823 = *(&local4);
frost$core$String$Index $tmp4824 = ((org$frostlang$frostc$parser$Token) $tmp4823.value).start;
frost$core$Bit $tmp4825 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4826 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4822, $tmp4824, $tmp4825);
frost$core$String* $tmp4827 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4817, $tmp4826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
frost$core$String* $tmp4828 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4828));
*(&local1) = $tmp4827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
goto block2;
block2:;
// line 2366
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4829 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4830 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4831 = *(&local0);
org$frostlang$frostc$Position $tmp4832 = ((org$frostlang$frostc$parser$Token) $tmp4831.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4833 = *(&local0);
frost$core$String* $tmp4834 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4833.value));
frost$core$String* $tmp4835 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4836 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4829, $tmp4830, $tmp4832, $tmp4834, $tmp4835, $tmp4836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4829));
org$frostlang$frostc$ASTNode* $tmp4837 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4838 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4838));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4829;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2373
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4839 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4839);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$collections$Array* $tmp4840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
*(&local0) = $tmp4839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
// line 2374
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4841 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4842 = $tmp4841.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4843;
$tmp4843 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4843->value = $tmp4842;
frost$core$Int64 $tmp4844 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4845 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4844);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4846;
$tmp4846 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4846->value = $tmp4845;
ITable* $tmp4847 = ((frost$core$Equatable*) $tmp4843)->$class->itable;
while ($tmp4847->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4847 = $tmp4847->next;
}
$fn4849 $tmp4848 = $tmp4847->methods[0];
frost$core$Bit $tmp4850 = $tmp4848(((frost$core$Equatable*) $tmp4843), ((frost$core$Equatable*) $tmp4846));
bool $tmp4851 = $tmp4850.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4846)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4843)));
if ($tmp4851) goto block2; else goto block3;
block2:;
// line 2375
org$frostlang$frostc$ASTNode* $tmp4852 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
org$frostlang$frostc$ASTNode* $tmp4853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
*(&local1) = $tmp4852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
// line 2376
org$frostlang$frostc$ASTNode* $tmp4854 = *(&local1);
frost$core$Bit $tmp4855 = frost$core$Bit$init$builtin_bit($tmp4854 == NULL);
bool $tmp4856 = $tmp4855.value;
if ($tmp4856) goto block4; else goto block5;
block4:;
// line 2377
org$frostlang$frostc$ASTNode* $tmp4857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4857));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2379
frost$collections$Array* $tmp4858 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4859 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4858, ((frost$core$Object*) $tmp4859));
org$frostlang$frostc$ASTNode* $tmp4860 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4860));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2381
frost$collections$Array* $tmp4861 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4862 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$collections$Array* $tmp4863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4862;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2385
frost$core$Int64 $tmp4864 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4865 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4864);
org$frostlang$frostc$parser$Token$nullable $tmp4866 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4865, &$s4867);
*(&local0) = $tmp4866;
// line 2386
org$frostlang$frostc$parser$Token$nullable $tmp4868 = *(&local0);
frost$core$Bit $tmp4869 = frost$core$Bit$init$builtin_bit(!$tmp4868.nonnull);
bool $tmp4870 = $tmp4869.value;
if ($tmp4870) goto block1; else goto block2;
block1:;
// line 2387
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2389
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4871 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4871);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
frost$core$MutableString* $tmp4872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
*(&local1) = $tmp4871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
// line 2390
goto block3;
block3:;
// line 2391
org$frostlang$frostc$parser$Token $tmp4873 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4873;
// line 2392
org$frostlang$frostc$parser$Token $tmp4874 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4875 = $tmp4874.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4876;
$tmp4876 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4876->value = $tmp4875;
frost$core$Int64 $tmp4877 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4878 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4877);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4879;
$tmp4879 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4879->value = $tmp4878;
ITable* $tmp4880 = ((frost$core$Equatable*) $tmp4876)->$class->itable;
while ($tmp4880->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4880 = $tmp4880->next;
}
$fn4882 $tmp4881 = $tmp4880->methods[0];
frost$core$Bit $tmp4883 = $tmp4881(((frost$core$Equatable*) $tmp4876), ((frost$core$Equatable*) $tmp4879));
bool $tmp4884 = $tmp4883.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4879)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4876)));
if ($tmp4884) goto block5; else goto block6;
block5:;
// line 2393
goto block4;
block6:;
// line 2395
org$frostlang$frostc$parser$Token $tmp4885 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4886 = $tmp4885.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4887;
$tmp4887 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4887->value = $tmp4886;
frost$core$Int64 $tmp4888 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4889 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4888);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4890;
$tmp4890 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4890->value = $tmp4889;
ITable* $tmp4891 = ((frost$core$Equatable*) $tmp4887)->$class->itable;
while ($tmp4891->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4891 = $tmp4891->next;
}
$fn4893 $tmp4892 = $tmp4891->methods[0];
frost$core$Bit $tmp4894 = $tmp4892(((frost$core$Equatable*) $tmp4887), ((frost$core$Equatable*) $tmp4890));
bool $tmp4895 = $tmp4894.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4890)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4887)));
if ($tmp4895) goto block7; else goto block8;
block7:;
// line 2396
org$frostlang$frostc$parser$Token$nullable $tmp4896 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4896.value), &$s4897);
// line 2397
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2399
frost$core$MutableString* $tmp4899 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4900 = *(&local2);
frost$core$String* $tmp4901 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4900);
frost$core$MutableString$append$frost$core$String($tmp4899, $tmp4901);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
goto block3;
block4:;
// line 2401
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4902 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4903 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4904 = *(&local0);
org$frostlang$frostc$Position $tmp4905 = ((org$frostlang$frostc$parser$Token) $tmp4904.value).position;
frost$core$MutableString* $tmp4906 = *(&local1);
frost$core$String* $tmp4907 = frost$core$MutableString$finish$R$frost$core$String($tmp4906);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4902, $tmp4903, $tmp4905, $tmp4907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
frost$core$MutableString* $tmp4908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4902;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2408
frost$core$Int64 $tmp4909 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4910 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4909);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4910);
// line 2409
frost$core$Int64 $tmp4911 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4912 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4911);
org$frostlang$frostc$parser$Token$nullable $tmp4913 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4912, &$s4914);
*(&local0) = $tmp4913;
// line 2410
frost$core$Int64 $tmp4915 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4916 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4915);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4916);
// line 2411
org$frostlang$frostc$parser$Token$nullable $tmp4917 = *(&local0);
frost$core$Bit $tmp4918 = frost$core$Bit$init$builtin_bit(!$tmp4917.nonnull);
bool $tmp4919 = $tmp4918.value;
if ($tmp4919) goto block1; else goto block2;
block1:;
// line 2412
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2414
org$frostlang$frostc$ASTNode* $tmp4920 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
org$frostlang$frostc$ASTNode* $tmp4921 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
*(&local1) = $tmp4920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
// line 2415
org$frostlang$frostc$ASTNode* $tmp4922 = *(&local1);
frost$core$Bit $tmp4923 = frost$core$Bit$init$builtin_bit($tmp4922 == NULL);
bool $tmp4924 = $tmp4923.value;
if ($tmp4924) goto block3; else goto block4;
block3:;
// line 2416
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2418
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4926 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4927 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4928 = *(&local0);
org$frostlang$frostc$Position $tmp4929 = ((org$frostlang$frostc$parser$Token) $tmp4928.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4930 = *(&local0);
frost$core$String* $tmp4931 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4930.value));
org$frostlang$frostc$ASTNode* $tmp4932 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4926, $tmp4927, $tmp4929, $tmp4931, $tmp4932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
org$frostlang$frostc$ASTNode* $tmp4933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4926;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2425
frost$core$Int64 $tmp4934 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4935 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4934);
org$frostlang$frostc$parser$Token$nullable $tmp4936 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4935, &$s4937);
*(&local0) = $tmp4936;
// line 2426
org$frostlang$frostc$parser$Token$nullable $tmp4938 = *(&local0);
frost$core$Bit $tmp4939 = frost$core$Bit$init$builtin_bit(!$tmp4938.nonnull);
bool $tmp4940 = $tmp4939.value;
if ($tmp4940) goto block1; else goto block2;
block1:;
// line 2427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2429
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4941 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4941);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
frost$collections$Array* $tmp4942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
*(&local1) = $tmp4941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
// line 2430
frost$core$Int64 $tmp4943 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4944 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4943);
org$frostlang$frostc$parser$Token$nullable $tmp4945 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4944);
frost$core$Bit $tmp4946 = frost$core$Bit$init$builtin_bit(!$tmp4945.nonnull);
bool $tmp4947 = $tmp4946.value;
if ($tmp4947) goto block3; else goto block4;
block3:;
// line 2431
org$frostlang$frostc$ASTNode* $tmp4948 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
org$frostlang$frostc$ASTNode* $tmp4949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
*(&local2) = $tmp4948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
// line 2432
org$frostlang$frostc$ASTNode* $tmp4950 = *(&local2);
frost$core$Bit $tmp4951 = frost$core$Bit$init$builtin_bit($tmp4950 == NULL);
bool $tmp4952 = $tmp4951.value;
if ($tmp4952) goto block5; else goto block6;
block5:;
// line 2433
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4953 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4954 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4954));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2435
frost$collections$Array* $tmp4955 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4956 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4955, ((frost$core$Object*) $tmp4956));
// line 2436
goto block7;
block7:;
frost$core$Int64 $tmp4957 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4958 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4957);
org$frostlang$frostc$parser$Token$nullable $tmp4959 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4958);
frost$core$Bit $tmp4960 = frost$core$Bit$init$builtin_bit($tmp4959.nonnull);
bool $tmp4961 = $tmp4960.value;
if ($tmp4961) goto block8; else goto block9;
block8:;
// line 2437
org$frostlang$frostc$ASTNode* $tmp4962 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
org$frostlang$frostc$ASTNode* $tmp4963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
*(&local2) = $tmp4962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
// line 2438
org$frostlang$frostc$ASTNode* $tmp4964 = *(&local2);
frost$core$Bit $tmp4965 = frost$core$Bit$init$builtin_bit($tmp4964 == NULL);
bool $tmp4966 = $tmp4965.value;
if ($tmp4966) goto block10; else goto block11;
block10:;
// line 2439
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4967));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2441
frost$collections$Array* $tmp4969 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4970 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4969, ((frost$core$Object*) $tmp4970));
goto block7;
block9:;
// line 2443
frost$core$Int64 $tmp4971 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4972 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4971);
org$frostlang$frostc$parser$Token$nullable $tmp4973 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4972, &$s4974);
frost$core$Bit $tmp4975 = frost$core$Bit$init$builtin_bit(!$tmp4973.nonnull);
bool $tmp4976 = $tmp4975.value;
if ($tmp4976) goto block12; else goto block13;
block12:;
// line 2444
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4979 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4979));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2447
frost$collections$Array* $tmp4980 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4981 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$collections$Array* $tmp4982 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4981;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
// line 2455
// line 2456
frost$core$Int64 $tmp4983 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4984 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4983);
org$frostlang$frostc$parser$Token$nullable $tmp4985 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4984);
*(&local1) = $tmp4985;
// line 2457
org$frostlang$frostc$parser$Token$nullable $tmp4986 = *(&local1);
frost$core$Bit $tmp4987 = frost$core$Bit$init$builtin_bit(!$tmp4986.nonnull);
bool $tmp4988 = $tmp4987.value;
if ($tmp4988) goto block1; else goto block3;
block1:;
// line 2458
frost$core$Int64 $tmp4989 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4990 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4989);
org$frostlang$frostc$parser$Token$nullable $tmp4991 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4990, &$s4992);
*(&local1) = $tmp4991;
// line 2459
org$frostlang$frostc$parser$Token$nullable $tmp4993 = *(&local1);
frost$core$Bit $tmp4994 = frost$core$Bit$init$builtin_bit(!$tmp4993.nonnull);
bool $tmp4995 = $tmp4994.value;
if ($tmp4995) goto block4; else goto block5;
block4:;
// line 2460
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2462
frost$core$Int64 $tmp4996 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4997 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4996);
*(&local0) = $tmp4997;
goto block2;
block3:;
// line 1
// line 2465
frost$core$Int64 $tmp4998 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4999 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4998);
*(&local0) = $tmp4999;
goto block2;
block2:;
// line 2467
frost$core$Int64 $tmp5000 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp5001 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp5000);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp5001);
// line 2468
frost$core$String* $tmp5002 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5002));
frost$core$String* $tmp5003 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
*(&local2) = $tmp5002;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5002));
// line 2469
frost$core$Int64 $tmp5004 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp5005 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp5004);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp5005);
// line 2470
frost$core$String* $tmp5006 = *(&local2);
frost$core$Bit $tmp5007 = frost$core$Bit$init$builtin_bit($tmp5006 == NULL);
bool $tmp5008 = $tmp5007.value;
if ($tmp5008) goto block6; else goto block7;
block6:;
// line 2471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp5009 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2473
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2474
org$frostlang$frostc$parser$Token $tmp5010 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5011 = $tmp5010.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5012;
$tmp5012 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5012->value = $tmp5011;
frost$core$Int64 $tmp5013 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5014 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5013);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5015;
$tmp5015 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5015->value = $tmp5014;
ITable* $tmp5016 = ((frost$core$Equatable*) $tmp5012)->$class->itable;
while ($tmp5016->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5016 = $tmp5016->next;
}
$fn5018 $tmp5017 = $tmp5016->methods[0];
frost$core$Bit $tmp5019 = $tmp5017(((frost$core$Equatable*) $tmp5012), ((frost$core$Equatable*) $tmp5015));
bool $tmp5020 = $tmp5019.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5015)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5012)));
if ($tmp5020) goto block8; else goto block10;
block8:;
// line 2475
org$frostlang$frostc$FixedArray* $tmp5021 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
org$frostlang$frostc$FixedArray* $tmp5022 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
*(&local3) = $tmp5021;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
goto block9;
block10:;
// line 1
// line 2478
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5023 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2480
org$frostlang$frostc$FixedArray* $tmp5024 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
org$frostlang$frostc$FixedArray* $tmp5025 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
*(&local4) = $tmp5024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
// line 2481
org$frostlang$frostc$FixedArray* $tmp5026 = *(&local4);
frost$core$Bit $tmp5027 = frost$core$Bit$init$builtin_bit($tmp5026 == NULL);
bool $tmp5028 = $tmp5027.value;
if ($tmp5028) goto block11; else goto block12;
block11:;
// line 2482
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5029 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2484
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2485
org$frostlang$frostc$parser$Token $tmp5032 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5033 = $tmp5032.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5034;
$tmp5034 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5034->value = $tmp5033;
frost$core$Int64 $tmp5035 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5036 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5035);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5037;
$tmp5037 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5037->value = $tmp5036;
ITable* $tmp5038 = ((frost$core$Equatable*) $tmp5034)->$class->itable;
while ($tmp5038->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5038 = $tmp5038->next;
}
$fn5040 $tmp5039 = $tmp5038->methods[0];
frost$core$Bit $tmp5041 = $tmp5039(((frost$core$Equatable*) $tmp5034), ((frost$core$Equatable*) $tmp5037));
bool $tmp5042 = $tmp5041.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5037)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5034)));
if ($tmp5042) goto block13; else goto block15;
block13:;
// line 2486
org$frostlang$frostc$ASTNode* $tmp5043 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
org$frostlang$frostc$ASTNode* $tmp5044 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
*(&local5) = $tmp5043;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
// line 2487
org$frostlang$frostc$ASTNode* $tmp5045 = *(&local5);
frost$core$Bit $tmp5046 = frost$core$Bit$init$builtin_bit($tmp5045 == NULL);
bool $tmp5047 = $tmp5046.value;
if ($tmp5047) goto block16; else goto block17;
block16:;
// line 2488
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5048 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5048));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5049 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5050 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5051 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5052 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5052));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2494
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2495
org$frostlang$frostc$parser$Token $tmp5053 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5054 = $tmp5053.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5055;
$tmp5055 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5055->value = $tmp5054;
frost$core$Int64 $tmp5056 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5057 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5056);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5058;
$tmp5058 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5058->value = $tmp5057;
ITable* $tmp5059 = ((frost$core$Equatable*) $tmp5055)->$class->itable;
while ($tmp5059->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5059 = $tmp5059->next;
}
$fn5061 $tmp5060 = $tmp5059->methods[0];
frost$core$Bit $tmp5062 = $tmp5060(((frost$core$Equatable*) $tmp5055), ((frost$core$Equatable*) $tmp5058));
bool $tmp5063 = $tmp5062.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5058)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5055)));
if ($tmp5063) goto block18; else goto block20;
block18:;
// line 2496
org$frostlang$frostc$FixedArray* $tmp5064 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
org$frostlang$frostc$FixedArray* $tmp5065 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
*(&local6) = $tmp5064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
// line 2497
org$frostlang$frostc$FixedArray* $tmp5066 = *(&local6);
frost$core$Bit $tmp5067 = frost$core$Bit$init$builtin_bit($tmp5066 == NULL);
bool $tmp5068 = $tmp5067.value;
if ($tmp5068) goto block21; else goto block22;
block21:;
// line 2498
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5069 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5070 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5070));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5071 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5072 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5073 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5074 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2504
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5075 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5076 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5077 = *(&local1);
org$frostlang$frostc$Position $tmp5078 = ((org$frostlang$frostc$parser$Token) $tmp5077.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp5079 = *(&local0);
frost$core$String* $tmp5080 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5081 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5082 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5083 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5084 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5075, $tmp5076, $tmp5078, param1, param2, $tmp5079, $tmp5080, $tmp5081, $tmp5082, $tmp5083, $tmp5084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
org$frostlang$frostc$FixedArray* $tmp5085 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5086 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5087 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5088 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5088));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5089 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
*(&local2) = ((frost$core$String*) NULL);
return $tmp5075;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2512
// line 2513
frost$core$Int64 $tmp5090 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp5091 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5090);
org$frostlang$frostc$parser$Token$nullable $tmp5092 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5091);
*(&local1) = $tmp5092;
// line 2514
org$frostlang$frostc$parser$Token$nullable $tmp5093 = *(&local1);
frost$core$Bit $tmp5094 = frost$core$Bit$init$builtin_bit(!$tmp5093.nonnull);
bool $tmp5095 = $tmp5094.value;
if ($tmp5095) goto block1; else goto block3;
block1:;
// line 2515
frost$core$Int64 $tmp5096 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp5097 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5096);
org$frostlang$frostc$parser$Token$nullable $tmp5098 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5097, &$s5099);
*(&local1) = $tmp5098;
// line 2516
org$frostlang$frostc$parser$Token$nullable $tmp5100 = *(&local1);
frost$core$Bit $tmp5101 = frost$core$Bit$init$builtin_bit(!$tmp5100.nonnull);
bool $tmp5102 = $tmp5101.value;
if ($tmp5102) goto block4; else goto block5;
block4:;
// line 2517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2519
frost$core$Int64 $tmp5103 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp5104 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5103);
*(&local0) = $tmp5104;
goto block2;
block3:;
// line 1
// line 2522
frost$core$Int64 $tmp5105 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp5106 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5105);
*(&local0) = $tmp5106;
goto block2;
block2:;
// line 2524
org$frostlang$frostc$FixedArray* $tmp5107 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
org$frostlang$frostc$FixedArray* $tmp5108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
*(&local2) = $tmp5107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
// line 2525
org$frostlang$frostc$FixedArray* $tmp5109 = *(&local2);
frost$core$Bit $tmp5110 = frost$core$Bit$init$builtin_bit($tmp5109 == NULL);
bool $tmp5111 = $tmp5110.value;
if ($tmp5111) goto block6; else goto block7;
block6:;
// line 2526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5112 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2528
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2529
org$frostlang$frostc$parser$Token $tmp5113 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5114 = $tmp5113.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5115;
$tmp5115 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5115->value = $tmp5114;
frost$core$Int64 $tmp5116 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5117 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5116);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5118;
$tmp5118 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5118->value = $tmp5117;
ITable* $tmp5119 = ((frost$core$Equatable*) $tmp5115)->$class->itable;
while ($tmp5119->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5119 = $tmp5119->next;
}
$fn5121 $tmp5120 = $tmp5119->methods[0];
frost$core$Bit $tmp5122 = $tmp5120(((frost$core$Equatable*) $tmp5115), ((frost$core$Equatable*) $tmp5118));
bool $tmp5123 = $tmp5122.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5118)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5115)));
if ($tmp5123) goto block8; else goto block10;
block8:;
// line 2530
org$frostlang$frostc$ASTNode* $tmp5124 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
org$frostlang$frostc$ASTNode* $tmp5125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5125));
*(&local3) = $tmp5124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
// line 2531
org$frostlang$frostc$ASTNode* $tmp5126 = *(&local3);
frost$core$Bit $tmp5127 = frost$core$Bit$init$builtin_bit($tmp5126 == NULL);
bool $tmp5128 = $tmp5127.value;
if ($tmp5128) goto block11; else goto block12;
block11:;
// line 2532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5129 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5129));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2536
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5131 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2538
org$frostlang$frostc$FixedArray* $tmp5132 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
org$frostlang$frostc$FixedArray* $tmp5133 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5133));
*(&local4) = $tmp5132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
// line 2539
org$frostlang$frostc$FixedArray* $tmp5134 = *(&local4);
frost$core$Bit $tmp5135 = frost$core$Bit$init$builtin_bit($tmp5134 == NULL);
bool $tmp5136 = $tmp5135.value;
if ($tmp5136) goto block13; else goto block14;
block13:;
// line 2540
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5138 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2542
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5140 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5141 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5142 = *(&local1);
org$frostlang$frostc$Position $tmp5143 = ((org$frostlang$frostc$parser$Token) $tmp5142.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5144 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5144);
org$frostlang$frostc$MethodDecl$Kind $tmp5145 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5146 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5147 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5148 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5140, $tmp5141, $tmp5143, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5144, $tmp5145, &$s5149, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5146, $tmp5147, $tmp5148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5140));
org$frostlang$frostc$FixedArray* $tmp5150 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5151 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5140;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2550
frost$core$Int64 $tmp5153 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp5154 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5153);
org$frostlang$frostc$parser$Token$nullable $tmp5155 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5154, &$s5156);
*(&local0) = $tmp5155;
// line 2551
org$frostlang$frostc$parser$Token$nullable $tmp5157 = *(&local0);
frost$core$Bit $tmp5158 = frost$core$Bit$init$builtin_bit(!$tmp5157.nonnull);
bool $tmp5159 = $tmp5158.value;
if ($tmp5159) goto block1; else goto block2;
block1:;
// line 2552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2554
org$frostlang$frostc$FixedArray* $tmp5160 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
org$frostlang$frostc$FixedArray* $tmp5161 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
*(&local1) = $tmp5160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
// line 2555
org$frostlang$frostc$FixedArray* $tmp5162 = *(&local1);
frost$core$Bit $tmp5163 = frost$core$Bit$init$builtin_bit($tmp5162 == NULL);
bool $tmp5164 = $tmp5163.value;
if ($tmp5164) goto block3; else goto block4;
block3:;
// line 2556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5165 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2558
org$frostlang$frostc$FixedArray* $tmp5166 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
org$frostlang$frostc$FixedArray* $tmp5167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
*(&local2) = $tmp5166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
// line 2559
org$frostlang$frostc$FixedArray* $tmp5168 = *(&local2);
frost$core$Bit $tmp5169 = frost$core$Bit$init$builtin_bit($tmp5168 == NULL);
bool $tmp5170 = $tmp5169.value;
if ($tmp5170) goto block5; else goto block6;
block5:;
// line 2560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5172));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2562
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5173 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5174 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5175 = *(&local0);
org$frostlang$frostc$Position $tmp5176 = ((org$frostlang$frostc$parser$Token) $tmp5175.value).position;
frost$core$Int64 $tmp5177 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5178 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5177);
org$frostlang$frostc$FixedArray* $tmp5179 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5180 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5173, $tmp5174, $tmp5176, param1, param2, $tmp5178, &$s5181, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5179, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
org$frostlang$frostc$FixedArray* $tmp5182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5173;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2570
org$frostlang$frostc$ASTNode* $tmp5184 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5184));
org$frostlang$frostc$ASTNode* $tmp5185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5185));
*(&local0) = $tmp5184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5184));
// line 2571
org$frostlang$frostc$ASTNode* $tmp5186 = *(&local0);
frost$core$Bit $tmp5187 = frost$core$Bit$init$builtin_bit($tmp5186 == NULL);
bool $tmp5188 = $tmp5187.value;
if ($tmp5188) goto block1; else goto block2;
block1:;
// line 2572
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2574
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5190 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5191 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5192 = *(&local0);
$fn5194 $tmp5193 = ($fn5194) $tmp5192->$class->vtable[2];
org$frostlang$frostc$Position $tmp5195 = $tmp5193($tmp5192);
org$frostlang$frostc$ASTNode* $tmp5196 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5190, $tmp5191, $tmp5195, param1, param2, $tmp5196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
org$frostlang$frostc$ASTNode* $tmp5197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5190;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2581
frost$core$Int64 $tmp5198 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5199 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5198);
org$frostlang$frostc$parser$Token$nullable $tmp5200 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5199, &$s5201);
*(&local0) = $tmp5200;
// line 2582
org$frostlang$frostc$parser$Token$nullable $tmp5202 = *(&local0);
frost$core$Bit $tmp5203 = frost$core$Bit$init$builtin_bit(!$tmp5202.nonnull);
bool $tmp5204 = $tmp5203.value;
if ($tmp5204) goto block1; else goto block2;
block1:;
// line 2583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2585
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5205);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
frost$collections$Array* $tmp5206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
*(&local1) = $tmp5205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
// line 2586
frost$core$Int64 $tmp5207 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5208 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5207);
org$frostlang$frostc$parser$Token$nullable $tmp5209 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5208);
frost$core$Bit $tmp5210 = frost$core$Bit$init$builtin_bit($tmp5209.nonnull);
bool $tmp5211 = $tmp5210.value;
if ($tmp5211) goto block3; else goto block4;
block3:;
// line 2587
org$frostlang$frostc$parser$Token $tmp5212 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5213 = $tmp5212.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5214;
$tmp5214 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5214->value = $tmp5213;
frost$core$Int64 $tmp5215 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5216 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5215);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5217;
$tmp5217 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5217->value = $tmp5216;
ITable* $tmp5218 = ((frost$core$Equatable*) $tmp5214)->$class->itable;
while ($tmp5218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5218 = $tmp5218->next;
}
$fn5220 $tmp5219 = $tmp5218->methods[1];
frost$core$Bit $tmp5221 = $tmp5219(((frost$core$Equatable*) $tmp5214), ((frost$core$Equatable*) $tmp5217));
bool $tmp5222 = $tmp5221.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5217)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5214)));
if ($tmp5222) goto block5; else goto block6;
block5:;
// line 2588
org$frostlang$frostc$ASTNode* $tmp5223 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
org$frostlang$frostc$ASTNode* $tmp5224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
*(&local2) = $tmp5223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
// line 2589
org$frostlang$frostc$ASTNode* $tmp5225 = *(&local2);
frost$core$Bit $tmp5226 = frost$core$Bit$init$builtin_bit($tmp5225 == NULL);
bool $tmp5227 = $tmp5226.value;
if ($tmp5227) goto block7; else goto block8;
block7:;
// line 2590
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5228 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2592
frost$collections$Array* $tmp5230 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5231 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5230, ((frost$core$Object*) $tmp5231));
// line 2593
goto block9;
block9:;
frost$core$Int64 $tmp5232 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5233 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5232);
org$frostlang$frostc$parser$Token$nullable $tmp5234 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5233);
frost$core$Bit $tmp5235 = frost$core$Bit$init$builtin_bit($tmp5234.nonnull);
bool $tmp5236 = $tmp5235.value;
if ($tmp5236) goto block10; else goto block11;
block10:;
// line 2594
org$frostlang$frostc$ASTNode* $tmp5237 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
org$frostlang$frostc$ASTNode* $tmp5238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
*(&local2) = $tmp5237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
// line 2595
org$frostlang$frostc$ASTNode* $tmp5239 = *(&local2);
frost$core$Bit $tmp5240 = frost$core$Bit$init$builtin_bit($tmp5239 == NULL);
bool $tmp5241 = $tmp5240.value;
if ($tmp5241) goto block12; else goto block13;
block12:;
// line 2596
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5242 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2598
frost$collections$Array* $tmp5244 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5245 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5244, ((frost$core$Object*) $tmp5245));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2601
frost$core$Int64 $tmp5247 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5248 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5247);
org$frostlang$frostc$parser$Token$nullable $tmp5249 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5248, &$s5250);
frost$core$Bit $tmp5251 = frost$core$Bit$init$builtin_bit(!$tmp5249.nonnull);
bool $tmp5252 = $tmp5251.value;
if ($tmp5252) goto block14; else goto block15;
block14:;
// line 2602
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2605
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5254 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5255 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5256 = *(&local0);
org$frostlang$frostc$Position $tmp5257 = ((org$frostlang$frostc$parser$Token) $tmp5256.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5258 = *(&local0);
frost$core$String* $tmp5259 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5258.value));
frost$collections$Array* $tmp5260 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5261 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5260);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5254, $tmp5255, $tmp5257, param1, $tmp5259, $tmp5261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
frost$collections$Array* $tmp5262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5254;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$parser$Token local5;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$FixedArray* local7 = NULL;
org$frostlang$frostc$parser$Token local8;
org$frostlang$frostc$ASTNode* local9 = NULL;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
// line 2615
frost$core$Int64 $tmp5263 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5264 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5263);
org$frostlang$frostc$parser$Token$nullable $tmp5265 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5264, &$s5266);
*(&local0) = $tmp5265;
// line 2616
org$frostlang$frostc$parser$Token$nullable $tmp5267 = *(&local0);
frost$core$Bit $tmp5268 = frost$core$Bit$init$builtin_bit(!$tmp5267.nonnull);
bool $tmp5269 = $tmp5268.value;
if ($tmp5269) goto block1; else goto block2;
block1:;
// line 2617
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2619
frost$core$Int64 $tmp5270 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5271 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5270);
org$frostlang$frostc$parser$Token$nullable $tmp5272 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5271, &$s5273);
*(&local1) = $tmp5272;
// line 2620
org$frostlang$frostc$parser$Token$nullable $tmp5274 = *(&local1);
frost$core$Bit $tmp5275 = frost$core$Bit$init$builtin_bit(!$tmp5274.nonnull);
bool $tmp5276 = $tmp5275.value;
if ($tmp5276) goto block3; else goto block4;
block3:;
// line 2621
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2623
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2624
org$frostlang$frostc$parser$Token $tmp5277 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5278 = $tmp5277.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5279;
$tmp5279 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5279->value = $tmp5278;
frost$core$Int64 $tmp5280 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5281 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5280);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5282;
$tmp5282 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5282->value = $tmp5281;
ITable* $tmp5283 = ((frost$core$Equatable*) $tmp5279)->$class->itable;
while ($tmp5283->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5283 = $tmp5283->next;
}
$fn5285 $tmp5284 = $tmp5283->methods[0];
frost$core$Bit $tmp5286 = $tmp5284(((frost$core$Equatable*) $tmp5279), ((frost$core$Equatable*) $tmp5282));
bool $tmp5287 = $tmp5286.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5282)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5279)));
if ($tmp5287) goto block5; else goto block7;
block5:;
// line 2625
org$frostlang$frostc$FixedArray* $tmp5288 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
org$frostlang$frostc$FixedArray* $tmp5289 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
*(&local2) = $tmp5288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
// line 2626
org$frostlang$frostc$FixedArray* $tmp5290 = *(&local2);
frost$core$Bit $tmp5291 = frost$core$Bit$init$builtin_bit($tmp5290 == NULL);
bool $tmp5292 = $tmp5291.value;
if ($tmp5292) goto block8; else goto block9;
block8:;
// line 2627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5293 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5293));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2631
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2633
frost$core$Int64 $tmp5295 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5296 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5295);
org$frostlang$frostc$parser$Token$nullable $tmp5297 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5296, &$s5298);
frost$core$Bit $tmp5299 = frost$core$Bit$init$builtin_bit(!$tmp5297.nonnull);
bool $tmp5300 = $tmp5299.value;
if ($tmp5300) goto block10; else goto block11;
block10:;
// line 2634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2636
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5302 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5302);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
frost$collections$Array* $tmp5303 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local3) = $tmp5302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
// line 2637
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2638
goto block12;
block12:;
// line 2639
org$frostlang$frostc$parser$Token $tmp5305 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5305;
// line 2640
org$frostlang$frostc$parser$Token $tmp5306 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5307 = $tmp5306.kind;
frost$core$Int64 $tmp5308 = $tmp5307.$rawValue;
frost$core$Int64 $tmp5309 = (frost$core$Int64) {18};
frost$core$Bit $tmp5310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5309);
bool $tmp5311 = $tmp5310.value;
if ($tmp5311) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5312 = (frost$core$Int64) {19};
frost$core$Bit $tmp5313 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5312);
bool $tmp5314 = $tmp5313.value;
if ($tmp5314) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5315 = (frost$core$Int64) {20};
frost$core$Bit $tmp5316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5315);
bool $tmp5317 = $tmp5316.value;
if ($tmp5317) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5318 = (frost$core$Int64) {22};
frost$core$Bit $tmp5319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5318);
bool $tmp5320 = $tmp5319.value;
if ($tmp5320) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5321 = (frost$core$Int64) {21};
frost$core$Bit $tmp5322 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5321);
bool $tmp5323 = $tmp5322.value;
if ($tmp5323) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5324 = (frost$core$Int64) {14};
frost$core$Bit $tmp5325 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5324);
bool $tmp5326 = $tmp5325.value;
if ($tmp5326) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5327 = (frost$core$Int64) {24};
frost$core$Bit $tmp5328 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5327);
bool $tmp5329 = $tmp5328.value;
if ($tmp5329) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5330 = (frost$core$Int64) {25};
frost$core$Bit $tmp5331 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5330);
bool $tmp5332 = $tmp5331.value;
if ($tmp5332) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5333 = (frost$core$Int64) {26};
frost$core$Bit $tmp5334 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5333);
bool $tmp5335 = $tmp5334.value;
if ($tmp5335) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5336 = (frost$core$Int64) {27};
frost$core$Bit $tmp5337 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5336);
bool $tmp5338 = $tmp5337.value;
if ($tmp5338) goto block15; else goto block25;
block15:;
// line 2644
goto block13;
block25:;
frost$core$Int64 $tmp5339 = (frost$core$Int64) {12};
frost$core$Bit $tmp5340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5339);
bool $tmp5341 = $tmp5340.value;
if ($tmp5341) goto block26; else goto block27;
block26:;
// line 2647
org$frostlang$frostc$ASTNode* $tmp5342 = *(&local4);
frost$core$Bit $tmp5343 = frost$core$Bit$init$builtin_bit($tmp5342 != NULL);
bool $tmp5344 = $tmp5343.value;
if ($tmp5344) goto block28; else goto block29;
block28:;
// line 2648
org$frostlang$frostc$parser$Token $tmp5345 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5346 = *(&local5);
frost$core$String* $tmp5347 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5346);
frost$core$String* $tmp5348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5349, $tmp5347);
frost$core$String* $tmp5350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5348, &$s5351);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5345, $tmp5350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5347));
goto block29;
block29:;
// line 2650
org$frostlang$frostc$ASTNode* $tmp5352 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
org$frostlang$frostc$ASTNode* $tmp5353 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
*(&local4) = $tmp5352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
goto block14;
block27:;
frost$core$Int64 $tmp5354 = (frost$core$Int64) {52};
frost$core$Bit $tmp5355 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5308, $tmp5354);
bool $tmp5356 = $tmp5355.value;
if ($tmp5356) goto block30; else goto block31;
block30:;
// line 2653
org$frostlang$frostc$ASTNode* $tmp5357 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5358 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5357);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
org$frostlang$frostc$ASTNode* $tmp5359 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
*(&local6) = $tmp5358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
// line 2654
org$frostlang$frostc$ASTNode* $tmp5360 = *(&local6);
frost$core$Bit $tmp5361 = frost$core$Bit$init$builtin_bit($tmp5360 == NULL);
bool $tmp5362 = $tmp5361.value;
if ($tmp5362) goto block32; else goto block33;
block32:;
// line 2655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5363 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5364 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5365 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5366 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2657
frost$collections$Array* $tmp5367 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5368 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5367, ((frost$core$Object*) $tmp5368));
// line 2658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5369 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5370 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5370));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2661
goto block13;
block14:;
goto block12;
block13:;
// line 2665
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5371 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5371);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5371));
org$frostlang$frostc$FixedArray* $tmp5372 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
*(&local7) = $tmp5371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5371));
// line 2666
goto block34;
block34:;
// line 2667
org$frostlang$frostc$parser$Token $tmp5373 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5373;
// line 2668
org$frostlang$frostc$parser$Token $tmp5374 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5375 = $tmp5374.kind;
frost$core$Int64 $tmp5376 = $tmp5375.$rawValue;
frost$core$Int64 $tmp5377 = (frost$core$Int64) {14};
frost$core$Bit $tmp5378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5377);
bool $tmp5379 = $tmp5378.value;
if ($tmp5379) goto block37; else goto block38;
block37:;
// line 2670
org$frostlang$frostc$FixedArray* $tmp5380 = *(&local7);
ITable* $tmp5381 = ((frost$collections$CollectionView*) $tmp5380)->$class->itable;
while ($tmp5381->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5381 = $tmp5381->next;
}
$fn5383 $tmp5382 = $tmp5381->methods[0];
frost$core$Int64 $tmp5384 = $tmp5382(((frost$collections$CollectionView*) $tmp5380));
frost$core$Int64 $tmp5385 = (frost$core$Int64) {0};
int64_t $tmp5386 = $tmp5384.value;
int64_t $tmp5387 = $tmp5385.value;
bool $tmp5388 = $tmp5386 > $tmp5387;
frost$core$Bit $tmp5389 = (frost$core$Bit) {$tmp5388};
bool $tmp5390 = $tmp5389.value;
if ($tmp5390) goto block39; else goto block40;
block39:;
// line 2671
org$frostlang$frostc$parser$Token $tmp5391 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5392 = *(&local8);
frost$core$String* $tmp5393 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5392);
frost$core$String* $tmp5394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5395, $tmp5393);
frost$core$String* $tmp5396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5394, &$s5397);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5391, $tmp5396);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
// line 2672
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5398 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5399 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5400 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5400));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2674
org$frostlang$frostc$FixedArray* $tmp5402 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
org$frostlang$frostc$FixedArray* $tmp5403 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
*(&local7) = $tmp5402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
goto block36;
block38:;
frost$core$Int64 $tmp5404 = (frost$core$Int64) {12};
frost$core$Bit $tmp5405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5404);
bool $tmp5406 = $tmp5405.value;
if ($tmp5406) goto block41; else goto block42;
block41:;
// line 2677
org$frostlang$frostc$ASTNode* $tmp5407 = *(&local4);
frost$core$Bit $tmp5408 = frost$core$Bit$init$builtin_bit($tmp5407 != NULL);
bool $tmp5409 = $tmp5408.value;
if ($tmp5409) goto block43; else goto block45;
block45:;
org$frostlang$frostc$FixedArray* $tmp5410 = *(&local7);
ITable* $tmp5411 = ((frost$collections$CollectionView*) $tmp5410)->$class->itable;
while ($tmp5411->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5411 = $tmp5411->next;
}
$fn5413 $tmp5412 = $tmp5411->methods[0];
frost$core$Int64 $tmp5414 = $tmp5412(((frost$collections$CollectionView*) $tmp5410));
frost$core$Int64 $tmp5415 = (frost$core$Int64) {0};
int64_t $tmp5416 = $tmp5414.value;
int64_t $tmp5417 = $tmp5415.value;
bool $tmp5418 = $tmp5416 > $tmp5417;
frost$core$Bit $tmp5419 = (frost$core$Bit) {$tmp5418};
bool $tmp5420 = $tmp5419.value;
if ($tmp5420) goto block43; else goto block44;
block43:;
// line 2678
org$frostlang$frostc$parser$Token $tmp5421 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5422 = *(&local8);
frost$core$String* $tmp5423 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5422);
frost$core$String* $tmp5424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5425, $tmp5423);
frost$core$String* $tmp5426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5424, &$s5427);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5421, $tmp5426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
// line 2679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5428 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5428));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5430 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5430));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2681
org$frostlang$frostc$ASTNode* $tmp5432 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
org$frostlang$frostc$ASTNode* $tmp5433 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
*(&local4) = $tmp5432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
goto block36;
block42:;
frost$core$Int64 $tmp5434 = (frost$core$Int64) {18};
frost$core$Bit $tmp5435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5434);
bool $tmp5436 = $tmp5435.value;
if ($tmp5436) goto block46; else goto block47;
block46:;
// line 2684
org$frostlang$frostc$ASTNode* $tmp5437 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5438 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5439 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5437, $tmp5438);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
org$frostlang$frostc$ASTNode* $tmp5440 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5440));
*(&local9) = $tmp5439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
// line 2685
org$frostlang$frostc$ASTNode* $tmp5441 = *(&local9);
frost$core$Bit $tmp5442 = frost$core$Bit$init$builtin_bit($tmp5441 == NULL);
bool $tmp5443 = $tmp5442.value;
if ($tmp5443) goto block48; else goto block49;
block48:;
// line 2686
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5444 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5444));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5445 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5446 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5447 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5448 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 2688
frost$collections$Array* $tmp5449 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5450 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp5449, ((frost$core$Object*) $tmp5450));
// line 2689
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5451 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2690
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5452 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5452);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
org$frostlang$frostc$FixedArray* $tmp5453 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local7) = $tmp5452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
org$frostlang$frostc$ASTNode* $tmp5454 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block47:;
frost$core$Int64 $tmp5455 = (frost$core$Int64) {19};
frost$core$Bit $tmp5456 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5455);
bool $tmp5457 = $tmp5456.value;
if ($tmp5457) goto block50; else goto block51;
block50:;
// line 2693
org$frostlang$frostc$ASTNode* $tmp5458 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5459 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5460 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5458, $tmp5459);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
org$frostlang$frostc$ASTNode* $tmp5461 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
*(&local10) = $tmp5460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
// line 2694
org$frostlang$frostc$ASTNode* $tmp5462 = *(&local10);
frost$core$Bit $tmp5463 = frost$core$Bit$init$builtin_bit($tmp5462 == NULL);
bool $tmp5464 = $tmp5463.value;
if ($tmp5464) goto block52; else goto block53;
block52:;
// line 2695
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5465 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5466 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5466));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5467 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5467));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5468 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5468));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block53:;
// line 2697
frost$collections$Array* $tmp5470 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5471 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5470, ((frost$core$Object*) $tmp5471));
// line 2698
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2699
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5473 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
org$frostlang$frostc$FixedArray* $tmp5474 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
*(&local7) = $tmp5473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
org$frostlang$frostc$ASTNode* $tmp5475 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block51:;
frost$core$Int64 $tmp5476 = (frost$core$Int64) {20};
frost$core$Bit $tmp5477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5476);
bool $tmp5478 = $tmp5477.value;
if ($tmp5478) goto block54; else goto block55;
block54:;
// line 2702
org$frostlang$frostc$ASTNode* $tmp5479 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5480 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5481 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5479, $tmp5480);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5481));
org$frostlang$frostc$ASTNode* $tmp5482 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
*(&local11) = $tmp5481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5481));
// line 2703
org$frostlang$frostc$ASTNode* $tmp5483 = *(&local11);
frost$core$Bit $tmp5484 = frost$core$Bit$init$builtin_bit($tmp5483 == NULL);
bool $tmp5485 = $tmp5484.value;
if ($tmp5485) goto block56; else goto block57;
block56:;
// line 2704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5486 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5486));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5487 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5488 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5489 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5489));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 2706
frost$collections$Array* $tmp5491 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5492 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5491, ((frost$core$Object*) $tmp5492));
// line 2707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5493 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2708
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5494 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5494));
org$frostlang$frostc$FixedArray* $tmp5495 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5495));
*(&local7) = $tmp5494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5494));
org$frostlang$frostc$ASTNode* $tmp5496 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block55:;
frost$core$Int64 $tmp5497 = (frost$core$Int64) {22};
frost$core$Bit $tmp5498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5497);
bool $tmp5499 = $tmp5498.value;
if ($tmp5499) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp5500 = (frost$core$Int64) {21};
frost$core$Bit $tmp5501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5500);
bool $tmp5502 = $tmp5501.value;
if ($tmp5502) goto block58; else goto block60;
block58:;
// line 2711
org$frostlang$frostc$ASTNode* $tmp5503 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5504 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5505 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5503, $tmp5504);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
org$frostlang$frostc$ASTNode* $tmp5506 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local12) = $tmp5505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
// line 2712
org$frostlang$frostc$ASTNode* $tmp5507 = *(&local12);
frost$core$Bit $tmp5508 = frost$core$Bit$init$builtin_bit($tmp5507 == NULL);
bool $tmp5509 = $tmp5508.value;
if ($tmp5509) goto block61; else goto block62;
block61:;
// line 2713
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5510 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5511 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5512 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5512));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5513 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5513));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5514 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5514));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block62:;
// line 2715
frost$collections$Array* $tmp5515 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5516 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5515, ((frost$core$Object*) $tmp5516));
// line 2716
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2717
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5518 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
org$frostlang$frostc$FixedArray* $tmp5519 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5519));
*(&local7) = $tmp5518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
org$frostlang$frostc$ASTNode* $tmp5520 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block60:;
frost$core$Int64 $tmp5521 = (frost$core$Int64) {24};
frost$core$Bit $tmp5522 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5521);
bool $tmp5523 = $tmp5522.value;
if ($tmp5523) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp5524 = (frost$core$Int64) {25};
frost$core$Bit $tmp5525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5524);
bool $tmp5526 = $tmp5525.value;
if ($tmp5526) goto block63; else goto block65;
block65:;
frost$core$Int64 $tmp5527 = (frost$core$Int64) {26};
frost$core$Bit $tmp5528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5527);
bool $tmp5529 = $tmp5528.value;
if ($tmp5529) goto block63; else goto block66;
block66:;
frost$core$Int64 $tmp5530 = (frost$core$Int64) {27};
frost$core$Bit $tmp5531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5530);
bool $tmp5532 = $tmp5531.value;
if ($tmp5532) goto block63; else goto block67;
block63:;
// line 2720
org$frostlang$frostc$ASTNode* $tmp5533 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5534 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5535 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5533, $tmp5534);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5535));
org$frostlang$frostc$ASTNode* $tmp5536 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
*(&local13) = $tmp5535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5535));
// line 2721
org$frostlang$frostc$ASTNode* $tmp5537 = *(&local13);
frost$core$Bit $tmp5538 = frost$core$Bit$init$builtin_bit($tmp5537 == NULL);
bool $tmp5539 = $tmp5538.value;
if ($tmp5539) goto block68; else goto block69;
block68:;
// line 2722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5540 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5540));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5541 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5541));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5542 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5542));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5543 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5543));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5544 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5544));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block69:;
// line 2724
frost$collections$Array* $tmp5545 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5546 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5545, ((frost$core$Object*) $tmp5546));
// line 2725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5547 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5547));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2726
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5548 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5548));
org$frostlang$frostc$FixedArray* $tmp5549 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5549));
*(&local7) = $tmp5548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5548));
org$frostlang$frostc$ASTNode* $tmp5550 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5550));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block67:;
frost$core$Int64 $tmp5551 = (frost$core$Int64) {104};
frost$core$Bit $tmp5552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5376, $tmp5551);
bool $tmp5553 = $tmp5552.value;
if ($tmp5553) goto block70; else goto block71;
block70:;
// line 2729
frost$core$Int64 $tmp5554 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5555 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5554);
org$frostlang$frostc$parser$Token$nullable $tmp5556 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5555, &$s5557);
// line 2730
goto block35;
block71:;
// line 2733
org$frostlang$frostc$parser$Token $tmp5558 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5559 = *(&local8);
frost$core$String* $tmp5560 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5559);
frost$core$String* $tmp5561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5562, $tmp5560);
frost$core$String* $tmp5563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5561, &$s5564);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5558, $tmp5563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
// line 2734
org$frostlang$frostc$parser$Token $tmp5565 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2735
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5566 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5567 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5567));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5568 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5569));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2739
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5570 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5571 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5572 = *(&local0);
org$frostlang$frostc$Position $tmp5573 = ((org$frostlang$frostc$parser$Token) $tmp5572.value).position;
frost$core$Int64 $tmp5574 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5575 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5574);
org$frostlang$frostc$parser$Token$nullable $tmp5576 = *(&local1);
frost$core$String* $tmp5577 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5576.value));
org$frostlang$frostc$FixedArray* $tmp5578 = *(&local2);
frost$collections$Array* $tmp5579 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5580 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5579);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5570, $tmp5571, $tmp5573, param1, param2, $tmp5575, $tmp5577, $tmp5578, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
org$frostlang$frostc$FixedArray* $tmp5581 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5581));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5582 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5583 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5570;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2749
org$frostlang$frostc$parser$Token $tmp5585 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5585;
// line 2750
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2751
org$frostlang$frostc$parser$Token $tmp5586 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5587 = $tmp5586.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5588;
$tmp5588 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5588->value = $tmp5587;
frost$core$Int64 $tmp5589 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5590 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5589);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5591;
$tmp5591 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5591->value = $tmp5590;
ITable* $tmp5592 = ((frost$core$Equatable*) $tmp5588)->$class->itable;
while ($tmp5592->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5592 = $tmp5592->next;
}
$fn5594 $tmp5593 = $tmp5592->methods[0];
frost$core$Bit $tmp5595 = $tmp5593(((frost$core$Equatable*) $tmp5588), ((frost$core$Equatable*) $tmp5591));
bool $tmp5596 = $tmp5595.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5591)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5588)));
if ($tmp5596) goto block1; else goto block3;
block1:;
// line 2752
org$frostlang$frostc$ASTNode* $tmp5597 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
org$frostlang$frostc$ASTNode* $tmp5598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
*(&local1) = $tmp5597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
// line 2753
org$frostlang$frostc$ASTNode* $tmp5599 = *(&local1);
frost$core$Bit $tmp5600 = frost$core$Bit$init$builtin_bit($tmp5599 == NULL);
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block4; else goto block5;
block4:;
// line 2754
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5603));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2760
org$frostlang$frostc$FixedArray* $tmp5604 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5604));
org$frostlang$frostc$FixedArray* $tmp5605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5605));
*(&local2) = $tmp5604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5604));
// line 2761
org$frostlang$frostc$FixedArray* $tmp5606 = *(&local2);
frost$core$Bit $tmp5607 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5608 = $tmp5607.value;
if ($tmp5608) goto block6; else goto block7;
block6:;
// line 2762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5609 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5610 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5610));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2764
org$frostlang$frostc$parser$Token $tmp5611 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5612 = $tmp5611.kind;
frost$core$Int64 $tmp5613 = $tmp5612.$rawValue;
frost$core$Int64 $tmp5614 = (frost$core$Int64) {18};
frost$core$Bit $tmp5615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5614);
bool $tmp5616 = $tmp5615.value;
if ($tmp5616) goto block9; else goto block10;
block9:;
// line 2766
org$frostlang$frostc$ASTNode* $tmp5617 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5618 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5619 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5617, $tmp5618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
org$frostlang$frostc$FixedArray* $tmp5620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5621));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5619;
block10:;
frost$core$Int64 $tmp5622 = (frost$core$Int64) {19};
frost$core$Bit $tmp5623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5622);
bool $tmp5624 = $tmp5623.value;
if ($tmp5624) goto block11; else goto block12;
block11:;
// line 2769
org$frostlang$frostc$ASTNode* $tmp5625 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5626 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5627 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5625, $tmp5626);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
org$frostlang$frostc$FixedArray* $tmp5628 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5628));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5629 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5627;
block12:;
frost$core$Int64 $tmp5630 = (frost$core$Int64) {20};
frost$core$Bit $tmp5631 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5630);
bool $tmp5632 = $tmp5631.value;
if ($tmp5632) goto block13; else goto block14;
block13:;
// line 2772
org$frostlang$frostc$ASTNode* $tmp5633 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5634 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5635 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5633, $tmp5634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
org$frostlang$frostc$FixedArray* $tmp5636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5637));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5635;
block14:;
frost$core$Int64 $tmp5638 = (frost$core$Int64) {22};
frost$core$Bit $tmp5639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5638);
bool $tmp5640 = $tmp5639.value;
if ($tmp5640) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5641 = (frost$core$Int64) {21};
frost$core$Bit $tmp5642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5641);
bool $tmp5643 = $tmp5642.value;
if ($tmp5643) goto block15; else goto block17;
block15:;
// line 2775
org$frostlang$frostc$ASTNode* $tmp5644 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5645 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5646 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5644, $tmp5645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5646));
org$frostlang$frostc$FixedArray* $tmp5647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5648 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5646;
block17:;
frost$core$Int64 $tmp5649 = (frost$core$Int64) {23};
frost$core$Bit $tmp5650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5649);
bool $tmp5651 = $tmp5650.value;
if ($tmp5651) goto block18; else goto block19;
block18:;
// line 2778
org$frostlang$frostc$ASTNode* $tmp5652 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5653 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5654 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5652, $tmp5653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
org$frostlang$frostc$FixedArray* $tmp5655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5655));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5656 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5656));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5654;
block19:;
frost$core$Int64 $tmp5657 = (frost$core$Int64) {24};
frost$core$Bit $tmp5658 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5657);
bool $tmp5659 = $tmp5658.value;
if ($tmp5659) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5660 = (frost$core$Int64) {25};
frost$core$Bit $tmp5661 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5660);
bool $tmp5662 = $tmp5661.value;
if ($tmp5662) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5663 = (frost$core$Int64) {26};
frost$core$Bit $tmp5664 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5663);
bool $tmp5665 = $tmp5664.value;
if ($tmp5665) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5666 = (frost$core$Int64) {27};
frost$core$Bit $tmp5667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5613, $tmp5666);
bool $tmp5668 = $tmp5667.value;
if ($tmp5668) goto block20; else goto block24;
block20:;
// line 2781
org$frostlang$frostc$ASTNode* $tmp5669 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5670 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5671 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5669, $tmp5670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5671));
org$frostlang$frostc$FixedArray* $tmp5672 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5671;
block24:;
// line 2785
frost$core$Int64 $tmp5674 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5675 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5674);
org$frostlang$frostc$parser$Token$nullable $tmp5676 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5675, &$s5677);
// line 2786
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5679));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
goto block25;
block25:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 2795
frost$core$Int64 $tmp5680 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5681 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5680);
org$frostlang$frostc$parser$Token$nullable $tmp5682 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5681, &$s5683);
*(&local0) = $tmp5682;
// line 2796
org$frostlang$frostc$parser$Token$nullable $tmp5684 = *(&local0);
frost$core$Bit $tmp5685 = frost$core$Bit$init$builtin_bit(!$tmp5684.nonnull);
bool $tmp5686 = $tmp5685.value;
if ($tmp5686) goto block1; else goto block2;
block1:;
// line 2797
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2799
frost$core$Int64 $tmp5687 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5688 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5687);
org$frostlang$frostc$parser$Token$nullable $tmp5689 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5688, &$s5690);
*(&local1) = $tmp5689;
// line 2800
org$frostlang$frostc$parser$Token$nullable $tmp5691 = *(&local1);
frost$core$Bit $tmp5692 = frost$core$Bit$init$builtin_bit(!$tmp5691.nonnull);
bool $tmp5693 = $tmp5692.value;
if ($tmp5693) goto block3; else goto block4;
block3:;
// line 2801
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2803
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2804
org$frostlang$frostc$parser$Token $tmp5694 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5695 = $tmp5694.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5696;
$tmp5696 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5696->value = $tmp5695;
frost$core$Int64 $tmp5697 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5698 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5697);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5699;
$tmp5699 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5699->value = $tmp5698;
ITable* $tmp5700 = ((frost$core$Equatable*) $tmp5696)->$class->itable;
while ($tmp5700->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5700 = $tmp5700->next;
}
$fn5702 $tmp5701 = $tmp5700->methods[0];
frost$core$Bit $tmp5703 = $tmp5701(((frost$core$Equatable*) $tmp5696), ((frost$core$Equatable*) $tmp5699));
bool $tmp5704 = $tmp5703.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5699)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5696)));
if ($tmp5704) goto block5; else goto block7;
block5:;
// line 2805
org$frostlang$frostc$FixedArray* $tmp5705 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
org$frostlang$frostc$FixedArray* $tmp5706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5706));
*(&local2) = $tmp5705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
// line 2806
org$frostlang$frostc$FixedArray* $tmp5707 = *(&local2);
frost$core$Bit $tmp5708 = frost$core$Bit$init$builtin_bit($tmp5707 == NULL);
bool $tmp5709 = $tmp5708.value;
if ($tmp5709) goto block8; else goto block9;
block8:;
// line 2807
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5710 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2811
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5711));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2813
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2814
org$frostlang$frostc$parser$Token $tmp5712 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5713 = $tmp5712.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5714;
$tmp5714 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5714->value = $tmp5713;
frost$core$Int64 $tmp5715 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5716 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5715);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5717;
$tmp5717 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5717->value = $tmp5716;
ITable* $tmp5718 = ((frost$core$Equatable*) $tmp5714)->$class->itable;
while ($tmp5718->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5718 = $tmp5718->next;
}
$fn5720 $tmp5719 = $tmp5718->methods[0];
frost$core$Bit $tmp5721 = $tmp5719(((frost$core$Equatable*) $tmp5714), ((frost$core$Equatable*) $tmp5717));
bool $tmp5722 = $tmp5721.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5717)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5714)));
if ($tmp5722) goto block10; else goto block12;
block10:;
// line 2815
org$frostlang$frostc$FixedArray* $tmp5723 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5723));
org$frostlang$frostc$FixedArray* $tmp5724 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local3) = $tmp5723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5723));
// line 2816
org$frostlang$frostc$FixedArray* $tmp5725 = *(&local3);
frost$core$Bit $tmp5726 = frost$core$Bit$init$builtin_bit($tmp5725 == NULL);
bool $tmp5727 = $tmp5726.value;
if ($tmp5727) goto block13; else goto block14;
block13:;
// line 2817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5728 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5729 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5730 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5730));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2823
frost$core$Int64 $tmp5731 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5732 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5731);
org$frostlang$frostc$parser$Token$nullable $tmp5733 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5732, &$s5734);
frost$core$Bit $tmp5735 = frost$core$Bit$init$builtin_bit(!$tmp5733.nonnull);
bool $tmp5736 = $tmp5735.value;
if ($tmp5736) goto block15; else goto block16;
block15:;
// line 2824
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5737 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5737));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5738 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5738));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2826
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5739 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5739);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
frost$collections$Array* $tmp5740 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5740));
*(&local4) = $tmp5739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
// line 2827
goto block17;
block17:;
frost$core$Int64 $tmp5741 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5742 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5741);
org$frostlang$frostc$parser$Token$nullable $tmp5743 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5742);
frost$core$Bit $tmp5744 = frost$core$Bit$init$builtin_bit(!$tmp5743.nonnull);
bool $tmp5745 = $tmp5744.value;
if ($tmp5745) goto block18; else goto block19;
block18:;
// line 2828
org$frostlang$frostc$ASTNode* $tmp5746 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
org$frostlang$frostc$ASTNode* $tmp5747 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5747));
*(&local5) = $tmp5746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
// line 2829
org$frostlang$frostc$ASTNode* $tmp5748 = *(&local5);
frost$core$Bit $tmp5749 = frost$core$Bit$init$builtin_bit($tmp5748 == NULL);
bool $tmp5750 = $tmp5749.value;
if ($tmp5750) goto block20; else goto block21;
block20:;
// line 2830
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5751 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5752 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5753 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5753));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5754 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5754));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2832
frost$collections$Array* $tmp5755 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5756 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5755, ((frost$core$Object*) $tmp5756));
org$frostlang$frostc$ASTNode* $tmp5757 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5757));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2834
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5758 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5759 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5760 = *(&local0);
org$frostlang$frostc$Position $tmp5761 = ((org$frostlang$frostc$parser$Token) $tmp5760.value).position;
frost$core$Int64 $tmp5762 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5763 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5762);
org$frostlang$frostc$parser$Token$nullable $tmp5764 = *(&local1);
frost$core$String* $tmp5765 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5764.value));
org$frostlang$frostc$FixedArray* $tmp5766 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5767 = *(&local3);
frost$collections$Array* $tmp5768 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5769 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5768);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5758, $tmp5759, $tmp5761, param1, param2, $tmp5763, $tmp5765, $tmp5766, $tmp5767, $tmp5769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5758));
frost$collections$Array* $tmp5770 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5770));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5771));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5772 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5758;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 2843
frost$core$Int64 $tmp5773 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5774 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5773);
org$frostlang$frostc$parser$Token$nullable $tmp5775 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5774, &$s5776);
*(&local0) = $tmp5775;
// line 2844
org$frostlang$frostc$parser$Token$nullable $tmp5777 = *(&local0);
frost$core$Bit $tmp5778 = frost$core$Bit$init$builtin_bit(!$tmp5777.nonnull);
bool $tmp5779 = $tmp5778.value;
if ($tmp5779) goto block1; else goto block2;
block1:;
// line 2845
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2847
frost$core$Int64 $tmp5780 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5781 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5780);
org$frostlang$frostc$parser$Token$nullable $tmp5782 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5781, &$s5783);
*(&local1) = $tmp5782;
// line 2848
org$frostlang$frostc$parser$Token$nullable $tmp5784 = *(&local1);
frost$core$Bit $tmp5785 = frost$core$Bit$init$builtin_bit(!$tmp5784.nonnull);
bool $tmp5786 = $tmp5785.value;
if ($tmp5786) goto block3; else goto block4;
block3:;
// line 2849
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2851
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2852
org$frostlang$frostc$parser$Token $tmp5787 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5788 = $tmp5787.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5789;
$tmp5789 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5789->value = $tmp5788;
frost$core$Int64 $tmp5790 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5791 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5790);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5792;
$tmp5792 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5792->value = $tmp5791;
ITable* $tmp5793 = ((frost$core$Equatable*) $tmp5789)->$class->itable;
while ($tmp5793->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5793 = $tmp5793->next;
}
$fn5795 $tmp5794 = $tmp5793->methods[0];
frost$core$Bit $tmp5796 = $tmp5794(((frost$core$Equatable*) $tmp5789), ((frost$core$Equatable*) $tmp5792));
bool $tmp5797 = $tmp5796.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5792)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5789)));
if ($tmp5797) goto block5; else goto block7;
block5:;
// line 2853
org$frostlang$frostc$FixedArray* $tmp5798 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
org$frostlang$frostc$FixedArray* $tmp5799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
*(&local2) = $tmp5798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
// line 2854
org$frostlang$frostc$FixedArray* $tmp5800 = *(&local2);
frost$core$Bit $tmp5801 = frost$core$Bit$init$builtin_bit($tmp5800 == NULL);
bool $tmp5802 = $tmp5801.value;
if ($tmp5802) goto block8; else goto block9;
block8:;
// line 2855
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5803 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2859
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5804 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
org$frostlang$frostc$FixedArray* $tmp5805 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
*(&local2) = $tmp5804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
goto block6;
block6:;
// line 2861
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5806 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5806);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
frost$collections$Array* $tmp5807 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
*(&local3) = $tmp5806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
// line 2862
frost$core$Int64 $tmp5808 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5809 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5808);
org$frostlang$frostc$parser$Token$nullable $tmp5810 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5809);
frost$core$Bit $tmp5811 = frost$core$Bit$init$builtin_bit($tmp5810.nonnull);
bool $tmp5812 = $tmp5811.value;
if ($tmp5812) goto block10; else goto block11;
block10:;
// line 2863
org$frostlang$frostc$ASTNode* $tmp5813 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5813));
org$frostlang$frostc$ASTNode* $tmp5814 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5814));
*(&local4) = $tmp5813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5813));
// line 2864
org$frostlang$frostc$ASTNode* $tmp5815 = *(&local4);
frost$core$Bit $tmp5816 = frost$core$Bit$init$builtin_bit($tmp5815 == NULL);
bool $tmp5817 = $tmp5816.value;
if ($tmp5817) goto block12; else goto block13;
block12:;
// line 2865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5818 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5819 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5819));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5820 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5820));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2867
frost$collections$Array* $tmp5821 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5822 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5821, ((frost$core$Object*) $tmp5822));
// line 2868
goto block14;
block14:;
frost$core$Int64 $tmp5823 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5824 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5823);
org$frostlang$frostc$parser$Token$nullable $tmp5825 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5824);
frost$core$Bit $tmp5826 = frost$core$Bit$init$builtin_bit($tmp5825.nonnull);
bool $tmp5827 = $tmp5826.value;
if ($tmp5827) goto block15; else goto block16;
block15:;
// line 2869
org$frostlang$frostc$ASTNode* $tmp5828 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5828));
org$frostlang$frostc$ASTNode* $tmp5829 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
*(&local4) = $tmp5828;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5828));
// line 2870
org$frostlang$frostc$ASTNode* $tmp5830 = *(&local4);
frost$core$Bit $tmp5831 = frost$core$Bit$init$builtin_bit($tmp5830 == NULL);
bool $tmp5832 = $tmp5831.value;
if ($tmp5832) goto block17; else goto block18;
block17:;
// line 2871
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5833 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5833));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5834 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5834));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5835 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5835));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2873
frost$collections$Array* $tmp5836 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5837 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5836, ((frost$core$Object*) $tmp5837));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5838 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5838));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2876
frost$core$Int64 $tmp5839 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5840 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5839);
org$frostlang$frostc$parser$Token$nullable $tmp5841 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5840, &$s5842);
frost$core$Bit $tmp5843 = frost$core$Bit$init$builtin_bit(!$tmp5841.nonnull);
bool $tmp5844 = $tmp5843.value;
if ($tmp5844) goto block19; else goto block20;
block19:;
// line 2877
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5845 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5845));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5846 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5846));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2879
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5847 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5847);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
frost$collections$Array* $tmp5848 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5848));
*(&local5) = $tmp5847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
// line 2880
goto block21;
block21:;
frost$core$Int64 $tmp5849 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5850 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5849);
org$frostlang$frostc$parser$Token$nullable $tmp5851 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5850);
frost$core$Bit $tmp5852 = frost$core$Bit$init$builtin_bit(!$tmp5851.nonnull);
bool $tmp5853 = $tmp5852.value;
if ($tmp5853) goto block22; else goto block23;
block22:;
// line 2881
org$frostlang$frostc$ASTNode* $tmp5854 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
org$frostlang$frostc$ASTNode* $tmp5855 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5855));
*(&local6) = $tmp5854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
// line 2882
org$frostlang$frostc$ASTNode* $tmp5856 = *(&local6);
frost$core$Bit $tmp5857 = frost$core$Bit$init$builtin_bit($tmp5856 == NULL);
bool $tmp5858 = $tmp5857.value;
if ($tmp5858) goto block24; else goto block25;
block24:;
// line 2883
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5859 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5859));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5860 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5860));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5861 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5861));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5862 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5862));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2885
frost$collections$Array* $tmp5863 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5864 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5863, ((frost$core$Object*) $tmp5864));
org$frostlang$frostc$ASTNode* $tmp5865 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5865));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2887
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5866 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5867 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5868 = *(&local0);
org$frostlang$frostc$Position $tmp5869 = ((org$frostlang$frostc$parser$Token) $tmp5868.value).position;
frost$core$Int64 $tmp5870 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5871 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5870);
org$frostlang$frostc$parser$Token$nullable $tmp5872 = *(&local1);
frost$core$String* $tmp5873 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5872.value));
org$frostlang$frostc$FixedArray* $tmp5874 = *(&local2);
frost$collections$Array* $tmp5875 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5876 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5875);
frost$collections$Array* $tmp5877 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5878 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5877);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5866, $tmp5867, $tmp5869, param1, param2, $tmp5871, $tmp5873, $tmp5874, $tmp5876, $tmp5878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5866));
frost$collections$Array* $tmp5879 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5879));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5880 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5880));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5881 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5881));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5866;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2896
org$frostlang$frostc$parser$Token $tmp5882 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5883 = $tmp5882.kind;
frost$core$Int64 $tmp5884 = $tmp5883.$rawValue;
frost$core$Int64 $tmp5885 = (frost$core$Int64) {16};
frost$core$Bit $tmp5886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5884, $tmp5885);
bool $tmp5887 = $tmp5886.value;
if ($tmp5887) goto block2; else goto block3;
block2:;
// line 2898
org$frostlang$frostc$ASTNode* $tmp5888 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5888));
return $tmp5888;
block3:;
// line 2901
org$frostlang$frostc$ASTNode* $tmp5889 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5889));
return $tmp5889;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2910
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5890 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5890);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5890));
frost$collections$Array* $tmp5891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5891));
*(&local0) = $tmp5890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5890));
// line 2911
org$frostlang$frostc$parser$Token $tmp5892 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5893 = $tmp5892.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5894;
$tmp5894 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5894->value = $tmp5893;
frost$core$Int64 $tmp5895 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5896 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5895);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5897;
$tmp5897 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5897->value = $tmp5896;
ITable* $tmp5898 = ((frost$core$Equatable*) $tmp5894)->$class->itable;
while ($tmp5898->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5898 = $tmp5898->next;
}
$fn5900 $tmp5899 = $tmp5898->methods[0];
frost$core$Bit $tmp5901 = $tmp5899(((frost$core$Equatable*) $tmp5894), ((frost$core$Equatable*) $tmp5897));
bool $tmp5902 = $tmp5901.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5897)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5894)));
if ($tmp5902) goto block1; else goto block2;
block1:;
// line 2912
org$frostlang$frostc$ASTNode* $tmp5903 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5903));
org$frostlang$frostc$ASTNode* $tmp5904 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5904));
*(&local1) = $tmp5903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5903));
// line 2913
org$frostlang$frostc$ASTNode* $tmp5905 = *(&local1);
frost$core$Bit $tmp5906 = frost$core$Bit$init$builtin_bit($tmp5905 != NULL);
bool $tmp5907 = $tmp5906.value;
if ($tmp5907) goto block3; else goto block4;
block3:;
// line 2914
frost$collections$Array* $tmp5908 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5909 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5908, ((frost$core$Object*) $tmp5909));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5910));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2917
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5911 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5912 = $tmp5911.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5913;
$tmp5913 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5913->value = $tmp5912;
frost$core$Int64 $tmp5914 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5915 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5914);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5916;
$tmp5916 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5916->value = $tmp5915;
ITable* $tmp5917 = ((frost$core$Equatable*) $tmp5913)->$class->itable;
while ($tmp5917->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5917 = $tmp5917->next;
}
$fn5919 $tmp5918 = $tmp5917->methods[1];
frost$core$Bit $tmp5920 = $tmp5918(((frost$core$Equatable*) $tmp5913), ((frost$core$Equatable*) $tmp5916));
bool $tmp5921 = $tmp5920.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5916)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5913)));
if ($tmp5921) goto block6; else goto block7;
block6:;
// line 2918
org$frostlang$frostc$ASTNode* $tmp5922 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
org$frostlang$frostc$ASTNode* $tmp5923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5923));
*(&local2) = $tmp5922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
// line 2919
org$frostlang$frostc$ASTNode* $tmp5924 = *(&local2);
frost$core$Bit $tmp5925 = frost$core$Bit$init$builtin_bit($tmp5924 == NULL);
bool $tmp5926 = $tmp5925.value;
if ($tmp5926) goto block8; else goto block9;
block8:;
// line 2920
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5927));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5928));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2922
frost$collections$Stack** $tmp5929 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5930 = *$tmp5929;
frost$core$Int64 $tmp5931 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5930);
frost$core$Int64 $tmp5932 = (frost$core$Int64) {0};
frost$core$Bit $tmp5933 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5931, $tmp5932);
bool $tmp5934 = $tmp5933.value;
if ($tmp5934) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5935 = (frost$core$Int64) {2922};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5936, $tmp5935);
abort(); // unreachable
block10:;
// line 2923
frost$collections$Array* $tmp5937 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5938 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5937, ((frost$core$Object*) $tmp5938));
org$frostlang$frostc$ASTNode* $tmp5939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5939));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2925
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5940 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5941 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5942 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5943 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5942);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5940, $tmp5941, $tmp5943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
frost$collections$Array* $tmp5944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5944));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5940;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5945 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5946 = *$tmp5945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
org$frostlang$regex$RegexParser** $tmp5947 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5948 = *$tmp5947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5948));
frost$threads$MessageQueue** $tmp5949 = &param0->errors;
frost$threads$MessageQueue* $tmp5950 = *$tmp5949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5950));
frost$io$File** $tmp5951 = &param0->path;
frost$io$File* $tmp5952 = *$tmp5951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5952));
frost$core$String** $tmp5953 = &param0->source;
frost$core$String* $tmp5954 = *$tmp5953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5954));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5955 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5956 = *$tmp5955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5956));
frost$collections$Stack** $tmp5957 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5958 = *$tmp5957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5958));
frost$collections$Stack** $tmp5959 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5960 = *$tmp5959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5960));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5961 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5962 = *$tmp5961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
return;

}

