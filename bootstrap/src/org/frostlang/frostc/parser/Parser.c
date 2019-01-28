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
org$frostlang$frostc$parser$Parser$class_type org$frostlang$frostc$parser$Parser$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$Parser$cleanup, org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String, org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q, org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q, org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String, org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$Parser$startSpeculative, org$frostlang$frostc$parser$Parser$accept, org$frostlang$frostc$parser$Parser$rewind, org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String, org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode, org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$alignmentString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode, org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q, org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT, org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q, org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q} };

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
typedef frost$core$Bit (*$fn2301)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2358)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2450)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2641)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2795)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2937)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3134)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3351)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3859)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3884)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3920)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3937)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4257)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4414)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4422)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4750)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4783)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4794)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4919)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4941)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4962)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5022)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5095)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5121)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5186)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5284)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5314)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5495)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5621)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5696)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5801)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5820)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 34, 1088483445082520168, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67", 12, -673795321792812913, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 4872307991516742361, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 106, 2225543338790490809, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x31\x27", 5, 14631941951, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s4008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s4015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

void org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(org$frostlang$frostc$parser$Parser* param0, frost$threads$MessageQueue* param1) {

// line 37
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
$tmp28 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp28->value = $tmp27;
frost$collections$Stack$push$frost$collections$Stack$T($tmp26, ((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 62
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
org$frostlang$frostc$ASTNode* $tmp771 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {9};
$fn774 $tmp773 = ($fn774) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp775 = $tmp773(param1);
org$frostlang$frostc$ASTNode* $tmp776 = *(&local0);
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
org$frostlang$frostc$ASTNode* $tmp779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp780 = (frost$core$Int64) {45};
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
org$frostlang$frostc$ASTNode* $tmp995 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp996 = (frost$core$Int64) {45};
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
org$frostlang$frostc$ASTNode* $tmp1026 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1027 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1028 = *(&local2);
org$frostlang$frostc$Position $tmp1029 = $tmp1028.position;
frost$core$String* $tmp1030 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1026, $tmp1027, $tmp1029, $tmp1030);
frost$collections$Array$add$frost$collections$Array$T($tmp1025, ((frost$core$Object*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 419
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
org$frostlang$frostc$ASTNode* $tmp1067 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1068 = (frost$core$Int64) {45};
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
org$frostlang$frostc$ASTNode* $tmp1089 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1090 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1091 = *(&local2);
org$frostlang$frostc$Position $tmp1092 = $tmp1091.position;
frost$core$String* $tmp1093 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1089, $tmp1090, $tmp1092, $tmp1093);
frost$collections$Array$add$frost$collections$Array$T($tmp1088, ((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// line 434
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
org$frostlang$frostc$ASTNode* $tmp1301 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {46};
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
org$frostlang$frostc$ASTNode* $tmp1367 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1368 = (frost$core$Int64) {50};
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
org$frostlang$frostc$ASTNode* $tmp1407 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1408 = (frost$core$Int64) {50};
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
$tmp1489 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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
org$frostlang$frostc$ASTNode* $tmp1587 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1588 = (frost$core$Int64) {46};
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
org$frostlang$frostc$ASTNode* $tmp1620 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1621 = (frost$core$Int64) {50};
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
// line 914
org$frostlang$frostc$parser$Token$nullable $tmp2273 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2273.value), &$s2274);
// line 915
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2275 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2276 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 917
org$frostlang$frostc$ASTNode* $tmp2278 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2279 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$nullable $tmp2280 = *(&local0);
org$frostlang$frostc$Position $tmp2281 = ((org$frostlang$frostc$parser$Token) $tmp2280.value).position;
org$frostlang$frostc$parser$Token $tmp2282 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2283 = $tmp2282.kind;
frost$collections$Array* $tmp2284 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2285 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2284);
org$frostlang$frostc$ASTNode* $tmp2286 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp2278, $tmp2279, $tmp2281, $tmp2283, $tmp2285, $tmp2286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2278;
block19:;
// line 922
org$frostlang$frostc$parser$Token$nullable $tmp2290 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2290.value), &$s2291);
// line 923
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2292 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block39;
block39:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$Bit param1) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
frost$core$String* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 933
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 934
org$frostlang$frostc$parser$Token $tmp2293 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2294 = $tmp2293.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2295;
$tmp2295 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2295->value = $tmp2294;
frost$core$Int64 $tmp2296 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2297 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2296);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2298;
$tmp2298 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2298->value = $tmp2297;
ITable* $tmp2299 = ((frost$core$Equatable*) $tmp2295)->$class->itable;
while ($tmp2299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2299 = $tmp2299->next;
}
$fn2301 $tmp2300 = $tmp2299->methods[0];
frost$core$Bit $tmp2302 = $tmp2300(((frost$core$Equatable*) $tmp2295), ((frost$core$Equatable*) $tmp2298));
bool $tmp2303 = $tmp2302.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2298)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2295)));
if ($tmp2303) goto block1; else goto block3;
block1:;
// line 935
org$frostlang$frostc$ASTNode* $tmp2304 = org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
org$frostlang$frostc$ASTNode* $tmp2305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local0) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// line 936
org$frostlang$frostc$ASTNode* $tmp2306 = *(&local0);
frost$core$Bit $tmp2307 = frost$core$Bit$init$builtin_bit($tmp2306 == NULL);
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block4; else goto block5;
block4:;
// line 937
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 941
frost$core$Int64 $tmp2310 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2311 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2310);
org$frostlang$frostc$parser$Token$nullable $tmp2312 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2311, &$s2313);
*(&local1) = $tmp2312;
// line 942
org$frostlang$frostc$parser$Token$nullable $tmp2314 = *(&local1);
frost$core$Bit $tmp2315 = frost$core$Bit$init$builtin_bit(!$tmp2314.nonnull);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block6; else goto block7;
block6:;
// line 943
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 945
frost$core$MutableString* $tmp2318 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp2319 = *(&local1);
frost$core$String* $tmp2320 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2319.value));
frost$core$MutableString$init$frost$core$String($tmp2318, $tmp2320);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$MutableString* $tmp2321 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local2) = $tmp2318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
// line 946
goto block8;
block8:;
frost$core$Int64 $tmp2322 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp2323 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2322);
org$frostlang$frostc$parser$Token$nullable $tmp2324 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2323);
frost$core$Bit $tmp2325 = frost$core$Bit$init$builtin_bit($tmp2324.nonnull);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block9; else goto block10;
block9:;
// line 947
frost$core$Int64 $tmp2327 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2328 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2327);
org$frostlang$frostc$parser$Token$nullable $tmp2329 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2328, &$s2330);
*(&local3) = $tmp2329;
// line 948
org$frostlang$frostc$parser$Token$nullable $tmp2331 = *(&local3);
frost$core$Bit $tmp2332 = frost$core$Bit$init$builtin_bit(!$tmp2331.nonnull);
bool $tmp2333 = $tmp2332.value;
if ($tmp2333) goto block11; else goto block12;
block11:;
// line 949
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2334 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 951
frost$core$MutableString* $tmp2336 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2336, &$s2337);
// line 952
frost$core$MutableString* $tmp2338 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp2339 = *(&local3);
frost$core$String* $tmp2340 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2339.value));
frost$core$MutableString$append$frost$core$String($tmp2338, $tmp2340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
goto block8;
block10:;
// line 954
frost$core$MutableString* $tmp2341 = *(&local2);
frost$core$String* $tmp2342 = frost$core$MutableString$finish$R$frost$core$String($tmp2341);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$String* $tmp2343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
*(&local4) = $tmp2342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
// line 955
org$frostlang$frostc$ASTNode* $tmp2344 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2345 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2346 = *(&local1);
org$frostlang$frostc$Position $tmp2347 = ((org$frostlang$frostc$parser$Token) $tmp2346.value).position;
frost$core$String* $tmp2348 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2344, $tmp2345, $tmp2347, $tmp2348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
org$frostlang$frostc$ASTNode* $tmp2349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
*(&local0) = $tmp2344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
// line 956
org$frostlang$frostc$parser$Token $tmp2350 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2351 = $tmp2350.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2352;
$tmp2352 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2352->value = $tmp2351;
frost$core$Int64 $tmp2353 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2354 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2353);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2355;
$tmp2355 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2355->value = $tmp2354;
ITable* $tmp2356 = ((frost$core$Equatable*) $tmp2352)->$class->itable;
while ($tmp2356->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2356 = $tmp2356->next;
}
$fn2358 $tmp2357 = $tmp2356->methods[0];
frost$core$Bit $tmp2359 = $tmp2357(((frost$core$Equatable*) $tmp2352), ((frost$core$Equatable*) $tmp2355));
bool $tmp2360 = $tmp2359.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2355)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2352)));
if ($tmp2360) goto block13; else goto block14;
block13:;
// line 959
bool $tmp2361 = param1.value;
if ($tmp2361) goto block15; else goto block16;
block15:;
// line 960
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 962
org$frostlang$frostc$parser$Token $tmp2362 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 963
frost$collections$Array* $tmp2363 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2363);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$collections$Array* $tmp2364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local5) = $tmp2363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
// line 964
frost$core$Bit $tmp2365 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2366 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2365);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
*(&local6) = $tmp2366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
// line 965
org$frostlang$frostc$ASTNode* $tmp2368 = *(&local6);
frost$core$Bit $tmp2369 = frost$core$Bit$init$builtin_bit($tmp2368 == NULL);
bool $tmp2370 = $tmp2369.value;
if ($tmp2370) goto block17; else goto block18;
block17:;
// line 966
bool $tmp2371 = param1.value;
if ($tmp2371) goto block19; else goto block20;
block19:;
// line 967
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 968
org$frostlang$frostc$ASTNode* $tmp2372 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
org$frostlang$frostc$ASTNode* $tmp2373 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2374 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2372;
block20:;
// line 970
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2378 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2379 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2380 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2381 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 972
frost$collections$Array* $tmp2383 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2384 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2383, ((frost$core$Object*) $tmp2384));
// line 973
goto block21;
block21:;
frost$core$Int64 $tmp2385 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2386 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2385);
org$frostlang$frostc$parser$Token$nullable $tmp2387 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2386);
frost$core$Bit $tmp2388 = frost$core$Bit$init$builtin_bit($tmp2387.nonnull);
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block22; else goto block23;
block22:;
// line 974
frost$core$Bit $tmp2390 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2391 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
org$frostlang$frostc$ASTNode* $tmp2392 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local6) = $tmp2391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// line 975
org$frostlang$frostc$ASTNode* $tmp2393 = *(&local6);
frost$core$Bit $tmp2394 = frost$core$Bit$init$builtin_bit($tmp2393 == NULL);
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block24; else goto block25;
block24:;
// line 976
bool $tmp2396 = param1.value;
if ($tmp2396) goto block26; else goto block27;
block26:;
// line 977
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 978
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
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
return $tmp2397;
block27:;
// line 980
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2403 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2404 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2406 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 982
frost$collections$Array* $tmp2408 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2409 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2408, ((frost$core$Object*) $tmp2409));
goto block21;
block23:;
// line 984
frost$core$Int64 $tmp2410 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2411 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2410);
org$frostlang$frostc$parser$Token$nullable $tmp2412 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2411, &$s2413);
frost$core$Bit $tmp2414 = frost$core$Bit$init$builtin_bit(!$tmp2412.nonnull);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block28; else goto block29;
block28:;
// line 985
bool $tmp2416 = param1.value;
if ($tmp2416) goto block30; else goto block31;
block30:;
// line 986
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 987
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
block31:;
// line 989
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
block29:;
// line 991
org$frostlang$frostc$ASTNode* $tmp2428 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2429 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$nullable $tmp2430 = *(&local1);
org$frostlang$frostc$Position $tmp2431 = ((org$frostlang$frostc$parser$Token) $tmp2430.value).position;
frost$core$String* $tmp2432 = *(&local4);
frost$collections$Array* $tmp2433 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2434 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2433);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2428, $tmp2429, $tmp2431, $tmp2432, $tmp2434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
org$frostlang$frostc$ASTNode* $tmp2435 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local0) = $tmp2428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
// line 993
bool $tmp2436 = param1.value;
if ($tmp2436) goto block32; else goto block33;
block32:;
// line 994
org$frostlang$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2437 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2438 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2439 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2440 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 998
frost$core$Int64 $tmp2441 = (frost$core$Int64) {98};
org$frostlang$frostc$parser$Token$Kind $tmp2442 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2441);
org$frostlang$frostc$parser$Token$nullable $tmp2443 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2442);
frost$core$Bit $tmp2444 = frost$core$Bit$init$builtin_bit($tmp2443.nonnull);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block34; else goto block35;
block34:;
// line 999
org$frostlang$frostc$ASTNode* $tmp2446 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2447 = (frost$core$Int64) {32};
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local0);
$fn2450 $tmp2449 = ($fn2450) $tmp2448->$class->vtable[2];
org$frostlang$frostc$Position $tmp2451 = $tmp2449($tmp2448);
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp2446, $tmp2447, $tmp2451, $tmp2452);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local0) = $tmp2446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
goto block35;
block35:;
// line 1001
org$frostlang$frostc$ASTNode* $tmp2454 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
org$frostlang$frostc$ASTNode* $tmp2455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2454;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1008
frost$core$Int64 $tmp2456 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2457 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2456);
org$frostlang$frostc$parser$Token$nullable $tmp2458 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2457, &$s2459);
frost$core$Bit $tmp2460 = frost$core$Bit$init$builtin_bit(!$tmp2458.nonnull);
bool $tmp2461 = $tmp2460.value;
if ($tmp2461) goto block1; else goto block2;
block1:;
// line 1009
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1011
frost$collections$Array* $tmp2462 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2462);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$collections$Array* $tmp2463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local0) = $tmp2462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
// line 1
// line 1013
org$frostlang$frostc$ASTNode* $tmp2464 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
org$frostlang$frostc$ASTNode* $tmp2465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local1) = $tmp2464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
// line 1014
org$frostlang$frostc$ASTNode* $tmp2466 = *(&local1);
frost$core$Bit $tmp2467 = frost$core$Bit$init$builtin_bit($tmp2466 == NULL);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block3; else goto block4;
block3:;
// line 1015
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 1017
frost$collections$Array* $tmp2471 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2472 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2471, ((frost$core$Object*) $tmp2472));
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1019
goto block5;
block5:;
frost$core$Int64 $tmp2474 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2475 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2474);
org$frostlang$frostc$parser$Token$nullable $tmp2476 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2475);
frost$core$Bit $tmp2477 = frost$core$Bit$init$builtin_bit($tmp2476.nonnull);
bool $tmp2478 = $tmp2477.value;
if ($tmp2478) goto block6; else goto block7;
block6:;
// line 1020
org$frostlang$frostc$ASTNode* $tmp2479 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
org$frostlang$frostc$ASTNode* $tmp2480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local2) = $tmp2479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
// line 1021
org$frostlang$frostc$ASTNode* $tmp2481 = *(&local2);
frost$core$Bit $tmp2482 = frost$core$Bit$init$builtin_bit($tmp2481 == NULL);
bool $tmp2483 = $tmp2482.value;
if ($tmp2483) goto block8; else goto block9;
block8:;
// line 1022
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2484 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2485 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 1024
frost$collections$Array* $tmp2486 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2487 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2486, ((frost$core$Object*) $tmp2487));
org$frostlang$frostc$ASTNode* $tmp2488 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1026
frost$core$Int64 $tmp2489 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2490 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2489);
org$frostlang$frostc$parser$Token$nullable $tmp2491 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2490, &$s2492);
frost$core$Bit $tmp2493 = frost$core$Bit$init$builtin_bit(!$tmp2491.nonnull);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block10; else goto block11;
block10:;
// line 1027
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2495 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 1029
frost$collections$Array* $tmp2496 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp2497 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
frost$collections$Array* $tmp2498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2497;

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
// line 1043
org$frostlang$frostc$ASTNode* $tmp2499 = org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$ASTNode* $tmp2500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local0) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// line 1044
org$frostlang$frostc$ASTNode* $tmp2501 = *(&local0);
frost$core$Bit $tmp2502 = frost$core$Bit$init$builtin_bit($tmp2501 == NULL);
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block1; else goto block2;
block1:;
// line 1045
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1047
goto block3;
block3:;
// line 1048
org$frostlang$frostc$parser$Token $tmp2505 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2505;
// line 1049
org$frostlang$frostc$parser$Token $tmp2506 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2507 = $tmp2506.kind;
frost$core$Int64 $tmp2508 = $tmp2507.$rawValue;
frost$core$Int64 $tmp2509 = (frost$core$Int64) {107};
frost$core$Bit $tmp2510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2508, $tmp2509);
bool $tmp2511 = $tmp2510.value;
if ($tmp2511) goto block6; else goto block7;
block6:;
// line 1051
frost$collections$Stack** $tmp2512 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2513 = *$tmp2512;
frost$core$Bit $tmp2514 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2515;
$tmp2515 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2515->value = $tmp2514;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2513, ((frost$core$Object*) $tmp2515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
// line 1052
frost$collections$Array* $tmp2516 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2516);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
frost$collections$Array* $tmp2517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local2) = $tmp2516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
// line 1053
frost$core$Int64 $tmp2518 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2519 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2518);
org$frostlang$frostc$parser$Token$nullable $tmp2520 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2519);
frost$core$Bit $tmp2521 = frost$core$Bit$init$builtin_bit(!$tmp2520.nonnull);
bool $tmp2522 = $tmp2521.value;
if ($tmp2522) goto block8; else goto block9;
block8:;
// line 1054
org$frostlang$frostc$ASTNode* $tmp2523 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
org$frostlang$frostc$ASTNode* $tmp2524 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local3) = $tmp2523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
// line 1055
org$frostlang$frostc$ASTNode* $tmp2525 = *(&local3);
frost$core$Bit $tmp2526 = frost$core$Bit$init$builtin_bit($tmp2525 == NULL);
bool $tmp2527 = $tmp2526.value;
if ($tmp2527) goto block10; else goto block11;
block10:;
// line 1056
frost$collections$Stack** $tmp2528 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2529 = *$tmp2528;
frost$core$Object* $tmp2530 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2529);
frost$core$Frost$unref$frost$core$Object$Q($tmp2530);
// line 1057
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2531 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2532 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1059
frost$collections$Array* $tmp2534 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2535 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2534, ((frost$core$Object*) $tmp2535));
// line 1060
goto block12;
block12:;
frost$core$Int64 $tmp2536 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2537 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2536);
org$frostlang$frostc$parser$Token$nullable $tmp2538 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2537);
frost$core$Bit $tmp2539 = frost$core$Bit$init$builtin_bit($tmp2538.nonnull);
bool $tmp2540 = $tmp2539.value;
if ($tmp2540) goto block13; else goto block14;
block13:;
// line 1061
org$frostlang$frostc$ASTNode* $tmp2541 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
org$frostlang$frostc$ASTNode* $tmp2542 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local3) = $tmp2541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
// line 1062
org$frostlang$frostc$ASTNode* $tmp2543 = *(&local3);
frost$core$Bit $tmp2544 = frost$core$Bit$init$builtin_bit($tmp2543 == NULL);
bool $tmp2545 = $tmp2544.value;
if ($tmp2545) goto block15; else goto block16;
block15:;
// line 1063
frost$collections$Stack** $tmp2546 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2547 = *$tmp2546;
frost$core$Object* $tmp2548 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2547);
frost$core$Frost$unref$frost$core$Object$Q($tmp2548);
// line 1064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2549 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2550 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2551 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1066
frost$collections$Array* $tmp2552 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2553 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2552, ((frost$core$Object*) $tmp2553));
goto block12;
block14:;
// line 1068
frost$core$Int64 $tmp2554 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2555 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2554);
org$frostlang$frostc$parser$Token$nullable $tmp2556 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2555, &$s2557);
frost$core$Bit $tmp2558 = frost$core$Bit$init$builtin_bit(!$tmp2556.nonnull);
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block17; else goto block18;
block17:;
// line 1069
frost$collections$Stack** $tmp2560 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2561 = *$tmp2560;
frost$core$Object* $tmp2562 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2561);
frost$core$Frost$unref$frost$core$Object$Q($tmp2562);
// line 1070
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2563 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2564 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2565 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
org$frostlang$frostc$ASTNode* $tmp2566 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1073
frost$collections$Stack** $tmp2567 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2568 = *$tmp2567;
frost$core$Object* $tmp2569 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2568);
frost$core$Frost$unref$frost$core$Object$Q($tmp2569);
// line 1074
org$frostlang$frostc$ASTNode* $tmp2570 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2571 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token $tmp2572 = *(&local1);
org$frostlang$frostc$Position $tmp2573 = $tmp2572.position;
org$frostlang$frostc$ASTNode* $tmp2574 = *(&local0);
frost$collections$Array* $tmp2575 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2576 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2575);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2570, $tmp2571, $tmp2573, $tmp2574, $tmp2576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
org$frostlang$frostc$ASTNode* $tmp2577 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
*(&local0) = $tmp2570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
frost$collections$Array* $tmp2578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2579 = (frost$core$Int64) {105};
frost$core$Bit $tmp2580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2508, $tmp2579);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block19; else goto block20;
block19:;
// line 1078
org$frostlang$frostc$ASTNode* $tmp2582 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
org$frostlang$frostc$ASTNode* $tmp2583 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local4) = $tmp2582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
// line 1079
org$frostlang$frostc$ASTNode* $tmp2584 = *(&local4);
frost$core$Bit $tmp2585 = frost$core$Bit$init$builtin_bit($tmp2584 == NULL);
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block21; else goto block22;
block21:;
// line 1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2587 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2588 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1082
frost$core$Int64 $tmp2589 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2590 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2589);
org$frostlang$frostc$parser$Token$nullable $tmp2591 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2590, &$s2592);
frost$core$Bit $tmp2593 = frost$core$Bit$init$builtin_bit(!$tmp2591.nonnull);
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block23; else goto block24;
block23:;
// line 1083
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2595 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2596 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block24:;
// line 1085
org$frostlang$frostc$ASTNode* $tmp2597 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2598 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2599 = *(&local1);
org$frostlang$frostc$Position $tmp2600 = $tmp2599.position;
org$frostlang$frostc$ASTNode* $tmp2601 = *(&local0);
frost$core$Int64 $tmp2602 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp2603 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2602);
org$frostlang$frostc$ASTNode* $tmp2604 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2597, $tmp2598, $tmp2600, $tmp2601, $tmp2603, $tmp2604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
org$frostlang$frostc$ASTNode* $tmp2605 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
*(&local0) = $tmp2597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
org$frostlang$frostc$ASTNode* $tmp2606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2607 = (frost$core$Int64) {102};
frost$core$Bit $tmp2608 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2508, $tmp2607);
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block25; else goto block26;
block25:;
// line 1088
*(&local5) = ((frost$core$String*) NULL);
// line 1089
frost$core$Int64 $tmp2610 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp2611 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2610);
org$frostlang$frostc$parser$Token$nullable $tmp2612 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2611);
frost$core$Bit $tmp2613 = frost$core$Bit$init$builtin_bit($tmp2612.nonnull);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block27; else goto block29;
block27:;
// line 1090
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2615));
frost$core$String* $tmp2616 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local5) = &$s2615;
goto block28;
block29:;
// line 1
// line 1093
frost$core$String* $tmp2617 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
frost$core$String* $tmp2618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local5) = $tmp2617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
// line 1094
frost$core$String* $tmp2619 = *(&local5);
frost$core$Bit $tmp2620 = frost$core$Bit$init$builtin_bit($tmp2619 == NULL);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block30; else goto block31;
block30:;
// line 1095
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2622 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2623 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1098
org$frostlang$frostc$ASTNode* $tmp2624 = *(&local0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
org$frostlang$frostc$ASTNode* $tmp2625 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local6) = $tmp2624;
// line 1099
org$frostlang$frostc$ASTNode* $tmp2626 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2627 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token $tmp2628 = *(&local1);
org$frostlang$frostc$Position $tmp2629 = $tmp2628.position;
org$frostlang$frostc$ASTNode* $tmp2630 = *(&local6);
frost$core$String* $tmp2631 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2626, $tmp2627, $tmp2629, $tmp2630, $tmp2631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
org$frostlang$frostc$ASTNode* $tmp2632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
*(&local0) = $tmp2626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// line 1100
org$frostlang$frostc$parser$Token $tmp2633 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2634 = $tmp2633.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2635;
$tmp2635 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2635->value = $tmp2634;
frost$core$Int64 $tmp2636 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2637 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2636);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2638;
$tmp2638 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2638->value = $tmp2637;
ITable* $tmp2639 = ((frost$core$Equatable*) $tmp2635)->$class->itable;
while ($tmp2639->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2639 = $tmp2639->next;
}
$fn2641 $tmp2640 = $tmp2639->methods[0];
frost$core$Bit $tmp2642 = $tmp2640(((frost$core$Equatable*) $tmp2635), ((frost$core$Equatable*) $tmp2638));
bool $tmp2643 = $tmp2642.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2638)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2635)));
if ($tmp2643) goto block32; else goto block33;
block32:;
// line 1101
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1102
org$frostlang$frostc$FixedArray* $tmp2644 = org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlang$frostc$FixedArray* $tmp2645 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local7) = $tmp2644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
// line 1103
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local7);
frost$core$Bit $tmp2647 = frost$core$Bit$init$builtin_bit($tmp2646 != NULL);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block34; else goto block36;
block34:;
// line 1104
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1105
org$frostlang$frostc$ASTNode* $tmp2649 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2650 = (frost$core$Int64) {17};
org$frostlang$frostc$parser$Token $tmp2651 = *(&local1);
org$frostlang$frostc$Position $tmp2652 = $tmp2651.position;
org$frostlang$frostc$ASTNode* $tmp2653 = *(&local6);
frost$core$String* $tmp2654 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2655 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2649, $tmp2650, $tmp2652, $tmp2653, $tmp2654, $tmp2655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
org$frostlang$frostc$ASTNode* $tmp2656 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local0) = $tmp2649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
goto block35;
block36:;
// line 1
// line 1108
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1109
org$frostlang$frostc$ASTNode* $tmp2657 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
org$frostlang$frostc$FixedArray* $tmp2658 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2659 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2660 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2657;
block35:;
org$frostlang$frostc$FixedArray* $tmp2662 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2663 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2664 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2665 = (frost$core$Int64) {93};
frost$core$Bit $tmp2666 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2508, $tmp2665);
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block37; else goto block38;
block37:;
// line 1114
org$frostlang$frostc$ASTNode* $tmp2668 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local8) = $tmp2668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
// line 1115
org$frostlang$frostc$ASTNode* $tmp2670 = *(&local8);
frost$core$Bit $tmp2671 = frost$core$Bit$init$builtin_bit($tmp2670 == NULL);
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block39; else goto block40;
block39:;
// line 1116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2673 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 1118
org$frostlang$frostc$ASTNode* $tmp2675 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2676 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2677 = *(&local1);
org$frostlang$frostc$Position $tmp2678 = $tmp2677.position;
org$frostlang$frostc$ASTNode* $tmp2679 = *(&local0);
frost$core$Int64 $tmp2680 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp2681 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2680);
org$frostlang$frostc$ASTNode* $tmp2682 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2675, $tmp2676, $tmp2678, $tmp2679, $tmp2681, $tmp2682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
org$frostlang$frostc$ASTNode* $tmp2683 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local0) = $tmp2675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
org$frostlang$frostc$ASTNode* $tmp2684 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {66};
frost$core$Bit $tmp2686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2508, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block41; else goto block42;
block41:;
// line 1123
org$frostlang$frostc$parser$Token $tmp2688 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2688);
// line 1124
org$frostlang$frostc$ASTNode* $tmp2689 = *(&local0);
frost$core$String* $tmp2690 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2689);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$core$String* $tmp2691 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local9) = $tmp2690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
// line 1125
frost$core$String* $tmp2692 = *(&local9);
frost$core$Bit $tmp2693 = frost$core$Bit$init$builtin_bit($tmp2692 != NULL);
bool $tmp2694 = $tmp2693.value;
if ($tmp2694) goto block43; else goto block44;
block43:;
// line 1126
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1127
org$frostlang$frostc$parser$Token $tmp2695 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1130
frost$collections$Array* $tmp2696 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2696);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$collections$Array* $tmp2697 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local10) = $tmp2696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
// line 1131
frost$core$Bit $tmp2698 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2699 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2698);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
org$frostlang$frostc$ASTNode* $tmp2700 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local11) = $tmp2699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
// line 1132
org$frostlang$frostc$ASTNode* $tmp2701 = *(&local11);
frost$core$Bit $tmp2702 = frost$core$Bit$init$builtin_bit($tmp2701 == NULL);
bool $tmp2703 = $tmp2702.value;
if ($tmp2703) goto block45; else goto block46;
block45:;
// line 1133
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1134
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
org$frostlang$frostc$ASTNode* $tmp2705 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2706 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2707 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2708 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2704;
block46:;
// line 1136
frost$collections$Array* $tmp2709 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2710 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2709, ((frost$core$Object*) $tmp2710));
// line 1137
goto block47;
block47:;
frost$core$Int64 $tmp2711 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2712 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2711);
org$frostlang$frostc$parser$Token$nullable $tmp2713 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2712);
frost$core$Bit $tmp2714 = frost$core$Bit$init$builtin_bit($tmp2713.nonnull);
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block48; else goto block49;
block48:;
// line 1138
frost$core$Bit $tmp2716 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2717 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$ASTNode* $tmp2718 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local11) = $tmp2717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
// line 1139
org$frostlang$frostc$ASTNode* $tmp2719 = *(&local11);
frost$core$Bit $tmp2720 = frost$core$Bit$init$builtin_bit($tmp2719 == NULL);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block50; else goto block51;
block50:;
// line 1140
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1141
org$frostlang$frostc$ASTNode* $tmp2722 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
org$frostlang$frostc$ASTNode* $tmp2723 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2724 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2725 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2722;
block51:;
// line 1143
frost$collections$Array* $tmp2727 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2728 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2727, ((frost$core$Object*) $tmp2728));
goto block47;
block49:;
// line 1145
frost$core$Int64 $tmp2729 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2730 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2729);
org$frostlang$frostc$parser$Token$nullable $tmp2731 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2730, &$s2732);
*(&local12) = $tmp2731;
// line 1146
org$frostlang$frostc$parser$Token$nullable $tmp2733 = *(&local12);
frost$core$Bit $tmp2734 = frost$core$Bit$init$builtin_bit(!$tmp2733.nonnull);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block52; else goto block53;
block52:;
// line 1147
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1148
org$frostlang$frostc$ASTNode* $tmp2736 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
org$frostlang$frostc$ASTNode* $tmp2737 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2738 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2739 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2736;
block53:;
// line 1177
// line 1178
frost$collections$Stack** $tmp2741 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2742 = *$tmp2741;
frost$core$Int64 $tmp2743 = (frost$core$Int64) {0};
frost$core$Object* $tmp2744 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2742, $tmp2743);
bool $tmp2745 = ((frost$core$Bit$wrapper*) $tmp2744)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2744);
if ($tmp2745) goto block54; else goto block56;
block54:;
// line 1179
org$frostlang$frostc$parser$Token $tmp2746 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local14) = $tmp2746;
// line 1180
org$frostlang$frostc$parser$Token $tmp2747 = *(&local14);
org$frostlang$frostc$parser$Token$Kind $tmp2748 = $tmp2747.kind;
frost$core$Int64 $tmp2749 = $tmp2748.$rawValue;
frost$core$Int64 $tmp2750 = (frost$core$Int64) {102};
frost$core$Bit $tmp2751 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2749, $tmp2750);
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2753 = (frost$core$Int64) {109};
frost$core$Bit $tmp2754 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2749, $tmp2753);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2756 = (frost$core$Int64) {93};
frost$core$Bit $tmp2757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2749, $tmp2756);
bool $tmp2758 = $tmp2757.value;
if ($tmp2758) goto block58; else goto block61;
block58:;
// line 1182
frost$core$Bit $tmp2759 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2759;
goto block57;
block61:;
frost$core$Int64 $tmp2760 = (frost$core$Int64) {107};
frost$core$Bit $tmp2761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2749, $tmp2760);
bool $tmp2762 = $tmp2761.value;
if ($tmp2762) goto block62; else goto block63;
block62:;
// line 1185
org$frostlang$frostc$parser$Token $tmp2763 = *(&local14);
org$frostlang$frostc$Position $tmp2764 = $tmp2763.position;
frost$core$Int64 $tmp2765 = $tmp2764.line;
org$frostlang$frostc$parser$Token$nullable $tmp2766 = *(&local12);
org$frostlang$frostc$Position $tmp2767 = ((org$frostlang$frostc$parser$Token) $tmp2766.value).position;
frost$core$Int64 $tmp2768 = $tmp2767.line;
frost$core$Bit $tmp2769 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2765, $tmp2768);
bool $tmp2770 = $tmp2769.value;
if ($tmp2770) goto block64; else goto block65;
block64:;
org$frostlang$frostc$parser$Token $tmp2771 = *(&local14);
org$frostlang$frostc$Position $tmp2772 = $tmp2771.position;
frost$core$Int64 $tmp2773 = $tmp2772.column;
org$frostlang$frostc$parser$Token$nullable $tmp2774 = *(&local12);
org$frostlang$frostc$Position $tmp2775 = ((org$frostlang$frostc$parser$Token) $tmp2774.value).position;
frost$core$Int64 $tmp2776 = $tmp2775.column;
frost$core$Int64 $tmp2777 = (frost$core$Int64) {1};
int64_t $tmp2778 = $tmp2776.value;
int64_t $tmp2779 = $tmp2777.value;
int64_t $tmp2780 = $tmp2778 + $tmp2779;
frost$core$Int64 $tmp2781 = (frost$core$Int64) {$tmp2780};
frost$core$Bit $tmp2782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2773, $tmp2781);
*(&local15) = $tmp2782;
goto block66;
block65:;
*(&local15) = $tmp2769;
goto block66;
block66:;
frost$core$Bit $tmp2783 = *(&local15);
*(&local13) = $tmp2783;
goto block57;
block63:;
// line 1189
frost$core$Bit $tmp2784 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2784;
goto block57;
block57:;
// line 1192
frost$core$Bit $tmp2785 = *(&local13);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block67; else goto block68;
block67:;
// line 1193
org$frostlang$frostc$parser$Token $tmp2787 = *(&local14);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2787);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1197
frost$core$Bit $tmp2788 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2788;
goto block55;
block55:;
// line 1199
frost$core$Bit $tmp2789 = *(&local13);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block69; else goto block71;
block69:;
// line 1200
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1201
org$frostlang$frostc$ASTNode* $tmp2791 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2792 = (frost$core$Int64) {21};
org$frostlang$frostc$ASTNode* $tmp2793 = *(&local0);
$fn2795 $tmp2794 = ($fn2795) $tmp2793->$class->vtable[2];
org$frostlang$frostc$Position $tmp2796 = $tmp2794($tmp2793);
frost$core$String* $tmp2797 = *(&local9);
frost$collections$Array* $tmp2798 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2799 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2798);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2791, $tmp2792, $tmp2796, $tmp2797, $tmp2799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
org$frostlang$frostc$ASTNode* $tmp2800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local0) = $tmp2791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
// line 1203
org$frostlang$frostc$ASTNode* $tmp2801 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2802 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2803 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1206
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1207
org$frostlang$frostc$ASTNode* $tmp2804 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
org$frostlang$frostc$ASTNode* $tmp2805 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2806 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2807 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2808 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2804;
block70:;
org$frostlang$frostc$ASTNode* $tmp2809 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2810 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1210
org$frostlang$frostc$ASTNode* $tmp2811 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
frost$core$String* $tmp2812 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2811;
block42:;
// line 1213
org$frostlang$frostc$parser$Token $tmp2814 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2814);
// line 1214
org$frostlang$frostc$ASTNode* $tmp2815 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$ASTNode* $tmp2816 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2815;
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
// line 1224
org$frostlang$frostc$ASTNode* $tmp2817 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
org$frostlang$frostc$ASTNode* $tmp2818 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
*(&local0) = $tmp2817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// line 1225
org$frostlang$frostc$ASTNode* $tmp2819 = *(&local0);
frost$core$Bit $tmp2820 = frost$core$Bit$init$builtin_bit($tmp2819 == NULL);
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block1; else goto block2;
block1:;
// line 1226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1228
goto block3;
block3:;
// line 1229
frost$core$Int64 $tmp2823 = (frost$core$Int64) {61};
org$frostlang$frostc$parser$Token$Kind $tmp2824 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2823);
org$frostlang$frostc$parser$Token$nullable $tmp2825 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2824);
*(&local1) = $tmp2825;
// line 1230
org$frostlang$frostc$parser$Token$nullable $tmp2826 = *(&local1);
frost$core$Bit $tmp2827 = frost$core$Bit$init$builtin_bit(!$tmp2826.nonnull);
bool $tmp2828 = $tmp2827.value;
if ($tmp2828) goto block5; else goto block6;
block5:;
// line 1231
goto block4;
block6:;
// line 1233
org$frostlang$frostc$ASTNode* $tmp2829 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
org$frostlang$frostc$ASTNode* $tmp2830 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local2) = $tmp2829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// line 1234
org$frostlang$frostc$ASTNode* $tmp2831 = *(&local2);
frost$core$Bit $tmp2832 = frost$core$Bit$init$builtin_bit($tmp2831 == NULL);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block7; else goto block8;
block7:;
// line 1235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2834 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2835 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1237
org$frostlang$frostc$ASTNode* $tmp2836 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2837 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp2838 = *(&local1);
org$frostlang$frostc$Position $tmp2839 = ((org$frostlang$frostc$parser$Token) $tmp2838.value).position;
org$frostlang$frostc$ASTNode* $tmp2840 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp2841 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2842 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp2841.value));
org$frostlang$frostc$ASTNode* $tmp2843 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2836, $tmp2837, $tmp2839, $tmp2840, $tmp2842, $tmp2843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$ASTNode* $tmp2844 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
*(&local0) = $tmp2836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$ASTNode* $tmp2845 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1239
org$frostlang$frostc$ASTNode* $tmp2846 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$ASTNode* $tmp2847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2846;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1246
org$frostlang$frostc$parser$Token $tmp2848 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2848;
// line 1247
org$frostlang$frostc$parser$Token $tmp2849 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2850 = $tmp2849.kind;
frost$core$Int64 $tmp2851 = $tmp2850.$rawValue;
frost$core$Int64 $tmp2852 = (frost$core$Int64) {56};
frost$core$Bit $tmp2853 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2851, $tmp2852);
bool $tmp2854 = $tmp2853.value;
if ($tmp2854) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2855 = (frost$core$Int64) {53};
frost$core$Bit $tmp2856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2851, $tmp2855);
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2858 = (frost$core$Int64) {54};
frost$core$Bit $tmp2859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2851, $tmp2858);
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block2; else goto block5;
block2:;
// line 1249
org$frostlang$frostc$ASTNode* $tmp2861 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
org$frostlang$frostc$ASTNode* $tmp2862 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
*(&local1) = $tmp2861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// line 1250
org$frostlang$frostc$ASTNode* $tmp2863 = *(&local1);
frost$core$Bit $tmp2864 = frost$core$Bit$init$builtin_bit($tmp2863 == NULL);
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block6; else goto block7;
block6:;
// line 1251
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2866 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 1253
org$frostlang$frostc$ASTNode* $tmp2867 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2868 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token $tmp2869 = *(&local0);
org$frostlang$frostc$Position $tmp2870 = $tmp2869.position;
org$frostlang$frostc$parser$Token $tmp2871 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator $tmp2872 = org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator($tmp2871);
org$frostlang$frostc$ASTNode* $tmp2873 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode($tmp2867, $tmp2868, $tmp2870, $tmp2872, $tmp2873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
org$frostlang$frostc$ASTNode* $tmp2874 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2867;
block5:;
// line 1256
org$frostlang$frostc$parser$Token $tmp2875 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2875);
// line 1257
org$frostlang$frostc$ASTNode* $tmp2876 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
return $tmp2876;
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
// line 1269
org$frostlang$frostc$ASTNode* $tmp2877 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlang$frostc$ASTNode* $tmp2878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local0) = $tmp2877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
// line 1270
org$frostlang$frostc$ASTNode* $tmp2879 = *(&local0);
frost$core$Bit $tmp2880 = frost$core$Bit$init$builtin_bit($tmp2879 == NULL);
bool $tmp2881 = $tmp2880.value;
if ($tmp2881) goto block1; else goto block2;
block1:;
// line 1271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2882 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1273
goto block3;
block3:;
// line 1274
org$frostlang$frostc$parser$Token $tmp2883 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2883;
// line 1275
org$frostlang$frostc$parser$Token $tmp2884 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2885 = $tmp2884.kind;
frost$core$Int64 $tmp2886 = $tmp2885.$rawValue;
frost$core$Int64 $tmp2887 = (frost$core$Int64) {57};
frost$core$Bit $tmp2888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2887);
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2890 = (frost$core$Int64) {58};
frost$core$Bit $tmp2891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2890);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2893 = (frost$core$Int64) {59};
frost$core$Bit $tmp2894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2896 = (frost$core$Int64) {60};
frost$core$Bit $tmp2897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2896);
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2899 = (frost$core$Int64) {76};
frost$core$Bit $tmp2900 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2899);
bool $tmp2901 = $tmp2900.value;
if ($tmp2901) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2902 = (frost$core$Int64) {71};
frost$core$Bit $tmp2903 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2902);
bool $tmp2904 = $tmp2903.value;
if ($tmp2904) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp2905 = (frost$core$Int64) {73};
frost$core$Bit $tmp2906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2905);
bool $tmp2907 = $tmp2906.value;
if ($tmp2907) goto block6; else goto block13;
block6:;
// line 1278
org$frostlang$frostc$ASTNode* $tmp2908 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
org$frostlang$frostc$ASTNode* $tmp2909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
*(&local2) = $tmp2908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
// line 1279
org$frostlang$frostc$ASTNode* $tmp2910 = *(&local2);
frost$core$Bit $tmp2911 = frost$core$Bit$init$builtin_bit($tmp2910 == NULL);
bool $tmp2912 = $tmp2911.value;
if ($tmp2912) goto block14; else goto block15;
block14:;
// line 1280
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2914 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1282
org$frostlang$frostc$ASTNode* $tmp2915 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2917 = *(&local1);
org$frostlang$frostc$Position $tmp2918 = $tmp2917.position;
org$frostlang$frostc$ASTNode* $tmp2919 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2920 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2921 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2920);
org$frostlang$frostc$ASTNode* $tmp2922 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2915, $tmp2916, $tmp2918, $tmp2919, $tmp2921, $tmp2922);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
org$frostlang$frostc$ASTNode* $tmp2923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local0) = $tmp2915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
org$frostlang$frostc$ASTNode* $tmp2924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2925 = (frost$core$Int64) {67};
frost$core$Bit $tmp2926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2886, $tmp2925);
bool $tmp2927 = $tmp2926.value;
if ($tmp2927) goto block16; else goto block17;
block16:;
// line 1286
org$frostlang$frostc$parser$Token $tmp2928 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2928;
// line 1287
org$frostlang$frostc$parser$Token $tmp2929 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2930 = $tmp2929.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2931;
$tmp2931 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2931->value = $tmp2930;
frost$core$Int64 $tmp2932 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2933 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2932);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2934;
$tmp2934 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2934->value = $tmp2933;
ITable* $tmp2935 = ((frost$core$Equatable*) $tmp2931)->$class->itable;
while ($tmp2935->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2935 = $tmp2935->next;
}
$fn2937 $tmp2936 = $tmp2935->methods[0];
frost$core$Bit $tmp2938 = $tmp2936(((frost$core$Equatable*) $tmp2931), ((frost$core$Equatable*) $tmp2934));
bool $tmp2939 = $tmp2938.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2934)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2931)));
if ($tmp2939) goto block18; else goto block20;
block18:;
// line 1289
org$frostlang$frostc$ASTNode* $tmp2940 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local4) = $tmp2940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
// line 1290
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local4);
frost$core$Bit $tmp2943 = frost$core$Bit$init$builtin_bit($tmp2942 == NULL);
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block21; else goto block22;
block21:;
// line 1291
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1293
org$frostlang$frostc$ASTNode* $tmp2947 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2948 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2949 = *(&local1);
org$frostlang$frostc$Position $tmp2950 = $tmp2949.position;
org$frostlang$frostc$ASTNode* $tmp2951 = *(&local0);
frost$core$Int64 $tmp2952 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2953 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2952);
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2947, $tmp2948, $tmp2950, $tmp2951, $tmp2953, $tmp2954);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
org$frostlang$frostc$ASTNode* $tmp2955 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local0) = $tmp2947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
org$frostlang$frostc$ASTNode* $tmp2956 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1297
org$frostlang$frostc$parser$Token $tmp2957 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2957);
// line 1298
org$frostlang$frostc$parser$Token $tmp2958 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2958);
// line 1299
org$frostlang$frostc$ASTNode* $tmp2959 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
org$frostlang$frostc$ASTNode* $tmp2960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2959;
block19:;
goto block5;
block17:;
// line 1303
org$frostlang$frostc$parser$Token $tmp2961 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2961);
// line 1304
org$frostlang$frostc$ASTNode* $tmp2962 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2962;
block5:;
goto block3;
block4:;
goto block23;
block23:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1315
org$frostlang$frostc$ASTNode* $tmp2964 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
org$frostlang$frostc$ASTNode* $tmp2965 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local0) = $tmp2964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
// line 1316
org$frostlang$frostc$ASTNode* $tmp2966 = *(&local0);
frost$core$Bit $tmp2967 = frost$core$Bit$init$builtin_bit($tmp2966 == NULL);
bool $tmp2968 = $tmp2967.value;
if ($tmp2968) goto block1; else goto block2;
block1:;
// line 1317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1319
goto block3;
block3:;
// line 1320
org$frostlang$frostc$parser$Token $tmp2970 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2970;
// line 1321
org$frostlang$frostc$parser$Token $tmp2971 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2972 = $tmp2971.kind;
frost$core$Int64 $tmp2973 = $tmp2972.$rawValue;
frost$core$Int64 $tmp2974 = (frost$core$Int64) {55};
frost$core$Bit $tmp2975 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2973, $tmp2974);
bool $tmp2976 = $tmp2975.value;
if ($tmp2976) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2977 = (frost$core$Int64) {56};
frost$core$Bit $tmp2978 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2973, $tmp2977);
bool $tmp2979 = $tmp2978.value;
if ($tmp2979) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2980 = (frost$core$Int64) {75};
frost$core$Bit $tmp2981 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2973, $tmp2980);
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block6; else goto block9;
block6:;
// line 1323
org$frostlang$frostc$ASTNode* $tmp2983 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
org$frostlang$frostc$ASTNode* $tmp2984 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local2) = $tmp2983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
// line 1324
org$frostlang$frostc$ASTNode* $tmp2985 = *(&local2);
frost$core$Bit $tmp2986 = frost$core$Bit$init$builtin_bit($tmp2985 == NULL);
bool $tmp2987 = $tmp2986.value;
if ($tmp2987) goto block10; else goto block11;
block10:;
// line 1325
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2988 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1327
org$frostlang$frostc$ASTNode* $tmp2990 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2991 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2992 = *(&local1);
org$frostlang$frostc$Position $tmp2993 = $tmp2992.position;
org$frostlang$frostc$ASTNode* $tmp2994 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2995 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2996 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2995);
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2990, $tmp2991, $tmp2993, $tmp2994, $tmp2996, $tmp2997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
org$frostlang$frostc$ASTNode* $tmp2998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
*(&local0) = $tmp2990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
org$frostlang$frostc$ASTNode* $tmp2999 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1331
org$frostlang$frostc$parser$Token $tmp3000 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3000);
// line 1332
org$frostlang$frostc$ASTNode* $tmp3001 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
org$frostlang$frostc$ASTNode* $tmp3002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3001;
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
// line 1343
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1344
org$frostlang$frostc$parser$Token $tmp3003 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3004 = $tmp3003.kind;
frost$core$Int64 $tmp3005 = $tmp3004.$rawValue;
frost$core$Int64 $tmp3006 = (frost$core$Int64) {101};
frost$core$Bit $tmp3007 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3005, $tmp3006);
bool $tmp3008 = $tmp3007.value;
if ($tmp3008) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp3009 = (frost$core$Int64) {100};
frost$core$Bit $tmp3010 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3005, $tmp3009);
bool $tmp3011 = $tmp3010.value;
if ($tmp3011) goto block2; else goto block4;
block2:;
// line 1346
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3012 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1349
org$frostlang$frostc$ASTNode* $tmp3013 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local0) = $tmp3013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// line 1350
org$frostlang$frostc$ASTNode* $tmp3015 = *(&local0);
frost$core$Bit $tmp3016 = frost$core$Bit$init$builtin_bit($tmp3015 == NULL);
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block5; else goto block6;
block5:;
// line 1351
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3018 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1355
org$frostlang$frostc$parser$Token $tmp3019 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3019;
// line 1356
org$frostlang$frostc$parser$Token $tmp3020 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3021 = $tmp3020.kind;
frost$core$Int64 $tmp3022 = $tmp3021.$rawValue;
frost$core$Int64 $tmp3023 = (frost$core$Int64) {101};
frost$core$Bit $tmp3024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3022, $tmp3023);
bool $tmp3025 = $tmp3024.value;
if ($tmp3025) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3026 = (frost$core$Int64) {100};
frost$core$Bit $tmp3027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3022, $tmp3026);
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block8; else goto block10;
block8:;
// line 1358
org$frostlang$frostc$parser$Token $tmp3029 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3029;
// line 1359
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1360
org$frostlang$frostc$parser$Token $tmp3030 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3031 = $tmp3030.kind;
frost$core$Int64 $tmp3032 = $tmp3031.$rawValue;
frost$core$Int64 $tmp3033 = (frost$core$Int64) {106};
frost$core$Bit $tmp3034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3033);
bool $tmp3035 = $tmp3034.value;
if ($tmp3035) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3036 = (frost$core$Int64) {108};
frost$core$Bit $tmp3037 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3036);
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block12; else goto block14;
block14:;
frost$core$Int64 $tmp3039 = (frost$core$Int64) {34};
frost$core$Bit $tmp3040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3039);
bool $tmp3041 = $tmp3040.value;
if ($tmp3041) goto block12; else goto block15;
block15:;
frost$core$Int64 $tmp3042 = (frost$core$Int64) {103};
frost$core$Bit $tmp3043 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3042);
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block12; else goto block16;
block16:;
frost$core$Int64 $tmp3045 = (frost$core$Int64) {104};
frost$core$Bit $tmp3046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3045);
bool $tmp3047 = $tmp3046.value;
if ($tmp3047) goto block12; else goto block17;
block17:;
frost$core$Int64 $tmp3048 = (frost$core$Int64) {109};
frost$core$Bit $tmp3049 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3048);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block12; else goto block18;
block18:;
frost$core$Int64 $tmp3051 = (frost$core$Int64) {37};
frost$core$Bit $tmp3052 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3051);
bool $tmp3053 = $tmp3052.value;
if ($tmp3053) goto block12; else goto block19;
block19:;
frost$core$Int64 $tmp3054 = (frost$core$Int64) {33};
frost$core$Bit $tmp3055 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3054);
bool $tmp3056 = $tmp3055.value;
if ($tmp3056) goto block12; else goto block20;
block20:;
frost$core$Int64 $tmp3057 = (frost$core$Int64) {32};
frost$core$Bit $tmp3058 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3057);
bool $tmp3059 = $tmp3058.value;
if ($tmp3059) goto block12; else goto block21;
block21:;
frost$core$Int64 $tmp3060 = (frost$core$Int64) {31};
frost$core$Bit $tmp3061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3060);
bool $tmp3062 = $tmp3061.value;
if ($tmp3062) goto block12; else goto block22;
block22:;
frost$core$Int64 $tmp3063 = (frost$core$Int64) {36};
frost$core$Bit $tmp3064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3063);
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block12; else goto block23;
block23:;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {45};
frost$core$Bit $tmp3067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block12; else goto block24;
block24:;
frost$core$Int64 $tmp3069 = (frost$core$Int64) {39};
frost$core$Bit $tmp3070 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3069);
bool $tmp3071 = $tmp3070.value;
if ($tmp3071) goto block12; else goto block25;
block25:;
frost$core$Int64 $tmp3072 = (frost$core$Int64) {24};
frost$core$Bit $tmp3073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3072);
bool $tmp3074 = $tmp3073.value;
if ($tmp3074) goto block12; else goto block26;
block26:;
frost$core$Int64 $tmp3075 = (frost$core$Int64) {25};
frost$core$Bit $tmp3076 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3075);
bool $tmp3077 = $tmp3076.value;
if ($tmp3077) goto block12; else goto block27;
block27:;
frost$core$Int64 $tmp3078 = (frost$core$Int64) {26};
frost$core$Bit $tmp3079 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3078);
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block12; else goto block28;
block28:;
frost$core$Int64 $tmp3081 = (frost$core$Int64) {27};
frost$core$Bit $tmp3082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3081);
bool $tmp3083 = $tmp3082.value;
if ($tmp3083) goto block12; else goto block29;
block29:;
frost$core$Int64 $tmp3084 = (frost$core$Int64) {23};
frost$core$Bit $tmp3085 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3084);
bool $tmp3086 = $tmp3085.value;
if ($tmp3086) goto block12; else goto block30;
block30:;
frost$core$Int64 $tmp3087 = (frost$core$Int64) {22};
frost$core$Bit $tmp3088 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3087);
bool $tmp3089 = $tmp3088.value;
if ($tmp3089) goto block12; else goto block31;
block31:;
frost$core$Int64 $tmp3090 = (frost$core$Int64) {21};
frost$core$Bit $tmp3091 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3090);
bool $tmp3092 = $tmp3091.value;
if ($tmp3092) goto block12; else goto block32;
block32:;
frost$core$Int64 $tmp3093 = (frost$core$Int64) {47};
frost$core$Bit $tmp3094 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3093);
bool $tmp3095 = $tmp3094.value;
if ($tmp3095) goto block12; else goto block33;
block33:;
frost$core$Int64 $tmp3096 = (frost$core$Int64) {46};
frost$core$Bit $tmp3097 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3032, $tmp3096);
bool $tmp3098 = $tmp3097.value;
if ($tmp3098) goto block12; else goto block34;
block12:;
// line 1374
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3099 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block34:;
// line 1377
org$frostlang$frostc$ASTNode* $tmp3100 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
org$frostlang$frostc$ASTNode* $tmp3101 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local3) = $tmp3100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
// line 1378
org$frostlang$frostc$ASTNode* $tmp3102 = *(&local3);
frost$core$Bit $tmp3103 = frost$core$Bit$init$builtin_bit($tmp3102 == NULL);
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block35; else goto block36;
block35:;
// line 1379
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block11;
block11:;
// line 1383
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1384
frost$core$Int64 $tmp3107 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3108 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3107);
org$frostlang$frostc$parser$Token$nullable $tmp3109 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3108);
frost$core$Bit $tmp3110 = frost$core$Bit$init$builtin_bit($tmp3109.nonnull);
bool $tmp3111 = $tmp3110.value;
if ($tmp3111) goto block37; else goto block39;
block37:;
// line 1385
org$frostlang$frostc$ASTNode* $tmp3112 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$ASTNode* $tmp3113 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local4) = $tmp3112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
// line 1386
org$frostlang$frostc$ASTNode* $tmp3114 = *(&local4);
frost$core$Bit $tmp3115 = frost$core$Bit$init$builtin_bit($tmp3114 == NULL);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block40; else goto block41;
block40:;
// line 1387
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3117 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3118 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
goto block38;
block39:;
// line 1
// line 1391
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3120 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block38:;
// line 1393
org$frostlang$frostc$ASTNode* $tmp3121 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3122 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3123 = *(&local1);
org$frostlang$frostc$Position $tmp3124 = $tmp3123.position;
org$frostlang$frostc$ASTNode* $tmp3125 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3126 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3127 = $tmp3126.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3128;
$tmp3128 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3128->value = $tmp3127;
frost$core$Int64 $tmp3129 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3130 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3129);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3131;
$tmp3131 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3131->value = $tmp3130;
ITable* $tmp3132 = ((frost$core$Equatable*) $tmp3128)->$class->itable;
while ($tmp3132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3132 = $tmp3132->next;
}
$fn3134 $tmp3133 = $tmp3132->methods[0];
frost$core$Bit $tmp3135 = $tmp3133(((frost$core$Equatable*) $tmp3128), ((frost$core$Equatable*) $tmp3131));
org$frostlang$frostc$ASTNode* $tmp3136 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3137 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3121, $tmp3122, $tmp3124, $tmp3125, $tmp3135, $tmp3136, $tmp3137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3128)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
org$frostlang$frostc$ASTNode* $tmp3138 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3139 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3121;
block10:;
// line 1397
org$frostlang$frostc$parser$Token $tmp3141 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3141);
// line 1398
org$frostlang$frostc$ASTNode* $tmp3142 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
org$frostlang$frostc$ASTNode* $tmp3143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3142;
block7:;
goto block42;
block42:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1408
org$frostlang$frostc$ASTNode* $tmp3144 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
org$frostlang$frostc$ASTNode* $tmp3145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
*(&local0) = $tmp3144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
// line 1409
org$frostlang$frostc$ASTNode* $tmp3146 = *(&local0);
frost$core$Bit $tmp3147 = frost$core$Bit$init$builtin_bit($tmp3146 == NULL);
bool $tmp3148 = $tmp3147.value;
if ($tmp3148) goto block1; else goto block2;
block1:;
// line 1410
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1412
goto block3;
block3:;
// line 1413
org$frostlang$frostc$parser$Token $tmp3150 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3150;
// line 1414
org$frostlang$frostc$parser$Token $tmp3151 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3152 = $tmp3151.kind;
frost$core$Int64 $tmp3153 = $tmp3152.$rawValue;
frost$core$Int64 $tmp3154 = (frost$core$Int64) {62};
frost$core$Bit $tmp3155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3154);
bool $tmp3156 = $tmp3155.value;
if ($tmp3156) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3157 = (frost$core$Int64) {63};
frost$core$Bit $tmp3158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3157);
bool $tmp3159 = $tmp3158.value;
if ($tmp3159) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3160 = (frost$core$Int64) {64};
frost$core$Bit $tmp3161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3160);
bool $tmp3162 = $tmp3161.value;
if ($tmp3162) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3163 = (frost$core$Int64) {65};
frost$core$Bit $tmp3164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3163);
bool $tmp3165 = $tmp3164.value;
if ($tmp3165) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3166 = (frost$core$Int64) {66};
frost$core$Bit $tmp3167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3166);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3169 = (frost$core$Int64) {67};
frost$core$Bit $tmp3170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3169);
bool $tmp3171 = $tmp3170.value;
if ($tmp3171) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3172 = (frost$core$Int64) {68};
frost$core$Bit $tmp3173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3172);
bool $tmp3174 = $tmp3173.value;
if ($tmp3174) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3175 = (frost$core$Int64) {69};
frost$core$Bit $tmp3176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3153, $tmp3175);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block6; else goto block14;
block6:;
// line 1423
org$frostlang$frostc$ASTNode* $tmp3178 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
org$frostlang$frostc$ASTNode* $tmp3179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local2) = $tmp3178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
// line 1424
org$frostlang$frostc$ASTNode* $tmp3180 = *(&local2);
frost$core$Bit $tmp3181 = frost$core$Bit$init$builtin_bit($tmp3180 == NULL);
bool $tmp3182 = $tmp3181.value;
if ($tmp3182) goto block15; else goto block16;
block15:;
// line 1425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1427
org$frostlang$frostc$ASTNode* $tmp3185 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3186 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3187 = *(&local1);
org$frostlang$frostc$Position $tmp3188 = $tmp3187.position;
org$frostlang$frostc$ASTNode* $tmp3189 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3190 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3191 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3190);
org$frostlang$frostc$ASTNode* $tmp3192 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3185, $tmp3186, $tmp3188, $tmp3189, $tmp3191, $tmp3192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
org$frostlang$frostc$ASTNode* $tmp3193 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local0) = $tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
org$frostlang$frostc$ASTNode* $tmp3194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1431
org$frostlang$frostc$parser$Token $tmp3195 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3195);
// line 1432
org$frostlang$frostc$ASTNode* $tmp3196 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
org$frostlang$frostc$ASTNode* $tmp3197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3196;
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
// line 1442
org$frostlang$frostc$ASTNode* $tmp3198 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
org$frostlang$frostc$ASTNode* $tmp3199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
*(&local0) = $tmp3198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
// line 1443
org$frostlang$frostc$ASTNode* $tmp3200 = *(&local0);
frost$core$Bit $tmp3201 = frost$core$Bit$init$builtin_bit($tmp3200 == NULL);
bool $tmp3202 = $tmp3201.value;
if ($tmp3202) goto block1; else goto block2;
block1:;
// line 1444
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1446
goto block3;
block3:;
// line 1447
org$frostlang$frostc$parser$Token $tmp3204 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3204;
// line 1448
org$frostlang$frostc$parser$Token $tmp3205 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3206 = $tmp3205.kind;
frost$core$Int64 $tmp3207 = $tmp3206.$rawValue;
frost$core$Int64 $tmp3208 = (frost$core$Int64) {70};
frost$core$Bit $tmp3209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3207, $tmp3208);
bool $tmp3210 = $tmp3209.value;
if ($tmp3210) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3211 = (frost$core$Int64) {74};
frost$core$Bit $tmp3212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3207, $tmp3211);
bool $tmp3213 = $tmp3212.value;
if ($tmp3213) goto block6; else goto block8;
block6:;
// line 1450
org$frostlang$frostc$ASTNode* $tmp3214 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlang$frostc$ASTNode* $tmp3215 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local2) = $tmp3214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// line 1451
org$frostlang$frostc$ASTNode* $tmp3216 = *(&local2);
frost$core$Bit $tmp3217 = frost$core$Bit$init$builtin_bit($tmp3216 == NULL);
bool $tmp3218 = $tmp3217.value;
if ($tmp3218) goto block9; else goto block10;
block9:;
// line 1452
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1454
org$frostlang$frostc$ASTNode* $tmp3221 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3222 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3223 = *(&local1);
org$frostlang$frostc$Position $tmp3224 = $tmp3223.position;
org$frostlang$frostc$ASTNode* $tmp3225 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3226 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3227 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3226);
org$frostlang$frostc$ASTNode* $tmp3228 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3221, $tmp3222, $tmp3224, $tmp3225, $tmp3227, $tmp3228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
org$frostlang$frostc$ASTNode* $tmp3229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
*(&local0) = $tmp3221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
org$frostlang$frostc$ASTNode* $tmp3230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1458
org$frostlang$frostc$parser$Token $tmp3231 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3231);
// line 1459
org$frostlang$frostc$ASTNode* $tmp3232 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
org$frostlang$frostc$ASTNode* $tmp3233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3232;
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
// line 1469
org$frostlang$frostc$ASTNode* $tmp3234 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local0) = $tmp3234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// line 1470
org$frostlang$frostc$ASTNode* $tmp3236 = *(&local0);
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit($tmp3236 == NULL);
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block1; else goto block2;
block1:;
// line 1471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1473
goto block3;
block3:;
// line 1474
frost$core$Int64 $tmp3240 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3241 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3240);
org$frostlang$frostc$parser$Token$nullable $tmp3242 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3241);
*(&local1) = $tmp3242;
// line 1475
org$frostlang$frostc$parser$Token$nullable $tmp3243 = *(&local1);
frost$core$Bit $tmp3244 = frost$core$Bit$init$builtin_bit(!$tmp3243.nonnull);
bool $tmp3245 = $tmp3244.value;
if ($tmp3245) goto block5; else goto block6;
block5:;
// line 1476
goto block4;
block6:;
// line 1478
org$frostlang$frostc$ASTNode* $tmp3246 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
org$frostlang$frostc$ASTNode* $tmp3247 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
*(&local2) = $tmp3246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
// line 1479
org$frostlang$frostc$ASTNode* $tmp3248 = *(&local2);
frost$core$Bit $tmp3249 = frost$core$Bit$init$builtin_bit($tmp3248 == NULL);
bool $tmp3250 = $tmp3249.value;
if ($tmp3250) goto block7; else goto block8;
block7:;
// line 1480
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1482
org$frostlang$frostc$ASTNode* $tmp3253 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3254 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3255 = *(&local1);
org$frostlang$frostc$Position $tmp3256 = ((org$frostlang$frostc$parser$Token) $tmp3255.value).position;
org$frostlang$frostc$ASTNode* $tmp3257 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3258 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3259 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3258.value));
org$frostlang$frostc$ASTNode* $tmp3260 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3253, $tmp3254, $tmp3256, $tmp3257, $tmp3259, $tmp3260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
org$frostlang$frostc$ASTNode* $tmp3261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
*(&local0) = $tmp3253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
org$frostlang$frostc$ASTNode* $tmp3262 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1484
org$frostlang$frostc$ASTNode* $tmp3263 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
org$frostlang$frostc$ASTNode* $tmp3264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3263;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1491
frost$core$Int64 $tmp3265 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3266 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3265);
org$frostlang$frostc$parser$Token$nullable $tmp3267 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3266, &$s3268);
*(&local0) = $tmp3267;
// line 1492
org$frostlang$frostc$parser$Token$nullable $tmp3269 = *(&local0);
frost$core$Bit $tmp3270 = frost$core$Bit$init$builtin_bit(!$tmp3269.nonnull);
bool $tmp3271 = $tmp3270.value;
if ($tmp3271) goto block1; else goto block2;
block1:;
// line 1493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1495
org$frostlang$frostc$ASTNode* $tmp3272 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
org$frostlang$frostc$ASTNode* $tmp3273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
*(&local1) = $tmp3272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
// line 1496
org$frostlang$frostc$ASTNode* $tmp3274 = *(&local1);
frost$core$Bit $tmp3275 = frost$core$Bit$init$builtin_bit($tmp3274 == NULL);
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block3; else goto block4;
block3:;
// line 1497
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1499
org$frostlang$frostc$FixedArray* $tmp3278 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
org$frostlang$frostc$FixedArray* $tmp3279 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
*(&local2) = $tmp3278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
// line 1500
org$frostlang$frostc$FixedArray* $tmp3280 = *(&local2);
frost$core$Bit $tmp3281 = frost$core$Bit$init$builtin_bit($tmp3280 == NULL);
bool $tmp3282 = $tmp3281.value;
if ($tmp3282) goto block5; else goto block6;
block5:;
// line 1501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1503
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1504
frost$core$Int64 $tmp3285 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3286 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3285);
org$frostlang$frostc$parser$Token$nullable $tmp3287 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3286);
frost$core$Bit $tmp3288 = frost$core$Bit$init$builtin_bit($tmp3287.nonnull);
bool $tmp3289 = $tmp3288.value;
if ($tmp3289) goto block7; else goto block9;
block7:;
// line 1505
org$frostlang$frostc$parser$Token $tmp3290 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3291 = $tmp3290.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3292;
$tmp3292 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3292->value = $tmp3291;
frost$core$Int64 $tmp3293 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3294 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3293);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3295;
$tmp3295 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3295->value = $tmp3294;
ITable* $tmp3296 = ((frost$core$Equatable*) $tmp3292)->$class->itable;
while ($tmp3296->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3296 = $tmp3296->next;
}
$fn3298 $tmp3297 = $tmp3296->methods[0];
frost$core$Bit $tmp3299 = $tmp3297(((frost$core$Equatable*) $tmp3292), ((frost$core$Equatable*) $tmp3295));
bool $tmp3300 = $tmp3299.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3295)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3292)));
if ($tmp3300) goto block10; else goto block12;
block10:;
// line 1506
org$frostlang$frostc$ASTNode* $tmp3301 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
org$frostlang$frostc$ASTNode* $tmp3302 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
*(&local3) = $tmp3301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
// line 1507
org$frostlang$frostc$ASTNode* $tmp3303 = *(&local3);
frost$core$Bit $tmp3304 = frost$core$Bit$init$builtin_bit($tmp3303 == NULL);
bool $tmp3305 = $tmp3304.value;
if ($tmp3305) goto block13; else goto block14;
block13:;
// line 1508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3306 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1512
org$frostlang$frostc$ASTNode* $tmp3309 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
org$frostlang$frostc$ASTNode* $tmp3310 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local3) = $tmp3309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
// line 1513
org$frostlang$frostc$ASTNode* $tmp3311 = *(&local3);
frost$core$Bit $tmp3312 = frost$core$Bit$init$builtin_bit($tmp3311 == NULL);
bool $tmp3313 = $tmp3312.value;
if ($tmp3313) goto block15; else goto block16;
block15:;
// line 1514
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3314 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3315 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3316 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3317 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1521
org$frostlang$frostc$ASTNode* $tmp3318 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3319 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3320 = *(&local0);
org$frostlang$frostc$Position $tmp3321 = ((org$frostlang$frostc$parser$Token) $tmp3320.value).position;
org$frostlang$frostc$ASTNode* $tmp3322 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3323 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3324 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3318, $tmp3319, $tmp3321, $tmp3322, $tmp3323, $tmp3324);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
org$frostlang$frostc$ASTNode* $tmp3325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3325));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3318;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1528
frost$core$Int64 $tmp3328 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3329 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3328);
org$frostlang$frostc$parser$Token$nullable $tmp3330 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3329, &$s3331);
frost$core$Bit $tmp3332 = frost$core$Bit$init$builtin_bit(!$tmp3330.nonnull);
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block1; else goto block2;
block1:;
// line 1529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1531
frost$core$Bit $tmp3334 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3335 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
return $tmp3335;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1538
frost$core$Int64 $tmp3336 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3337 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3336);
org$frostlang$frostc$parser$Token$nullable $tmp3338 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3337, &$s3339);
*(&local0) = $tmp3338;
// line 1539
org$frostlang$frostc$parser$Token$nullable $tmp3340 = *(&local0);
frost$core$Bit $tmp3341 = frost$core$Bit$init$builtin_bit(!$tmp3340.nonnull);
bool $tmp3342 = $tmp3341.value;
if ($tmp3342) goto block1; else goto block2;
block1:;
// line 1540
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1542
org$frostlang$frostc$parser$Token $tmp3343 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3344 = $tmp3343.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3345;
$tmp3345 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3345->value = $tmp3344;
frost$core$Int64 $tmp3346 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3347 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3346);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3348;
$tmp3348 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3348->value = $tmp3347;
ITable* $tmp3349 = ((frost$core$Equatable*) $tmp3345)->$class->itable;
while ($tmp3349->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3349 = $tmp3349->next;
}
$fn3351 $tmp3350 = $tmp3349->methods[0];
frost$core$Bit $tmp3352 = $tmp3350(((frost$core$Equatable*) $tmp3345), ((frost$core$Equatable*) $tmp3348));
bool $tmp3353 = $tmp3352.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3348)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3345)));
if ($tmp3353) goto block3; else goto block4;
block3:;
// line 1543
org$frostlang$frostc$ASTNode* $tmp3354 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
org$frostlang$frostc$ASTNode* $tmp3355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
*(&local1) = $tmp3354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
// line 1544
org$frostlang$frostc$ASTNode* $tmp3356 = *(&local1);
frost$core$Bit $tmp3357 = frost$core$Bit$init$builtin_bit($tmp3356 == NULL);
bool $tmp3358 = $tmp3357.value;
if ($tmp3358) goto block5; else goto block6;
block5:;
// line 1545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1547
org$frostlang$frostc$ASTNode* $tmp3360 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3361 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp3362 = *(&local0);
org$frostlang$frostc$Position $tmp3363 = ((org$frostlang$frostc$parser$Token) $tmp3362.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3364 = *(&local0);
frost$core$String* $tmp3365 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3364.value));
org$frostlang$frostc$ASTNode* $tmp3366 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3360, $tmp3361, $tmp3363, $tmp3365, $tmp3366);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
org$frostlang$frostc$ASTNode* $tmp3367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3360;
block4:;
// line 1549
org$frostlang$frostc$ASTNode* $tmp3368 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3369 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3370 = *(&local0);
org$frostlang$frostc$Position $tmp3371 = ((org$frostlang$frostc$parser$Token) $tmp3370.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3372 = *(&local0);
frost$core$String* $tmp3373 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3372.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3368, $tmp3369, $tmp3371, $tmp3373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
return $tmp3368;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1556
frost$core$Int64 $tmp3374 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3375 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3374);
org$frostlang$frostc$parser$Token$nullable $tmp3376 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3375, &$s3377);
*(&local0) = $tmp3376;
// line 1557
org$frostlang$frostc$parser$Token$nullable $tmp3378 = *(&local0);
frost$core$Bit $tmp3379 = frost$core$Bit$init$builtin_bit(!$tmp3378.nonnull);
bool $tmp3380 = $tmp3379.value;
if ($tmp3380) goto block1; else goto block2;
block1:;
// line 1558
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1560
org$frostlang$frostc$ASTNode* $tmp3381 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
org$frostlang$frostc$ASTNode* $tmp3382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local1) = $tmp3381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
// line 1561
org$frostlang$frostc$ASTNode* $tmp3383 = *(&local1);
frost$core$Bit $tmp3384 = frost$core$Bit$init$builtin_bit($tmp3383 == NULL);
bool $tmp3385 = $tmp3384.value;
if ($tmp3385) goto block3; else goto block4;
block3:;
// line 1562
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3386 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3386));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1564
frost$core$Int64 $tmp3387 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3388 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3387);
org$frostlang$frostc$parser$Token$nullable $tmp3389 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3388, &$s3390);
frost$core$Bit $tmp3391 = frost$core$Bit$init$builtin_bit(!$tmp3389.nonnull);
bool $tmp3392 = $tmp3391.value;
if ($tmp3392) goto block5; else goto block6;
block5:;
// line 1565
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1567
org$frostlang$frostc$ASTNode* $tmp3394 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
org$frostlang$frostc$ASTNode* $tmp3395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local2) = $tmp3394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
// line 1568
org$frostlang$frostc$ASTNode* $tmp3396 = *(&local2);
frost$core$Bit $tmp3397 = frost$core$Bit$init$builtin_bit($tmp3396 == NULL);
bool $tmp3398 = $tmp3397.value;
if ($tmp3398) goto block7; else goto block8;
block7:;
// line 1569
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3400 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1571
org$frostlang$frostc$FixedArray* $tmp3401 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
org$frostlang$frostc$FixedArray* $tmp3402 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
*(&local3) = $tmp3401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
// line 1572
org$frostlang$frostc$FixedArray* $tmp3403 = *(&local3);
frost$core$Bit $tmp3404 = frost$core$Bit$init$builtin_bit($tmp3403 == NULL);
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block9; else goto block10;
block9:;
// line 1573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1575
org$frostlang$frostc$ASTNode* $tmp3409 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3410 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3411 = *(&local0);
org$frostlang$frostc$Position $tmp3412 = ((org$frostlang$frostc$parser$Token) $tmp3411.value).position;
org$frostlang$frostc$ASTNode* $tmp3413 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3414 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3415 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3409, $tmp3410, $tmp3412, param1, $tmp3413, $tmp3414, $tmp3415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
org$frostlang$frostc$FixedArray* $tmp3416 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3409;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1582
frost$core$Int64 $tmp3419 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3420 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3419);
org$frostlang$frostc$parser$Token$nullable $tmp3421 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3420, &$s3422);
*(&local0) = $tmp3421;
// line 1583
org$frostlang$frostc$parser$Token$nullable $tmp3423 = *(&local0);
frost$core$Bit $tmp3424 = frost$core$Bit$init$builtin_bit(!$tmp3423.nonnull);
bool $tmp3425 = $tmp3424.value;
if ($tmp3425) goto block1; else goto block2;
block1:;
// line 1584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1586
org$frostlang$frostc$ASTNode* $tmp3426 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
org$frostlang$frostc$ASTNode* $tmp3427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
*(&local1) = $tmp3426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
// line 1587
org$frostlang$frostc$ASTNode* $tmp3428 = *(&local1);
frost$core$Bit $tmp3429 = frost$core$Bit$init$builtin_bit($tmp3428 == NULL);
bool $tmp3430 = $tmp3429.value;
if ($tmp3430) goto block3; else goto block4;
block3:;
// line 1588
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1590
org$frostlang$frostc$FixedArray* $tmp3432 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
org$frostlang$frostc$FixedArray* $tmp3433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local2) = $tmp3432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
// line 1591
org$frostlang$frostc$FixedArray* $tmp3434 = *(&local2);
frost$core$Bit $tmp3435 = frost$core$Bit$init$builtin_bit($tmp3434 == NULL);
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block5; else goto block6;
block5:;
// line 1592
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3437));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3438 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1594
org$frostlang$frostc$ASTNode* $tmp3439 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3440 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3441 = *(&local0);
org$frostlang$frostc$Position $tmp3442 = ((org$frostlang$frostc$parser$Token) $tmp3441.value).position;
org$frostlang$frostc$ASTNode* $tmp3443 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3444 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3439, $tmp3440, $tmp3442, param1, $tmp3443, $tmp3444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
org$frostlang$frostc$FixedArray* $tmp3445 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3439;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1601
frost$core$Int64 $tmp3447 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3448 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3447);
org$frostlang$frostc$parser$Token$nullable $tmp3449 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3448, &$s3450);
*(&local0) = $tmp3449;
// line 1602
org$frostlang$frostc$parser$Token$nullable $tmp3451 = *(&local0);
frost$core$Bit $tmp3452 = frost$core$Bit$init$builtin_bit(!$tmp3451.nonnull);
bool $tmp3453 = $tmp3452.value;
if ($tmp3453) goto block1; else goto block2;
block1:;
// line 1603
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1605
org$frostlang$frostc$FixedArray* $tmp3454 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
org$frostlang$frostc$FixedArray* $tmp3455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
*(&local1) = $tmp3454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
// line 1606
org$frostlang$frostc$FixedArray* $tmp3456 = *(&local1);
frost$core$Bit $tmp3457 = frost$core$Bit$init$builtin_bit($tmp3456 == NULL);
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block3; else goto block4;
block3:;
// line 1607
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1609
frost$core$Int64 $tmp3460 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3461 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3460);
org$frostlang$frostc$parser$Token$nullable $tmp3462 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3461, &$s3463);
frost$core$Bit $tmp3464 = frost$core$Bit$init$builtin_bit(!$tmp3462.nonnull);
bool $tmp3465 = $tmp3464.value;
if ($tmp3465) goto block5; else goto block6;
block5:;
// line 1610
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3466 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1612
org$frostlang$frostc$ASTNode* $tmp3467 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
org$frostlang$frostc$ASTNode* $tmp3468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
*(&local2) = $tmp3467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
// line 1613
org$frostlang$frostc$ASTNode* $tmp3469 = *(&local2);
frost$core$Bit $tmp3470 = frost$core$Bit$init$builtin_bit($tmp3469 == NULL);
bool $tmp3471 = $tmp3470.value;
if ($tmp3471) goto block7; else goto block8;
block7:;
// line 1614
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1616
org$frostlang$frostc$ASTNode* $tmp3474 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3475 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3476 = *(&local0);
org$frostlang$frostc$Position $tmp3477 = ((org$frostlang$frostc$parser$Token) $tmp3476.value).position;
org$frostlang$frostc$FixedArray* $tmp3478 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3479 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3474, $tmp3475, $tmp3477, param1, $tmp3478, $tmp3479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
org$frostlang$frostc$ASTNode* $tmp3480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3474;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1623
frost$core$Int64 $tmp3482 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3483 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3482);
org$frostlang$frostc$parser$Token$nullable $tmp3484 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3483, &$s3485);
*(&local0) = $tmp3484;
// line 1624
org$frostlang$frostc$parser$Token$nullable $tmp3486 = *(&local0);
frost$core$Bit $tmp3487 = frost$core$Bit$init$builtin_bit(!$tmp3486.nonnull);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block1; else goto block2;
block1:;
// line 1625
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1627
org$frostlang$frostc$FixedArray* $tmp3489 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
org$frostlang$frostc$FixedArray* $tmp3490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
*(&local1) = $tmp3489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
// line 1628
org$frostlang$frostc$FixedArray* $tmp3491 = *(&local1);
frost$core$Bit $tmp3492 = frost$core$Bit$init$builtin_bit($tmp3491 == NULL);
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block3; else goto block4;
block3:;
// line 1629
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1631
org$frostlang$frostc$ASTNode* $tmp3495 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3496 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3497 = *(&local0);
org$frostlang$frostc$Position $tmp3498 = ((org$frostlang$frostc$parser$Token) $tmp3497.value).position;
org$frostlang$frostc$FixedArray* $tmp3499 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3495, $tmp3496, $tmp3498, param1, $tmp3499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
org$frostlang$frostc$FixedArray* $tmp3500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3495;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1638
frost$core$Int64 $tmp3501 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3502 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3501);
org$frostlang$frostc$parser$Token$nullable $tmp3503 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3502, &$s3504);
*(&local0) = $tmp3503;
// line 1639
org$frostlang$frostc$parser$Token$nullable $tmp3505 = *(&local0);
frost$core$Bit $tmp3506 = frost$core$Bit$init$builtin_bit(!$tmp3505.nonnull);
bool $tmp3507 = $tmp3506.value;
if ($tmp3507) goto block1; else goto block2;
block1:;
// line 1640
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1642
org$frostlang$frostc$ASTNode* $tmp3508 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
org$frostlang$frostc$ASTNode* $tmp3509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
*(&local1) = $tmp3508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
// line 1643
org$frostlang$frostc$ASTNode* $tmp3510 = *(&local1);
frost$core$Bit $tmp3511 = frost$core$Bit$init$builtin_bit($tmp3510 == NULL);
bool $tmp3512 = $tmp3511.value;
if ($tmp3512) goto block3; else goto block4;
block3:;
// line 1644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1646
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1647
frost$core$Int64 $tmp3514 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3515 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3514);
org$frostlang$frostc$parser$Token$nullable $tmp3516 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3515);
frost$core$Bit $tmp3517 = frost$core$Bit$init$builtin_bit($tmp3516.nonnull);
bool $tmp3518 = $tmp3517.value;
if ($tmp3518) goto block5; else goto block7;
block5:;
// line 1648
org$frostlang$frostc$ASTNode* $tmp3519 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
org$frostlang$frostc$ASTNode* $tmp3520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
*(&local2) = $tmp3519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
// line 1649
org$frostlang$frostc$ASTNode* $tmp3521 = *(&local2);
frost$core$Bit $tmp3522 = frost$core$Bit$init$builtin_bit($tmp3521 == NULL);
bool $tmp3523 = $tmp3522.value;
if ($tmp3523) goto block8; else goto block9;
block8:;
// line 1650
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3526 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1656
org$frostlang$frostc$ASTNode* $tmp3527 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3528 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3529 = *(&local0);
org$frostlang$frostc$Position $tmp3530 = ((org$frostlang$frostc$parser$Token) $tmp3529.value).position;
org$frostlang$frostc$ASTNode* $tmp3531 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3532 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3527, $tmp3528, $tmp3530, $tmp3531, $tmp3532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
org$frostlang$frostc$ASTNode* $tmp3533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3534 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3527;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1663
frost$core$Int64 $tmp3535 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3536 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3535);
org$frostlang$frostc$parser$Token$nullable $tmp3537 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3536, &$s3538);
*(&local0) = $tmp3537;
// line 1664
org$frostlang$frostc$parser$Token$nullable $tmp3539 = *(&local0);
frost$core$Bit $tmp3540 = frost$core$Bit$init$builtin_bit(!$tmp3539.nonnull);
bool $tmp3541 = $tmp3540.value;
if ($tmp3541) goto block1; else goto block2;
block1:;
// line 1665
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1667
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1668
frost$core$Int64 $tmp3542 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3543 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3542);
org$frostlang$frostc$parser$Token$nullable $tmp3544 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3543);
frost$core$Bit $tmp3545 = frost$core$Bit$init$builtin_bit($tmp3544.nonnull);
bool $tmp3546 = $tmp3545.value;
if ($tmp3546) goto block3; else goto block5;
block3:;
// line 1669
org$frostlang$frostc$ASTNode* $tmp3547 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
org$frostlang$frostc$ASTNode* $tmp3548 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
*(&local1) = $tmp3547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
// line 1670
org$frostlang$frostc$ASTNode* $tmp3549 = *(&local1);
frost$core$Bit $tmp3550 = frost$core$Bit$init$builtin_bit($tmp3549 == NULL);
bool $tmp3551 = $tmp3550.value;
if ($tmp3551) goto block6; else goto block7;
block6:;
// line 1671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1675
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3553 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1677
org$frostlang$frostc$ASTNode* $tmp3554 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3555 = (frost$core$Int64) {49};
org$frostlang$frostc$parser$Token$nullable $tmp3556 = *(&local0);
org$frostlang$frostc$Position $tmp3557 = ((org$frostlang$frostc$parser$Token) $tmp3556.value).position;
org$frostlang$frostc$ASTNode* $tmp3558 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3554, $tmp3555, $tmp3557, $tmp3558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
org$frostlang$frostc$ASTNode* $tmp3559 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3554;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3560 = &param0->allowLambdas;
frost$core$Bit $tmp3561 = *$tmp3560;
bool $tmp3562 = $tmp3561.value;
if ($tmp3562) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3563 = (frost$core$Int64) {1685};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3564, $tmp3563, &$s3565);
abort(); // unreachable
block1:;
// line 1686
frost$core$Int64 $tmp3566 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3567 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3566);
org$frostlang$frostc$parser$Token$nullable $tmp3568 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3567, &$s3569);
*(&local1) = $tmp3568;
// line 1687
org$frostlang$frostc$parser$Token$nullable $tmp3570 = *(&local1);
frost$core$Bit $tmp3571 = frost$core$Bit$init$builtin_bit(!$tmp3570.nonnull);
bool $tmp3572 = $tmp3571.value;
if ($tmp3572) goto block6; else goto block7;
block6:;
// line 1688
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1690
frost$collections$Array* $tmp3573 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3573);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$collections$Array* $tmp3574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3574));
*(&local2) = $tmp3573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
// line 1691
org$frostlang$frostc$ASTNode* $tmp3575 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
org$frostlang$frostc$ASTNode* $tmp3576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local3) = $tmp3575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
// line 1692
org$frostlang$frostc$ASTNode* $tmp3577 = *(&local3);
frost$core$Bit $tmp3578 = frost$core$Bit$init$builtin_bit($tmp3577 == NULL);
bool $tmp3579 = $tmp3578.value;
if ($tmp3579) goto block8; else goto block9;
block8:;
// line 1693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3580 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1695
frost$collections$Array* $tmp3582 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3583 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3582, ((frost$core$Object*) $tmp3583));
// line 1696
goto block10;
block10:;
frost$core$Int64 $tmp3584 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3585 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3584);
org$frostlang$frostc$parser$Token$nullable $tmp3586 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3585);
frost$core$Bit $tmp3587 = frost$core$Bit$init$builtin_bit($tmp3586.nonnull);
bool $tmp3588 = $tmp3587.value;
if ($tmp3588) goto block11; else goto block12;
block11:;
// line 1697
org$frostlang$frostc$ASTNode* $tmp3589 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
org$frostlang$frostc$ASTNode* $tmp3590 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
*(&local3) = $tmp3589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
// line 1698
org$frostlang$frostc$ASTNode* $tmp3591 = *(&local3);
frost$core$Bit $tmp3592 = frost$core$Bit$init$builtin_bit($tmp3591 == NULL);
bool $tmp3593 = $tmp3592.value;
if ($tmp3593) goto block13; else goto block14;
block13:;
// line 1699
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3594 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1701
frost$collections$Array* $tmp3596 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3597 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3596, ((frost$core$Object*) $tmp3597));
goto block10;
block12:;
// line 1703
org$frostlang$frostc$FixedArray* $tmp3598 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
org$frostlang$frostc$FixedArray* $tmp3599 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
*(&local4) = $tmp3598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
// line 1704
org$frostlang$frostc$FixedArray* $tmp3600 = *(&local4);
frost$core$Bit $tmp3601 = frost$core$Bit$init$builtin_bit($tmp3600 == NULL);
bool $tmp3602 = $tmp3601.value;
if ($tmp3602) goto block15; else goto block16;
block15:;
// line 1705
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3603));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3604 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1707
org$frostlang$frostc$ASTNode* $tmp3606 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3607 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token$nullable $tmp3608 = *(&local1);
org$frostlang$frostc$Position $tmp3609 = ((org$frostlang$frostc$parser$Token) $tmp3608.value).position;
frost$collections$Array* $tmp3610 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3611 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3610);
org$frostlang$frostc$FixedArray* $tmp3612 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3606, $tmp3607, $tmp3609, $tmp3611, $tmp3612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
org$frostlang$frostc$FixedArray* $tmp3613 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3614 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3606;
goto block3;
block3:;
frost$core$Bit* $tmp3616 = &param0->allowLambdas;
frost$core$Bit $tmp3617 = *$tmp3616;
bool $tmp3618 = $tmp3617.value;
if ($tmp3618) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3619 = *(&local0);
return $tmp3619;
block5:;
frost$core$Int64 $tmp3620 = (frost$core$Int64) {1685};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3621, $tmp3620, &$s3622);
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
// line 1714
frost$core$Int64 $tmp3623 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3624 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3623);
org$frostlang$frostc$parser$Token$nullable $tmp3625 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3624, &$s3626);
*(&local0) = $tmp3625;
// line 1715
org$frostlang$frostc$parser$Token$nullable $tmp3627 = *(&local0);
frost$core$Bit $tmp3628 = frost$core$Bit$init$builtin_bit(!$tmp3627.nonnull);
bool $tmp3629 = $tmp3628.value;
if ($tmp3629) goto block1; else goto block2;
block1:;
// line 1716
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1718
org$frostlang$frostc$ASTNode* $tmp3630 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
org$frostlang$frostc$ASTNode* $tmp3631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
*(&local1) = $tmp3630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
// line 1719
org$frostlang$frostc$ASTNode* $tmp3632 = *(&local1);
frost$core$Bit $tmp3633 = frost$core$Bit$init$builtin_bit($tmp3632 == NULL);
bool $tmp3634 = $tmp3633.value;
if ($tmp3634) goto block3; else goto block4;
block3:;
// line 1720
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3635 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1722
frost$core$Int64 $tmp3636 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3637 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3636);
org$frostlang$frostc$parser$Token$nullable $tmp3638 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3637, &$s3639);
frost$core$Bit $tmp3640 = frost$core$Bit$init$builtin_bit(!$tmp3638.nonnull);
bool $tmp3641 = $tmp3640.value;
if ($tmp3641) goto block5; else goto block6;
block5:;
// line 1723
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3642 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1725
frost$collections$Array* $tmp3643 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3643);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$collections$Array* $tmp3644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
*(&local2) = $tmp3643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
// line 1726
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3645 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1727
goto block7;
block7:;
// line 1728
org$frostlang$frostc$parser$Token $tmp3646 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3646;
// line 1729
org$frostlang$frostc$parser$Token $tmp3647 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3648 = $tmp3647.kind;
frost$core$Int64 $tmp3649 = $tmp3648.$rawValue;
frost$core$Int64 $tmp3650 = (frost$core$Int64) {104};
frost$core$Bit $tmp3651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3649, $tmp3650);
bool $tmp3652 = $tmp3651.value;
if ($tmp3652) goto block10; else goto block11;
block10:;
// line 1731
goto block8;
block11:;
frost$core$Int64 $tmp3653 = (frost$core$Int64) {40};
frost$core$Bit $tmp3654 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3649, $tmp3653);
bool $tmp3655 = $tmp3654.value;
if ($tmp3655) goto block12; else goto block13;
block12:;
// line 1734
org$frostlang$frostc$ASTNode* $tmp3656 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
org$frostlang$frostc$ASTNode* $tmp3657 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
*(&local5) = $tmp3656;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
// line 1735
org$frostlang$frostc$ASTNode* $tmp3658 = *(&local5);
frost$core$Bit $tmp3659 = frost$core$Bit$init$builtin_bit($tmp3658 == NULL);
bool $tmp3660 = $tmp3659.value;
if ($tmp3660) goto block14; else goto block15;
block14:;
// line 1736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3661 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1738
frost$collections$Array* $tmp3665 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3666 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3665, ((frost$core$Object*) $tmp3666));
org$frostlang$frostc$ASTNode* $tmp3667 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3668 = (frost$core$Int64) {41};
frost$core$Bit $tmp3669 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3649, $tmp3668);
bool $tmp3670 = $tmp3669.value;
if ($tmp3670) goto block16; else goto block17;
block16:;
// line 1741
org$frostlang$frostc$parser$Token $tmp3671 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3671;
// line 1742
org$frostlang$frostc$FixedArray* $tmp3672 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
org$frostlang$frostc$FixedArray* $tmp3673 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
*(&local3) = $tmp3672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
// line 1743
org$frostlang$frostc$FixedArray* $tmp3674 = *(&local3);
frost$core$Bit $tmp3675 = frost$core$Bit$init$builtin_bit($tmp3674 == NULL);
bool $tmp3676 = $tmp3675.value;
if ($tmp3676) goto block18; else goto block19;
block18:;
// line 1744
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3677 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1746
goto block8;
block17:;
// line 1749
org$frostlang$frostc$parser$Token $tmp3680 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1750
org$frostlang$frostc$parser$Token $tmp3681 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3682 = *(&local4);
frost$core$String* $tmp3683 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3682);
frost$core$String* $tmp3684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3685, $tmp3683);
frost$core$String* $tmp3686 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3684, &$s3687);
frost$core$String* $tmp3688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3689, $tmp3686);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3681, $tmp3688);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
// line 1752
goto block8;
block9:;
goto block7;
block8:;
// line 1756
frost$core$Int64 $tmp3690 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3691 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3690);
org$frostlang$frostc$parser$Token$nullable $tmp3692 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3691, &$s3693);
frost$core$Bit $tmp3694 = frost$core$Bit$init$builtin_bit(!$tmp3692.nonnull);
bool $tmp3695 = $tmp3694.value;
if ($tmp3695) goto block20; else goto block21;
block20:;
// line 1757
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3696 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3697 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3698 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1759
org$frostlang$frostc$FixedArray* $tmp3699 = *(&local3);
frost$core$Bit $tmp3700 = frost$core$Bit$init$builtin_bit($tmp3699 != NULL);
bool $tmp3701 = $tmp3700.value;
if ($tmp3701) goto block22; else goto block23;
block22:;
// line 1760
org$frostlang$frostc$ASTNode* $tmp3702 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3703 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3704 = *(&local0);
org$frostlang$frostc$Position $tmp3705 = ((org$frostlang$frostc$parser$Token) $tmp3704.value).position;
org$frostlang$frostc$ASTNode* $tmp3706 = *(&local1);
frost$collections$Array* $tmp3707 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3708 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3707);
org$frostlang$frostc$FixedArray* $tmp3709 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3702, $tmp3703, $tmp3705, $tmp3706, $tmp3708, $tmp3709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
org$frostlang$frostc$FixedArray* $tmp3710 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3702;
block23:;
// line 1762
org$frostlang$frostc$ASTNode* $tmp3713 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3714 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3715 = *(&local0);
org$frostlang$frostc$Position $tmp3716 = ((org$frostlang$frostc$parser$Token) $tmp3715.value).position;
org$frostlang$frostc$ASTNode* $tmp3717 = *(&local1);
frost$collections$Array* $tmp3718 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3719 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3718);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3713, $tmp3714, $tmp3716, $tmp3717, $tmp3719, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
org$frostlang$frostc$FixedArray* $tmp3720 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3721 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3713;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1769
frost$core$Int64 $tmp3723 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3724 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3723);
org$frostlang$frostc$parser$Token$nullable $tmp3725 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3724, &$s3726);
*(&local0) = $tmp3725;
// line 1770
org$frostlang$frostc$parser$Token$nullable $tmp3727 = *(&local0);
frost$core$Bit $tmp3728 = frost$core$Bit$init$builtin_bit(!$tmp3727.nonnull);
bool $tmp3729 = $tmp3728.value;
if ($tmp3729) goto block1; else goto block2;
block1:;
// line 1771
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1773
frost$collections$Array* $tmp3730 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3730);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
frost$collections$Array* $tmp3731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
*(&local1) = $tmp3730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
// line 1774
goto block3;
block3:;
// line 1775
org$frostlang$frostc$parser$Token $tmp3732 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3733 = $tmp3732.kind;
frost$core$Int64 $tmp3734 = $tmp3733.$rawValue;
frost$core$Int64 $tmp3735 = (frost$core$Int64) {104};
frost$core$Bit $tmp3736 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3734, $tmp3735);
bool $tmp3737 = $tmp3736.value;
if ($tmp3737) goto block6; else goto block7;
block6:;
// line 1777
org$frostlang$frostc$parser$Token $tmp3738 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1778
goto block4;
block7:;
frost$core$Int64 $tmp3739 = (frost$core$Int64) {29};
frost$core$Bit $tmp3740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3734, $tmp3739);
bool $tmp3741 = $tmp3740.value;
if ($tmp3741) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3742 = (frost$core$Int64) {30};
frost$core$Bit $tmp3743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3734, $tmp3742);
bool $tmp3744 = $tmp3743.value;
if ($tmp3744) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3745 = (frost$core$Int64) {28};
frost$core$Bit $tmp3746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3734, $tmp3745);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block8; else goto block11;
block8:;
// line 1781
org$frostlang$frostc$ASTNode* $tmp3748 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
org$frostlang$frostc$ASTNode* $tmp3749 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3749));
*(&local2) = $tmp3748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
// line 1782
org$frostlang$frostc$ASTNode* $tmp3750 = *(&local2);
frost$core$Bit $tmp3751 = frost$core$Bit$init$builtin_bit($tmp3750 == NULL);
bool $tmp3752 = $tmp3751.value;
if ($tmp3752) goto block12; else goto block13;
block12:;
// line 1783
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3753 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3754 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1785
frost$core$Int64 $tmp3755 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3756 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3755);
org$frostlang$frostc$parser$Token$nullable $tmp3757 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3756, &$s3758);
frost$core$Bit $tmp3759 = frost$core$Bit$init$builtin_bit(!$tmp3757.nonnull);
bool $tmp3760 = $tmp3759.value;
if ($tmp3760) goto block14; else goto block15;
block14:;
// line 1786
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3761 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3762 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1788
frost$collections$Array* $tmp3763 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3764 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3763, ((frost$core$Object*) $tmp3764));
// line 1789
org$frostlang$frostc$ASTNode* $tmp3765 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1792
org$frostlang$frostc$ASTNode* $tmp3766 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
org$frostlang$frostc$ASTNode* $tmp3767 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3767));
*(&local3) = $tmp3766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
// line 1793
org$frostlang$frostc$ASTNode* $tmp3768 = *(&local3);
frost$core$Bit $tmp3769 = frost$core$Bit$init$builtin_bit($tmp3768 == NULL);
bool $tmp3770 = $tmp3769.value;
if ($tmp3770) goto block16; else goto block17;
block16:;
// line 1794
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3772 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1796
frost$collections$Array* $tmp3773 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3774 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3773, ((frost$core$Object*) $tmp3774));
org$frostlang$frostc$ASTNode* $tmp3775 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1800
frost$collections$Array* $tmp3776 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3777 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
frost$collections$Array* $tmp3778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3777;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1807
org$frostlang$frostc$FixedArray* $tmp3779 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
org$frostlang$frostc$FixedArray* $tmp3780 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3780));
*(&local0) = $tmp3779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
// line 1808
org$frostlang$frostc$FixedArray* $tmp3781 = *(&local0);
frost$core$Bit $tmp3782 = frost$core$Bit$init$builtin_bit($tmp3781 == NULL);
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block1; else goto block2;
block1:;
// line 1809
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1811
org$frostlang$frostc$ASTNode* $tmp3785 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3786 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3787 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3788 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3785, $tmp3786, $tmp3787, $tmp3788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
org$frostlang$frostc$FixedArray* $tmp3789 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3785;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1818
org$frostlang$frostc$ASTNode* $tmp3790 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
org$frostlang$frostc$ASTNode* $tmp3791 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
*(&local0) = $tmp3790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
// line 1819
org$frostlang$frostc$ASTNode* $tmp3792 = *(&local0);
frost$core$Bit $tmp3793 = frost$core$Bit$init$builtin_bit($tmp3792 == NULL);
bool $tmp3794 = $tmp3793.value;
if ($tmp3794) goto block1; else goto block2;
block1:;
// line 1820
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3795 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1822
org$frostlang$frostc$parser$Token $tmp3796 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3797 = $tmp3796.kind;
frost$core$Int64 $tmp3798 = $tmp3797.$rawValue;
frost$core$Int64 $tmp3799 = (frost$core$Int64) {77};
frost$core$Bit $tmp3800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3799);
bool $tmp3801 = $tmp3800.value;
if ($tmp3801) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3802 = (frost$core$Int64) {78};
frost$core$Bit $tmp3803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3802);
bool $tmp3804 = $tmp3803.value;
if ($tmp3804) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3805 = (frost$core$Int64) {79};
frost$core$Bit $tmp3806 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3805);
bool $tmp3807 = $tmp3806.value;
if ($tmp3807) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3808 = (frost$core$Int64) {80};
frost$core$Bit $tmp3809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3808);
bool $tmp3810 = $tmp3809.value;
if ($tmp3810) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3811 = (frost$core$Int64) {81};
frost$core$Bit $tmp3812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3811);
bool $tmp3813 = $tmp3812.value;
if ($tmp3813) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3814 = (frost$core$Int64) {82};
frost$core$Bit $tmp3815 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3814);
bool $tmp3816 = $tmp3815.value;
if ($tmp3816) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3817 = (frost$core$Int64) {83};
frost$core$Bit $tmp3818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3817);
bool $tmp3819 = $tmp3818.value;
if ($tmp3819) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3820 = (frost$core$Int64) {84};
frost$core$Bit $tmp3821 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3820);
bool $tmp3822 = $tmp3821.value;
if ($tmp3822) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3823 = (frost$core$Int64) {85};
frost$core$Bit $tmp3824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3823);
bool $tmp3825 = $tmp3824.value;
if ($tmp3825) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3826 = (frost$core$Int64) {86};
frost$core$Bit $tmp3827 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3826);
bool $tmp3828 = $tmp3827.value;
if ($tmp3828) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3829 = (frost$core$Int64) {87};
frost$core$Bit $tmp3830 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3829);
bool $tmp3831 = $tmp3830.value;
if ($tmp3831) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3832 = (frost$core$Int64) {88};
frost$core$Bit $tmp3833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3832);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3835 = (frost$core$Int64) {89};
frost$core$Bit $tmp3836 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3835);
bool $tmp3837 = $tmp3836.value;
if ($tmp3837) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3838 = (frost$core$Int64) {90};
frost$core$Bit $tmp3839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3838);
bool $tmp3840 = $tmp3839.value;
if ($tmp3840) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3841 = (frost$core$Int64) {91};
frost$core$Bit $tmp3842 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3841);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3844 = (frost$core$Int64) {92};
frost$core$Bit $tmp3845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3844);
bool $tmp3846 = $tmp3845.value;
if ($tmp3846) goto block4; else goto block20;
block4:;
// line 1828
org$frostlang$frostc$parser$Token $tmp3847 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3847;
// line 1829
org$frostlang$frostc$ASTNode* $tmp3848 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
org$frostlang$frostc$ASTNode* $tmp3849 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
*(&local2) = $tmp3848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
// line 1830
org$frostlang$frostc$ASTNode* $tmp3850 = *(&local2);
frost$core$Bit $tmp3851 = frost$core$Bit$init$builtin_bit($tmp3850 == NULL);
bool $tmp3852 = $tmp3851.value;
if ($tmp3852) goto block21; else goto block22;
block21:;
// line 1831
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3853 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1833
org$frostlang$frostc$ASTNode* $tmp3855 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3856 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3857 = *(&local0);
$fn3859 $tmp3858 = ($fn3859) $tmp3857->$class->vtable[2];
org$frostlang$frostc$Position $tmp3860 = $tmp3858($tmp3857);
org$frostlang$frostc$ASTNode* $tmp3861 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3862 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3863 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3862);
org$frostlang$frostc$ASTNode* $tmp3864 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3855, $tmp3856, $tmp3860, $tmp3861, $tmp3863, $tmp3864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3855));
org$frostlang$frostc$ASTNode* $tmp3865 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3866 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3855;
block20:;
frost$core$Int64 $tmp3867 = (frost$core$Int64) {62};
frost$core$Bit $tmp3868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3798, $tmp3867);
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block23; else goto block24;
block23:;
// line 1837
org$frostlang$frostc$parser$Token $tmp3870 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3870, &$s3871);
// line 1838
org$frostlang$frostc$parser$Token $tmp3872 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3872;
// line 1839
org$frostlang$frostc$ASTNode* $tmp3873 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
org$frostlang$frostc$ASTNode* $tmp3874 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
*(&local4) = $tmp3873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
// line 1840
org$frostlang$frostc$ASTNode* $tmp3875 = *(&local4);
frost$core$Bit $tmp3876 = frost$core$Bit$init$builtin_bit($tmp3875 == NULL);
bool $tmp3877 = $tmp3876.value;
if ($tmp3877) goto block25; else goto block26;
block25:;
// line 1841
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3878 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3879 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1843
org$frostlang$frostc$ASTNode* $tmp3880 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3881 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3882 = *(&local0);
$fn3884 $tmp3883 = ($fn3884) $tmp3882->$class->vtable[2];
org$frostlang$frostc$Position $tmp3885 = $tmp3883($tmp3882);
org$frostlang$frostc$ASTNode* $tmp3886 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3887 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3888 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3887);
org$frostlang$frostc$ASTNode* $tmp3889 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3880, $tmp3881, $tmp3885, $tmp3886, $tmp3888, $tmp3889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
org$frostlang$frostc$ASTNode* $tmp3890 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3880;
block24:;
// line 1847
org$frostlang$frostc$ASTNode* $tmp3892 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
org$frostlang$frostc$ASTNode* $tmp3893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3892;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1856
org$frostlang$frostc$ASTNode* $tmp3894 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
org$frostlang$frostc$ASTNode* $tmp3895 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
*(&local0) = $tmp3894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
// line 1857
org$frostlang$frostc$ASTNode* $tmp3896 = *(&local0);
frost$core$Bit $tmp3897 = frost$core$Bit$init$builtin_bit($tmp3896 == NULL);
bool $tmp3898 = $tmp3897.value;
if ($tmp3898) goto block1; else goto block2;
block1:;
// line 1858
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1860
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1861
frost$core$Int64 $tmp3900 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp3901 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3900);
org$frostlang$frostc$parser$Token$nullable $tmp3902 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3901);
frost$core$Bit $tmp3903 = frost$core$Bit$init$builtin_bit($tmp3902.nonnull);
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block3; else goto block5;
block3:;
// line 1862
org$frostlang$frostc$ASTNode* $tmp3905 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
org$frostlang$frostc$ASTNode* $tmp3906 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local1) = $tmp3905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
// line 1863
org$frostlang$frostc$ASTNode* $tmp3907 = *(&local1);
frost$core$Bit $tmp3908 = frost$core$Bit$init$builtin_bit($tmp3907 == NULL);
bool $tmp3909 = $tmp3908.value;
if ($tmp3909) goto block6; else goto block7;
block6:;
// line 1864
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3911 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1867
org$frostlang$frostc$parser$Token $tmp3912 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3913 = $tmp3912.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3914;
$tmp3914 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3914->value = $tmp3913;
frost$core$Int64 $tmp3915 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp3916 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3915);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3917;
$tmp3917 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3917->value = $tmp3916;
ITable* $tmp3918 = ((frost$core$Equatable*) $tmp3914)->$class->itable;
while ($tmp3918->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3918 = $tmp3918->next;
}
$fn3920 $tmp3919 = $tmp3918->methods[0];
frost$core$Bit $tmp3921 = $tmp3919(((frost$core$Equatable*) $tmp3914), ((frost$core$Equatable*) $tmp3917));
bool $tmp3922 = $tmp3921.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3917)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3914)));
if ($tmp3922) goto block8; else goto block10;
block8:;
// line 1868
org$frostlang$frostc$parser$Token $tmp3923 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3923, &$s3924);
// line 1869
org$frostlang$frostc$ASTNode* $tmp3925 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
org$frostlang$frostc$ASTNode* $tmp3926 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local1) = $tmp3925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
// line 1870
org$frostlang$frostc$ASTNode* $tmp3927 = *(&local1);
frost$core$Bit $tmp3928 = frost$core$Bit$init$builtin_bit($tmp3927 == NULL);
bool $tmp3929 = $tmp3928.value;
if ($tmp3929) goto block11; else goto block12;
block11:;
// line 1871
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3930 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1875
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1877
org$frostlang$frostc$ASTNode* $tmp3933 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3934 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp3935 = *(&local0);
$fn3937 $tmp3936 = ($fn3937) $tmp3935->$class->vtable[2];
org$frostlang$frostc$Position $tmp3938 = $tmp3936($tmp3935);
org$frostlang$frostc$ASTNode* $tmp3939 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp3940 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3933, $tmp3934, $tmp3938, $tmp3939, $tmp3940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
org$frostlang$frostc$ASTNode* $tmp3941 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3942 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3942));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3933;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1884
org$frostlang$frostc$parser$Token $tmp3943 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp3943;
// line 1885
// line 1886
org$frostlang$frostc$parser$Token $tmp3944 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp3945 = $tmp3944.kind;
frost$core$Int64 $tmp3946 = $tmp3945.$rawValue;
frost$core$Int64 $tmp3947 = (frost$core$Int64) {24};
frost$core$Bit $tmp3948 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3946, $tmp3947);
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block2; else goto block3;
block2:;
// line 1888
frost$core$Int64 $tmp3950 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp3951 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3950);
*(&local1) = $tmp3951;
goto block1;
block3:;
frost$core$Int64 $tmp3952 = (frost$core$Int64) {25};
frost$core$Bit $tmp3953 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3946, $tmp3952);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block4; else goto block5;
block4:;
// line 1891
frost$core$Int64 $tmp3955 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp3956 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3955);
*(&local1) = $tmp3956;
goto block1;
block5:;
frost$core$Int64 $tmp3957 = (frost$core$Int64) {26};
frost$core$Bit $tmp3958 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3946, $tmp3957);
bool $tmp3959 = $tmp3958.value;
if ($tmp3959) goto block6; else goto block7;
block6:;
// line 1894
frost$core$Int64 $tmp3960 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp3961 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3960);
*(&local1) = $tmp3961;
goto block1;
block7:;
frost$core$Int64 $tmp3962 = (frost$core$Int64) {27};
frost$core$Bit $tmp3963 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3946, $tmp3962);
bool $tmp3964 = $tmp3963.value;
if ($tmp3964) goto block8; else goto block9;
block8:;
// line 1897
frost$core$Int64 $tmp3965 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp3966 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3965);
*(&local1) = $tmp3966;
goto block1;
block9:;
// line 1900
org$frostlang$frostc$parser$Token $tmp3967 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3967, &$s3968);
goto block1;
block1:;
// line 1903
frost$collections$Array* $tmp3969 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3969);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
frost$collections$Array* $tmp3970 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
*(&local2) = $tmp3969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
// line 1904
org$frostlang$frostc$ASTNode* $tmp3971 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
org$frostlang$frostc$ASTNode* $tmp3972 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
*(&local3) = $tmp3971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
// line 1905
org$frostlang$frostc$ASTNode* $tmp3973 = *(&local3);
frost$core$Bit $tmp3974 = frost$core$Bit$init$builtin_bit($tmp3973 == NULL);
bool $tmp3975 = $tmp3974.value;
if ($tmp3975) goto block10; else goto block11;
block10:;
// line 1906
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3976 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3976));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1908
frost$collections$Array* $tmp3978 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3979 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3978, ((frost$core$Object*) $tmp3979));
// line 1909
goto block12;
block12:;
frost$core$Int64 $tmp3980 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3981 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3980);
org$frostlang$frostc$parser$Token$nullable $tmp3982 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3981);
frost$core$Bit $tmp3983 = frost$core$Bit$init$builtin_bit($tmp3982.nonnull);
bool $tmp3984 = $tmp3983.value;
if ($tmp3984) goto block13; else goto block14;
block13:;
// line 1910
org$frostlang$frostc$ASTNode* $tmp3985 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
org$frostlang$frostc$ASTNode* $tmp3986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
*(&local4) = $tmp3985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
// line 1911
org$frostlang$frostc$ASTNode* $tmp3987 = *(&local4);
frost$core$Bit $tmp3988 = frost$core$Bit$init$builtin_bit($tmp3987 == NULL);
bool $tmp3989 = $tmp3988.value;
if ($tmp3989) goto block15; else goto block16;
block15:;
// line 1912
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3990 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3991 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3992 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1914
frost$collections$Array* $tmp3993 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3994 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp3993, ((frost$core$Object*) $tmp3994));
org$frostlang$frostc$ASTNode* $tmp3995 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1916
org$frostlang$frostc$ASTNode* $tmp3996 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3997 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token $tmp3998 = *(&local0);
org$frostlang$frostc$Position $tmp3999 = $tmp3998.position;
org$frostlang$frostc$Variable$Kind $tmp4000 = *(&local1);
frost$collections$Array* $tmp4001 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4002 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4001);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3996, $tmp3997, $tmp3999, $tmp4000, $tmp4002);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
org$frostlang$frostc$ASTNode* $tmp4003 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4003));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp3996;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1923
frost$core$Int64 $tmp4005 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp4006 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4005);
org$frostlang$frostc$parser$Token$nullable $tmp4007 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4006, &$s4008);
*(&local0) = $tmp4007;
// line 1924
org$frostlang$frostc$parser$Token$nullable $tmp4009 = *(&local0);
frost$core$Bit $tmp4010 = frost$core$Bit$init$builtin_bit(!$tmp4009.nonnull);
bool $tmp4011 = $tmp4010.value;
if ($tmp4011) goto block1; else goto block2;
block1:;
// line 1925
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1927
frost$core$Int64 $tmp4012 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4013 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4012);
org$frostlang$frostc$parser$Token$nullable $tmp4014 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4013, &$s4015);
frost$core$Bit $tmp4016 = frost$core$Bit$init$builtin_bit(!$tmp4014.nonnull);
bool $tmp4017 = $tmp4016.value;
if ($tmp4017) goto block3; else goto block4;
block3:;
// line 1928
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1930
frost$collections$Stack** $tmp4018 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4019 = *$tmp4018;
frost$core$Bit $tmp4020 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp4021;
$tmp4021 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp4021->value = $tmp4020;
frost$collections$Stack$push$frost$collections$Stack$T($tmp4019, ((frost$core$Object*) $tmp4021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
// line 1931
org$frostlang$frostc$ASTNode* $tmp4022 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4023 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4024 = *(&local0);
org$frostlang$frostc$Position $tmp4025 = ((org$frostlang$frostc$parser$Token) $tmp4024.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4026 = *(&local0);
frost$core$String* $tmp4027 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4026.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4022, $tmp4023, $tmp4025, $tmp4027);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
org$frostlang$frostc$ASTNode* $tmp4028 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local1) = $tmp4022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
// line 1932
frost$collections$Array* $tmp4029 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4029);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
frost$collections$Array* $tmp4030 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local2) = $tmp4029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
// line 1933
frost$core$Int64 $tmp4031 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4032 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4031);
org$frostlang$frostc$parser$Token$nullable $tmp4033 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4032);
frost$core$Bit $tmp4034 = frost$core$Bit$init$builtin_bit(!$tmp4033.nonnull);
bool $tmp4035 = $tmp4034.value;
if ($tmp4035) goto block5; else goto block6;
block5:;
// line 1934
org$frostlang$frostc$ASTNode* $tmp4036 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
org$frostlang$frostc$ASTNode* $tmp4037 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
*(&local3) = $tmp4036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
// line 1935
org$frostlang$frostc$ASTNode* $tmp4038 = *(&local3);
frost$core$Bit $tmp4039 = frost$core$Bit$init$builtin_bit($tmp4038 == NULL);
bool $tmp4040 = $tmp4039.value;
if ($tmp4040) goto block7; else goto block8;
block7:;
// line 1936
frost$collections$Stack** $tmp4041 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4042 = *$tmp4041;
frost$core$Object* $tmp4043 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4042);
frost$core$Frost$unref$frost$core$Object$Q($tmp4043);
// line 1937
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4044 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4046 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1939
frost$collections$Array* $tmp4047 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4048 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4047, ((frost$core$Object*) $tmp4048));
// line 1940
goto block9;
block9:;
frost$core$Int64 $tmp4049 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4050 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4049);
org$frostlang$frostc$parser$Token$nullable $tmp4051 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4050);
frost$core$Bit $tmp4052 = frost$core$Bit$init$builtin_bit($tmp4051.nonnull);
bool $tmp4053 = $tmp4052.value;
if ($tmp4053) goto block10; else goto block11;
block10:;
// line 1941
org$frostlang$frostc$ASTNode* $tmp4054 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
org$frostlang$frostc$ASTNode* $tmp4055 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
*(&local3) = $tmp4054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
// line 1942
org$frostlang$frostc$ASTNode* $tmp4056 = *(&local3);
frost$core$Bit $tmp4057 = frost$core$Bit$init$builtin_bit($tmp4056 == NULL);
bool $tmp4058 = $tmp4057.value;
if ($tmp4058) goto block12; else goto block13;
block12:;
// line 1943
frost$collections$Stack** $tmp4059 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4060 = *$tmp4059;
frost$core$Object* $tmp4061 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4060);
frost$core$Frost$unref$frost$core$Object$Q($tmp4061);
// line 1944
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4062 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4063 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4064 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1946
frost$collections$Array* $tmp4065 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4066 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4065, ((frost$core$Object*) $tmp4066));
goto block9;
block11:;
// line 1948
frost$core$Int64 $tmp4067 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4068 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4067);
org$frostlang$frostc$parser$Token$nullable $tmp4069 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4068, &$s4070);
frost$core$Bit $tmp4071 = frost$core$Bit$init$builtin_bit(!$tmp4069.nonnull);
bool $tmp4072 = $tmp4071.value;
if ($tmp4072) goto block14; else goto block15;
block14:;
// line 1949
frost$collections$Stack** $tmp4073 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4074 = *$tmp4073;
frost$core$Object* $tmp4075 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4074);
frost$core$Frost$unref$frost$core$Object$Q($tmp4075);
// line 1950
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4076 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4077 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4078 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4079 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1953
frost$collections$Stack** $tmp4080 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4081 = *$tmp4080;
frost$core$Object* $tmp4082 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4081);
frost$core$Frost$unref$frost$core$Object$Q($tmp4082);
// line 1954
org$frostlang$frostc$ASTNode* $tmp4083 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4084 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4085 = *(&local0);
org$frostlang$frostc$Position $tmp4086 = ((org$frostlang$frostc$parser$Token) $tmp4085.value).position;
org$frostlang$frostc$ASTNode* $tmp4087 = *(&local1);
frost$collections$Array* $tmp4088 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4089 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4088);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4083, $tmp4084, $tmp4086, $tmp4087, $tmp4089);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
frost$collections$Array* $tmp4090 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4091 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4083;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1961
frost$core$Int64 $tmp4092 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4093 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4092);
org$frostlang$frostc$parser$Token$nullable $tmp4094 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4093, &$s4095);
*(&local0) = $tmp4094;
// line 1962
org$frostlang$frostc$parser$Token$nullable $tmp4096 = *(&local0);
frost$core$Bit $tmp4097 = frost$core$Bit$init$builtin_bit(!$tmp4096.nonnull);
bool $tmp4098 = $tmp4097.value;
if ($tmp4098) goto block1; else goto block2;
block1:;
// line 1963
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1965
frost$core$Int64 $tmp4099 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4100 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4099);
org$frostlang$frostc$parser$Token$nullable $tmp4101 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4100);
*(&local1) = $tmp4101;
// line 1966
org$frostlang$frostc$parser$Token$nullable $tmp4102 = *(&local1);
frost$core$Bit $tmp4103 = frost$core$Bit$init$builtin_bit($tmp4102.nonnull);
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block3; else goto block4;
block3:;
// line 1967
org$frostlang$frostc$ASTNode* $tmp4105 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4106 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4107 = *(&local0);
org$frostlang$frostc$Position $tmp4108 = ((org$frostlang$frostc$parser$Token) $tmp4107.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4109 = *(&local1);
frost$core$String* $tmp4110 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4109.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4105, $tmp4106, $tmp4108, $tmp4110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
return $tmp4105;
block4:;
// line 1969
org$frostlang$frostc$ASTNode* $tmp4111 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4112 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4113 = *(&local0);
org$frostlang$frostc$Position $tmp4114 = ((org$frostlang$frostc$parser$Token) $tmp4113.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4111, $tmp4112, $tmp4114, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
return $tmp4111;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1976
frost$core$Int64 $tmp4115 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4116 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4115);
org$frostlang$frostc$parser$Token$nullable $tmp4117 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4116, &$s4118);
*(&local0) = $tmp4117;
// line 1977
org$frostlang$frostc$parser$Token$nullable $tmp4119 = *(&local0);
frost$core$Bit $tmp4120 = frost$core$Bit$init$builtin_bit(!$tmp4119.nonnull);
bool $tmp4121 = $tmp4120.value;
if ($tmp4121) goto block1; else goto block2;
block1:;
// line 1978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1980
frost$core$Int64 $tmp4122 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4123 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4122);
org$frostlang$frostc$parser$Token$nullable $tmp4124 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4123);
*(&local1) = $tmp4124;
// line 1981
org$frostlang$frostc$parser$Token$nullable $tmp4125 = *(&local1);
frost$core$Bit $tmp4126 = frost$core$Bit$init$builtin_bit($tmp4125.nonnull);
bool $tmp4127 = $tmp4126.value;
if ($tmp4127) goto block3; else goto block4;
block3:;
// line 1982
org$frostlang$frostc$ASTNode* $tmp4128 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4129 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4130 = *(&local0);
org$frostlang$frostc$Position $tmp4131 = ((org$frostlang$frostc$parser$Token) $tmp4130.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4132 = *(&local1);
frost$core$String* $tmp4133 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4132.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4128, $tmp4129, $tmp4131, $tmp4133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
return $tmp4128;
block4:;
// line 1984
org$frostlang$frostc$ASTNode* $tmp4134 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4135 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4136 = *(&local0);
org$frostlang$frostc$Position $tmp4137 = ((org$frostlang$frostc$parser$Token) $tmp4136.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4134, $tmp4135, $tmp4137, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
return $tmp4134;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1991
frost$core$Int64 $tmp4138 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4139 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4138);
org$frostlang$frostc$parser$Token$nullable $tmp4140 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4139, &$s4141);
*(&local0) = $tmp4140;
// line 1992
org$frostlang$frostc$parser$Token$nullable $tmp4142 = *(&local0);
frost$core$Bit $tmp4143 = frost$core$Bit$init$builtin_bit(!$tmp4142.nonnull);
bool $tmp4144 = $tmp4143.value;
if ($tmp4144) goto block1; else goto block2;
block1:;
// line 1993
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1995
org$frostlang$frostc$parser$Token $tmp4145 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4146 = $tmp4145.kind;
frost$core$Int64 $tmp4147 = $tmp4146.$rawValue;
frost$core$Int64 $tmp4148 = (frost$core$Int64) {104};
frost$core$Bit $tmp4149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4147, $tmp4148);
bool $tmp4150 = $tmp4149.value;
if ($tmp4150) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4151 = (frost$core$Int64) {40};
frost$core$Bit $tmp4152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4147, $tmp4151);
bool $tmp4153 = $tmp4152.value;
if ($tmp4153) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4154 = (frost$core$Int64) {41};
frost$core$Bit $tmp4155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4147, $tmp4154);
bool $tmp4156 = $tmp4155.value;
if ($tmp4156) goto block4; else goto block7;
block4:;
// line 1997
org$frostlang$frostc$ASTNode* $tmp4157 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4158 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4159 = *(&local0);
org$frostlang$frostc$Position $tmp4160 = ((org$frostlang$frostc$parser$Token) $tmp4159.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4157, $tmp4158, $tmp4160, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
return $tmp4157;
block7:;
// line 2000
frost$collections$Array* $tmp4161 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4161);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
frost$collections$Array* $tmp4162 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
*(&local1) = $tmp4161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
// line 2001
org$frostlang$frostc$ASTNode* $tmp4163 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
org$frostlang$frostc$ASTNode* $tmp4164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
*(&local2) = $tmp4163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
// line 2002
org$frostlang$frostc$ASTNode* $tmp4165 = *(&local2);
frost$core$Bit $tmp4166 = frost$core$Bit$init$builtin_bit($tmp4165 == NULL);
bool $tmp4167 = $tmp4166.value;
if ($tmp4167) goto block8; else goto block9;
block8:;
// line 2003
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4169));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2005
frost$collections$Array* $tmp4170 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4171 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4170, ((frost$core$Object*) $tmp4171));
// line 2006
org$frostlang$frostc$ASTNode* $tmp4172 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4173 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4174 = *(&local0);
org$frostlang$frostc$Position $tmp4175 = ((org$frostlang$frostc$parser$Token) $tmp4174.value).position;
org$frostlang$frostc$ASTNode* $tmp4176 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4172, $tmp4173, $tmp4175, $tmp4176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
org$frostlang$frostc$ASTNode* $tmp4177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4177));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4178));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4172;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2015
org$frostlang$frostc$parser$Token $tmp4179 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4180 = $tmp4179.kind;
frost$core$Int64 $tmp4181 = $tmp4180.$rawValue;
frost$core$Int64 $tmp4182 = (frost$core$Int64) {29};
frost$core$Bit $tmp4183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4181, $tmp4182);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block2; else goto block3;
block2:;
// line 2016
org$frostlang$frostc$ASTNode* $tmp4185 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4185));
return $tmp4185;
block3:;
frost$core$Int64 $tmp4186 = (frost$core$Int64) {30};
frost$core$Bit $tmp4187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4181, $tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block4; else goto block5;
block4:;
// line 2017
org$frostlang$frostc$ASTNode* $tmp4189 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
return $tmp4189;
block5:;
frost$core$Int64 $tmp4190 = (frost$core$Int64) {28};
frost$core$Bit $tmp4191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4181, $tmp4190);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block6; else goto block7;
block6:;
// line 2018
org$frostlang$frostc$ASTNode* $tmp4193 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
return $tmp4193;
block7:;
// line 2019
frost$core$Int64 $tmp4194 = (frost$core$Int64) {2019};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4195, $tmp4194);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2027
org$frostlang$frostc$parser$Token $tmp4196 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4197 = $tmp4196.kind;
frost$core$Int64 $tmp4198 = $tmp4197.$rawValue;
frost$core$Int64 $tmp4199 = (frost$core$Int64) {31};
frost$core$Bit $tmp4200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4198, $tmp4199);
bool $tmp4201 = $tmp4200.value;
if ($tmp4201) goto block2; else goto block3;
block2:;
// line 2028
org$frostlang$frostc$ASTNode* $tmp4202 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
return $tmp4202;
block3:;
frost$core$Int64 $tmp4203 = (frost$core$Int64) {33};
frost$core$Bit $tmp4204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4198, $tmp4203);
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block4; else goto block5;
block4:;
// line 2029
org$frostlang$frostc$ASTNode* $tmp4206 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
return $tmp4206;
block5:;
frost$core$Int64 $tmp4207 = (frost$core$Int64) {36};
frost$core$Bit $tmp4208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4198, $tmp4207);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block6; else goto block7;
block6:;
// line 2030
org$frostlang$frostc$ASTNode* $tmp4210 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
return $tmp4210;
block7:;
frost$core$Int64 $tmp4211 = (frost$core$Int64) {32};
frost$core$Bit $tmp4212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4198, $tmp4211);
bool $tmp4213 = $tmp4212.value;
if ($tmp4213) goto block8; else goto block9;
block8:;
// line 2031
org$frostlang$frostc$ASTNode* $tmp4214 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4214));
return $tmp4214;
block9:;
// line 2034
frost$core$Int64 $tmp4215 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4216 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4215);
org$frostlang$frostc$parser$Token$nullable $tmp4217 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4216, &$s4218);
// line 2035
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
// line 2044
// line 2045
frost$core$Int64 $tmp4219 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4220 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4219);
org$frostlang$frostc$parser$Token$nullable $tmp4221 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4220);
*(&local1) = $tmp4221;
// line 2046
org$frostlang$frostc$parser$Token$nullable $tmp4222 = *(&local1);
frost$core$Bit $tmp4223 = frost$core$Bit$init$builtin_bit(!$tmp4222.nonnull);
bool $tmp4224 = $tmp4223.value;
if ($tmp4224) goto block1; else goto block3;
block1:;
// line 2047
frost$core$Int64 $tmp4225 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4226 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4225);
org$frostlang$frostc$parser$Token$nullable $tmp4227 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4226, &$s4228);
*(&local1) = $tmp4227;
// line 2048
org$frostlang$frostc$parser$Token$nullable $tmp4229 = *(&local1);
frost$core$Bit $tmp4230 = frost$core$Bit$init$builtin_bit(!$tmp4229.nonnull);
bool $tmp4231 = $tmp4230.value;
if ($tmp4231) goto block4; else goto block5;
block4:;
// line 2049
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2051
frost$core$Int64 $tmp4232 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4233 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4232);
*(&local0) = $tmp4233;
goto block2;
block3:;
// line 1
// line 2054
frost$core$Int64 $tmp4234 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4235 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4234);
*(&local0) = $tmp4235;
goto block2;
block2:;
// line 2056
frost$core$Int64 $tmp4236 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4237 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4236);
org$frostlang$frostc$parser$Token$nullable $tmp4238 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4237, &$s4239);
*(&local2) = $tmp4238;
// line 2057
org$frostlang$frostc$parser$Token$nullable $tmp4240 = *(&local2);
frost$core$Bit $tmp4241 = frost$core$Bit$init$builtin_bit(!$tmp4240.nonnull);
bool $tmp4242 = $tmp4241.value;
if ($tmp4242) goto block6; else goto block7;
block6:;
// line 2058
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2060
org$frostlang$frostc$FixedArray* $tmp4243 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4243));
org$frostlang$frostc$FixedArray* $tmp4244 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4244));
*(&local3) = $tmp4243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4243));
// line 2061
org$frostlang$frostc$FixedArray* $tmp4245 = *(&local3);
frost$core$Bit $tmp4246 = frost$core$Bit$init$builtin_bit($tmp4245 == NULL);
bool $tmp4247 = $tmp4246.value;
if ($tmp4247) goto block8; else goto block9;
block8:;
// line 2062
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2064
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2065
org$frostlang$frostc$parser$Token $tmp4249 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4250 = $tmp4249.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4251;
$tmp4251 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4251->value = $tmp4250;
frost$core$Int64 $tmp4252 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4253 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4252);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4254;
$tmp4254 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4254->value = $tmp4253;
ITable* $tmp4255 = ((frost$core$Equatable*) $tmp4251)->$class->itable;
while ($tmp4255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4255 = $tmp4255->next;
}
$fn4257 $tmp4256 = $tmp4255->methods[0];
frost$core$Bit $tmp4258 = $tmp4256(((frost$core$Equatable*) $tmp4251), ((frost$core$Equatable*) $tmp4254));
bool $tmp4259 = $tmp4258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4251)));
if ($tmp4259) goto block10; else goto block12;
block10:;
// line 2066
org$frostlang$frostc$ASTNode* $tmp4260 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
org$frostlang$frostc$ASTNode* $tmp4261 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
*(&local4) = $tmp4260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
// line 2067
org$frostlang$frostc$ASTNode* $tmp4262 = *(&local4);
frost$core$Bit $tmp4263 = frost$core$Bit$init$builtin_bit($tmp4262 == NULL);
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block13; else goto block14;
block13:;
// line 2068
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4266 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2072
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4267 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2074
org$frostlang$frostc$FixedArray* $tmp4268 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
org$frostlang$frostc$FixedArray* $tmp4269 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
*(&local5) = $tmp4268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
// line 2075
org$frostlang$frostc$FixedArray* $tmp4270 = *(&local5);
frost$core$Bit $tmp4271 = frost$core$Bit$init$builtin_bit($tmp4270 == NULL);
bool $tmp4272 = $tmp4271.value;
if ($tmp4272) goto block15; else goto block16;
block15:;
// line 2076
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4273 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4274 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4275 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4275));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2078
org$frostlang$frostc$ASTNode* $tmp4276 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4277 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4278 = *(&local1);
org$frostlang$frostc$Position $tmp4279 = ((org$frostlang$frostc$parser$Token) $tmp4278.value).position;
org$frostlang$frostc$FixedArray* $tmp4280 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4280);
org$frostlang$frostc$MethodDecl$Kind $tmp4281 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4282 = *(&local2);
frost$core$String* $tmp4283 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4282.value));
org$frostlang$frostc$FixedArray* $tmp4284 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4285 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4286 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4276, $tmp4277, $tmp4279, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4280, $tmp4281, $tmp4283, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4284, $tmp4285, $tmp4286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
org$frostlang$frostc$FixedArray* $tmp4287 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4289 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4289));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4276;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2086
frost$core$Int64 $tmp4290 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4291 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4290);
org$frostlang$frostc$parser$Token$nullable $tmp4292 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4291, &$s4293);
*(&local0) = $tmp4292;
// line 2087
org$frostlang$frostc$parser$Token$nullable $tmp4294 = *(&local0);
frost$core$Bit $tmp4295 = frost$core$Bit$init$builtin_bit(!$tmp4294.nonnull);
bool $tmp4296 = $tmp4295.value;
if ($tmp4296) goto block1; else goto block2;
block1:;
// line 2088
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2090
org$frostlang$frostc$FixedArray* $tmp4297 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
org$frostlang$frostc$FixedArray* $tmp4298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local1) = $tmp4297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
// line 2091
org$frostlang$frostc$FixedArray* $tmp4299 = *(&local1);
frost$core$Bit $tmp4300 = frost$core$Bit$init$builtin_bit($tmp4299 == NULL);
bool $tmp4301 = $tmp4300.value;
if ($tmp4301) goto block3; else goto block4;
block3:;
// line 2092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2094
frost$core$Int64 $tmp4303 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4304 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4303);
org$frostlang$frostc$parser$Token$nullable $tmp4305 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4304, &$s4306);
frost$core$Bit $tmp4307 = frost$core$Bit$init$builtin_bit(!$tmp4305.nonnull);
bool $tmp4308 = $tmp4307.value;
if ($tmp4308) goto block5; else goto block6;
block5:;
// line 2095
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2097
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2098
frost$core$Int64 $tmp4310 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4311 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4310);
org$frostlang$frostc$parser$Token$nullable $tmp4312 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4311);
frost$core$Bit $tmp4313 = frost$core$Bit$init$builtin_bit($tmp4312.nonnull);
bool $tmp4314 = $tmp4313.value;
if ($tmp4314) goto block7; else goto block9;
block7:;
// line 2099
frost$core$Int64 $tmp4315 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4316 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4315);
org$frostlang$frostc$parser$Token$nullable $tmp4317 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4316, &$s4318);
*(&local3) = $tmp4317;
// line 2100
org$frostlang$frostc$parser$Token$nullable $tmp4319 = *(&local3);
frost$core$Bit $tmp4320 = frost$core$Bit$init$builtin_bit(!$tmp4319.nonnull);
bool $tmp4321 = $tmp4320.value;
if ($tmp4321) goto block10; else goto block11;
block10:;
// line 2101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4322));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2103
org$frostlang$frostc$ASTNode* $tmp4324 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4325 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4326 = *(&local3);
org$frostlang$frostc$Position $tmp4327 = ((org$frostlang$frostc$parser$Token) $tmp4326.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4328 = *(&local3);
frost$core$String* $tmp4329 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4328.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4324, $tmp4325, $tmp4327, $tmp4329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
org$frostlang$frostc$ASTNode* $tmp4330 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
*(&local2) = $tmp4324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
// line 2104
frost$core$Int64 $tmp4331 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4332 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4331);
org$frostlang$frostc$parser$Token$nullable $tmp4333 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4332, &$s4334);
frost$core$Bit $tmp4335 = frost$core$Bit$init$builtin_bit(!$tmp4333.nonnull);
bool $tmp4336 = $tmp4335.value;
if ($tmp4336) goto block12; else goto block13;
block12:;
// line 2105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4337 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4338 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2109
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4339 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2111
org$frostlang$frostc$FixedArray* $tmp4340 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
org$frostlang$frostc$FixedArray* $tmp4341 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
*(&local4) = $tmp4340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
// line 2112
org$frostlang$frostc$FixedArray* $tmp4342 = *(&local4);
frost$core$Bit $tmp4343 = frost$core$Bit$init$builtin_bit($tmp4342 == NULL);
bool $tmp4344 = $tmp4343.value;
if ($tmp4344) goto block14; else goto block15;
block14:;
// line 2113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4345 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2115
org$frostlang$frostc$ASTNode* $tmp4348 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4349 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4350 = *(&local0);
org$frostlang$frostc$Position $tmp4351 = ((org$frostlang$frostc$parser$Token) $tmp4350.value).position;
org$frostlang$frostc$FixedArray* $tmp4352 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4353 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4354 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4348, $tmp4349, $tmp4351, $tmp4352, $tmp4353, $tmp4354);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4348));
org$frostlang$frostc$FixedArray* $tmp4355 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4355));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4356 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4356));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4348;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2123
org$frostlang$frostc$parser$Token $tmp4358 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4359 = $tmp4358.kind;
frost$core$Int64 $tmp4360 = $tmp4359.$rawValue;
frost$core$Int64 $tmp4361 = (frost$core$Int64) {37};
frost$core$Bit $tmp4362 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4361);
bool $tmp4363 = $tmp4362.value;
if ($tmp4363) goto block2; else goto block3;
block2:;
// line 2124
org$frostlang$frostc$ASTNode* $tmp4364 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
return $tmp4364;
block3:;
frost$core$Int64 $tmp4365 = (frost$core$Int64) {33};
frost$core$Bit $tmp4366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4365);
bool $tmp4367 = $tmp4366.value;
if ($tmp4367) goto block4; else goto block5;
block4:;
// line 2125
org$frostlang$frostc$ASTNode* $tmp4368 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
return $tmp4368;
block5:;
frost$core$Int64 $tmp4369 = (frost$core$Int64) {32};
frost$core$Bit $tmp4370 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4369);
bool $tmp4371 = $tmp4370.value;
if ($tmp4371) goto block6; else goto block7;
block6:;
// line 2126
org$frostlang$frostc$ASTNode* $tmp4372 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
return $tmp4372;
block7:;
frost$core$Int64 $tmp4373 = (frost$core$Int64) {31};
frost$core$Bit $tmp4374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4373);
bool $tmp4375 = $tmp4374.value;
if ($tmp4375) goto block8; else goto block9;
block8:;
// line 2127
org$frostlang$frostc$ASTNode* $tmp4376 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
return $tmp4376;
block9:;
frost$core$Int64 $tmp4377 = (frost$core$Int64) {36};
frost$core$Bit $tmp4378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4377);
bool $tmp4379 = $tmp4378.value;
if ($tmp4379) goto block10; else goto block11;
block10:;
// line 2128
org$frostlang$frostc$ASTNode* $tmp4380 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
return $tmp4380;
block11:;
frost$core$Int64 $tmp4381 = (frost$core$Int64) {45};
frost$core$Bit $tmp4382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4381);
bool $tmp4383 = $tmp4382.value;
if ($tmp4383) goto block12; else goto block13;
block12:;
// line 2129
org$frostlang$frostc$ASTNode* $tmp4384 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
return $tmp4384;
block13:;
frost$core$Int64 $tmp4385 = (frost$core$Int64) {39};
frost$core$Bit $tmp4386 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4385);
bool $tmp4387 = $tmp4386.value;
if ($tmp4387) goto block14; else goto block15;
block14:;
// line 2130
org$frostlang$frostc$ASTNode* $tmp4388 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
return $tmp4388;
block15:;
frost$core$Int64 $tmp4389 = (frost$core$Int64) {103};
frost$core$Bit $tmp4390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4389);
bool $tmp4391 = $tmp4390.value;
if ($tmp4391) goto block16; else goto block17;
block16:;
// line 2131
org$frostlang$frostc$ASTNode* $tmp4392 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
return $tmp4392;
block17:;
frost$core$Int64 $tmp4393 = (frost$core$Int64) {52};
frost$core$Bit $tmp4394 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4393);
bool $tmp4395 = $tmp4394.value;
if ($tmp4395) goto block18; else goto block19;
block18:;
// line 2133
org$frostlang$frostc$parser$Token $tmp4396 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4396;
// line 2134
frost$core$Int64 $tmp4397 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4398 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4397);
org$frostlang$frostc$parser$Token$nullable $tmp4399 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4398);
*(&local1) = $tmp4399;
// line 2135
org$frostlang$frostc$parser$Token$nullable $tmp4400 = *(&local1);
frost$core$Bit $tmp4401 = frost$core$Bit$init$builtin_bit($tmp4400.nonnull);
bool $tmp4402 = $tmp4401.value;
if ($tmp4402) goto block20; else goto block21;
block20:;
// line 2136
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4403 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4404 = *$tmp4403;
frost$core$Bit $tmp4405 = frost$core$Bit$init$builtin_bit($tmp4404 != NULL);
bool $tmp4406 = $tmp4405.value;
if ($tmp4406) goto block22; else goto block23;
block22:;
// line 2137
org$frostlang$frostc$parser$Token$nullable $tmp4407 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4407.value));
// line 2138
org$frostlang$frostc$parser$Token $tmp4408 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4408);
// line 2139
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4409 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4410 = *$tmp4409;
frost$core$Int64 $tmp4411 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4412 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4411);
$fn4414 $tmp4413 = ($fn4414) $tmp4410->$class->vtable[3];
$tmp4413($tmp4410, $tmp4412);
// line 2140
org$frostlang$frostc$parser$Token $tmp4415 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2141
org$frostlang$frostc$parser$Token $tmp4416 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2142
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4417 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4418 = *$tmp4417;
frost$core$Int64 $tmp4419 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4420 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4419);
$fn4422 $tmp4421 = ($fn4422) $tmp4418->$class->vtable[4];
$tmp4421($tmp4418, $tmp4420);
goto block23;
block23:;
// line 2144
org$frostlang$frostc$parser$Token $tmp4423 = *(&local0);
frost$core$String* $tmp4424 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4423);
org$frostlang$frostc$ASTNode* $tmp4425 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
return $tmp4425;
block21:;
// line 2146
org$frostlang$frostc$parser$Token $tmp4426 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4426);
// line 2147
org$frostlang$frostc$ASTNode* $tmp4427 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
return $tmp4427;
block19:;
frost$core$Int64 $tmp4428 = (frost$core$Int64) {49};
frost$core$Bit $tmp4429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4428);
bool $tmp4430 = $tmp4429.value;
if ($tmp4430) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4431 = (frost$core$Int64) {50};
frost$core$Bit $tmp4432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4431);
bool $tmp4433 = $tmp4432.value;
if ($tmp4433) goto block24; else goto block26;
block24:;
// line 2150
org$frostlang$frostc$ASTNode* $tmp4434 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4434));
return $tmp4434;
block26:;
frost$core$Int64 $tmp4435 = (frost$core$Int64) {24};
frost$core$Bit $tmp4436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4435);
bool $tmp4437 = $tmp4436.value;
if ($tmp4437) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4438 = (frost$core$Int64) {25};
frost$core$Bit $tmp4439 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4438);
bool $tmp4440 = $tmp4439.value;
if ($tmp4440) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4441 = (frost$core$Int64) {26};
frost$core$Bit $tmp4442 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4441);
bool $tmp4443 = $tmp4442.value;
if ($tmp4443) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4444 = (frost$core$Int64) {27};
frost$core$Bit $tmp4445 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4444);
bool $tmp4446 = $tmp4445.value;
if ($tmp4446) goto block27; else goto block31;
block27:;
// line 2153
org$frostlang$frostc$ASTNode* $tmp4447 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
return $tmp4447;
block31:;
frost$core$Int64 $tmp4448 = (frost$core$Int64) {23};
frost$core$Bit $tmp4449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4448);
bool $tmp4450 = $tmp4449.value;
if ($tmp4450) goto block32; else goto block33;
block32:;
// line 2156
org$frostlang$frostc$ASTNode* $tmp4451 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
return $tmp4451;
block33:;
frost$core$Int64 $tmp4452 = (frost$core$Int64) {22};
frost$core$Bit $tmp4453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4452);
bool $tmp4454 = $tmp4453.value;
if ($tmp4454) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4455 = (frost$core$Int64) {21};
frost$core$Bit $tmp4456 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4455);
bool $tmp4457 = $tmp4456.value;
if ($tmp4457) goto block34; else goto block36;
block34:;
// line 2159
org$frostlang$frostc$ASTNode* $tmp4458 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
return $tmp4458;
block36:;
frost$core$Int64 $tmp4459 = (frost$core$Int64) {47};
frost$core$Bit $tmp4460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4459);
bool $tmp4461 = $tmp4460.value;
if ($tmp4461) goto block37; else goto block38;
block37:;
// line 2162
org$frostlang$frostc$ASTNode* $tmp4462 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
return $tmp4462;
block38:;
frost$core$Int64 $tmp4463 = (frost$core$Int64) {46};
frost$core$Bit $tmp4464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4360, $tmp4463);
bool $tmp4465 = $tmp4464.value;
if ($tmp4465) goto block39; else goto block40;
block39:;
// line 2165
org$frostlang$frostc$ASTNode* $tmp4466 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
return $tmp4466;
block40:;
// line 2169
frost$core$Int64 $tmp4467 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4468 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4467);
org$frostlang$frostc$parser$Token$nullable $tmp4469 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4468, &$s4470);
// line 2170
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
// line 2179
frost$core$Int64 $tmp4471 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4472 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4471);
org$frostlang$frostc$parser$Token$nullable $tmp4473 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4472, &$s4474);
*(&local0) = $tmp4473;
// line 2180
org$frostlang$frostc$parser$Token$nullable $tmp4475 = *(&local0);
frost$core$Bit $tmp4476 = frost$core$Bit$init$builtin_bit(!$tmp4475.nonnull);
bool $tmp4477 = $tmp4476.value;
if ($tmp4477) goto block1; else goto block2;
block1:;
// line 2181
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2183
frost$core$Int64 $tmp4478 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4479 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4478);
org$frostlang$frostc$parser$Token$nullable $tmp4480 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4479, &$s4481);
*(&local1) = $tmp4480;
// line 2184
org$frostlang$frostc$parser$Token$nullable $tmp4482 = *(&local1);
frost$core$Bit $tmp4483 = frost$core$Bit$init$builtin_bit(!$tmp4482.nonnull);
bool $tmp4484 = $tmp4483.value;
if ($tmp4484) goto block3; else goto block4;
block3:;
// line 2185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2187
frost$core$MutableString* $tmp4485 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4486 = *(&local1);
frost$core$String* $tmp4487 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4486.value));
frost$core$MutableString$init$frost$core$String($tmp4485, $tmp4487);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
frost$core$MutableString* $tmp4488 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
*(&local2) = $tmp4485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
// line 2188
goto block5;
block5:;
// line 2189
frost$core$Int64 $tmp4489 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4490 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4489);
org$frostlang$frostc$parser$Token$nullable $tmp4491 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4490);
*(&local1) = $tmp4491;
// line 2190
org$frostlang$frostc$parser$Token$nullable $tmp4492 = *(&local1);
frost$core$Bit $tmp4493 = frost$core$Bit$init$builtin_bit(!$tmp4492.nonnull);
bool $tmp4494 = $tmp4493.value;
if ($tmp4494) goto block7; else goto block8;
block7:;
// line 2191
goto block6;
block8:;
// line 2193
frost$core$MutableString* $tmp4495 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4495, &$s4496);
// line 2194
frost$core$Int64 $tmp4497 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4498 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4497);
org$frostlang$frostc$parser$Token$nullable $tmp4499 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4498, &$s4500);
*(&local1) = $tmp4499;
// line 2195
org$frostlang$frostc$parser$Token$nullable $tmp4501 = *(&local1);
frost$core$Bit $tmp4502 = frost$core$Bit$init$builtin_bit(!$tmp4501.nonnull);
bool $tmp4503 = $tmp4502.value;
if ($tmp4503) goto block9; else goto block10;
block9:;
// line 2196
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4504 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2198
frost$core$MutableString* $tmp4505 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4506 = *(&local1);
frost$core$String* $tmp4507 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4506.value));
frost$core$MutableString$append$frost$core$String($tmp4505, $tmp4507);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
goto block5;
block6:;
// line 2200
org$frostlang$frostc$ASTNode* $tmp4508 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4509 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4510 = *(&local0);
org$frostlang$frostc$Position $tmp4511 = ((org$frostlang$frostc$parser$Token) $tmp4510.value).position;
frost$core$MutableString* $tmp4512 = *(&local2);
frost$core$String* $tmp4513 = frost$core$MutableString$finish$R$frost$core$String($tmp4512);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4508, $tmp4509, $tmp4511, $tmp4513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$MutableString* $tmp4514 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4508;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2207
frost$core$Int64 $tmp4515 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4516 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4515);
org$frostlang$frostc$parser$Token$nullable $tmp4517 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4516, &$s4518);
*(&local0) = $tmp4517;
// line 2208
org$frostlang$frostc$parser$Token$nullable $tmp4519 = *(&local0);
frost$core$Bit $tmp4520 = frost$core$Bit$init$builtin_bit(!$tmp4519.nonnull);
bool $tmp4521 = $tmp4520.value;
if ($tmp4521) goto block1; else goto block2;
block1:;
// line 2209
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2211
frost$core$Int64 $tmp4522 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4523 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4522);
org$frostlang$frostc$parser$Token$nullable $tmp4524 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4523, &$s4525);
*(&local1) = $tmp4524;
// line 2212
org$frostlang$frostc$parser$Token$nullable $tmp4526 = *(&local1);
frost$core$Bit $tmp4527 = frost$core$Bit$init$builtin_bit(!$tmp4526.nonnull);
bool $tmp4528 = $tmp4527.value;
if ($tmp4528) goto block3; else goto block4;
block3:;
// line 2213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2215
frost$core$MutableString* $tmp4529 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4530 = *(&local1);
frost$core$String* $tmp4531 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4530.value));
frost$core$MutableString$init$frost$core$String($tmp4529, $tmp4531);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
frost$core$MutableString* $tmp4532 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4532));
*(&local2) = $tmp4529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
// line 2216
goto block5;
block5:;
// line 2217
frost$core$Int64 $tmp4533 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4534 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4533);
org$frostlang$frostc$parser$Token$nullable $tmp4535 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4534);
*(&local1) = $tmp4535;
// line 2218
org$frostlang$frostc$parser$Token$nullable $tmp4536 = *(&local1);
frost$core$Bit $tmp4537 = frost$core$Bit$init$builtin_bit(!$tmp4536.nonnull);
bool $tmp4538 = $tmp4537.value;
if ($tmp4538) goto block7; else goto block8;
block7:;
// line 2219
goto block6;
block8:;
// line 2221
frost$core$MutableString* $tmp4539 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4539, &$s4540);
// line 2222
frost$core$Int64 $tmp4541 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4542 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4541);
org$frostlang$frostc$parser$Token$nullable $tmp4543 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4542, &$s4544);
*(&local1) = $tmp4543;
// line 2223
org$frostlang$frostc$parser$Token$nullable $tmp4545 = *(&local1);
frost$core$Bit $tmp4546 = frost$core$Bit$init$builtin_bit(!$tmp4545.nonnull);
bool $tmp4547 = $tmp4546.value;
if ($tmp4547) goto block9; else goto block10;
block9:;
// line 2224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2226
frost$core$MutableString* $tmp4549 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4550 = *(&local1);
frost$core$String* $tmp4551 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4550.value));
frost$core$MutableString$append$frost$core$String($tmp4549, $tmp4551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
goto block5;
block6:;
// line 2228
org$frostlang$frostc$ASTNode* $tmp4552 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4553 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp4554 = *(&local0);
org$frostlang$frostc$Position $tmp4555 = ((org$frostlang$frostc$parser$Token) $tmp4554.value).position;
frost$core$MutableString* $tmp4556 = *(&local2);
frost$core$String* $tmp4557 = frost$core$MutableString$finish$R$frost$core$String($tmp4556);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4552, $tmp4553, $tmp4555, $tmp4557);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$MutableString* $tmp4558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4558));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4552;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2235
frost$core$Int64 $tmp4559 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4560 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4559);
org$frostlang$frostc$parser$Token$nullable $tmp4561 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4560, &$s4562);
*(&local0) = $tmp4561;
// line 2236
org$frostlang$frostc$parser$Token$nullable $tmp4563 = *(&local0);
frost$core$Bit $tmp4564 = frost$core$Bit$init$builtin_bit(!$tmp4563.nonnull);
bool $tmp4565 = $tmp4564.value;
if ($tmp4565) goto block1; else goto block2;
block1:;
// line 2237
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2239
frost$core$Int64 $tmp4566 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4567 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4566);
org$frostlang$frostc$parser$Token$nullable $tmp4568 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4567, &$s4569);
*(&local1) = $tmp4568;
// line 2240
org$frostlang$frostc$parser$Token$nullable $tmp4570 = *(&local1);
frost$core$Bit $tmp4571 = frost$core$Bit$init$builtin_bit(!$tmp4570.nonnull);
bool $tmp4572 = $tmp4571.value;
if ($tmp4572) goto block3; else goto block4;
block3:;
// line 2241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2243
frost$collections$Array* $tmp4573 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4573);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4573));
frost$collections$Array* $tmp4574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
*(&local2) = $tmp4573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4573));
// line 2244
frost$core$Int64 $tmp4575 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4576 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4575);
org$frostlang$frostc$parser$Token$nullable $tmp4577 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4576);
frost$core$Bit $tmp4578 = frost$core$Bit$init$builtin_bit($tmp4577.nonnull);
bool $tmp4579 = $tmp4578.value;
if ($tmp4579) goto block5; else goto block7;
block5:;
// line 2245
org$frostlang$frostc$ASTNode* $tmp4580 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4580));
org$frostlang$frostc$ASTNode* $tmp4581 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
*(&local3) = $tmp4580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4580));
// line 2246
org$frostlang$frostc$ASTNode* $tmp4582 = *(&local3);
frost$core$Bit $tmp4583 = frost$core$Bit$init$builtin_bit($tmp4582 == NULL);
bool $tmp4584 = $tmp4583.value;
if ($tmp4584) goto block8; else goto block9;
block8:;
// line 2247
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4585 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4586 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4586));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2249
frost$collections$Array* $tmp4587 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4588 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4589 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4590 = *(&local1);
org$frostlang$frostc$Position $tmp4591 = ((org$frostlang$frostc$parser$Token) $tmp4590.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4592 = *(&local1);
frost$core$String* $tmp4593 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4592.value));
org$frostlang$frostc$ASTNode* $tmp4594 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4588, $tmp4589, $tmp4591, $tmp4593, $tmp4594);
frost$collections$Array$add$frost$collections$Array$T($tmp4587, ((frost$core$Object*) $tmp4588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
org$frostlang$frostc$ASTNode* $tmp4595 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2252
frost$collections$Array* $tmp4596 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4597 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4598 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4599 = *(&local1);
org$frostlang$frostc$Position $tmp4600 = ((org$frostlang$frostc$parser$Token) $tmp4599.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4601 = *(&local1);
frost$core$String* $tmp4602 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4601.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4597, $tmp4598, $tmp4600, $tmp4602);
frost$collections$Array$add$frost$collections$Array$T($tmp4596, ((frost$core$Object*) $tmp4597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4597));
goto block6;
block6:;
// line 2254
goto block10;
block10:;
frost$core$Int64 $tmp4603 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4604 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4603);
org$frostlang$frostc$parser$Token$nullable $tmp4605 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4604);
frost$core$Bit $tmp4606 = frost$core$Bit$init$builtin_bit($tmp4605.nonnull);
bool $tmp4607 = $tmp4606.value;
if ($tmp4607) goto block11; else goto block12;
block11:;
// line 2255
frost$core$Int64 $tmp4608 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4609 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4608);
org$frostlang$frostc$parser$Token$nullable $tmp4610 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4609, &$s4611);
*(&local1) = $tmp4610;
// line 2256
org$frostlang$frostc$parser$Token$nullable $tmp4612 = *(&local1);
frost$core$Bit $tmp4613 = frost$core$Bit$init$builtin_bit(!$tmp4612.nonnull);
bool $tmp4614 = $tmp4613.value;
if ($tmp4614) goto block13; else goto block14;
block13:;
// line 2257
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2259
frost$core$Int64 $tmp4616 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4617 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4616);
org$frostlang$frostc$parser$Token$nullable $tmp4618 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4617);
frost$core$Bit $tmp4619 = frost$core$Bit$init$builtin_bit($tmp4618.nonnull);
bool $tmp4620 = $tmp4619.value;
if ($tmp4620) goto block15; else goto block17;
block15:;
// line 2260
org$frostlang$frostc$ASTNode* $tmp4621 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
org$frostlang$frostc$ASTNode* $tmp4622 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local4) = $tmp4621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
// line 2261
org$frostlang$frostc$ASTNode* $tmp4623 = *(&local4);
frost$core$Bit $tmp4624 = frost$core$Bit$init$builtin_bit($tmp4623 == NULL);
bool $tmp4625 = $tmp4624.value;
if ($tmp4625) goto block18; else goto block19;
block18:;
// line 2262
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4627));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2264
frost$collections$Array* $tmp4628 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4629 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4630 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4631 = *(&local1);
org$frostlang$frostc$Position $tmp4632 = ((org$frostlang$frostc$parser$Token) $tmp4631.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4633 = *(&local1);
frost$core$String* $tmp4634 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4633.value));
org$frostlang$frostc$ASTNode* $tmp4635 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4629, $tmp4630, $tmp4632, $tmp4634, $tmp4635);
frost$collections$Array$add$frost$collections$Array$T($tmp4628, ((frost$core$Object*) $tmp4629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
org$frostlang$frostc$ASTNode* $tmp4636 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2267
frost$collections$Array* $tmp4637 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4638 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4639 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4640 = *(&local1);
org$frostlang$frostc$Position $tmp4641 = ((org$frostlang$frostc$parser$Token) $tmp4640.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4642 = *(&local1);
frost$core$String* $tmp4643 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4642.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4638, $tmp4639, $tmp4641, $tmp4643);
frost$collections$Array$add$frost$collections$Array$T($tmp4637, ((frost$core$Object*) $tmp4638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
goto block16;
block16:;
goto block10;
block12:;
// line 2270
frost$core$Int64 $tmp4644 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4645 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4644);
org$frostlang$frostc$parser$Token$nullable $tmp4646 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4645, &$s4647);
frost$core$Bit $tmp4648 = frost$core$Bit$init$builtin_bit(!$tmp4646.nonnull);
bool $tmp4649 = $tmp4648.value;
if ($tmp4649) goto block20; else goto block21;
block20:;
// line 2271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2273
frost$collections$Array* $tmp4651 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4652 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4652));
frost$collections$Array* $tmp4653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4653));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4652;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2280
frost$core$Int64 $tmp4654 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4655 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4654);
org$frostlang$frostc$parser$Token$nullable $tmp4656 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4655, &$s4657);
*(&local0) = $tmp4656;
// line 2281
org$frostlang$frostc$parser$Token$nullable $tmp4658 = *(&local0);
frost$core$Bit $tmp4659 = frost$core$Bit$init$builtin_bit(!$tmp4658.nonnull);
bool $tmp4660 = $tmp4659.value;
if ($tmp4660) goto block1; else goto block2;
block1:;
// line 2282
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2284
frost$collections$Array* $tmp4661 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4661);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
frost$collections$Array* $tmp4662 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
*(&local1) = $tmp4661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
// line 2285
org$frostlang$frostc$ASTNode* $tmp4663 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
org$frostlang$frostc$ASTNode* $tmp4664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
*(&local2) = $tmp4663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
// line 2286
org$frostlang$frostc$ASTNode* $tmp4665 = *(&local2);
frost$core$Bit $tmp4666 = frost$core$Bit$init$builtin_bit($tmp4665 == NULL);
bool $tmp4667 = $tmp4666.value;
if ($tmp4667) goto block3; else goto block4;
block3:;
// line 2287
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4668));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2289
frost$collections$Array* $tmp4670 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4671 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4670, ((frost$core$Object*) $tmp4671));
// line 2290
goto block5;
block5:;
frost$core$Int64 $tmp4672 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4673 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4672);
org$frostlang$frostc$parser$Token$nullable $tmp4674 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4673);
frost$core$Bit $tmp4675 = frost$core$Bit$init$builtin_bit($tmp4674.nonnull);
bool $tmp4676 = $tmp4675.value;
if ($tmp4676) goto block6; else goto block7;
block6:;
// line 2291
org$frostlang$frostc$ASTNode* $tmp4677 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
org$frostlang$frostc$ASTNode* $tmp4678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
*(&local2) = $tmp4677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
// line 2292
org$frostlang$frostc$ASTNode* $tmp4679 = *(&local2);
frost$core$Bit $tmp4680 = frost$core$Bit$init$builtin_bit($tmp4679 == NULL);
bool $tmp4681 = $tmp4680.value;
if ($tmp4681) goto block8; else goto block9;
block8:;
// line 2293
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4682 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4683 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2295
frost$collections$Array* $tmp4684 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4685 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4684, ((frost$core$Object*) $tmp4685));
goto block5;
block7:;
// line 2297
frost$collections$Array* $tmp4686 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4687 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
org$frostlang$frostc$ASTNode* $tmp4688 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4687;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2304
frost$core$Int64 $tmp4690 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4691 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4690);
org$frostlang$frostc$parser$Token$nullable $tmp4692 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4691, &$s4693);
*(&local0) = $tmp4692;
// line 2305
*(&local1) = ((frost$core$String*) NULL);
// line 2306
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4694 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2307
frost$core$Int64 $tmp4695 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4696 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4695);
org$frostlang$frostc$parser$Token$nullable $tmp4697 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4696);
*(&local3) = $tmp4697;
// line 2308
org$frostlang$frostc$parser$Token$nullable $tmp4698 = *(&local3);
frost$core$Bit $tmp4699 = frost$core$Bit$init$builtin_bit($tmp4698.nonnull);
bool $tmp4700 = $tmp4699.value;
if ($tmp4700) goto block1; else goto block2;
block1:;
// line 2309
org$frostlang$frostc$ASTNode* $tmp4701 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
org$frostlang$frostc$ASTNode* $tmp4702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
*(&local2) = $tmp4701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
// line 2310
org$frostlang$frostc$ASTNode* $tmp4703 = *(&local2);
frost$core$Bit $tmp4704 = frost$core$Bit$init$builtin_bit($tmp4703 == NULL);
bool $tmp4705 = $tmp4704.value;
if ($tmp4705) goto block3; else goto block4;
block3:;
// line 2311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2313
frost$core$Int64 $tmp4708 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4709 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4708);
org$frostlang$frostc$parser$Token$nullable $tmp4710 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4709, &$s4711);
*(&local4) = $tmp4710;
// line 2314
org$frostlang$frostc$parser$Token$nullable $tmp4712 = *(&local4);
frost$core$Bit $tmp4713 = frost$core$Bit$init$builtin_bit(!$tmp4712.nonnull);
bool $tmp4714 = $tmp4713.value;
if ($tmp4714) goto block5; else goto block6;
block5:;
// line 2315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4715 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2317
frost$core$String** $tmp4717 = &param0->source;
frost$core$String* $tmp4718 = *$tmp4717;
frost$core$String** $tmp4719 = &param0->source;
frost$core$String* $tmp4720 = *$tmp4719;
org$frostlang$frostc$parser$Token$nullable $tmp4721 = *(&local3);
frost$core$String$Index $tmp4722 = ((org$frostlang$frostc$parser$Token) $tmp4721.value).start;
frost$core$String$Index $tmp4723 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4720, $tmp4722);
org$frostlang$frostc$parser$Token$nullable $tmp4724 = *(&local4);
frost$core$String$Index $tmp4725 = ((org$frostlang$frostc$parser$Token) $tmp4724.value).start;
frost$core$Bit $tmp4726 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4727 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4723, $tmp4725, $tmp4726);
frost$core$String* $tmp4728 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4718, $tmp4727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
frost$core$String* $tmp4729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
*(&local1) = $tmp4728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
goto block2;
block2:;
// line 2319
org$frostlang$frostc$ASTNode* $tmp4730 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4731 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4732 = *(&local0);
org$frostlang$frostc$Position $tmp4733 = ((org$frostlang$frostc$parser$Token) $tmp4732.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4734 = *(&local0);
frost$core$String* $tmp4735 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4734.value));
frost$core$String* $tmp4736 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4737 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4730, $tmp4731, $tmp4733, $tmp4735, $tmp4736, $tmp4737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4730));
org$frostlang$frostc$ASTNode* $tmp4738 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4730;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2326
frost$collections$Array* $tmp4740 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4740);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
frost$collections$Array* $tmp4741 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
*(&local0) = $tmp4740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
// line 2327
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4742 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4743 = $tmp4742.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4744;
$tmp4744 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4744->value = $tmp4743;
frost$core$Int64 $tmp4745 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4746 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4745);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4747;
$tmp4747 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4747->value = $tmp4746;
ITable* $tmp4748 = ((frost$core$Equatable*) $tmp4744)->$class->itable;
while ($tmp4748->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4748 = $tmp4748->next;
}
$fn4750 $tmp4749 = $tmp4748->methods[0];
frost$core$Bit $tmp4751 = $tmp4749(((frost$core$Equatable*) $tmp4744), ((frost$core$Equatable*) $tmp4747));
bool $tmp4752 = $tmp4751.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4747)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4744)));
if ($tmp4752) goto block2; else goto block3;
block2:;
// line 2328
org$frostlang$frostc$ASTNode* $tmp4753 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
org$frostlang$frostc$ASTNode* $tmp4754 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
*(&local1) = $tmp4753;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
// line 2329
org$frostlang$frostc$ASTNode* $tmp4755 = *(&local1);
frost$core$Bit $tmp4756 = frost$core$Bit$init$builtin_bit($tmp4755 == NULL);
bool $tmp4757 = $tmp4756.value;
if ($tmp4757) goto block4; else goto block5;
block4:;
// line 2330
org$frostlang$frostc$ASTNode* $tmp4758 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2332
frost$collections$Array* $tmp4759 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4760 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4759, ((frost$core$Object*) $tmp4760));
org$frostlang$frostc$ASTNode* $tmp4761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2334
frost$collections$Array* $tmp4762 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4763 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$collections$Array* $tmp4764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4763;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2338
frost$core$Int64 $tmp4765 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4766 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4765);
org$frostlang$frostc$parser$Token$nullable $tmp4767 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4766, &$s4768);
*(&local0) = $tmp4767;
// line 2339
org$frostlang$frostc$parser$Token$nullable $tmp4769 = *(&local0);
frost$core$Bit $tmp4770 = frost$core$Bit$init$builtin_bit(!$tmp4769.nonnull);
bool $tmp4771 = $tmp4770.value;
if ($tmp4771) goto block1; else goto block2;
block1:;
// line 2340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2342
frost$core$MutableString* $tmp4772 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4772);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
frost$core$MutableString* $tmp4773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
*(&local1) = $tmp4772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
// line 2343
goto block3;
block3:;
// line 2344
org$frostlang$frostc$parser$Token $tmp4774 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4774;
// line 2345
org$frostlang$frostc$parser$Token $tmp4775 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4776 = $tmp4775.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4777;
$tmp4777 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4777->value = $tmp4776;
frost$core$Int64 $tmp4778 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4779 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4778);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4780;
$tmp4780 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4780->value = $tmp4779;
ITable* $tmp4781 = ((frost$core$Equatable*) $tmp4777)->$class->itable;
while ($tmp4781->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4781 = $tmp4781->next;
}
$fn4783 $tmp4782 = $tmp4781->methods[0];
frost$core$Bit $tmp4784 = $tmp4782(((frost$core$Equatable*) $tmp4777), ((frost$core$Equatable*) $tmp4780));
bool $tmp4785 = $tmp4784.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4780)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4777)));
if ($tmp4785) goto block5; else goto block6;
block5:;
// line 2346
goto block4;
block6:;
// line 2348
org$frostlang$frostc$parser$Token $tmp4786 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4787 = $tmp4786.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4788;
$tmp4788 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4788->value = $tmp4787;
frost$core$Int64 $tmp4789 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4790 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4789);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4791;
$tmp4791 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4791->value = $tmp4790;
ITable* $tmp4792 = ((frost$core$Equatable*) $tmp4788)->$class->itable;
while ($tmp4792->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4792 = $tmp4792->next;
}
$fn4794 $tmp4793 = $tmp4792->methods[0];
frost$core$Bit $tmp4795 = $tmp4793(((frost$core$Equatable*) $tmp4788), ((frost$core$Equatable*) $tmp4791));
bool $tmp4796 = $tmp4795.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4791)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4788)));
if ($tmp4796) goto block7; else goto block8;
block7:;
// line 2349
org$frostlang$frostc$parser$Token$nullable $tmp4797 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4797.value), &$s4798);
// line 2350
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4799 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2352
frost$core$MutableString* $tmp4800 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4801 = *(&local2);
frost$core$String* $tmp4802 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4801);
frost$core$MutableString$append$frost$core$String($tmp4800, $tmp4802);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
goto block3;
block4:;
// line 2354
org$frostlang$frostc$ASTNode* $tmp4803 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4804 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4805 = *(&local0);
org$frostlang$frostc$Position $tmp4806 = ((org$frostlang$frostc$parser$Token) $tmp4805.value).position;
frost$core$MutableString* $tmp4807 = *(&local1);
frost$core$String* $tmp4808 = frost$core$MutableString$finish$R$frost$core$String($tmp4807);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4803, $tmp4804, $tmp4806, $tmp4808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
frost$core$MutableString* $tmp4809 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4803;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2361
frost$core$Int64 $tmp4810 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4811 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4810);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4811);
// line 2362
frost$core$Int64 $tmp4812 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4813 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4812);
org$frostlang$frostc$parser$Token$nullable $tmp4814 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4813, &$s4815);
*(&local0) = $tmp4814;
// line 2363
frost$core$Int64 $tmp4816 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4817 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4816);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4817);
// line 2364
org$frostlang$frostc$parser$Token$nullable $tmp4818 = *(&local0);
frost$core$Bit $tmp4819 = frost$core$Bit$init$builtin_bit(!$tmp4818.nonnull);
bool $tmp4820 = $tmp4819.value;
if ($tmp4820) goto block1; else goto block2;
block1:;
// line 2365
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2367
org$frostlang$frostc$ASTNode* $tmp4821 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
org$frostlang$frostc$ASTNode* $tmp4822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
*(&local1) = $tmp4821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
// line 2368
org$frostlang$frostc$ASTNode* $tmp4823 = *(&local1);
frost$core$Bit $tmp4824 = frost$core$Bit$init$builtin_bit($tmp4823 == NULL);
bool $tmp4825 = $tmp4824.value;
if ($tmp4825) goto block3; else goto block4;
block3:;
// line 2369
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2371
org$frostlang$frostc$ASTNode* $tmp4827 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4828 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4829 = *(&local0);
org$frostlang$frostc$Position $tmp4830 = ((org$frostlang$frostc$parser$Token) $tmp4829.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4831 = *(&local0);
frost$core$String* $tmp4832 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4831.value));
org$frostlang$frostc$ASTNode* $tmp4833 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4827, $tmp4828, $tmp4830, $tmp4832, $tmp4833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
org$frostlang$frostc$ASTNode* $tmp4834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4834));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4827;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2378
frost$core$Int64 $tmp4835 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4836 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4835);
org$frostlang$frostc$parser$Token$nullable $tmp4837 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4836, &$s4838);
*(&local0) = $tmp4837;
// line 2379
org$frostlang$frostc$parser$Token$nullable $tmp4839 = *(&local0);
frost$core$Bit $tmp4840 = frost$core$Bit$init$builtin_bit(!$tmp4839.nonnull);
bool $tmp4841 = $tmp4840.value;
if ($tmp4841) goto block1; else goto block2;
block1:;
// line 2380
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2382
frost$collections$Array* $tmp4842 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4842);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
frost$collections$Array* $tmp4843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
*(&local1) = $tmp4842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
// line 2383
frost$core$Int64 $tmp4844 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4845 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4844);
org$frostlang$frostc$parser$Token$nullable $tmp4846 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4845);
frost$core$Bit $tmp4847 = frost$core$Bit$init$builtin_bit(!$tmp4846.nonnull);
bool $tmp4848 = $tmp4847.value;
if ($tmp4848) goto block3; else goto block4;
block3:;
// line 2384
org$frostlang$frostc$ASTNode* $tmp4849 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4849));
org$frostlang$frostc$ASTNode* $tmp4850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
*(&local2) = $tmp4849;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4849));
// line 2385
org$frostlang$frostc$ASTNode* $tmp4851 = *(&local2);
frost$core$Bit $tmp4852 = frost$core$Bit$init$builtin_bit($tmp4851 == NULL);
bool $tmp4853 = $tmp4852.value;
if ($tmp4853) goto block5; else goto block6;
block5:;
// line 2386
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4854 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4855 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2388
frost$collections$Array* $tmp4856 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4857 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4856, ((frost$core$Object*) $tmp4857));
// line 2389
goto block7;
block7:;
frost$core$Int64 $tmp4858 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4859 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4858);
org$frostlang$frostc$parser$Token$nullable $tmp4860 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4859);
frost$core$Bit $tmp4861 = frost$core$Bit$init$builtin_bit($tmp4860.nonnull);
bool $tmp4862 = $tmp4861.value;
if ($tmp4862) goto block8; else goto block9;
block8:;
// line 2390
org$frostlang$frostc$ASTNode* $tmp4863 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
org$frostlang$frostc$ASTNode* $tmp4864 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4864));
*(&local2) = $tmp4863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
// line 2391
org$frostlang$frostc$ASTNode* $tmp4865 = *(&local2);
frost$core$Bit $tmp4866 = frost$core$Bit$init$builtin_bit($tmp4865 == NULL);
bool $tmp4867 = $tmp4866.value;
if ($tmp4867) goto block10; else goto block11;
block10:;
// line 2392
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4868 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4869 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2394
frost$collections$Array* $tmp4870 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4871 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4870, ((frost$core$Object*) $tmp4871));
goto block7;
block9:;
// line 2396
frost$core$Int64 $tmp4872 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4873 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4872);
org$frostlang$frostc$parser$Token$nullable $tmp4874 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4873, &$s4875);
frost$core$Bit $tmp4876 = frost$core$Bit$init$builtin_bit(!$tmp4874.nonnull);
bool $tmp4877 = $tmp4876.value;
if ($tmp4877) goto block12; else goto block13;
block12:;
// line 2397
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4878 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4879 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4879));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2400
frost$collections$Array* $tmp4881 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4882 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$collections$Array* $tmp4883 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4882;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
// line 2408
// line 2409
frost$core$Int64 $tmp4884 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4885 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4884);
org$frostlang$frostc$parser$Token$nullable $tmp4886 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4885);
*(&local1) = $tmp4886;
// line 2410
org$frostlang$frostc$parser$Token$nullable $tmp4887 = *(&local1);
frost$core$Bit $tmp4888 = frost$core$Bit$init$builtin_bit(!$tmp4887.nonnull);
bool $tmp4889 = $tmp4888.value;
if ($tmp4889) goto block1; else goto block3;
block1:;
// line 2411
frost$core$Int64 $tmp4890 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4891 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4890);
org$frostlang$frostc$parser$Token$nullable $tmp4892 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4891, &$s4893);
*(&local1) = $tmp4892;
// line 2412
org$frostlang$frostc$parser$Token$nullable $tmp4894 = *(&local1);
frost$core$Bit $tmp4895 = frost$core$Bit$init$builtin_bit(!$tmp4894.nonnull);
bool $tmp4896 = $tmp4895.value;
if ($tmp4896) goto block4; else goto block5;
block4:;
// line 2413
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2415
frost$core$Int64 $tmp4897 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4898 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4897);
*(&local0) = $tmp4898;
goto block2;
block3:;
// line 1
// line 2418
frost$core$Int64 $tmp4899 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4900 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4899);
*(&local0) = $tmp4900;
goto block2;
block2:;
// line 2420
frost$core$Int64 $tmp4901 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4902 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4901);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4902);
// line 2421
frost$core$String* $tmp4903 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
frost$core$String* $tmp4904 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
*(&local2) = $tmp4903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
// line 2422
frost$core$Int64 $tmp4905 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4906 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4905);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4906);
// line 2423
frost$core$String* $tmp4907 = *(&local2);
frost$core$Bit $tmp4908 = frost$core$Bit$init$builtin_bit($tmp4907 == NULL);
bool $tmp4909 = $tmp4908.value;
if ($tmp4909) goto block6; else goto block7;
block6:;
// line 2424
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4910 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2426
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2427
org$frostlang$frostc$parser$Token $tmp4911 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4912 = $tmp4911.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4913;
$tmp4913 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4913->value = $tmp4912;
frost$core$Int64 $tmp4914 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4915 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4914);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4916;
$tmp4916 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4916->value = $tmp4915;
ITable* $tmp4917 = ((frost$core$Equatable*) $tmp4913)->$class->itable;
while ($tmp4917->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4917 = $tmp4917->next;
}
$fn4919 $tmp4918 = $tmp4917->methods[0];
frost$core$Bit $tmp4920 = $tmp4918(((frost$core$Equatable*) $tmp4913), ((frost$core$Equatable*) $tmp4916));
bool $tmp4921 = $tmp4920.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4916)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4913)));
if ($tmp4921) goto block8; else goto block10;
block8:;
// line 2428
org$frostlang$frostc$FixedArray* $tmp4922 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
org$frostlang$frostc$FixedArray* $tmp4923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
*(&local3) = $tmp4922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
goto block9;
block10:;
// line 1
// line 2431
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4924 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2433
org$frostlang$frostc$FixedArray* $tmp4925 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
org$frostlang$frostc$FixedArray* $tmp4926 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
*(&local4) = $tmp4925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
// line 2434
org$frostlang$frostc$FixedArray* $tmp4927 = *(&local4);
frost$core$Bit $tmp4928 = frost$core$Bit$init$builtin_bit($tmp4927 == NULL);
bool $tmp4929 = $tmp4928.value;
if ($tmp4929) goto block11; else goto block12;
block11:;
// line 2435
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4930 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4930));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4931 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2437
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2438
org$frostlang$frostc$parser$Token $tmp4933 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4934 = $tmp4933.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4935;
$tmp4935 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4935->value = $tmp4934;
frost$core$Int64 $tmp4936 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4937 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4936);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4938;
$tmp4938 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4938->value = $tmp4937;
ITable* $tmp4939 = ((frost$core$Equatable*) $tmp4935)->$class->itable;
while ($tmp4939->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4939 = $tmp4939->next;
}
$fn4941 $tmp4940 = $tmp4939->methods[0];
frost$core$Bit $tmp4942 = $tmp4940(((frost$core$Equatable*) $tmp4935), ((frost$core$Equatable*) $tmp4938));
bool $tmp4943 = $tmp4942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4938)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4935)));
if ($tmp4943) goto block13; else goto block15;
block13:;
// line 2439
org$frostlang$frostc$ASTNode* $tmp4944 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
org$frostlang$frostc$ASTNode* $tmp4945 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
*(&local5) = $tmp4944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
// line 2440
org$frostlang$frostc$ASTNode* $tmp4946 = *(&local5);
frost$core$Bit $tmp4947 = frost$core$Bit$init$builtin_bit($tmp4946 == NULL);
bool $tmp4948 = $tmp4947.value;
if ($tmp4948) goto block16; else goto block17;
block16:;
// line 2441
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4949 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4950 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4950));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4951 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4952 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2445
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4953 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2447
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2448
org$frostlang$frostc$parser$Token $tmp4954 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4955 = $tmp4954.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4956;
$tmp4956 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4956->value = $tmp4955;
frost$core$Int64 $tmp4957 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp4958 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4957);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4959;
$tmp4959 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4959->value = $tmp4958;
ITable* $tmp4960 = ((frost$core$Equatable*) $tmp4956)->$class->itable;
while ($tmp4960->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4960 = $tmp4960->next;
}
$fn4962 $tmp4961 = $tmp4960->methods[0];
frost$core$Bit $tmp4963 = $tmp4961(((frost$core$Equatable*) $tmp4956), ((frost$core$Equatable*) $tmp4959));
bool $tmp4964 = $tmp4963.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4959)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4956)));
if ($tmp4964) goto block18; else goto block20;
block18:;
// line 2449
org$frostlang$frostc$FixedArray* $tmp4965 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4965));
org$frostlang$frostc$FixedArray* $tmp4966 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
*(&local6) = $tmp4965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4965));
// line 2450
org$frostlang$frostc$FixedArray* $tmp4967 = *(&local6);
frost$core$Bit $tmp4968 = frost$core$Bit$init$builtin_bit($tmp4967 == NULL);
bool $tmp4969 = $tmp4968.value;
if ($tmp4969) goto block21; else goto block22;
block21:;
// line 2451
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4970 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4971 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4971));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4972));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4973 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4974 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2455
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4975 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2457
org$frostlang$frostc$ASTNode* $tmp4976 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4977 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4978 = *(&local1);
org$frostlang$frostc$Position $tmp4979 = ((org$frostlang$frostc$parser$Token) $tmp4978.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp4980 = *(&local0);
frost$core$String* $tmp4981 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4982 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp4983 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp4984 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp4985 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4976, $tmp4977, $tmp4979, param1, param2, $tmp4980, $tmp4981, $tmp4982, $tmp4983, $tmp4984, $tmp4985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
org$frostlang$frostc$FixedArray* $tmp4986 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4987 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4988 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4989 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4990 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
*(&local2) = ((frost$core$String*) NULL);
return $tmp4976;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2465
// line 2466
frost$core$Int64 $tmp4991 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4992 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4991);
org$frostlang$frostc$parser$Token$nullable $tmp4993 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4992);
*(&local1) = $tmp4993;
// line 2467
org$frostlang$frostc$parser$Token$nullable $tmp4994 = *(&local1);
frost$core$Bit $tmp4995 = frost$core$Bit$init$builtin_bit(!$tmp4994.nonnull);
bool $tmp4996 = $tmp4995.value;
if ($tmp4996) goto block1; else goto block3;
block1:;
// line 2468
frost$core$Int64 $tmp4997 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4998 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4997);
org$frostlang$frostc$parser$Token$nullable $tmp4999 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4998, &$s5000);
*(&local1) = $tmp4999;
// line 2469
org$frostlang$frostc$parser$Token$nullable $tmp5001 = *(&local1);
frost$core$Bit $tmp5002 = frost$core$Bit$init$builtin_bit(!$tmp5001.nonnull);
bool $tmp5003 = $tmp5002.value;
if ($tmp5003) goto block4; else goto block5;
block4:;
// line 2470
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2472
frost$core$Int64 $tmp5004 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp5005 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5004);
*(&local0) = $tmp5005;
goto block2;
block3:;
// line 1
// line 2475
frost$core$Int64 $tmp5006 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp5007 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5006);
*(&local0) = $tmp5007;
goto block2;
block2:;
// line 2477
org$frostlang$frostc$FixedArray* $tmp5008 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
org$frostlang$frostc$FixedArray* $tmp5009 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
*(&local2) = $tmp5008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
// line 2478
org$frostlang$frostc$FixedArray* $tmp5010 = *(&local2);
frost$core$Bit $tmp5011 = frost$core$Bit$init$builtin_bit($tmp5010 == NULL);
bool $tmp5012 = $tmp5011.value;
if ($tmp5012) goto block6; else goto block7;
block6:;
// line 2479
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5013 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2481
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2482
org$frostlang$frostc$parser$Token $tmp5014 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5015 = $tmp5014.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5016;
$tmp5016 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5016->value = $tmp5015;
frost$core$Int64 $tmp5017 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5018 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5017);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5019;
$tmp5019 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5019->value = $tmp5018;
ITable* $tmp5020 = ((frost$core$Equatable*) $tmp5016)->$class->itable;
while ($tmp5020->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5020 = $tmp5020->next;
}
$fn5022 $tmp5021 = $tmp5020->methods[0];
frost$core$Bit $tmp5023 = $tmp5021(((frost$core$Equatable*) $tmp5016), ((frost$core$Equatable*) $tmp5019));
bool $tmp5024 = $tmp5023.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5019)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5016)));
if ($tmp5024) goto block8; else goto block10;
block8:;
// line 2483
org$frostlang$frostc$ASTNode* $tmp5025 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
org$frostlang$frostc$ASTNode* $tmp5026 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
*(&local3) = $tmp5025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
// line 2484
org$frostlang$frostc$ASTNode* $tmp5027 = *(&local3);
frost$core$Bit $tmp5028 = frost$core$Bit$init$builtin_bit($tmp5027 == NULL);
bool $tmp5029 = $tmp5028.value;
if ($tmp5029) goto block11; else goto block12;
block11:;
// line 2485
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5032 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2491
org$frostlang$frostc$FixedArray* $tmp5033 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
org$frostlang$frostc$FixedArray* $tmp5034 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
*(&local4) = $tmp5033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
// line 2492
org$frostlang$frostc$FixedArray* $tmp5035 = *(&local4);
frost$core$Bit $tmp5036 = frost$core$Bit$init$builtin_bit($tmp5035 == NULL);
bool $tmp5037 = $tmp5036.value;
if ($tmp5037) goto block13; else goto block14;
block13:;
// line 2493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5038 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5039 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2495
org$frostlang$frostc$ASTNode* $tmp5041 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5042 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5043 = *(&local1);
org$frostlang$frostc$Position $tmp5044 = ((org$frostlang$frostc$parser$Token) $tmp5043.value).position;
org$frostlang$frostc$FixedArray* $tmp5045 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5045);
org$frostlang$frostc$MethodDecl$Kind $tmp5046 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5047 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5048 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5049 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5041, $tmp5042, $tmp5044, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5045, $tmp5046, &$s5050, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5047, $tmp5048, $tmp5049);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
org$frostlang$frostc$FixedArray* $tmp5051 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5052 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5052));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5053 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5041;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2503
frost$core$Int64 $tmp5054 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp5055 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5054);
org$frostlang$frostc$parser$Token$nullable $tmp5056 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5055, &$s5057);
*(&local0) = $tmp5056;
// line 2504
org$frostlang$frostc$parser$Token$nullable $tmp5058 = *(&local0);
frost$core$Bit $tmp5059 = frost$core$Bit$init$builtin_bit(!$tmp5058.nonnull);
bool $tmp5060 = $tmp5059.value;
if ($tmp5060) goto block1; else goto block2;
block1:;
// line 2505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2507
org$frostlang$frostc$FixedArray* $tmp5061 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
org$frostlang$frostc$FixedArray* $tmp5062 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
*(&local1) = $tmp5061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
// line 2508
org$frostlang$frostc$FixedArray* $tmp5063 = *(&local1);
frost$core$Bit $tmp5064 = frost$core$Bit$init$builtin_bit($tmp5063 == NULL);
bool $tmp5065 = $tmp5064.value;
if ($tmp5065) goto block3; else goto block4;
block3:;
// line 2509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2511
org$frostlang$frostc$FixedArray* $tmp5067 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
org$frostlang$frostc$FixedArray* $tmp5068 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
*(&local2) = $tmp5067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
// line 2512
org$frostlang$frostc$FixedArray* $tmp5069 = *(&local2);
frost$core$Bit $tmp5070 = frost$core$Bit$init$builtin_bit($tmp5069 == NULL);
bool $tmp5071 = $tmp5070.value;
if ($tmp5071) goto block5; else goto block6;
block5:;
// line 2513
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5072 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5073 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2515
org$frostlang$frostc$ASTNode* $tmp5074 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5075 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5076 = *(&local0);
org$frostlang$frostc$Position $tmp5077 = ((org$frostlang$frostc$parser$Token) $tmp5076.value).position;
frost$core$Int64 $tmp5078 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5079 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5078);
org$frostlang$frostc$FixedArray* $tmp5080 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5081 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5074, $tmp5075, $tmp5077, param1, param2, $tmp5079, &$s5082, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5080, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5081);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
org$frostlang$frostc$FixedArray* $tmp5083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5074;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2523
org$frostlang$frostc$ASTNode* $tmp5085 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
org$frostlang$frostc$ASTNode* $tmp5086 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
*(&local0) = $tmp5085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
// line 2524
org$frostlang$frostc$ASTNode* $tmp5087 = *(&local0);
frost$core$Bit $tmp5088 = frost$core$Bit$init$builtin_bit($tmp5087 == NULL);
bool $tmp5089 = $tmp5088.value;
if ($tmp5089) goto block1; else goto block2;
block1:;
// line 2525
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5090 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2527
org$frostlang$frostc$ASTNode* $tmp5091 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5092 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5093 = *(&local0);
$fn5095 $tmp5094 = ($fn5095) $tmp5093->$class->vtable[2];
org$frostlang$frostc$Position $tmp5096 = $tmp5094($tmp5093);
org$frostlang$frostc$ASTNode* $tmp5097 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5091, $tmp5092, $tmp5096, param1, param2, $tmp5097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
org$frostlang$frostc$ASTNode* $tmp5098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5091;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2534
frost$core$Int64 $tmp5099 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5100 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5099);
org$frostlang$frostc$parser$Token$nullable $tmp5101 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5100, &$s5102);
*(&local0) = $tmp5101;
// line 2535
org$frostlang$frostc$parser$Token$nullable $tmp5103 = *(&local0);
frost$core$Bit $tmp5104 = frost$core$Bit$init$builtin_bit(!$tmp5103.nonnull);
bool $tmp5105 = $tmp5104.value;
if ($tmp5105) goto block1; else goto block2;
block1:;
// line 2536
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2538
frost$collections$Array* $tmp5106 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5106);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
frost$collections$Array* $tmp5107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
*(&local1) = $tmp5106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
// line 2539
frost$core$Int64 $tmp5108 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5109 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5108);
org$frostlang$frostc$parser$Token$nullable $tmp5110 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5109);
frost$core$Bit $tmp5111 = frost$core$Bit$init$builtin_bit($tmp5110.nonnull);
bool $tmp5112 = $tmp5111.value;
if ($tmp5112) goto block3; else goto block4;
block3:;
// line 2540
org$frostlang$frostc$parser$Token $tmp5113 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5114 = $tmp5113.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5115;
$tmp5115 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5115->value = $tmp5114;
frost$core$Int64 $tmp5116 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5117 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5116);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5118;
$tmp5118 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5118->value = $tmp5117;
ITable* $tmp5119 = ((frost$core$Equatable*) $tmp5115)->$class->itable;
while ($tmp5119->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5119 = $tmp5119->next;
}
$fn5121 $tmp5120 = $tmp5119->methods[1];
frost$core$Bit $tmp5122 = $tmp5120(((frost$core$Equatable*) $tmp5115), ((frost$core$Equatable*) $tmp5118));
bool $tmp5123 = $tmp5122.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5118)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5115)));
if ($tmp5123) goto block5; else goto block6;
block5:;
// line 2541
org$frostlang$frostc$ASTNode* $tmp5124 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
org$frostlang$frostc$ASTNode* $tmp5125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5125));
*(&local2) = $tmp5124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
// line 2542
org$frostlang$frostc$ASTNode* $tmp5126 = *(&local2);
frost$core$Bit $tmp5127 = frost$core$Bit$init$builtin_bit($tmp5126 == NULL);
bool $tmp5128 = $tmp5127.value;
if ($tmp5128) goto block7; else goto block8;
block7:;
// line 2543
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5129));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2545
frost$collections$Array* $tmp5131 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5132 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5131, ((frost$core$Object*) $tmp5132));
// line 2546
goto block9;
block9:;
frost$core$Int64 $tmp5133 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5134 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5133);
org$frostlang$frostc$parser$Token$nullable $tmp5135 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5134);
frost$core$Bit $tmp5136 = frost$core$Bit$init$builtin_bit($tmp5135.nonnull);
bool $tmp5137 = $tmp5136.value;
if ($tmp5137) goto block10; else goto block11;
block10:;
// line 2547
org$frostlang$frostc$ASTNode* $tmp5138 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
org$frostlang$frostc$ASTNode* $tmp5139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
*(&local2) = $tmp5138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
// line 2548
org$frostlang$frostc$ASTNode* $tmp5140 = *(&local2);
frost$core$Bit $tmp5141 = frost$core$Bit$init$builtin_bit($tmp5140 == NULL);
bool $tmp5142 = $tmp5141.value;
if ($tmp5142) goto block12; else goto block13;
block12:;
// line 2549
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5144));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2551
frost$collections$Array* $tmp5145 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5146 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5145, ((frost$core$Object*) $tmp5146));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5147 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2554
frost$core$Int64 $tmp5148 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5149 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5148);
org$frostlang$frostc$parser$Token$nullable $tmp5150 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5149, &$s5151);
frost$core$Bit $tmp5152 = frost$core$Bit$init$builtin_bit(!$tmp5150.nonnull);
bool $tmp5153 = $tmp5152.value;
if ($tmp5153) goto block14; else goto block15;
block14:;
// line 2555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2558
org$frostlang$frostc$ASTNode* $tmp5155 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5156 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5157 = *(&local0);
org$frostlang$frostc$Position $tmp5158 = ((org$frostlang$frostc$parser$Token) $tmp5157.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5159 = *(&local0);
frost$core$String* $tmp5160 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5159.value));
frost$collections$Array* $tmp5161 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5162 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5161);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5155, $tmp5156, $tmp5158, param1, $tmp5160, $tmp5162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
frost$collections$Array* $tmp5163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5155;

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
// line 2568
frost$core$Int64 $tmp5164 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5165 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5164);
org$frostlang$frostc$parser$Token$nullable $tmp5166 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5165, &$s5167);
*(&local0) = $tmp5166;
// line 2569
org$frostlang$frostc$parser$Token$nullable $tmp5168 = *(&local0);
frost$core$Bit $tmp5169 = frost$core$Bit$init$builtin_bit(!$tmp5168.nonnull);
bool $tmp5170 = $tmp5169.value;
if ($tmp5170) goto block1; else goto block2;
block1:;
// line 2570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2572
frost$core$Int64 $tmp5171 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5172 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5171);
org$frostlang$frostc$parser$Token$nullable $tmp5173 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5172, &$s5174);
*(&local1) = $tmp5173;
// line 2573
org$frostlang$frostc$parser$Token$nullable $tmp5175 = *(&local1);
frost$core$Bit $tmp5176 = frost$core$Bit$init$builtin_bit(!$tmp5175.nonnull);
bool $tmp5177 = $tmp5176.value;
if ($tmp5177) goto block3; else goto block4;
block3:;
// line 2574
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2576
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2577
org$frostlang$frostc$parser$Token $tmp5178 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5179 = $tmp5178.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5180;
$tmp5180 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5180->value = $tmp5179;
frost$core$Int64 $tmp5181 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5182 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5181);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5183;
$tmp5183 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5183->value = $tmp5182;
ITable* $tmp5184 = ((frost$core$Equatable*) $tmp5180)->$class->itable;
while ($tmp5184->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5184 = $tmp5184->next;
}
$fn5186 $tmp5185 = $tmp5184->methods[0];
frost$core$Bit $tmp5187 = $tmp5185(((frost$core$Equatable*) $tmp5180), ((frost$core$Equatable*) $tmp5183));
bool $tmp5188 = $tmp5187.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5183)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5180)));
if ($tmp5188) goto block5; else goto block7;
block5:;
// line 2578
org$frostlang$frostc$FixedArray* $tmp5189 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
org$frostlang$frostc$FixedArray* $tmp5190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
*(&local2) = $tmp5189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
// line 2579
org$frostlang$frostc$FixedArray* $tmp5191 = *(&local2);
frost$core$Bit $tmp5192 = frost$core$Bit$init$builtin_bit($tmp5191 == NULL);
bool $tmp5193 = $tmp5192.value;
if ($tmp5193) goto block8; else goto block9;
block8:;
// line 2580
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2586
frost$core$Int64 $tmp5196 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5197 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5196);
org$frostlang$frostc$parser$Token$nullable $tmp5198 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5197, &$s5199);
frost$core$Bit $tmp5200 = frost$core$Bit$init$builtin_bit(!$tmp5198.nonnull);
bool $tmp5201 = $tmp5200.value;
if ($tmp5201) goto block10; else goto block11;
block10:;
// line 2587
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2589
frost$collections$Array* $tmp5203 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5203);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
frost$collections$Array* $tmp5204 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
*(&local3) = $tmp5203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
// line 2590
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5205 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2591
goto block12;
block12:;
// line 2592
org$frostlang$frostc$parser$Token $tmp5206 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5206;
// line 2593
org$frostlang$frostc$parser$Token $tmp5207 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5208 = $tmp5207.kind;
frost$core$Int64 $tmp5209 = $tmp5208.$rawValue;
frost$core$Int64 $tmp5210 = (frost$core$Int64) {18};
frost$core$Bit $tmp5211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5210);
bool $tmp5212 = $tmp5211.value;
if ($tmp5212) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5213 = (frost$core$Int64) {19};
frost$core$Bit $tmp5214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5213);
bool $tmp5215 = $tmp5214.value;
if ($tmp5215) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5216 = (frost$core$Int64) {20};
frost$core$Bit $tmp5217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5216);
bool $tmp5218 = $tmp5217.value;
if ($tmp5218) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5219 = (frost$core$Int64) {22};
frost$core$Bit $tmp5220 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5219);
bool $tmp5221 = $tmp5220.value;
if ($tmp5221) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5222 = (frost$core$Int64) {21};
frost$core$Bit $tmp5223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5222);
bool $tmp5224 = $tmp5223.value;
if ($tmp5224) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5225 = (frost$core$Int64) {14};
frost$core$Bit $tmp5226 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5225);
bool $tmp5227 = $tmp5226.value;
if ($tmp5227) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5228 = (frost$core$Int64) {24};
frost$core$Bit $tmp5229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5228);
bool $tmp5230 = $tmp5229.value;
if ($tmp5230) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5231 = (frost$core$Int64) {25};
frost$core$Bit $tmp5232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5231);
bool $tmp5233 = $tmp5232.value;
if ($tmp5233) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5234 = (frost$core$Int64) {26};
frost$core$Bit $tmp5235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5234);
bool $tmp5236 = $tmp5235.value;
if ($tmp5236) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5237 = (frost$core$Int64) {27};
frost$core$Bit $tmp5238 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5237);
bool $tmp5239 = $tmp5238.value;
if ($tmp5239) goto block15; else goto block25;
block15:;
// line 2597
goto block13;
block25:;
frost$core$Int64 $tmp5240 = (frost$core$Int64) {12};
frost$core$Bit $tmp5241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5240);
bool $tmp5242 = $tmp5241.value;
if ($tmp5242) goto block26; else goto block27;
block26:;
// line 2600
org$frostlang$frostc$ASTNode* $tmp5243 = *(&local4);
frost$core$Bit $tmp5244 = frost$core$Bit$init$builtin_bit($tmp5243 != NULL);
bool $tmp5245 = $tmp5244.value;
if ($tmp5245) goto block28; else goto block29;
block28:;
// line 2601
org$frostlang$frostc$parser$Token $tmp5246 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5247 = *(&local5);
frost$core$String* $tmp5248 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5247);
frost$core$String* $tmp5249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5250, $tmp5248);
frost$core$String* $tmp5251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5249, &$s5252);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5246, $tmp5251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
goto block29;
block29:;
// line 2603
org$frostlang$frostc$ASTNode* $tmp5253 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
org$frostlang$frostc$ASTNode* $tmp5254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
*(&local4) = $tmp5253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
goto block14;
block27:;
frost$core$Int64 $tmp5255 = (frost$core$Int64) {52};
frost$core$Bit $tmp5256 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5209, $tmp5255);
bool $tmp5257 = $tmp5256.value;
if ($tmp5257) goto block30; else goto block31;
block30:;
// line 2606
org$frostlang$frostc$ASTNode* $tmp5258 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5259 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5258);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
org$frostlang$frostc$ASTNode* $tmp5260 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
*(&local6) = $tmp5259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
// line 2607
org$frostlang$frostc$ASTNode* $tmp5261 = *(&local6);
frost$core$Bit $tmp5262 = frost$core$Bit$init$builtin_bit($tmp5261 == NULL);
bool $tmp5263 = $tmp5262.value;
if ($tmp5263) goto block32; else goto block33;
block32:;
// line 2608
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5264 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5266 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2610
frost$collections$Array* $tmp5268 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5269 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5268, ((frost$core$Object*) $tmp5269));
// line 2611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5271));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2614
goto block13;
block14:;
goto block12;
block13:;
// line 2618
org$frostlang$frostc$FixedArray* $tmp5272 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5272);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
org$frostlang$frostc$FixedArray* $tmp5273 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
*(&local7) = $tmp5272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
// line 2619
goto block34;
block34:;
// line 2620
org$frostlang$frostc$parser$Token $tmp5274 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5274;
// line 2621
org$frostlang$frostc$parser$Token $tmp5275 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5276 = $tmp5275.kind;
frost$core$Int64 $tmp5277 = $tmp5276.$rawValue;
frost$core$Int64 $tmp5278 = (frost$core$Int64) {14};
frost$core$Bit $tmp5279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5278);
bool $tmp5280 = $tmp5279.value;
if ($tmp5280) goto block37; else goto block38;
block37:;
// line 2623
org$frostlang$frostc$FixedArray* $tmp5281 = *(&local7);
ITable* $tmp5282 = ((frost$collections$CollectionView*) $tmp5281)->$class->itable;
while ($tmp5282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5282 = $tmp5282->next;
}
$fn5284 $tmp5283 = $tmp5282->methods[0];
frost$core$Int64 $tmp5285 = $tmp5283(((frost$collections$CollectionView*) $tmp5281));
frost$core$Int64 $tmp5286 = (frost$core$Int64) {0};
int64_t $tmp5287 = $tmp5285.value;
int64_t $tmp5288 = $tmp5286.value;
bool $tmp5289 = $tmp5287 > $tmp5288;
frost$core$Bit $tmp5290 = (frost$core$Bit) {$tmp5289};
bool $tmp5291 = $tmp5290.value;
if ($tmp5291) goto block39; else goto block40;
block39:;
// line 2624
org$frostlang$frostc$parser$Token $tmp5292 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5293 = *(&local8);
frost$core$String* $tmp5294 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5293);
frost$core$String* $tmp5295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5296, $tmp5294);
frost$core$String* $tmp5297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5295, &$s5298);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5292, $tmp5297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
// line 2625
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5299 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5299));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5300 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5300));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5301 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5302 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2627
org$frostlang$frostc$FixedArray* $tmp5303 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
org$frostlang$frostc$FixedArray* $tmp5304 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
*(&local7) = $tmp5303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
goto block36;
block38:;
frost$core$Int64 $tmp5305 = (frost$core$Int64) {12};
frost$core$Bit $tmp5306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5305);
bool $tmp5307 = $tmp5306.value;
if ($tmp5307) goto block41; else goto block42;
block41:;
// line 2630
org$frostlang$frostc$ASTNode* $tmp5308 = *(&local4);
frost$core$Bit $tmp5309 = frost$core$Bit$init$builtin_bit($tmp5308 != NULL);
bool $tmp5310 = $tmp5309.value;
if ($tmp5310) goto block43; else goto block45;
block45:;
org$frostlang$frostc$FixedArray* $tmp5311 = *(&local7);
ITable* $tmp5312 = ((frost$collections$CollectionView*) $tmp5311)->$class->itable;
while ($tmp5312->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5312 = $tmp5312->next;
}
$fn5314 $tmp5313 = $tmp5312->methods[0];
frost$core$Int64 $tmp5315 = $tmp5313(((frost$collections$CollectionView*) $tmp5311));
frost$core$Int64 $tmp5316 = (frost$core$Int64) {0};
int64_t $tmp5317 = $tmp5315.value;
int64_t $tmp5318 = $tmp5316.value;
bool $tmp5319 = $tmp5317 > $tmp5318;
frost$core$Bit $tmp5320 = (frost$core$Bit) {$tmp5319};
bool $tmp5321 = $tmp5320.value;
if ($tmp5321) goto block43; else goto block44;
block43:;
// line 2631
org$frostlang$frostc$parser$Token $tmp5322 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5323 = *(&local8);
frost$core$String* $tmp5324 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5323);
frost$core$String* $tmp5325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5326, $tmp5324);
frost$core$String* $tmp5327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5325, &$s5328);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5322, $tmp5327);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
// line 2632
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5329 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5330));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5331));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5332));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2634
org$frostlang$frostc$ASTNode* $tmp5333 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
org$frostlang$frostc$ASTNode* $tmp5334 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5334));
*(&local4) = $tmp5333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
goto block36;
block42:;
frost$core$Int64 $tmp5335 = (frost$core$Int64) {18};
frost$core$Bit $tmp5336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5335);
bool $tmp5337 = $tmp5336.value;
if ($tmp5337) goto block46; else goto block47;
block46:;
// line 2637
org$frostlang$frostc$ASTNode* $tmp5338 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5339 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5340 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5338, $tmp5339);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
org$frostlang$frostc$ASTNode* $tmp5341 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
*(&local9) = $tmp5340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
// line 2638
org$frostlang$frostc$ASTNode* $tmp5342 = *(&local9);
frost$core$Bit $tmp5343 = frost$core$Bit$init$builtin_bit($tmp5342 == NULL);
bool $tmp5344 = $tmp5343.value;
if ($tmp5344) goto block48; else goto block49;
block48:;
// line 2639
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5345 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5345));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5346 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5346));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5347 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5347));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5348 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5348));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5349 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 2641
frost$collections$Array* $tmp5350 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5351 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp5350, ((frost$core$Object*) $tmp5351));
// line 2642
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5352 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2643
org$frostlang$frostc$FixedArray* $tmp5353 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
org$frostlang$frostc$FixedArray* $tmp5354 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5354));
*(&local7) = $tmp5353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
org$frostlang$frostc$ASTNode* $tmp5355 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block47:;
frost$core$Int64 $tmp5356 = (frost$core$Int64) {19};
frost$core$Bit $tmp5357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5356);
bool $tmp5358 = $tmp5357.value;
if ($tmp5358) goto block50; else goto block51;
block50:;
// line 2646
org$frostlang$frostc$ASTNode* $tmp5359 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5360 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5361 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5359, $tmp5360);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
org$frostlang$frostc$ASTNode* $tmp5362 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5362));
*(&local10) = $tmp5361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
// line 2647
org$frostlang$frostc$ASTNode* $tmp5363 = *(&local10);
frost$core$Bit $tmp5364 = frost$core$Bit$init$builtin_bit($tmp5363 == NULL);
bool $tmp5365 = $tmp5364.value;
if ($tmp5365) goto block52; else goto block53;
block52:;
// line 2648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5366 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5367 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5368 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5370));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block53:;
// line 2650
frost$collections$Array* $tmp5371 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5372 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5371, ((frost$core$Object*) $tmp5372));
// line 2651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5373 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2652
org$frostlang$frostc$FixedArray* $tmp5374 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
org$frostlang$frostc$FixedArray* $tmp5375 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5375));
*(&local7) = $tmp5374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
org$frostlang$frostc$ASTNode* $tmp5376 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block51:;
frost$core$Int64 $tmp5377 = (frost$core$Int64) {20};
frost$core$Bit $tmp5378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5377);
bool $tmp5379 = $tmp5378.value;
if ($tmp5379) goto block54; else goto block55;
block54:;
// line 2655
org$frostlang$frostc$ASTNode* $tmp5380 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5381 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5382 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5380, $tmp5381);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5382));
org$frostlang$frostc$ASTNode* $tmp5383 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5383));
*(&local11) = $tmp5382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5382));
// line 2656
org$frostlang$frostc$ASTNode* $tmp5384 = *(&local11);
frost$core$Bit $tmp5385 = frost$core$Bit$init$builtin_bit($tmp5384 == NULL);
bool $tmp5386 = $tmp5385.value;
if ($tmp5386) goto block56; else goto block57;
block56:;
// line 2657
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5387 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5388 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5389 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5389));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5390 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 2659
frost$collections$Array* $tmp5392 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5393 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5392, ((frost$core$Object*) $tmp5393));
// line 2660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5394 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5394));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2661
org$frostlang$frostc$FixedArray* $tmp5395 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
org$frostlang$frostc$FixedArray* $tmp5396 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
*(&local7) = $tmp5395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
org$frostlang$frostc$ASTNode* $tmp5397 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block55:;
frost$core$Int64 $tmp5398 = (frost$core$Int64) {22};
frost$core$Bit $tmp5399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5398);
bool $tmp5400 = $tmp5399.value;
if ($tmp5400) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp5401 = (frost$core$Int64) {21};
frost$core$Bit $tmp5402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5401);
bool $tmp5403 = $tmp5402.value;
if ($tmp5403) goto block58; else goto block60;
block58:;
// line 2664
org$frostlang$frostc$ASTNode* $tmp5404 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5405 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5406 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5404, $tmp5405);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5406));
org$frostlang$frostc$ASTNode* $tmp5407 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5407));
*(&local12) = $tmp5406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5406));
// line 2665
org$frostlang$frostc$ASTNode* $tmp5408 = *(&local12);
frost$core$Bit $tmp5409 = frost$core$Bit$init$builtin_bit($tmp5408 == NULL);
bool $tmp5410 = $tmp5409.value;
if ($tmp5410) goto block61; else goto block62;
block61:;
// line 2666
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5411 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5412 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5413 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block62:;
// line 2668
frost$collections$Array* $tmp5416 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5417 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5416, ((frost$core$Object*) $tmp5417));
// line 2669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5418 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2670
org$frostlang$frostc$FixedArray* $tmp5419 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
org$frostlang$frostc$FixedArray* $tmp5420 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
*(&local7) = $tmp5419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
org$frostlang$frostc$ASTNode* $tmp5421 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block60:;
frost$core$Int64 $tmp5422 = (frost$core$Int64) {24};
frost$core$Bit $tmp5423 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5422);
bool $tmp5424 = $tmp5423.value;
if ($tmp5424) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp5425 = (frost$core$Int64) {25};
frost$core$Bit $tmp5426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5425);
bool $tmp5427 = $tmp5426.value;
if ($tmp5427) goto block63; else goto block65;
block65:;
frost$core$Int64 $tmp5428 = (frost$core$Int64) {26};
frost$core$Bit $tmp5429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5428);
bool $tmp5430 = $tmp5429.value;
if ($tmp5430) goto block63; else goto block66;
block66:;
frost$core$Int64 $tmp5431 = (frost$core$Int64) {27};
frost$core$Bit $tmp5432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5431);
bool $tmp5433 = $tmp5432.value;
if ($tmp5433) goto block63; else goto block67;
block63:;
// line 2673
org$frostlang$frostc$ASTNode* $tmp5434 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5435 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5436 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5434, $tmp5435);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5436));
org$frostlang$frostc$ASTNode* $tmp5437 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
*(&local13) = $tmp5436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5436));
// line 2674
org$frostlang$frostc$ASTNode* $tmp5438 = *(&local13);
frost$core$Bit $tmp5439 = frost$core$Bit$init$builtin_bit($tmp5438 == NULL);
bool $tmp5440 = $tmp5439.value;
if ($tmp5440) goto block68; else goto block69;
block68:;
// line 2675
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5441 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5442 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5443));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5444));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5445 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block69:;
// line 2677
frost$collections$Array* $tmp5446 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5447 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5446, ((frost$core$Object*) $tmp5447));
// line 2678
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5448 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2679
org$frostlang$frostc$FixedArray* $tmp5449 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5449));
org$frostlang$frostc$FixedArray* $tmp5450 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
*(&local7) = $tmp5449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5449));
org$frostlang$frostc$ASTNode* $tmp5451 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block67:;
frost$core$Int64 $tmp5452 = (frost$core$Int64) {104};
frost$core$Bit $tmp5453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5277, $tmp5452);
bool $tmp5454 = $tmp5453.value;
if ($tmp5454) goto block70; else goto block71;
block70:;
// line 2682
frost$core$Int64 $tmp5455 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5456 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5455);
org$frostlang$frostc$parser$Token$nullable $tmp5457 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5456, &$s5458);
// line 2683
goto block35;
block71:;
// line 2686
org$frostlang$frostc$parser$Token $tmp5459 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5460 = *(&local8);
frost$core$String* $tmp5461 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5460);
frost$core$String* $tmp5462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5463, $tmp5461);
frost$core$String* $tmp5464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5462, &$s5465);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5459, $tmp5464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
// line 2687
org$frostlang$frostc$parser$Token $tmp5466 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2688
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5467 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5467));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5468 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5468));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5469 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5470));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2692
org$frostlang$frostc$ASTNode* $tmp5471 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5472 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5473 = *(&local0);
org$frostlang$frostc$Position $tmp5474 = ((org$frostlang$frostc$parser$Token) $tmp5473.value).position;
frost$core$Int64 $tmp5475 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5476 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5475);
org$frostlang$frostc$parser$Token$nullable $tmp5477 = *(&local1);
frost$core$String* $tmp5478 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5477.value));
org$frostlang$frostc$FixedArray* $tmp5479 = *(&local2);
frost$collections$Array* $tmp5480 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5481 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5480);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5471, $tmp5472, $tmp5474, param1, param2, $tmp5476, $tmp5478, $tmp5479, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
org$frostlang$frostc$FixedArray* $tmp5482 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5483 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5484 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5485 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5471;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2702
org$frostlang$frostc$parser$Token $tmp5486 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5486;
// line 2703
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2704
org$frostlang$frostc$parser$Token $tmp5487 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5488 = $tmp5487.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5489;
$tmp5489 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5489->value = $tmp5488;
frost$core$Int64 $tmp5490 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5491 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5490);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5492;
$tmp5492 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5492->value = $tmp5491;
ITable* $tmp5493 = ((frost$core$Equatable*) $tmp5489)->$class->itable;
while ($tmp5493->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5493 = $tmp5493->next;
}
$fn5495 $tmp5494 = $tmp5493->methods[0];
frost$core$Bit $tmp5496 = $tmp5494(((frost$core$Equatable*) $tmp5489), ((frost$core$Equatable*) $tmp5492));
bool $tmp5497 = $tmp5496.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5492)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5489)));
if ($tmp5497) goto block1; else goto block3;
block1:;
// line 2705
org$frostlang$frostc$ASTNode* $tmp5498 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
org$frostlang$frostc$ASTNode* $tmp5499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5499));
*(&local1) = $tmp5498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
// line 2706
org$frostlang$frostc$ASTNode* $tmp5500 = *(&local1);
frost$core$Bit $tmp5501 = frost$core$Bit$init$builtin_bit($tmp5500 == NULL);
bool $tmp5502 = $tmp5501.value;
if ($tmp5502) goto block4; else goto block5;
block4:;
// line 2707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5503));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2711
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5504));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2713
org$frostlang$frostc$FixedArray* $tmp5505 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
org$frostlang$frostc$FixedArray* $tmp5506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local2) = $tmp5505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
// line 2714
org$frostlang$frostc$FixedArray* $tmp5507 = *(&local2);
frost$core$Bit $tmp5508 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5509 = $tmp5508.value;
if ($tmp5509) goto block6; else goto block7;
block6:;
// line 2715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2717
org$frostlang$frostc$parser$Token $tmp5512 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5513 = $tmp5512.kind;
frost$core$Int64 $tmp5514 = $tmp5513.$rawValue;
frost$core$Int64 $tmp5515 = (frost$core$Int64) {18};
frost$core$Bit $tmp5516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5515);
bool $tmp5517 = $tmp5516.value;
if ($tmp5517) goto block9; else goto block10;
block9:;
// line 2719
org$frostlang$frostc$ASTNode* $tmp5518 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5519 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5520 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5518, $tmp5519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
org$frostlang$frostc$FixedArray* $tmp5521 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5521));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5522 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5522));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5520;
block10:;
frost$core$Int64 $tmp5523 = (frost$core$Int64) {19};
frost$core$Bit $tmp5524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5523);
bool $tmp5525 = $tmp5524.value;
if ($tmp5525) goto block11; else goto block12;
block11:;
// line 2722
org$frostlang$frostc$ASTNode* $tmp5526 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5527 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5528 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5526, $tmp5527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
org$frostlang$frostc$FixedArray* $tmp5529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5529));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5530));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5528;
block12:;
frost$core$Int64 $tmp5531 = (frost$core$Int64) {20};
frost$core$Bit $tmp5532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5531);
bool $tmp5533 = $tmp5532.value;
if ($tmp5533) goto block13; else goto block14;
block13:;
// line 2725
org$frostlang$frostc$ASTNode* $tmp5534 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5535 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5536 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5534, $tmp5535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
org$frostlang$frostc$FixedArray* $tmp5537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5538));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5536;
block14:;
frost$core$Int64 $tmp5539 = (frost$core$Int64) {22};
frost$core$Bit $tmp5540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5539);
bool $tmp5541 = $tmp5540.value;
if ($tmp5541) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5542 = (frost$core$Int64) {21};
frost$core$Bit $tmp5543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5542);
bool $tmp5544 = $tmp5543.value;
if ($tmp5544) goto block15; else goto block17;
block15:;
// line 2728
org$frostlang$frostc$ASTNode* $tmp5545 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5546 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5547 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5545, $tmp5546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5547));
org$frostlang$frostc$FixedArray* $tmp5548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5548));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5549 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5549));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5547;
block17:;
frost$core$Int64 $tmp5550 = (frost$core$Int64) {23};
frost$core$Bit $tmp5551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5550);
bool $tmp5552 = $tmp5551.value;
if ($tmp5552) goto block18; else goto block19;
block18:;
// line 2731
org$frostlang$frostc$ASTNode* $tmp5553 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5554 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5555 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5553, $tmp5554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5555));
org$frostlang$frostc$FixedArray* $tmp5556 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5556));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5555;
block19:;
frost$core$Int64 $tmp5558 = (frost$core$Int64) {24};
frost$core$Bit $tmp5559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5558);
bool $tmp5560 = $tmp5559.value;
if ($tmp5560) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5561 = (frost$core$Int64) {25};
frost$core$Bit $tmp5562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5561);
bool $tmp5563 = $tmp5562.value;
if ($tmp5563) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5564 = (frost$core$Int64) {26};
frost$core$Bit $tmp5565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5564);
bool $tmp5566 = $tmp5565.value;
if ($tmp5566) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5567 = (frost$core$Int64) {27};
frost$core$Bit $tmp5568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5514, $tmp5567);
bool $tmp5569 = $tmp5568.value;
if ($tmp5569) goto block20; else goto block24;
block20:;
// line 2734
org$frostlang$frostc$ASTNode* $tmp5570 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5571 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5572 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5570, $tmp5571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5572));
org$frostlang$frostc$FixedArray* $tmp5573 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5573));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5574));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5572;
block24:;
// line 2738
frost$core$Int64 $tmp5575 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5576 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5575);
org$frostlang$frostc$parser$Token$nullable $tmp5577 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5576, &$s5578);
// line 2739
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5579 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5579));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5580));
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
// line 2748
frost$core$Int64 $tmp5581 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5582 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5581);
org$frostlang$frostc$parser$Token$nullable $tmp5583 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5582, &$s5584);
*(&local0) = $tmp5583;
// line 2749
org$frostlang$frostc$parser$Token$nullable $tmp5585 = *(&local0);
frost$core$Bit $tmp5586 = frost$core$Bit$init$builtin_bit(!$tmp5585.nonnull);
bool $tmp5587 = $tmp5586.value;
if ($tmp5587) goto block1; else goto block2;
block1:;
// line 2750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2752
frost$core$Int64 $tmp5588 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5589 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5588);
org$frostlang$frostc$parser$Token$nullable $tmp5590 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5589, &$s5591);
*(&local1) = $tmp5590;
// line 2753
org$frostlang$frostc$parser$Token$nullable $tmp5592 = *(&local1);
frost$core$Bit $tmp5593 = frost$core$Bit$init$builtin_bit(!$tmp5592.nonnull);
bool $tmp5594 = $tmp5593.value;
if ($tmp5594) goto block3; else goto block4;
block3:;
// line 2754
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2756
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2757
org$frostlang$frostc$parser$Token $tmp5595 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5596 = $tmp5595.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5597;
$tmp5597 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5597->value = $tmp5596;
frost$core$Int64 $tmp5598 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5599 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5598);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5600;
$tmp5600 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5600->value = $tmp5599;
ITable* $tmp5601 = ((frost$core$Equatable*) $tmp5597)->$class->itable;
while ($tmp5601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5601 = $tmp5601->next;
}
$fn5603 $tmp5602 = $tmp5601->methods[0];
frost$core$Bit $tmp5604 = $tmp5602(((frost$core$Equatable*) $tmp5597), ((frost$core$Equatable*) $tmp5600));
bool $tmp5605 = $tmp5604.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5597)));
if ($tmp5605) goto block5; else goto block7;
block5:;
// line 2758
org$frostlang$frostc$FixedArray* $tmp5606 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
org$frostlang$frostc$FixedArray* $tmp5607 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5607));
*(&local2) = $tmp5606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
// line 2759
org$frostlang$frostc$FixedArray* $tmp5608 = *(&local2);
frost$core$Bit $tmp5609 = frost$core$Bit$init$builtin_bit($tmp5608 == NULL);
bool $tmp5610 = $tmp5609.value;
if ($tmp5610) goto block8; else goto block9;
block8:;
// line 2760
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5611 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5611));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2764
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5612 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2766
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2767
org$frostlang$frostc$parser$Token $tmp5613 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5614 = $tmp5613.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5615;
$tmp5615 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5615->value = $tmp5614;
frost$core$Int64 $tmp5616 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5617 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5616);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5618;
$tmp5618 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5618->value = $tmp5617;
ITable* $tmp5619 = ((frost$core$Equatable*) $tmp5615)->$class->itable;
while ($tmp5619->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5619 = $tmp5619->next;
}
$fn5621 $tmp5620 = $tmp5619->methods[0];
frost$core$Bit $tmp5622 = $tmp5620(((frost$core$Equatable*) $tmp5615), ((frost$core$Equatable*) $tmp5618));
bool $tmp5623 = $tmp5622.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5618)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5615)));
if ($tmp5623) goto block10; else goto block12;
block10:;
// line 2768
org$frostlang$frostc$FixedArray* $tmp5624 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5624));
org$frostlang$frostc$FixedArray* $tmp5625 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5625));
*(&local3) = $tmp5624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5624));
// line 2769
org$frostlang$frostc$FixedArray* $tmp5626 = *(&local3);
frost$core$Bit $tmp5627 = frost$core$Bit$init$builtin_bit($tmp5626 == NULL);
bool $tmp5628 = $tmp5627.value;
if ($tmp5628) goto block13; else goto block14;
block13:;
// line 2770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5629 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5630));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5631 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5631));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2776
frost$core$Int64 $tmp5632 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5633 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5632);
org$frostlang$frostc$parser$Token$nullable $tmp5634 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5633, &$s5635);
frost$core$Bit $tmp5636 = frost$core$Bit$init$builtin_bit(!$tmp5634.nonnull);
bool $tmp5637 = $tmp5636.value;
if ($tmp5637) goto block15; else goto block16;
block15:;
// line 2777
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5638 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5638));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5639 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5639));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2779
frost$collections$Array* $tmp5640 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5640);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
frost$collections$Array* $tmp5641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5641));
*(&local4) = $tmp5640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
// line 2780
goto block17;
block17:;
frost$core$Int64 $tmp5642 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5643 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5642);
org$frostlang$frostc$parser$Token$nullable $tmp5644 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5643);
frost$core$Bit $tmp5645 = frost$core$Bit$init$builtin_bit(!$tmp5644.nonnull);
bool $tmp5646 = $tmp5645.value;
if ($tmp5646) goto block18; else goto block19;
block18:;
// line 2781
org$frostlang$frostc$ASTNode* $tmp5647 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
org$frostlang$frostc$ASTNode* $tmp5648 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
*(&local5) = $tmp5647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
// line 2782
org$frostlang$frostc$ASTNode* $tmp5649 = *(&local5);
frost$core$Bit $tmp5650 = frost$core$Bit$init$builtin_bit($tmp5649 == NULL);
bool $tmp5651 = $tmp5650.value;
if ($tmp5651) goto block20; else goto block21;
block20:;
// line 2783
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5652 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5652));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5653 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5654 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5655));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2785
frost$collections$Array* $tmp5656 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5657 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5656, ((frost$core$Object*) $tmp5657));
org$frostlang$frostc$ASTNode* $tmp5658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2787
org$frostlang$frostc$ASTNode* $tmp5659 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5660 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5661 = *(&local0);
org$frostlang$frostc$Position $tmp5662 = ((org$frostlang$frostc$parser$Token) $tmp5661.value).position;
frost$core$Int64 $tmp5663 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5664 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5663);
org$frostlang$frostc$parser$Token$nullable $tmp5665 = *(&local1);
frost$core$String* $tmp5666 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5665.value));
org$frostlang$frostc$FixedArray* $tmp5667 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5668 = *(&local3);
frost$collections$Array* $tmp5669 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5670 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5669);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5659, $tmp5660, $tmp5662, param1, param2, $tmp5664, $tmp5666, $tmp5667, $tmp5668, $tmp5670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
frost$collections$Array* $tmp5671 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5671));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5672 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5673 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5659;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 2796
frost$core$Int64 $tmp5674 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5675 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5674);
org$frostlang$frostc$parser$Token$nullable $tmp5676 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5675, &$s5677);
*(&local0) = $tmp5676;
// line 2797
org$frostlang$frostc$parser$Token$nullable $tmp5678 = *(&local0);
frost$core$Bit $tmp5679 = frost$core$Bit$init$builtin_bit(!$tmp5678.nonnull);
bool $tmp5680 = $tmp5679.value;
if ($tmp5680) goto block1; else goto block2;
block1:;
// line 2798
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2800
frost$core$Int64 $tmp5681 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5682 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5681);
org$frostlang$frostc$parser$Token$nullable $tmp5683 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5682, &$s5684);
*(&local1) = $tmp5683;
// line 2801
org$frostlang$frostc$parser$Token$nullable $tmp5685 = *(&local1);
frost$core$Bit $tmp5686 = frost$core$Bit$init$builtin_bit(!$tmp5685.nonnull);
bool $tmp5687 = $tmp5686.value;
if ($tmp5687) goto block3; else goto block4;
block3:;
// line 2802
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2804
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2805
org$frostlang$frostc$parser$Token $tmp5688 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5689 = $tmp5688.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5690;
$tmp5690 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5690->value = $tmp5689;
frost$core$Int64 $tmp5691 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5692 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5691);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5693;
$tmp5693 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5693->value = $tmp5692;
ITable* $tmp5694 = ((frost$core$Equatable*) $tmp5690)->$class->itable;
while ($tmp5694->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5694 = $tmp5694->next;
}
$fn5696 $tmp5695 = $tmp5694->methods[0];
frost$core$Bit $tmp5697 = $tmp5695(((frost$core$Equatable*) $tmp5690), ((frost$core$Equatable*) $tmp5693));
bool $tmp5698 = $tmp5697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5693)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5690)));
if ($tmp5698) goto block5; else goto block7;
block5:;
// line 2806
org$frostlang$frostc$FixedArray* $tmp5699 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5699));
org$frostlang$frostc$FixedArray* $tmp5700 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
*(&local2) = $tmp5699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5699));
// line 2807
org$frostlang$frostc$FixedArray* $tmp5701 = *(&local2);
frost$core$Bit $tmp5702 = frost$core$Bit$init$builtin_bit($tmp5701 == NULL);
bool $tmp5703 = $tmp5702.value;
if ($tmp5703) goto block8; else goto block9;
block8:;
// line 2808
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5704 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5704));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2812
org$frostlang$frostc$FixedArray* $tmp5705 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
org$frostlang$frostc$FixedArray* $tmp5706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5706));
*(&local2) = $tmp5705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
goto block6;
block6:;
// line 2814
frost$collections$Array* $tmp5707 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5707);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5707));
frost$collections$Array* $tmp5708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5708));
*(&local3) = $tmp5707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5707));
// line 2815
frost$core$Int64 $tmp5709 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5710 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5709);
org$frostlang$frostc$parser$Token$nullable $tmp5711 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5710);
frost$core$Bit $tmp5712 = frost$core$Bit$init$builtin_bit($tmp5711.nonnull);
bool $tmp5713 = $tmp5712.value;
if ($tmp5713) goto block10; else goto block11;
block10:;
// line 2816
org$frostlang$frostc$ASTNode* $tmp5714 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5714));
org$frostlang$frostc$ASTNode* $tmp5715 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5715));
*(&local4) = $tmp5714;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5714));
// line 2817
org$frostlang$frostc$ASTNode* $tmp5716 = *(&local4);
frost$core$Bit $tmp5717 = frost$core$Bit$init$builtin_bit($tmp5716 == NULL);
bool $tmp5718 = $tmp5717.value;
if ($tmp5718) goto block12; else goto block13;
block12:;
// line 2818
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5719 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5719));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5720 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5721 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2820
frost$collections$Array* $tmp5722 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5723 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5722, ((frost$core$Object*) $tmp5723));
// line 2821
goto block14;
block14:;
frost$core$Int64 $tmp5724 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5725 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5724);
org$frostlang$frostc$parser$Token$nullable $tmp5726 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5725);
frost$core$Bit $tmp5727 = frost$core$Bit$init$builtin_bit($tmp5726.nonnull);
bool $tmp5728 = $tmp5727.value;
if ($tmp5728) goto block15; else goto block16;
block15:;
// line 2822
org$frostlang$frostc$ASTNode* $tmp5729 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
org$frostlang$frostc$ASTNode* $tmp5730 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5730));
*(&local4) = $tmp5729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
// line 2823
org$frostlang$frostc$ASTNode* $tmp5731 = *(&local4);
frost$core$Bit $tmp5732 = frost$core$Bit$init$builtin_bit($tmp5731 == NULL);
bool $tmp5733 = $tmp5732.value;
if ($tmp5733) goto block17; else goto block18;
block17:;
// line 2824
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5734 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2826
frost$collections$Array* $tmp5737 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5738 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5737, ((frost$core$Object*) $tmp5738));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5739 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2829
frost$core$Int64 $tmp5740 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5741 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5740);
org$frostlang$frostc$parser$Token$nullable $tmp5742 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5741, &$s5743);
frost$core$Bit $tmp5744 = frost$core$Bit$init$builtin_bit(!$tmp5742.nonnull);
bool $tmp5745 = $tmp5744.value;
if ($tmp5745) goto block19; else goto block20;
block19:;
// line 2830
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5746 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5747 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5747));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2832
frost$collections$Array* $tmp5748 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5748);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
frost$collections$Array* $tmp5749 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5749));
*(&local5) = $tmp5748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
// line 2833
goto block21;
block21:;
frost$core$Int64 $tmp5750 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5751 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5750);
org$frostlang$frostc$parser$Token$nullable $tmp5752 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5751);
frost$core$Bit $tmp5753 = frost$core$Bit$init$builtin_bit(!$tmp5752.nonnull);
bool $tmp5754 = $tmp5753.value;
if ($tmp5754) goto block22; else goto block23;
block22:;
// line 2834
org$frostlang$frostc$ASTNode* $tmp5755 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5755));
org$frostlang$frostc$ASTNode* $tmp5756 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5756));
*(&local6) = $tmp5755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5755));
// line 2835
org$frostlang$frostc$ASTNode* $tmp5757 = *(&local6);
frost$core$Bit $tmp5758 = frost$core$Bit$init$builtin_bit($tmp5757 == NULL);
bool $tmp5759 = $tmp5758.value;
if ($tmp5759) goto block24; else goto block25;
block24:;
// line 2836
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5760 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5760));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5761 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5761));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5762));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5763 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2838
frost$collections$Array* $tmp5764 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5765 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5764, ((frost$core$Object*) $tmp5765));
org$frostlang$frostc$ASTNode* $tmp5766 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2840
org$frostlang$frostc$ASTNode* $tmp5767 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5768 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5769 = *(&local0);
org$frostlang$frostc$Position $tmp5770 = ((org$frostlang$frostc$parser$Token) $tmp5769.value).position;
frost$core$Int64 $tmp5771 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5772 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5771);
org$frostlang$frostc$parser$Token$nullable $tmp5773 = *(&local1);
frost$core$String* $tmp5774 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5773.value));
org$frostlang$frostc$FixedArray* $tmp5775 = *(&local2);
frost$collections$Array* $tmp5776 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5777 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5776);
frost$collections$Array* $tmp5778 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5779 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5778);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5767, $tmp5768, $tmp5770, param1, param2, $tmp5772, $tmp5774, $tmp5775, $tmp5777, $tmp5779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
frost$collections$Array* $tmp5780 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5780));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5781 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5781));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5782 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5767;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2849
org$frostlang$frostc$parser$Token $tmp5783 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5784 = $tmp5783.kind;
frost$core$Int64 $tmp5785 = $tmp5784.$rawValue;
frost$core$Int64 $tmp5786 = (frost$core$Int64) {16};
frost$core$Bit $tmp5787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5785, $tmp5786);
bool $tmp5788 = $tmp5787.value;
if ($tmp5788) goto block2; else goto block3;
block2:;
// line 2851
org$frostlang$frostc$ASTNode* $tmp5789 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5789));
return $tmp5789;
block3:;
// line 2854
org$frostlang$frostc$ASTNode* $tmp5790 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
return $tmp5790;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2863
frost$collections$Array* $tmp5791 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5791);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
frost$collections$Array* $tmp5792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
*(&local0) = $tmp5791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
// line 2864
org$frostlang$frostc$parser$Token $tmp5793 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5794 = $tmp5793.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5795;
$tmp5795 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5795->value = $tmp5794;
frost$core$Int64 $tmp5796 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5797 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5796);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5798;
$tmp5798 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5798->value = $tmp5797;
ITable* $tmp5799 = ((frost$core$Equatable*) $tmp5795)->$class->itable;
while ($tmp5799->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5799 = $tmp5799->next;
}
$fn5801 $tmp5800 = $tmp5799->methods[0];
frost$core$Bit $tmp5802 = $tmp5800(((frost$core$Equatable*) $tmp5795), ((frost$core$Equatable*) $tmp5798));
bool $tmp5803 = $tmp5802.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5798)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5795)));
if ($tmp5803) goto block1; else goto block2;
block1:;
// line 2865
org$frostlang$frostc$ASTNode* $tmp5804 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
org$frostlang$frostc$ASTNode* $tmp5805 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
*(&local1) = $tmp5804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
// line 2866
org$frostlang$frostc$ASTNode* $tmp5806 = *(&local1);
frost$core$Bit $tmp5807 = frost$core$Bit$init$builtin_bit($tmp5806 != NULL);
bool $tmp5808 = $tmp5807.value;
if ($tmp5808) goto block3; else goto block4;
block3:;
// line 2867
frost$collections$Array* $tmp5809 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5810 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5809, ((frost$core$Object*) $tmp5810));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5811 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5811));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2870
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5812 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5813 = $tmp5812.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5814;
$tmp5814 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5814->value = $tmp5813;
frost$core$Int64 $tmp5815 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5816 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5815);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5817;
$tmp5817 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5817->value = $tmp5816;
ITable* $tmp5818 = ((frost$core$Equatable*) $tmp5814)->$class->itable;
while ($tmp5818->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5818 = $tmp5818->next;
}
$fn5820 $tmp5819 = $tmp5818->methods[1];
frost$core$Bit $tmp5821 = $tmp5819(((frost$core$Equatable*) $tmp5814), ((frost$core$Equatable*) $tmp5817));
bool $tmp5822 = $tmp5821.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5817)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5814)));
if ($tmp5822) goto block6; else goto block7;
block6:;
// line 2871
org$frostlang$frostc$ASTNode* $tmp5823 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5823));
org$frostlang$frostc$ASTNode* $tmp5824 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5824));
*(&local2) = $tmp5823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5823));
// line 2872
org$frostlang$frostc$ASTNode* $tmp5825 = *(&local2);
frost$core$Bit $tmp5826 = frost$core$Bit$init$builtin_bit($tmp5825 == NULL);
bool $tmp5827 = $tmp5826.value;
if ($tmp5827) goto block8; else goto block9;
block8:;
// line 2873
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5828 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5828));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5829 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2875
frost$collections$Stack** $tmp5830 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5831 = *$tmp5830;
frost$core$Int64 $tmp5832 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5831);
frost$core$Int64 $tmp5833 = (frost$core$Int64) {0};
frost$core$Bit $tmp5834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5832, $tmp5833);
bool $tmp5835 = $tmp5834.value;
if ($tmp5835) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5836 = (frost$core$Int64) {2875};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5837, $tmp5836);
abort(); // unreachable
block10:;
// line 2876
frost$collections$Array* $tmp5838 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5839 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5838, ((frost$core$Object*) $tmp5839));
org$frostlang$frostc$ASTNode* $tmp5840 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5840));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2878
org$frostlang$frostc$ASTNode* $tmp5841 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5842 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5843 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5844 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5843);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5841, $tmp5842, $tmp5844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5841));
frost$collections$Array* $tmp5845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5845));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5841;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5846 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5847 = *$tmp5846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
org$frostlang$regex$RegexParser** $tmp5848 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5849 = *$tmp5848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5849));
frost$threads$MessageQueue** $tmp5850 = &param0->errors;
frost$threads$MessageQueue* $tmp5851 = *$tmp5850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5851));
frost$io$File** $tmp5852 = &param0->path;
frost$io$File* $tmp5853 = *$tmp5852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
frost$core$String** $tmp5854 = &param0->source;
frost$core$String* $tmp5855 = *$tmp5854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5855));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5856 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5857 = *$tmp5856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5857));
frost$collections$Stack** $tmp5858 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5859 = *$tmp5858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5859));
frost$collections$Stack** $tmp5860 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5861 = *$tmp5860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5861));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5862 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5863 = *$tmp5862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5863));
return;

}

