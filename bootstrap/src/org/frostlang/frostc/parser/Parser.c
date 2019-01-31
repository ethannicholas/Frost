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
typedef frost$core$Int64 (*$fn2295)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2378)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2470)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2661)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2815)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2957)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3154)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3318)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3414)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3922)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3947)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3983)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn4000)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4320)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4477)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4485)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4813)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4846)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4857)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4982)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5004)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5085)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5158)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5184)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5347)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5377)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5558)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5666)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5684)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5759)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5864)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5883)(frost$core$Equatable*, frost$core$Equatable*);

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
static frost$core$String $s2304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65", 12, -7621261731150940370, NULL };
static frost$core$String $s2333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s3402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s4031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s4071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s4078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

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
block12:;
frost$core$Int64 $tmp2925 = (frost$core$Int64) {73};
frost$core$Bit $tmp2926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2925);
bool $tmp2927 = $tmp2926.value;
if ($tmp2927) goto block6; else goto block13;
block6:;
// line 1279
org$frostlang$frostc$ASTNode* $tmp2928 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
org$frostlang$frostc$ASTNode* $tmp2929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
*(&local2) = $tmp2928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// line 1280
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local2);
frost$core$Bit $tmp2931 = frost$core$Bit$init$builtin_bit($tmp2930 == NULL);
bool $tmp2932 = $tmp2931.value;
if ($tmp2932) goto block14; else goto block15;
block14:;
// line 1281
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2934 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1283
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2935 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2936 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2937 = *(&local1);
org$frostlang$frostc$Position $tmp2938 = $tmp2937.position;
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2940 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2941 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2940);
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2935, $tmp2936, $tmp2938, $tmp2939, $tmp2941, $tmp2942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
org$frostlang$frostc$ASTNode* $tmp2943 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local0) = $tmp2935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2945 = (frost$core$Int64) {67};
frost$core$Bit $tmp2946 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2906, $tmp2945);
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block16; else goto block17;
block16:;
// line 1287
org$frostlang$frostc$parser$Token $tmp2948 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2948;
// line 1288
org$frostlang$frostc$parser$Token $tmp2949 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2950 = $tmp2949.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2951;
$tmp2951 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2951->value = $tmp2950;
frost$core$Int64 $tmp2952 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2953 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2952);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2954;
$tmp2954 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2954->value = $tmp2953;
ITable* $tmp2955 = ((frost$core$Equatable*) $tmp2951)->$class->itable;
while ($tmp2955->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2955 = $tmp2955->next;
}
$fn2957 $tmp2956 = $tmp2955->methods[0];
frost$core$Bit $tmp2958 = $tmp2956(((frost$core$Equatable*) $tmp2951), ((frost$core$Equatable*) $tmp2954));
bool $tmp2959 = $tmp2958.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2954)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2951)));
if ($tmp2959) goto block18; else goto block20;
block18:;
// line 1290
org$frostlang$frostc$ASTNode* $tmp2960 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
org$frostlang$frostc$ASTNode* $tmp2961 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
*(&local4) = $tmp2960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
// line 1291
org$frostlang$frostc$ASTNode* $tmp2962 = *(&local4);
frost$core$Bit $tmp2963 = frost$core$Bit$init$builtin_bit($tmp2962 == NULL);
bool $tmp2964 = $tmp2963.value;
if ($tmp2964) goto block21; else goto block22;
block21:;
// line 1292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2965 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1294
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2967 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2968 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2969 = *(&local1);
org$frostlang$frostc$Position $tmp2970 = $tmp2969.position;
org$frostlang$frostc$ASTNode* $tmp2971 = *(&local0);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2973 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2972);
org$frostlang$frostc$ASTNode* $tmp2974 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2967, $tmp2968, $tmp2970, $tmp2971, $tmp2973, $tmp2974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
org$frostlang$frostc$ASTNode* $tmp2975 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
*(&local0) = $tmp2967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1298
org$frostlang$frostc$parser$Token $tmp2977 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2977);
// line 1299
org$frostlang$frostc$parser$Token $tmp2978 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2978);
// line 1300
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
org$frostlang$frostc$ASTNode* $tmp2980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2979;
block19:;
goto block5;
block17:;
// line 1304
org$frostlang$frostc$parser$Token $tmp2981 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2981);
// line 1305
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
org$frostlang$frostc$ASTNode* $tmp2983 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2982;
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
// line 1316
org$frostlang$frostc$ASTNode* $tmp2984 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
org$frostlang$frostc$ASTNode* $tmp2985 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
*(&local0) = $tmp2984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
// line 1317
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local0);
frost$core$Bit $tmp2987 = frost$core$Bit$init$builtin_bit($tmp2986 == NULL);
bool $tmp2988 = $tmp2987.value;
if ($tmp2988) goto block1; else goto block2;
block1:;
// line 1318
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1320
goto block3;
block3:;
// line 1321
org$frostlang$frostc$parser$Token $tmp2990 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2990;
// line 1322
org$frostlang$frostc$parser$Token $tmp2991 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2992 = $tmp2991.kind;
frost$core$Int64 $tmp2993 = $tmp2992.$rawValue;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {55};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2993, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {56};
frost$core$Bit $tmp2998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2993, $tmp2997);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3000 = (frost$core$Int64) {75};
frost$core$Bit $tmp3001 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2993, $tmp3000);
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block6; else goto block9;
block6:;
// line 1324
org$frostlang$frostc$ASTNode* $tmp3003 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
org$frostlang$frostc$ASTNode* $tmp3004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local2) = $tmp3003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
// line 1325
org$frostlang$frostc$ASTNode* $tmp3005 = *(&local2);
frost$core$Bit $tmp3006 = frost$core$Bit$init$builtin_bit($tmp3005 == NULL);
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block10; else goto block11;
block10:;
// line 1326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3008 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1328
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3010 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3011 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3012 = *(&local1);
org$frostlang$frostc$Position $tmp3013 = $tmp3012.position;
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3015 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3016 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3015);
org$frostlang$frostc$ASTNode* $tmp3017 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3010, $tmp3011, $tmp3013, $tmp3014, $tmp3016, $tmp3017);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
org$frostlang$frostc$ASTNode* $tmp3018 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
*(&local0) = $tmp3010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
org$frostlang$frostc$ASTNode* $tmp3019 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1332
org$frostlang$frostc$parser$Token $tmp3020 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3020);
// line 1333
org$frostlang$frostc$ASTNode* $tmp3021 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3021;
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
// line 1344
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1345
org$frostlang$frostc$parser$Token $tmp3023 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3024 = $tmp3023.kind;
frost$core$Int64 $tmp3025 = $tmp3024.$rawValue;
frost$core$Int64 $tmp3026 = (frost$core$Int64) {101};
frost$core$Bit $tmp3027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3025, $tmp3026);
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {100};
frost$core$Bit $tmp3030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3025, $tmp3029);
bool $tmp3031 = $tmp3030.value;
if ($tmp3031) goto block2; else goto block4;
block2:;
// line 1347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3032 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1350
org$frostlang$frostc$ASTNode* $tmp3033 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
org$frostlang$frostc$ASTNode* $tmp3034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local0) = $tmp3033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
// line 1351
org$frostlang$frostc$ASTNode* $tmp3035 = *(&local0);
frost$core$Bit $tmp3036 = frost$core$Bit$init$builtin_bit($tmp3035 == NULL);
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block5; else goto block6;
block5:;
// line 1352
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3038 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1356
org$frostlang$frostc$parser$Token $tmp3039 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3039;
// line 1357
org$frostlang$frostc$parser$Token $tmp3040 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3041 = $tmp3040.kind;
frost$core$Int64 $tmp3042 = $tmp3041.$rawValue;
frost$core$Int64 $tmp3043 = (frost$core$Int64) {101};
frost$core$Bit $tmp3044 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3042, $tmp3043);
bool $tmp3045 = $tmp3044.value;
if ($tmp3045) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3046 = (frost$core$Int64) {100};
frost$core$Bit $tmp3047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3042, $tmp3046);
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block8; else goto block10;
block8:;
// line 1359
org$frostlang$frostc$parser$Token $tmp3049 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3049;
// line 1360
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1361
org$frostlang$frostc$parser$Token $tmp3050 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3051 = $tmp3050.kind;
frost$core$Int64 $tmp3052 = $tmp3051.$rawValue;
frost$core$Int64 $tmp3053 = (frost$core$Int64) {106};
frost$core$Bit $tmp3054 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3053);
bool $tmp3055 = $tmp3054.value;
if ($tmp3055) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {108};
frost$core$Bit $tmp3057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3056);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block12; else goto block14;
block14:;
frost$core$Int64 $tmp3059 = (frost$core$Int64) {34};
frost$core$Bit $tmp3060 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3059);
bool $tmp3061 = $tmp3060.value;
if ($tmp3061) goto block12; else goto block15;
block15:;
frost$core$Int64 $tmp3062 = (frost$core$Int64) {103};
frost$core$Bit $tmp3063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3062);
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block12; else goto block16;
block16:;
frost$core$Int64 $tmp3065 = (frost$core$Int64) {104};
frost$core$Bit $tmp3066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3065);
bool $tmp3067 = $tmp3066.value;
if ($tmp3067) goto block12; else goto block17;
block17:;
frost$core$Int64 $tmp3068 = (frost$core$Int64) {109};
frost$core$Bit $tmp3069 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3068);
bool $tmp3070 = $tmp3069.value;
if ($tmp3070) goto block12; else goto block18;
block18:;
frost$core$Int64 $tmp3071 = (frost$core$Int64) {37};
frost$core$Bit $tmp3072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3071);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block12; else goto block19;
block19:;
frost$core$Int64 $tmp3074 = (frost$core$Int64) {33};
frost$core$Bit $tmp3075 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3074);
bool $tmp3076 = $tmp3075.value;
if ($tmp3076) goto block12; else goto block20;
block20:;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {32};
frost$core$Bit $tmp3078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3077);
bool $tmp3079 = $tmp3078.value;
if ($tmp3079) goto block12; else goto block21;
block21:;
frost$core$Int64 $tmp3080 = (frost$core$Int64) {31};
frost$core$Bit $tmp3081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3080);
bool $tmp3082 = $tmp3081.value;
if ($tmp3082) goto block12; else goto block22;
block22:;
frost$core$Int64 $tmp3083 = (frost$core$Int64) {36};
frost$core$Bit $tmp3084 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3083);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block12; else goto block23;
block23:;
frost$core$Int64 $tmp3086 = (frost$core$Int64) {45};
frost$core$Bit $tmp3087 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3086);
bool $tmp3088 = $tmp3087.value;
if ($tmp3088) goto block12; else goto block24;
block24:;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {39};
frost$core$Bit $tmp3090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3089);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block12; else goto block25;
block25:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {24};
frost$core$Bit $tmp3093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3092);
bool $tmp3094 = $tmp3093.value;
if ($tmp3094) goto block12; else goto block26;
block26:;
frost$core$Int64 $tmp3095 = (frost$core$Int64) {25};
frost$core$Bit $tmp3096 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3095);
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block12; else goto block27;
block27:;
frost$core$Int64 $tmp3098 = (frost$core$Int64) {26};
frost$core$Bit $tmp3099 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3098);
bool $tmp3100 = $tmp3099.value;
if ($tmp3100) goto block12; else goto block28;
block28:;
frost$core$Int64 $tmp3101 = (frost$core$Int64) {27};
frost$core$Bit $tmp3102 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3101);
bool $tmp3103 = $tmp3102.value;
if ($tmp3103) goto block12; else goto block29;
block29:;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {23};
frost$core$Bit $tmp3105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3104);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block12; else goto block30;
block30:;
frost$core$Int64 $tmp3107 = (frost$core$Int64) {22};
frost$core$Bit $tmp3108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3107);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block12; else goto block31;
block31:;
frost$core$Int64 $tmp3110 = (frost$core$Int64) {21};
frost$core$Bit $tmp3111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3110);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block12; else goto block32;
block32:;
frost$core$Int64 $tmp3113 = (frost$core$Int64) {47};
frost$core$Bit $tmp3114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3113);
bool $tmp3115 = $tmp3114.value;
if ($tmp3115) goto block12; else goto block33;
block33:;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {46};
frost$core$Bit $tmp3117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3052, $tmp3116);
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block12; else goto block34;
block12:;
// line 1375
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3119 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block34:;
// line 1378
org$frostlang$frostc$ASTNode* $tmp3120 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
org$frostlang$frostc$ASTNode* $tmp3121 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local3) = $tmp3120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
// line 1379
org$frostlang$frostc$ASTNode* $tmp3122 = *(&local3);
frost$core$Bit $tmp3123 = frost$core$Bit$init$builtin_bit($tmp3122 == NULL);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block35; else goto block36;
block35:;
// line 1380
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block11;
block11:;
// line 1384
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1385
frost$core$Int64 $tmp3127 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3128 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3127);
org$frostlang$frostc$parser$Token$nullable $tmp3129 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3128);
frost$core$Bit $tmp3130 = frost$core$Bit$init$builtin_bit($tmp3129.nonnull);
bool $tmp3131 = $tmp3130.value;
if ($tmp3131) goto block37; else goto block39;
block37:;
// line 1386
org$frostlang$frostc$ASTNode* $tmp3132 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
org$frostlang$frostc$ASTNode* $tmp3133 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local4) = $tmp3132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
// line 1387
org$frostlang$frostc$ASTNode* $tmp3134 = *(&local4);
frost$core$Bit $tmp3135 = frost$core$Bit$init$builtin_bit($tmp3134 == NULL);
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block40; else goto block41;
block40:;
// line 1388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3138 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
goto block38;
block39:;
// line 1
// line 1392
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block38:;
// line 1394
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3141 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3142 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3143 = *(&local1);
org$frostlang$frostc$Position $tmp3144 = $tmp3143.position;
org$frostlang$frostc$ASTNode* $tmp3145 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3146 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3147 = $tmp3146.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3148;
$tmp3148 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3148->value = $tmp3147;
frost$core$Int64 $tmp3149 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3150 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3149);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3151;
$tmp3151 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3151->value = $tmp3150;
ITable* $tmp3152 = ((frost$core$Equatable*) $tmp3148)->$class->itable;
while ($tmp3152->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3152 = $tmp3152->next;
}
$fn3154 $tmp3153 = $tmp3152->methods[0];
frost$core$Bit $tmp3155 = $tmp3153(((frost$core$Equatable*) $tmp3148), ((frost$core$Equatable*) $tmp3151));
org$frostlang$frostc$ASTNode* $tmp3156 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3157 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3141, $tmp3142, $tmp3144, $tmp3145, $tmp3155, $tmp3156, $tmp3157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3151)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3148)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3159 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3141;
block10:;
// line 1398
org$frostlang$frostc$parser$Token $tmp3161 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3161);
// line 1399
org$frostlang$frostc$ASTNode* $tmp3162 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
org$frostlang$frostc$ASTNode* $tmp3163 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3162;
block7:;
goto block42;
block42:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1409
org$frostlang$frostc$ASTNode* $tmp3164 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
org$frostlang$frostc$ASTNode* $tmp3165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
*(&local0) = $tmp3164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
// line 1410
org$frostlang$frostc$ASTNode* $tmp3166 = *(&local0);
frost$core$Bit $tmp3167 = frost$core$Bit$init$builtin_bit($tmp3166 == NULL);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block1; else goto block2;
block1:;
// line 1411
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1413
goto block3;
block3:;
// line 1414
org$frostlang$frostc$parser$Token $tmp3170 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3170;
// line 1415
org$frostlang$frostc$parser$Token $tmp3171 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3172 = $tmp3171.kind;
frost$core$Int64 $tmp3173 = $tmp3172.$rawValue;
frost$core$Int64 $tmp3174 = (frost$core$Int64) {62};
frost$core$Bit $tmp3175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3174);
bool $tmp3176 = $tmp3175.value;
if ($tmp3176) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3177 = (frost$core$Int64) {63};
frost$core$Bit $tmp3178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3177);
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3180 = (frost$core$Int64) {64};
frost$core$Bit $tmp3181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3180);
bool $tmp3182 = $tmp3181.value;
if ($tmp3182) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3183 = (frost$core$Int64) {65};
frost$core$Bit $tmp3184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3183);
bool $tmp3185 = $tmp3184.value;
if ($tmp3185) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3186 = (frost$core$Int64) {66};
frost$core$Bit $tmp3187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3186);
bool $tmp3188 = $tmp3187.value;
if ($tmp3188) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3189 = (frost$core$Int64) {67};
frost$core$Bit $tmp3190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3189);
bool $tmp3191 = $tmp3190.value;
if ($tmp3191) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3192 = (frost$core$Int64) {68};
frost$core$Bit $tmp3193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3192);
bool $tmp3194 = $tmp3193.value;
if ($tmp3194) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3195 = (frost$core$Int64) {69};
frost$core$Bit $tmp3196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3173, $tmp3195);
bool $tmp3197 = $tmp3196.value;
if ($tmp3197) goto block6; else goto block14;
block6:;
// line 1424
org$frostlang$frostc$ASTNode* $tmp3198 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
org$frostlang$frostc$ASTNode* $tmp3199 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
*(&local2) = $tmp3198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
// line 1425
org$frostlang$frostc$ASTNode* $tmp3200 = *(&local2);
frost$core$Bit $tmp3201 = frost$core$Bit$init$builtin_bit($tmp3200 == NULL);
bool $tmp3202 = $tmp3201.value;
if ($tmp3202) goto block15; else goto block16;
block15:;
// line 1426
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1428
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3205 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3206 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3207 = *(&local1);
org$frostlang$frostc$Position $tmp3208 = $tmp3207.position;
org$frostlang$frostc$ASTNode* $tmp3209 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3210 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3211 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3210);
org$frostlang$frostc$ASTNode* $tmp3212 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3205, $tmp3206, $tmp3208, $tmp3209, $tmp3211, $tmp3212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
org$frostlang$frostc$ASTNode* $tmp3213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local0) = $tmp3205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
org$frostlang$frostc$ASTNode* $tmp3214 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1432
org$frostlang$frostc$parser$Token $tmp3215 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3215);
// line 1433
org$frostlang$frostc$ASTNode* $tmp3216 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
org$frostlang$frostc$ASTNode* $tmp3217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3216;
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
// line 1443
org$frostlang$frostc$ASTNode* $tmp3218 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
org$frostlang$frostc$ASTNode* $tmp3219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
*(&local0) = $tmp3218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
// line 1444
org$frostlang$frostc$ASTNode* $tmp3220 = *(&local0);
frost$core$Bit $tmp3221 = frost$core$Bit$init$builtin_bit($tmp3220 == NULL);
bool $tmp3222 = $tmp3221.value;
if ($tmp3222) goto block1; else goto block2;
block1:;
// line 1445
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1447
goto block3;
block3:;
// line 1448
org$frostlang$frostc$parser$Token $tmp3224 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3224;
// line 1449
org$frostlang$frostc$parser$Token $tmp3225 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3226 = $tmp3225.kind;
frost$core$Int64 $tmp3227 = $tmp3226.$rawValue;
frost$core$Int64 $tmp3228 = (frost$core$Int64) {70};
frost$core$Bit $tmp3229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3227, $tmp3228);
bool $tmp3230 = $tmp3229.value;
if ($tmp3230) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3231 = (frost$core$Int64) {74};
frost$core$Bit $tmp3232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3227, $tmp3231);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block6; else goto block8;
block6:;
// line 1451
org$frostlang$frostc$ASTNode* $tmp3234 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local2) = $tmp3234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// line 1452
org$frostlang$frostc$ASTNode* $tmp3236 = *(&local2);
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit($tmp3236 == NULL);
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block9; else goto block10;
block9:;
// line 1453
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1455
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
block8:;
// line 1459
org$frostlang$frostc$parser$Token $tmp3251 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3251);
// line 1460
org$frostlang$frostc$ASTNode* $tmp3252 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$ASTNode* $tmp3253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3252;
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
// line 1470
org$frostlang$frostc$ASTNode* $tmp3254 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
org$frostlang$frostc$ASTNode* $tmp3255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
*(&local0) = $tmp3254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
// line 1471
org$frostlang$frostc$ASTNode* $tmp3256 = *(&local0);
frost$core$Bit $tmp3257 = frost$core$Bit$init$builtin_bit($tmp3256 == NULL);
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block1; else goto block2;
block1:;
// line 1472
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1474
goto block3;
block3:;
// line 1475
frost$core$Int64 $tmp3260 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3261 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3260);
org$frostlang$frostc$parser$Token$nullable $tmp3262 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3261);
*(&local1) = $tmp3262;
// line 1476
org$frostlang$frostc$parser$Token$nullable $tmp3263 = *(&local1);
frost$core$Bit $tmp3264 = frost$core$Bit$init$builtin_bit(!$tmp3263.nonnull);
bool $tmp3265 = $tmp3264.value;
if ($tmp3265) goto block5; else goto block6;
block5:;
// line 1477
goto block4;
block6:;
// line 1479
org$frostlang$frostc$ASTNode* $tmp3266 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
org$frostlang$frostc$ASTNode* $tmp3267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local2) = $tmp3266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
// line 1480
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local2);
frost$core$Bit $tmp3269 = frost$core$Bit$init$builtin_bit($tmp3268 == NULL);
bool $tmp3270 = $tmp3269.value;
if ($tmp3270) goto block7; else goto block8;
block7:;
// line 1481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1483
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3273 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3274 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3275 = *(&local1);
org$frostlang$frostc$Position $tmp3276 = ((org$frostlang$frostc$parser$Token) $tmp3275.value).position;
org$frostlang$frostc$ASTNode* $tmp3277 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3278 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3279 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3278.value));
org$frostlang$frostc$ASTNode* $tmp3280 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3273, $tmp3274, $tmp3276, $tmp3277, $tmp3279, $tmp3280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
org$frostlang$frostc$ASTNode* $tmp3281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
*(&local0) = $tmp3273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
org$frostlang$frostc$ASTNode* $tmp3282 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1485
org$frostlang$frostc$ASTNode* $tmp3283 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
org$frostlang$frostc$ASTNode* $tmp3284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3283;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1492
frost$core$Int64 $tmp3285 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3286 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3285);
org$frostlang$frostc$parser$Token$nullable $tmp3287 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3286, &$s3288);
*(&local0) = $tmp3287;
// line 1493
org$frostlang$frostc$parser$Token$nullable $tmp3289 = *(&local0);
frost$core$Bit $tmp3290 = frost$core$Bit$init$builtin_bit(!$tmp3289.nonnull);
bool $tmp3291 = $tmp3290.value;
if ($tmp3291) goto block1; else goto block2;
block1:;
// line 1494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1496
org$frostlang$frostc$ASTNode* $tmp3292 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3292));
org$frostlang$frostc$ASTNode* $tmp3293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
*(&local1) = $tmp3292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3292));
// line 1497
org$frostlang$frostc$ASTNode* $tmp3294 = *(&local1);
frost$core$Bit $tmp3295 = frost$core$Bit$init$builtin_bit($tmp3294 == NULL);
bool $tmp3296 = $tmp3295.value;
if ($tmp3296) goto block3; else goto block4;
block3:;
// line 1498
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1500
org$frostlang$frostc$FixedArray* $tmp3298 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
org$frostlang$frostc$FixedArray* $tmp3299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
*(&local2) = $tmp3298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
// line 1501
org$frostlang$frostc$FixedArray* $tmp3300 = *(&local2);
frost$core$Bit $tmp3301 = frost$core$Bit$init$builtin_bit($tmp3300 == NULL);
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block5; else goto block6;
block5:;
// line 1502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1504
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1505
frost$core$Int64 $tmp3305 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3306 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3305);
org$frostlang$frostc$parser$Token$nullable $tmp3307 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3306);
frost$core$Bit $tmp3308 = frost$core$Bit$init$builtin_bit($tmp3307.nonnull);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block7; else goto block9;
block7:;
// line 1506
org$frostlang$frostc$parser$Token $tmp3310 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3311 = $tmp3310.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3312;
$tmp3312 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3312->value = $tmp3311;
frost$core$Int64 $tmp3313 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3314 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3313);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3315;
$tmp3315 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3315->value = $tmp3314;
ITable* $tmp3316 = ((frost$core$Equatable*) $tmp3312)->$class->itable;
while ($tmp3316->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3316 = $tmp3316->next;
}
$fn3318 $tmp3317 = $tmp3316->methods[0];
frost$core$Bit $tmp3319 = $tmp3317(((frost$core$Equatable*) $tmp3312), ((frost$core$Equatable*) $tmp3315));
bool $tmp3320 = $tmp3319.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3315)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3312)));
if ($tmp3320) goto block10; else goto block12;
block10:;
// line 1507
org$frostlang$frostc$ASTNode* $tmp3321 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
org$frostlang$frostc$ASTNode* $tmp3322 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
*(&local3) = $tmp3321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
// line 1508
org$frostlang$frostc$ASTNode* $tmp3323 = *(&local3);
frost$core$Bit $tmp3324 = frost$core$Bit$init$builtin_bit($tmp3323 == NULL);
bool $tmp3325 = $tmp3324.value;
if ($tmp3325) goto block13; else goto block14;
block13:;
// line 1509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3326 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3327 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1513
org$frostlang$frostc$ASTNode* $tmp3329 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
org$frostlang$frostc$ASTNode* $tmp3330 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
*(&local3) = $tmp3329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
// line 1514
org$frostlang$frostc$ASTNode* $tmp3331 = *(&local3);
frost$core$Bit $tmp3332 = frost$core$Bit$init$builtin_bit($tmp3331 == NULL);
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block15; else goto block16;
block15:;
// line 1515
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3334 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3335 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1520
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3337 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1522
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3338 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3339 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3340 = *(&local0);
org$frostlang$frostc$Position $tmp3341 = ((org$frostlang$frostc$parser$Token) $tmp3340.value).position;
org$frostlang$frostc$ASTNode* $tmp3342 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3343 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3344 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3338, $tmp3339, $tmp3341, $tmp3342, $tmp3343, $tmp3344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
org$frostlang$frostc$ASTNode* $tmp3345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3338;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1529
frost$core$Int64 $tmp3348 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3349 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3348);
org$frostlang$frostc$parser$Token$nullable $tmp3350 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3349, &$s3351);
frost$core$Bit $tmp3352 = frost$core$Bit$init$builtin_bit(!$tmp3350.nonnull);
bool $tmp3353 = $tmp3352.value;
if ($tmp3353) goto block1; else goto block2;
block1:;
// line 1530
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1532
frost$core$Bit $tmp3354 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3355 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3354);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
return $tmp3355;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1539
frost$core$Int64 $tmp3356 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp3357 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3356);
org$frostlang$frostc$parser$Token$nullable $tmp3358 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3357);
*(&local0) = $tmp3358;
// line 1540
org$frostlang$frostc$parser$Token$nullable $tmp3359 = *(&local0);
frost$core$Bit $tmp3360 = frost$core$Bit$init$builtin_bit($tmp3359.nonnull);
bool $tmp3361 = $tmp3360.value;
if ($tmp3361) goto block1; else goto block2;
block1:;
// line 1541
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3362 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3362);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
frost$collections$Array* $tmp3363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
*(&local1) = $tmp3362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
// line 1542
org$frostlang$frostc$ASTNode* $tmp3364 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
org$frostlang$frostc$ASTNode* $tmp3365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
*(&local2) = $tmp3364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
// line 1543
org$frostlang$frostc$ASTNode* $tmp3366 = *(&local2);
frost$core$Bit $tmp3367 = frost$core$Bit$init$builtin_bit($tmp3366 == NULL);
bool $tmp3368 = $tmp3367.value;
if ($tmp3368) goto block3; else goto block4;
block3:;
// line 1544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3369 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1546
frost$collections$Array* $tmp3371 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3372 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3371, ((frost$core$Object*) $tmp3372));
// line 1547
goto block5;
block5:;
frost$core$Int64 $tmp3373 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3374 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3373);
org$frostlang$frostc$parser$Token$nullable $tmp3375 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3374);
frost$core$Bit $tmp3376 = frost$core$Bit$init$builtin_bit($tmp3375.nonnull);
bool $tmp3377 = $tmp3376.value;
if ($tmp3377) goto block6; else goto block7;
block6:;
// line 1548
org$frostlang$frostc$ASTNode* $tmp3378 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
org$frostlang$frostc$ASTNode* $tmp3379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3379));
*(&local2) = $tmp3378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
// line 1549
org$frostlang$frostc$ASTNode* $tmp3380 = *(&local2);
frost$core$Bit $tmp3381 = frost$core$Bit$init$builtin_bit($tmp3380 == NULL);
bool $tmp3382 = $tmp3381.value;
if ($tmp3382) goto block8; else goto block9;
block8:;
// line 1550
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3383 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3384 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 1552
frost$collections$Array* $tmp3385 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3386 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3385, ((frost$core$Object*) $tmp3386));
goto block5;
block7:;
// line 1554
frost$core$Int64 $tmp3387 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3388 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3387);
org$frostlang$frostc$parser$Token$nullable $tmp3389 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3388, &$s3390);
// line 1555
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3391 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3392 = (frost$core$Int64) {44};
org$frostlang$frostc$parser$Token$nullable $tmp3393 = *(&local0);
org$frostlang$frostc$Position $tmp3394 = ((org$frostlang$frostc$parser$Token) $tmp3393.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3395 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp3396 = *(&local1);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3395, ((frost$collections$ListView*) $tmp3396));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3391, $tmp3392, $tmp3394, $tmp3395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
org$frostlang$frostc$ASTNode* $tmp3397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3391;
block2:;
// line 1557
frost$core$Int64 $tmp3399 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3400 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3399);
org$frostlang$frostc$parser$Token$nullable $tmp3401 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3400, &$s3402);
*(&local3) = $tmp3401;
// line 1558
org$frostlang$frostc$parser$Token$nullable $tmp3403 = *(&local3);
frost$core$Bit $tmp3404 = frost$core$Bit$init$builtin_bit(!$tmp3403.nonnull);
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block10; else goto block11;
block10:;
// line 1559
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1561
org$frostlang$frostc$parser$Token $tmp3406 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3407 = $tmp3406.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3408;
$tmp3408 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3408->value = $tmp3407;
frost$core$Int64 $tmp3409 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3410 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3409);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3411;
$tmp3411 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3411->value = $tmp3410;
ITable* $tmp3412 = ((frost$core$Equatable*) $tmp3408)->$class->itable;
while ($tmp3412->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3412 = $tmp3412->next;
}
$fn3414 $tmp3413 = $tmp3412->methods[0];
frost$core$Bit $tmp3415 = $tmp3413(((frost$core$Equatable*) $tmp3408), ((frost$core$Equatable*) $tmp3411));
bool $tmp3416 = $tmp3415.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3411)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3408)));
if ($tmp3416) goto block12; else goto block13;
block12:;
// line 1562
org$frostlang$frostc$ASTNode* $tmp3417 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
org$frostlang$frostc$ASTNode* $tmp3418 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local4) = $tmp3417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
// line 1563
org$frostlang$frostc$ASTNode* $tmp3419 = *(&local4);
frost$core$Bit $tmp3420 = frost$core$Bit$init$builtin_bit($tmp3419 == NULL);
bool $tmp3421 = $tmp3420.value;
if ($tmp3421) goto block14; else goto block15;
block14:;
// line 1564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3422 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1566
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3423 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3424 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp3425 = *(&local3);
org$frostlang$frostc$Position $tmp3426 = ((org$frostlang$frostc$parser$Token) $tmp3425.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3427 = *(&local3);
frost$core$String* $tmp3428 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3427.value));
org$frostlang$frostc$ASTNode* $tmp3429 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3423, $tmp3424, $tmp3426, $tmp3428, $tmp3429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
org$frostlang$frostc$ASTNode* $tmp3430 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3423;
block13:;
// line 1568
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3431 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3432 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3433 = *(&local3);
org$frostlang$frostc$Position $tmp3434 = ((org$frostlang$frostc$parser$Token) $tmp3433.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3435 = *(&local3);
frost$core$String* $tmp3436 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3435.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3431, $tmp3432, $tmp3434, $tmp3436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
return $tmp3431;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1575
frost$core$Int64 $tmp3437 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3438 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3437);
org$frostlang$frostc$parser$Token$nullable $tmp3439 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3438, &$s3440);
*(&local0) = $tmp3439;
// line 1576
org$frostlang$frostc$parser$Token$nullable $tmp3441 = *(&local0);
frost$core$Bit $tmp3442 = frost$core$Bit$init$builtin_bit(!$tmp3441.nonnull);
bool $tmp3443 = $tmp3442.value;
if ($tmp3443) goto block1; else goto block2;
block1:;
// line 1577
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1579
org$frostlang$frostc$ASTNode* $tmp3444 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
org$frostlang$frostc$ASTNode* $tmp3445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
*(&local1) = $tmp3444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
// line 1580
org$frostlang$frostc$ASTNode* $tmp3446 = *(&local1);
frost$core$Bit $tmp3447 = frost$core$Bit$init$builtin_bit($tmp3446 == NULL);
bool $tmp3448 = $tmp3447.value;
if ($tmp3448) goto block3; else goto block4;
block3:;
// line 1581
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3449 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1583
frost$core$Int64 $tmp3450 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3451 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3450);
org$frostlang$frostc$parser$Token$nullable $tmp3452 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3451, &$s3453);
frost$core$Bit $tmp3454 = frost$core$Bit$init$builtin_bit(!$tmp3452.nonnull);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block5; else goto block6;
block5:;
// line 1584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1586
org$frostlang$frostc$ASTNode* $tmp3457 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
org$frostlang$frostc$ASTNode* $tmp3458 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local2) = $tmp3457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
// line 1587
org$frostlang$frostc$ASTNode* $tmp3459 = *(&local2);
frost$core$Bit $tmp3460 = frost$core$Bit$init$builtin_bit($tmp3459 == NULL);
bool $tmp3461 = $tmp3460.value;
if ($tmp3461) goto block7; else goto block8;
block7:;
// line 1588
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3462 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1590
org$frostlang$frostc$FixedArray* $tmp3464 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
org$frostlang$frostc$FixedArray* $tmp3465 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3465));
*(&local3) = $tmp3464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
// line 1591
org$frostlang$frostc$FixedArray* $tmp3466 = *(&local3);
frost$core$Bit $tmp3467 = frost$core$Bit$init$builtin_bit($tmp3466 == NULL);
bool $tmp3468 = $tmp3467.value;
if ($tmp3468) goto block9; else goto block10;
block9:;
// line 1592
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3469 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1594
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3472 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3473 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3474 = *(&local0);
org$frostlang$frostc$Position $tmp3475 = ((org$frostlang$frostc$parser$Token) $tmp3474.value).position;
org$frostlang$frostc$ASTNode* $tmp3476 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3477 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3478 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3472, $tmp3473, $tmp3475, param1, $tmp3476, $tmp3477, $tmp3478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
org$frostlang$frostc$FixedArray* $tmp3479 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3472;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1601
frost$core$Int64 $tmp3482 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3483 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3482);
org$frostlang$frostc$parser$Token$nullable $tmp3484 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3483, &$s3485);
*(&local0) = $tmp3484;
// line 1602
org$frostlang$frostc$parser$Token$nullable $tmp3486 = *(&local0);
frost$core$Bit $tmp3487 = frost$core$Bit$init$builtin_bit(!$tmp3486.nonnull);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block1; else goto block2;
block1:;
// line 1603
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1605
org$frostlang$frostc$ASTNode* $tmp3489 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
org$frostlang$frostc$ASTNode* $tmp3490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
*(&local1) = $tmp3489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
// line 1606
org$frostlang$frostc$ASTNode* $tmp3491 = *(&local1);
frost$core$Bit $tmp3492 = frost$core$Bit$init$builtin_bit($tmp3491 == NULL);
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block3; else goto block4;
block3:;
// line 1607
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1609
org$frostlang$frostc$FixedArray* $tmp3495 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
org$frostlang$frostc$FixedArray* $tmp3496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local2) = $tmp3495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
// line 1610
org$frostlang$frostc$FixedArray* $tmp3497 = *(&local2);
frost$core$Bit $tmp3498 = frost$core$Bit$init$builtin_bit($tmp3497 == NULL);
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block5; else goto block6;
block5:;
// line 1611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1613
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3502 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3503 = (frost$core$Int64) {55};
org$frostlang$frostc$parser$Token$nullable $tmp3504 = *(&local0);
org$frostlang$frostc$Position $tmp3505 = ((org$frostlang$frostc$parser$Token) $tmp3504.value).position;
org$frostlang$frostc$ASTNode* $tmp3506 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3507 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3502, $tmp3503, $tmp3505, param1, $tmp3506, $tmp3507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
org$frostlang$frostc$FixedArray* $tmp3508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3502;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1620
frost$core$Int64 $tmp3510 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3511 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3510);
org$frostlang$frostc$parser$Token$nullable $tmp3512 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3511, &$s3513);
*(&local0) = $tmp3512;
// line 1621
org$frostlang$frostc$parser$Token$nullable $tmp3514 = *(&local0);
frost$core$Bit $tmp3515 = frost$core$Bit$init$builtin_bit(!$tmp3514.nonnull);
bool $tmp3516 = $tmp3515.value;
if ($tmp3516) goto block1; else goto block2;
block1:;
// line 1622
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1624
org$frostlang$frostc$FixedArray* $tmp3517 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
org$frostlang$frostc$FixedArray* $tmp3518 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
*(&local1) = $tmp3517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
// line 1625
org$frostlang$frostc$FixedArray* $tmp3519 = *(&local1);
frost$core$Bit $tmp3520 = frost$core$Bit$init$builtin_bit($tmp3519 == NULL);
bool $tmp3521 = $tmp3520.value;
if ($tmp3521) goto block3; else goto block4;
block3:;
// line 1626
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3522 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1628
frost$core$Int64 $tmp3523 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3524 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3523);
org$frostlang$frostc$parser$Token$nullable $tmp3525 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3524, &$s3526);
frost$core$Bit $tmp3527 = frost$core$Bit$init$builtin_bit(!$tmp3525.nonnull);
bool $tmp3528 = $tmp3527.value;
if ($tmp3528) goto block5; else goto block6;
block5:;
// line 1629
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1631
org$frostlang$frostc$ASTNode* $tmp3530 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
org$frostlang$frostc$ASTNode* $tmp3531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
*(&local2) = $tmp3530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
// line 1632
org$frostlang$frostc$ASTNode* $tmp3532 = *(&local2);
frost$core$Bit $tmp3533 = frost$core$Bit$init$builtin_bit($tmp3532 == NULL);
bool $tmp3534 = $tmp3533.value;
if ($tmp3534) goto block7; else goto block8;
block7:;
// line 1633
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1635
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3537 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3538 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3539 = *(&local0);
org$frostlang$frostc$Position $tmp3540 = ((org$frostlang$frostc$parser$Token) $tmp3539.value).position;
org$frostlang$frostc$FixedArray* $tmp3541 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3542 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3537, $tmp3538, $tmp3540, param1, $tmp3541, $tmp3542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
org$frostlang$frostc$ASTNode* $tmp3543 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3543));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3544 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3537;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1642
frost$core$Int64 $tmp3545 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3546 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3545);
org$frostlang$frostc$parser$Token$nullable $tmp3547 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3546, &$s3548);
*(&local0) = $tmp3547;
// line 1643
org$frostlang$frostc$parser$Token$nullable $tmp3549 = *(&local0);
frost$core$Bit $tmp3550 = frost$core$Bit$init$builtin_bit(!$tmp3549.nonnull);
bool $tmp3551 = $tmp3550.value;
if ($tmp3551) goto block1; else goto block2;
block1:;
// line 1644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1646
org$frostlang$frostc$FixedArray* $tmp3552 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
org$frostlang$frostc$FixedArray* $tmp3553 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
*(&local1) = $tmp3552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
// line 1647
org$frostlang$frostc$FixedArray* $tmp3554 = *(&local1);
frost$core$Bit $tmp3555 = frost$core$Bit$init$builtin_bit($tmp3554 == NULL);
bool $tmp3556 = $tmp3555.value;
if ($tmp3556) goto block3; else goto block4;
block3:;
// line 1648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1650
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3558 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3559 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3560 = *(&local0);
org$frostlang$frostc$Position $tmp3561 = ((org$frostlang$frostc$parser$Token) $tmp3560.value).position;
org$frostlang$frostc$FixedArray* $tmp3562 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3558, $tmp3559, $tmp3561, param1, $tmp3562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
org$frostlang$frostc$FixedArray* $tmp3563 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3563));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3558;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1657
frost$core$Int64 $tmp3564 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3565 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3564);
org$frostlang$frostc$parser$Token$nullable $tmp3566 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3565, &$s3567);
*(&local0) = $tmp3566;
// line 1658
org$frostlang$frostc$parser$Token$nullable $tmp3568 = *(&local0);
frost$core$Bit $tmp3569 = frost$core$Bit$init$builtin_bit(!$tmp3568.nonnull);
bool $tmp3570 = $tmp3569.value;
if ($tmp3570) goto block1; else goto block2;
block1:;
// line 1659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1661
org$frostlang$frostc$ASTNode* $tmp3571 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
org$frostlang$frostc$ASTNode* $tmp3572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local1) = $tmp3571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
// line 1662
org$frostlang$frostc$ASTNode* $tmp3573 = *(&local1);
frost$core$Bit $tmp3574 = frost$core$Bit$init$builtin_bit($tmp3573 == NULL);
bool $tmp3575 = $tmp3574.value;
if ($tmp3575) goto block3; else goto block4;
block3:;
// line 1663
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1665
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1666
frost$core$Int64 $tmp3577 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3578 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3577);
org$frostlang$frostc$parser$Token$nullable $tmp3579 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3578);
frost$core$Bit $tmp3580 = frost$core$Bit$init$builtin_bit($tmp3579.nonnull);
bool $tmp3581 = $tmp3580.value;
if ($tmp3581) goto block5; else goto block7;
block5:;
// line 1667
org$frostlang$frostc$ASTNode* $tmp3582 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
org$frostlang$frostc$ASTNode* $tmp3583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
*(&local2) = $tmp3582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
// line 1668
org$frostlang$frostc$ASTNode* $tmp3584 = *(&local2);
frost$core$Bit $tmp3585 = frost$core$Bit$init$builtin_bit($tmp3584 == NULL);
bool $tmp3586 = $tmp3585.value;
if ($tmp3586) goto block8; else goto block9;
block8:;
// line 1669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3589 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1675
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3590 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3591 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3592 = *(&local0);
org$frostlang$frostc$Position $tmp3593 = ((org$frostlang$frostc$parser$Token) $tmp3592.value).position;
org$frostlang$frostc$ASTNode* $tmp3594 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3595 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3590, $tmp3591, $tmp3593, $tmp3594, $tmp3595);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
org$frostlang$frostc$ASTNode* $tmp3596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3590;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1682
frost$core$Int64 $tmp3598 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3599 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3598);
org$frostlang$frostc$parser$Token$nullable $tmp3600 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3599, &$s3601);
*(&local0) = $tmp3600;
// line 1683
org$frostlang$frostc$parser$Token$nullable $tmp3602 = *(&local0);
frost$core$Bit $tmp3603 = frost$core$Bit$init$builtin_bit(!$tmp3602.nonnull);
bool $tmp3604 = $tmp3603.value;
if ($tmp3604) goto block1; else goto block2;
block1:;
// line 1684
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1686
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1687
frost$core$Int64 $tmp3605 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3606 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3605);
org$frostlang$frostc$parser$Token$nullable $tmp3607 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3606);
frost$core$Bit $tmp3608 = frost$core$Bit$init$builtin_bit($tmp3607.nonnull);
bool $tmp3609 = $tmp3608.value;
if ($tmp3609) goto block3; else goto block5;
block3:;
// line 1688
org$frostlang$frostc$ASTNode* $tmp3610 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
org$frostlang$frostc$ASTNode* $tmp3611 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
*(&local1) = $tmp3610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
// line 1689
org$frostlang$frostc$ASTNode* $tmp3612 = *(&local1);
frost$core$Bit $tmp3613 = frost$core$Bit$init$builtin_bit($tmp3612 == NULL);
bool $tmp3614 = $tmp3613.value;
if ($tmp3614) goto block6; else goto block7;
block6:;
// line 1690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1694
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3616));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1696
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3617 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3618 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp3619 = *(&local0);
org$frostlang$frostc$Position $tmp3620 = ((org$frostlang$frostc$parser$Token) $tmp3619.value).position;
org$frostlang$frostc$ASTNode* $tmp3621 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3617, $tmp3618, $tmp3620, $tmp3621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
org$frostlang$frostc$ASTNode* $tmp3622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3617;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3623 = &param0->allowLambdas;
frost$core$Bit $tmp3624 = *$tmp3623;
bool $tmp3625 = $tmp3624.value;
if ($tmp3625) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3626 = (frost$core$Int64) {1704};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3627, $tmp3626, &$s3628);
abort(); // unreachable
block1:;
// line 1705
frost$core$Int64 $tmp3629 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3630 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3629);
org$frostlang$frostc$parser$Token$nullable $tmp3631 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3630, &$s3632);
*(&local1) = $tmp3631;
// line 1706
org$frostlang$frostc$parser$Token$nullable $tmp3633 = *(&local1);
frost$core$Bit $tmp3634 = frost$core$Bit$init$builtin_bit(!$tmp3633.nonnull);
bool $tmp3635 = $tmp3634.value;
if ($tmp3635) goto block6; else goto block7;
block6:;
// line 1707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1709
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3636);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$collections$Array* $tmp3637 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
*(&local2) = $tmp3636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
// line 1710
org$frostlang$frostc$ASTNode* $tmp3638 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
org$frostlang$frostc$ASTNode* $tmp3639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
*(&local3) = $tmp3638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
// line 1711
org$frostlang$frostc$ASTNode* $tmp3640 = *(&local3);
frost$core$Bit $tmp3641 = frost$core$Bit$init$builtin_bit($tmp3640 == NULL);
bool $tmp3642 = $tmp3641.value;
if ($tmp3642) goto block8; else goto block9;
block8:;
// line 1712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3643 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1714
frost$collections$Array* $tmp3645 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3646 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3645, ((frost$core$Object*) $tmp3646));
// line 1715
goto block10;
block10:;
frost$core$Int64 $tmp3647 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3648 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3647);
org$frostlang$frostc$parser$Token$nullable $tmp3649 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3648);
frost$core$Bit $tmp3650 = frost$core$Bit$init$builtin_bit($tmp3649.nonnull);
bool $tmp3651 = $tmp3650.value;
if ($tmp3651) goto block11; else goto block12;
block11:;
// line 1716
org$frostlang$frostc$ASTNode* $tmp3652 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
org$frostlang$frostc$ASTNode* $tmp3653 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local3) = $tmp3652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
// line 1717
org$frostlang$frostc$ASTNode* $tmp3654 = *(&local3);
frost$core$Bit $tmp3655 = frost$core$Bit$init$builtin_bit($tmp3654 == NULL);
bool $tmp3656 = $tmp3655.value;
if ($tmp3656) goto block13; else goto block14;
block13:;
// line 1718
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3657 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1720
frost$collections$Array* $tmp3659 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3660 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3659, ((frost$core$Object*) $tmp3660));
goto block10;
block12:;
// line 1722
org$frostlang$frostc$FixedArray* $tmp3661 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
org$frostlang$frostc$FixedArray* $tmp3662 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
*(&local4) = $tmp3661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
// line 1723
org$frostlang$frostc$FixedArray* $tmp3663 = *(&local4);
frost$core$Bit $tmp3664 = frost$core$Bit$init$builtin_bit($tmp3663 == NULL);
bool $tmp3665 = $tmp3664.value;
if ($tmp3665) goto block15; else goto block16;
block15:;
// line 1724
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3666 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3667 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1726
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3669 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3670 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3671 = *(&local1);
org$frostlang$frostc$Position $tmp3672 = ((org$frostlang$frostc$parser$Token) $tmp3671.value).position;
frost$collections$Array* $tmp3673 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3674 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3673);
org$frostlang$frostc$FixedArray* $tmp3675 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3669, $tmp3670, $tmp3672, $tmp3674, $tmp3675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
org$frostlang$frostc$FixedArray* $tmp3676 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3677 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3669;
goto block3;
block3:;
frost$core$Bit* $tmp3679 = &param0->allowLambdas;
frost$core$Bit $tmp3680 = *$tmp3679;
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3682 = *(&local0);
return $tmp3682;
block5:;
frost$core$Int64 $tmp3683 = (frost$core$Int64) {1704};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3684, $tmp3683, &$s3685);
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
// line 1733
frost$core$Int64 $tmp3686 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3687 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3686);
org$frostlang$frostc$parser$Token$nullable $tmp3688 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3687, &$s3689);
*(&local0) = $tmp3688;
// line 1734
org$frostlang$frostc$parser$Token$nullable $tmp3690 = *(&local0);
frost$core$Bit $tmp3691 = frost$core$Bit$init$builtin_bit(!$tmp3690.nonnull);
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block1; else goto block2;
block1:;
// line 1735
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1737
org$frostlang$frostc$ASTNode* $tmp3693 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
org$frostlang$frostc$ASTNode* $tmp3694 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
*(&local1) = $tmp3693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
// line 1738
org$frostlang$frostc$ASTNode* $tmp3695 = *(&local1);
frost$core$Bit $tmp3696 = frost$core$Bit$init$builtin_bit($tmp3695 == NULL);
bool $tmp3697 = $tmp3696.value;
if ($tmp3697) goto block3; else goto block4;
block3:;
// line 1739
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3698 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1741
frost$core$Int64 $tmp3699 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3700 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3699);
org$frostlang$frostc$parser$Token$nullable $tmp3701 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3700, &$s3702);
frost$core$Bit $tmp3703 = frost$core$Bit$init$builtin_bit(!$tmp3701.nonnull);
bool $tmp3704 = $tmp3703.value;
if ($tmp3704) goto block5; else goto block6;
block5:;
// line 1742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3705 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1744
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3706 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3706);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
frost$collections$Array* $tmp3707 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
*(&local2) = $tmp3706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
// line 1745
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1746
goto block7;
block7:;
// line 1747
org$frostlang$frostc$parser$Token $tmp3709 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3709;
// line 1748
org$frostlang$frostc$parser$Token $tmp3710 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3711 = $tmp3710.kind;
frost$core$Int64 $tmp3712 = $tmp3711.$rawValue;
frost$core$Int64 $tmp3713 = (frost$core$Int64) {104};
frost$core$Bit $tmp3714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3712, $tmp3713);
bool $tmp3715 = $tmp3714.value;
if ($tmp3715) goto block10; else goto block11;
block10:;
// line 1750
goto block8;
block11:;
frost$core$Int64 $tmp3716 = (frost$core$Int64) {40};
frost$core$Bit $tmp3717 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3712, $tmp3716);
bool $tmp3718 = $tmp3717.value;
if ($tmp3718) goto block12; else goto block13;
block12:;
// line 1753
org$frostlang$frostc$ASTNode* $tmp3719 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
org$frostlang$frostc$ASTNode* $tmp3720 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
*(&local5) = $tmp3719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
// line 1754
org$frostlang$frostc$ASTNode* $tmp3721 = *(&local5);
frost$core$Bit $tmp3722 = frost$core$Bit$init$builtin_bit($tmp3721 == NULL);
bool $tmp3723 = $tmp3722.value;
if ($tmp3723) goto block14; else goto block15;
block14:;
// line 1755
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3725 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3725));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3726 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1757
frost$collections$Array* $tmp3728 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3729 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3728, ((frost$core$Object*) $tmp3729));
org$frostlang$frostc$ASTNode* $tmp3730 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3731 = (frost$core$Int64) {41};
frost$core$Bit $tmp3732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3712, $tmp3731);
bool $tmp3733 = $tmp3732.value;
if ($tmp3733) goto block16; else goto block17;
block16:;
// line 1760
org$frostlang$frostc$parser$Token $tmp3734 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3734;
// line 1761
org$frostlang$frostc$FixedArray* $tmp3735 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
org$frostlang$frostc$FixedArray* $tmp3736 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
*(&local3) = $tmp3735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
// line 1762
org$frostlang$frostc$FixedArray* $tmp3737 = *(&local3);
frost$core$Bit $tmp3738 = frost$core$Bit$init$builtin_bit($tmp3737 == NULL);
bool $tmp3739 = $tmp3738.value;
if ($tmp3739) goto block18; else goto block19;
block18:;
// line 1763
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3740 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3741 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1765
goto block8;
block17:;
// line 1768
org$frostlang$frostc$parser$Token $tmp3743 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1769
org$frostlang$frostc$parser$Token $tmp3744 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3745 = *(&local4);
frost$core$String* $tmp3746 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3745);
frost$core$String* $tmp3747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3748, $tmp3746);
frost$core$String* $tmp3749 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3747, &$s3750);
frost$core$String* $tmp3751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3752, $tmp3749);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3744, $tmp3751);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
// line 1771
goto block8;
block9:;
goto block7;
block8:;
// line 1775
frost$core$Int64 $tmp3753 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3754 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3753);
org$frostlang$frostc$parser$Token$nullable $tmp3755 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3754, &$s3756);
frost$core$Bit $tmp3757 = frost$core$Bit$init$builtin_bit(!$tmp3755.nonnull);
bool $tmp3758 = $tmp3757.value;
if ($tmp3758) goto block20; else goto block21;
block20:;
// line 1776
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3760 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1778
org$frostlang$frostc$FixedArray* $tmp3762 = *(&local3);
frost$core$Bit $tmp3763 = frost$core$Bit$init$builtin_bit($tmp3762 != NULL);
bool $tmp3764 = $tmp3763.value;
if ($tmp3764) goto block22; else goto block23;
block22:;
// line 1779
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3765 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3766 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3767 = *(&local0);
org$frostlang$frostc$Position $tmp3768 = ((org$frostlang$frostc$parser$Token) $tmp3767.value).position;
org$frostlang$frostc$ASTNode* $tmp3769 = *(&local1);
frost$collections$Array* $tmp3770 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3771 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3770);
org$frostlang$frostc$FixedArray* $tmp3772 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3765, $tmp3766, $tmp3768, $tmp3769, $tmp3771, $tmp3772);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
org$frostlang$frostc$FixedArray* $tmp3773 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3774 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3765;
block23:;
// line 1781
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3776 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3777 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3778 = *(&local0);
org$frostlang$frostc$Position $tmp3779 = ((org$frostlang$frostc$parser$Token) $tmp3778.value).position;
org$frostlang$frostc$ASTNode* $tmp3780 = *(&local1);
frost$collections$Array* $tmp3781 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3782 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3781);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3776, $tmp3777, $tmp3779, $tmp3780, $tmp3782, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
org$frostlang$frostc$FixedArray* $tmp3783 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3784 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3776;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1788
frost$core$Int64 $tmp3786 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3787 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3786);
org$frostlang$frostc$parser$Token$nullable $tmp3788 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3787, &$s3789);
*(&local0) = $tmp3788;
// line 1789
org$frostlang$frostc$parser$Token$nullable $tmp3790 = *(&local0);
frost$core$Bit $tmp3791 = frost$core$Bit$init$builtin_bit(!$tmp3790.nonnull);
bool $tmp3792 = $tmp3791.value;
if ($tmp3792) goto block1; else goto block2;
block1:;
// line 1790
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1792
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3793 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3793);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3793));
frost$collections$Array* $tmp3794 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3794));
*(&local1) = $tmp3793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3793));
// line 1793
goto block3;
block3:;
// line 1794
org$frostlang$frostc$parser$Token $tmp3795 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3796 = $tmp3795.kind;
frost$core$Int64 $tmp3797 = $tmp3796.$rawValue;
frost$core$Int64 $tmp3798 = (frost$core$Int64) {104};
frost$core$Bit $tmp3799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3797, $tmp3798);
bool $tmp3800 = $tmp3799.value;
if ($tmp3800) goto block6; else goto block7;
block6:;
// line 1796
org$frostlang$frostc$parser$Token $tmp3801 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1797
goto block4;
block7:;
frost$core$Int64 $tmp3802 = (frost$core$Int64) {29};
frost$core$Bit $tmp3803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3797, $tmp3802);
bool $tmp3804 = $tmp3803.value;
if ($tmp3804) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3805 = (frost$core$Int64) {30};
frost$core$Bit $tmp3806 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3797, $tmp3805);
bool $tmp3807 = $tmp3806.value;
if ($tmp3807) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3808 = (frost$core$Int64) {28};
frost$core$Bit $tmp3809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3797, $tmp3808);
bool $tmp3810 = $tmp3809.value;
if ($tmp3810) goto block8; else goto block11;
block8:;
// line 1800
org$frostlang$frostc$ASTNode* $tmp3811 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
org$frostlang$frostc$ASTNode* $tmp3812 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
*(&local2) = $tmp3811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
// line 1801
org$frostlang$frostc$ASTNode* $tmp3813 = *(&local2);
frost$core$Bit $tmp3814 = frost$core$Bit$init$builtin_bit($tmp3813 == NULL);
bool $tmp3815 = $tmp3814.value;
if ($tmp3815) goto block12; else goto block13;
block12:;
// line 1802
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1804
frost$core$Int64 $tmp3818 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3819 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3818);
org$frostlang$frostc$parser$Token$nullable $tmp3820 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3819, &$s3821);
frost$core$Bit $tmp3822 = frost$core$Bit$init$builtin_bit(!$tmp3820.nonnull);
bool $tmp3823 = $tmp3822.value;
if ($tmp3823) goto block14; else goto block15;
block14:;
// line 1805
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3824 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3825 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1807
frost$collections$Array* $tmp3826 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3827 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3826, ((frost$core$Object*) $tmp3827));
// line 1808
org$frostlang$frostc$ASTNode* $tmp3828 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1811
org$frostlang$frostc$ASTNode* $tmp3829 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
org$frostlang$frostc$ASTNode* $tmp3830 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local3) = $tmp3829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
// line 1812
org$frostlang$frostc$ASTNode* $tmp3831 = *(&local3);
frost$core$Bit $tmp3832 = frost$core$Bit$init$builtin_bit($tmp3831 == NULL);
bool $tmp3833 = $tmp3832.value;
if ($tmp3833) goto block16; else goto block17;
block16:;
// line 1813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3834 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1815
frost$collections$Array* $tmp3836 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3837 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3836, ((frost$core$Object*) $tmp3837));
org$frostlang$frostc$ASTNode* $tmp3838 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1819
frost$collections$Array* $tmp3839 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3840 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
frost$collections$Array* $tmp3841 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3840;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1826
org$frostlang$frostc$FixedArray* $tmp3842 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
org$frostlang$frostc$FixedArray* $tmp3843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3843));
*(&local0) = $tmp3842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
// line 1827
org$frostlang$frostc$FixedArray* $tmp3844 = *(&local0);
frost$core$Bit $tmp3845 = frost$core$Bit$init$builtin_bit($tmp3844 == NULL);
bool $tmp3846 = $tmp3845.value;
if ($tmp3846) goto block1; else goto block2;
block1:;
// line 1828
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1830
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3848 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3849 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3850 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3851 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3848, $tmp3849, $tmp3850, $tmp3851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
org$frostlang$frostc$FixedArray* $tmp3852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3848;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1837
org$frostlang$frostc$ASTNode* $tmp3853 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
org$frostlang$frostc$ASTNode* $tmp3854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
*(&local0) = $tmp3853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
// line 1838
org$frostlang$frostc$ASTNode* $tmp3855 = *(&local0);
frost$core$Bit $tmp3856 = frost$core$Bit$init$builtin_bit($tmp3855 == NULL);
bool $tmp3857 = $tmp3856.value;
if ($tmp3857) goto block1; else goto block2;
block1:;
// line 1839
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3858 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3858));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1841
org$frostlang$frostc$parser$Token $tmp3859 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3860 = $tmp3859.kind;
frost$core$Int64 $tmp3861 = $tmp3860.$rawValue;
frost$core$Int64 $tmp3862 = (frost$core$Int64) {77};
frost$core$Bit $tmp3863 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3862);
bool $tmp3864 = $tmp3863.value;
if ($tmp3864) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3865 = (frost$core$Int64) {78};
frost$core$Bit $tmp3866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3865);
bool $tmp3867 = $tmp3866.value;
if ($tmp3867) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3868 = (frost$core$Int64) {79};
frost$core$Bit $tmp3869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3868);
bool $tmp3870 = $tmp3869.value;
if ($tmp3870) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3871 = (frost$core$Int64) {80};
frost$core$Bit $tmp3872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3871);
bool $tmp3873 = $tmp3872.value;
if ($tmp3873) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3874 = (frost$core$Int64) {81};
frost$core$Bit $tmp3875 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3874);
bool $tmp3876 = $tmp3875.value;
if ($tmp3876) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3877 = (frost$core$Int64) {82};
frost$core$Bit $tmp3878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3877);
bool $tmp3879 = $tmp3878.value;
if ($tmp3879) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3880 = (frost$core$Int64) {83};
frost$core$Bit $tmp3881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3880);
bool $tmp3882 = $tmp3881.value;
if ($tmp3882) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3883 = (frost$core$Int64) {84};
frost$core$Bit $tmp3884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3883);
bool $tmp3885 = $tmp3884.value;
if ($tmp3885) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3886 = (frost$core$Int64) {85};
frost$core$Bit $tmp3887 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3886);
bool $tmp3888 = $tmp3887.value;
if ($tmp3888) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3889 = (frost$core$Int64) {86};
frost$core$Bit $tmp3890 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3889);
bool $tmp3891 = $tmp3890.value;
if ($tmp3891) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3892 = (frost$core$Int64) {87};
frost$core$Bit $tmp3893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3892);
bool $tmp3894 = $tmp3893.value;
if ($tmp3894) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3895 = (frost$core$Int64) {88};
frost$core$Bit $tmp3896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3895);
bool $tmp3897 = $tmp3896.value;
if ($tmp3897) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3898 = (frost$core$Int64) {89};
frost$core$Bit $tmp3899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3901 = (frost$core$Int64) {90};
frost$core$Bit $tmp3902 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3901);
bool $tmp3903 = $tmp3902.value;
if ($tmp3903) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3904 = (frost$core$Int64) {91};
frost$core$Bit $tmp3905 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3904);
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3907 = (frost$core$Int64) {92};
frost$core$Bit $tmp3908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3907);
bool $tmp3909 = $tmp3908.value;
if ($tmp3909) goto block4; else goto block20;
block4:;
// line 1847
org$frostlang$frostc$parser$Token $tmp3910 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3910;
// line 1848
org$frostlang$frostc$ASTNode* $tmp3911 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
org$frostlang$frostc$ASTNode* $tmp3912 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
*(&local2) = $tmp3911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
// line 1849
org$frostlang$frostc$ASTNode* $tmp3913 = *(&local2);
frost$core$Bit $tmp3914 = frost$core$Bit$init$builtin_bit($tmp3913 == NULL);
bool $tmp3915 = $tmp3914.value;
if ($tmp3915) goto block21; else goto block22;
block21:;
// line 1850
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3916 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3916));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3917 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3917));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1852
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3918 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3919 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3920 = *(&local0);
$fn3922 $tmp3921 = ($fn3922) $tmp3920->$class->vtable[2];
org$frostlang$frostc$Position $tmp3923 = $tmp3921($tmp3920);
org$frostlang$frostc$ASTNode* $tmp3924 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3925 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3926 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3925);
org$frostlang$frostc$ASTNode* $tmp3927 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3918, $tmp3919, $tmp3923, $tmp3924, $tmp3926, $tmp3927);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
org$frostlang$frostc$ASTNode* $tmp3928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3929 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3918;
block20:;
frost$core$Int64 $tmp3930 = (frost$core$Int64) {62};
frost$core$Bit $tmp3931 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3861, $tmp3930);
bool $tmp3932 = $tmp3931.value;
if ($tmp3932) goto block23; else goto block24;
block23:;
// line 1856
org$frostlang$frostc$parser$Token $tmp3933 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3933, &$s3934);
// line 1857
org$frostlang$frostc$parser$Token $tmp3935 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3935;
// line 1858
org$frostlang$frostc$ASTNode* $tmp3936 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
org$frostlang$frostc$ASTNode* $tmp3937 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
*(&local4) = $tmp3936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
// line 1859
org$frostlang$frostc$ASTNode* $tmp3938 = *(&local4);
frost$core$Bit $tmp3939 = frost$core$Bit$init$builtin_bit($tmp3938 == NULL);
bool $tmp3940 = $tmp3939.value;
if ($tmp3940) goto block25; else goto block26;
block25:;
// line 1860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3942 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3942));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1862
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3943 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3944 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3945 = *(&local0);
$fn3947 $tmp3946 = ($fn3947) $tmp3945->$class->vtable[2];
org$frostlang$frostc$Position $tmp3948 = $tmp3946($tmp3945);
org$frostlang$frostc$ASTNode* $tmp3949 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3950 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3951 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3950);
org$frostlang$frostc$ASTNode* $tmp3952 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3943, $tmp3944, $tmp3948, $tmp3949, $tmp3951, $tmp3952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
org$frostlang$frostc$ASTNode* $tmp3953 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3943;
block24:;
// line 1866
org$frostlang$frostc$ASTNode* $tmp3955 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
org$frostlang$frostc$ASTNode* $tmp3956 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3955;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1875
org$frostlang$frostc$ASTNode* $tmp3957 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
org$frostlang$frostc$ASTNode* $tmp3958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
*(&local0) = $tmp3957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
// line 1876
org$frostlang$frostc$ASTNode* $tmp3959 = *(&local0);
frost$core$Bit $tmp3960 = frost$core$Bit$init$builtin_bit($tmp3959 == NULL);
bool $tmp3961 = $tmp3960.value;
if ($tmp3961) goto block1; else goto block2;
block1:;
// line 1877
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3962 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1879
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1880
frost$core$Int64 $tmp3963 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp3964 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3963);
org$frostlang$frostc$parser$Token$nullable $tmp3965 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3964);
frost$core$Bit $tmp3966 = frost$core$Bit$init$builtin_bit($tmp3965.nonnull);
bool $tmp3967 = $tmp3966.value;
if ($tmp3967) goto block3; else goto block5;
block3:;
// line 1881
org$frostlang$frostc$ASTNode* $tmp3968 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
org$frostlang$frostc$ASTNode* $tmp3969 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
*(&local1) = $tmp3968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
// line 1882
org$frostlang$frostc$ASTNode* $tmp3970 = *(&local1);
frost$core$Bit $tmp3971 = frost$core$Bit$init$builtin_bit($tmp3970 == NULL);
bool $tmp3972 = $tmp3971.value;
if ($tmp3972) goto block6; else goto block7;
block6:;
// line 1883
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3973 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3974 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1886
org$frostlang$frostc$parser$Token $tmp3975 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3976 = $tmp3975.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3977;
$tmp3977 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3977->value = $tmp3976;
frost$core$Int64 $tmp3978 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp3979 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3978);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3980;
$tmp3980 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3980->value = $tmp3979;
ITable* $tmp3981 = ((frost$core$Equatable*) $tmp3977)->$class->itable;
while ($tmp3981->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3981 = $tmp3981->next;
}
$fn3983 $tmp3982 = $tmp3981->methods[0];
frost$core$Bit $tmp3984 = $tmp3982(((frost$core$Equatable*) $tmp3977), ((frost$core$Equatable*) $tmp3980));
bool $tmp3985 = $tmp3984.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3980)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3977)));
if ($tmp3985) goto block8; else goto block10;
block8:;
// line 1887
org$frostlang$frostc$parser$Token $tmp3986 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3986, &$s3987);
// line 1888
org$frostlang$frostc$ASTNode* $tmp3988 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
org$frostlang$frostc$ASTNode* $tmp3989 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local1) = $tmp3988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
// line 1889
org$frostlang$frostc$ASTNode* $tmp3990 = *(&local1);
frost$core$Bit $tmp3991 = frost$core$Bit$init$builtin_bit($tmp3990 == NULL);
bool $tmp3992 = $tmp3991.value;
if ($tmp3992) goto block11; else goto block12;
block11:;
// line 1890
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3993 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3994 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3994));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1894
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3995 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1896
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3996 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3997 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp3998 = *(&local0);
$fn4000 $tmp3999 = ($fn4000) $tmp3998->$class->vtable[2];
org$frostlang$frostc$Position $tmp4001 = $tmp3999($tmp3998);
org$frostlang$frostc$ASTNode* $tmp4002 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4003 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3996, $tmp3997, $tmp4001, $tmp4002, $tmp4003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
org$frostlang$frostc$ASTNode* $tmp4004 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4005 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3996;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1903
org$frostlang$frostc$parser$Token $tmp4006 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4006;
// line 1904
// line 1905
org$frostlang$frostc$parser$Token $tmp4007 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp4008 = $tmp4007.kind;
frost$core$Int64 $tmp4009 = $tmp4008.$rawValue;
frost$core$Int64 $tmp4010 = (frost$core$Int64) {24};
frost$core$Bit $tmp4011 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4009, $tmp4010);
bool $tmp4012 = $tmp4011.value;
if ($tmp4012) goto block2; else goto block3;
block2:;
// line 1907
frost$core$Int64 $tmp4013 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp4014 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4013);
*(&local1) = $tmp4014;
goto block1;
block3:;
frost$core$Int64 $tmp4015 = (frost$core$Int64) {25};
frost$core$Bit $tmp4016 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4009, $tmp4015);
bool $tmp4017 = $tmp4016.value;
if ($tmp4017) goto block4; else goto block5;
block4:;
// line 1910
frost$core$Int64 $tmp4018 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp4019 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4018);
*(&local1) = $tmp4019;
goto block1;
block5:;
frost$core$Int64 $tmp4020 = (frost$core$Int64) {26};
frost$core$Bit $tmp4021 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4009, $tmp4020);
bool $tmp4022 = $tmp4021.value;
if ($tmp4022) goto block6; else goto block7;
block6:;
// line 1913
frost$core$Int64 $tmp4023 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp4024 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4023);
*(&local1) = $tmp4024;
goto block1;
block7:;
frost$core$Int64 $tmp4025 = (frost$core$Int64) {27};
frost$core$Bit $tmp4026 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4009, $tmp4025);
bool $tmp4027 = $tmp4026.value;
if ($tmp4027) goto block8; else goto block9;
block8:;
// line 1916
frost$core$Int64 $tmp4028 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp4029 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp4028);
*(&local1) = $tmp4029;
goto block1;
block9:;
// line 1919
org$frostlang$frostc$parser$Token $tmp4030 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp4030, &$s4031);
goto block1;
block1:;
// line 1922
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4032 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4032);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
frost$collections$Array* $tmp4033 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
*(&local2) = $tmp4032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
// line 1923
org$frostlang$frostc$ASTNode* $tmp4034 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
org$frostlang$frostc$ASTNode* $tmp4035 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
*(&local3) = $tmp4034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
// line 1924
org$frostlang$frostc$ASTNode* $tmp4036 = *(&local3);
frost$core$Bit $tmp4037 = frost$core$Bit$init$builtin_bit($tmp4036 == NULL);
bool $tmp4038 = $tmp4037.value;
if ($tmp4038) goto block10; else goto block11;
block10:;
// line 1925
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4039 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1927
frost$collections$Array* $tmp4041 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4042 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4041, ((frost$core$Object*) $tmp4042));
// line 1928
goto block12;
block12:;
frost$core$Int64 $tmp4043 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4044 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4043);
org$frostlang$frostc$parser$Token$nullable $tmp4045 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4044);
frost$core$Bit $tmp4046 = frost$core$Bit$init$builtin_bit($tmp4045.nonnull);
bool $tmp4047 = $tmp4046.value;
if ($tmp4047) goto block13; else goto block14;
block13:;
// line 1929
org$frostlang$frostc$ASTNode* $tmp4048 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
org$frostlang$frostc$ASTNode* $tmp4049 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
*(&local4) = $tmp4048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
// line 1930
org$frostlang$frostc$ASTNode* $tmp4050 = *(&local4);
frost$core$Bit $tmp4051 = frost$core$Bit$init$builtin_bit($tmp4050 == NULL);
bool $tmp4052 = $tmp4051.value;
if ($tmp4052) goto block15; else goto block16;
block15:;
// line 1931
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4053 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp4054 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4055 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1933
frost$collections$Array* $tmp4056 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4057 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp4056, ((frost$core$Object*) $tmp4057));
org$frostlang$frostc$ASTNode* $tmp4058 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1935
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4059 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4060 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token $tmp4061 = *(&local0);
org$frostlang$frostc$Position $tmp4062 = $tmp4061.position;
org$frostlang$frostc$Variable$Kind $tmp4063 = *(&local1);
frost$collections$Array* $tmp4064 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4065 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4064);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4059, $tmp4060, $tmp4062, $tmp4063, $tmp4065);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
org$frostlang$frostc$ASTNode* $tmp4066 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4067 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4067));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4059;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1942
frost$core$Int64 $tmp4068 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp4069 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4068);
org$frostlang$frostc$parser$Token$nullable $tmp4070 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4069, &$s4071);
*(&local0) = $tmp4070;
// line 1943
org$frostlang$frostc$parser$Token$nullable $tmp4072 = *(&local0);
frost$core$Bit $tmp4073 = frost$core$Bit$init$builtin_bit(!$tmp4072.nonnull);
bool $tmp4074 = $tmp4073.value;
if ($tmp4074) goto block1; else goto block2;
block1:;
// line 1944
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1946
frost$core$Int64 $tmp4075 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4076 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4075);
org$frostlang$frostc$parser$Token$nullable $tmp4077 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4076, &$s4078);
frost$core$Bit $tmp4079 = frost$core$Bit$init$builtin_bit(!$tmp4077.nonnull);
bool $tmp4080 = $tmp4079.value;
if ($tmp4080) goto block3; else goto block4;
block3:;
// line 1947
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1949
frost$collections$Stack** $tmp4081 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4082 = *$tmp4081;
frost$core$Bit $tmp4083 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp4084;
$tmp4084 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp4084->value = $tmp4083;
frost$collections$Stack$push$frost$collections$Stack$T($tmp4082, ((frost$core$Object*) $tmp4084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
// line 1950
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4085 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4086 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4087 = *(&local0);
org$frostlang$frostc$Position $tmp4088 = ((org$frostlang$frostc$parser$Token) $tmp4087.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4089 = *(&local0);
frost$core$String* $tmp4090 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4089.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4085, $tmp4086, $tmp4088, $tmp4090);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
org$frostlang$frostc$ASTNode* $tmp4091 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
*(&local1) = $tmp4085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
// line 1951
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4092 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4092);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
frost$collections$Array* $tmp4093 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local2) = $tmp4092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
// line 1952
frost$core$Int64 $tmp4094 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4095 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4094);
org$frostlang$frostc$parser$Token$nullable $tmp4096 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4095);
frost$core$Bit $tmp4097 = frost$core$Bit$init$builtin_bit(!$tmp4096.nonnull);
bool $tmp4098 = $tmp4097.value;
if ($tmp4098) goto block5; else goto block6;
block5:;
// line 1953
org$frostlang$frostc$ASTNode* $tmp4099 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
org$frostlang$frostc$ASTNode* $tmp4100 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local3) = $tmp4099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
// line 1954
org$frostlang$frostc$ASTNode* $tmp4101 = *(&local3);
frost$core$Bit $tmp4102 = frost$core$Bit$init$builtin_bit($tmp4101 == NULL);
bool $tmp4103 = $tmp4102.value;
if ($tmp4103) goto block7; else goto block8;
block7:;
// line 1955
frost$collections$Stack** $tmp4104 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4105 = *$tmp4104;
frost$core$Object* $tmp4106 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4105);
frost$core$Frost$unref$frost$core$Object$Q($tmp4106);
// line 1956
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4109));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1958
frost$collections$Array* $tmp4110 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4111 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4110, ((frost$core$Object*) $tmp4111));
// line 1959
goto block9;
block9:;
frost$core$Int64 $tmp4112 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4113 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4112);
org$frostlang$frostc$parser$Token$nullable $tmp4114 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4113);
frost$core$Bit $tmp4115 = frost$core$Bit$init$builtin_bit($tmp4114.nonnull);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block10; else goto block11;
block10:;
// line 1960
org$frostlang$frostc$ASTNode* $tmp4117 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4117));
org$frostlang$frostc$ASTNode* $tmp4118 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
*(&local3) = $tmp4117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4117));
// line 1961
org$frostlang$frostc$ASTNode* $tmp4119 = *(&local3);
frost$core$Bit $tmp4120 = frost$core$Bit$init$builtin_bit($tmp4119 == NULL);
bool $tmp4121 = $tmp4120.value;
if ($tmp4121) goto block12; else goto block13;
block12:;
// line 1962
frost$collections$Stack** $tmp4122 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4123 = *$tmp4122;
frost$core$Object* $tmp4124 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4123);
frost$core$Frost$unref$frost$core$Object$Q($tmp4124);
// line 1963
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1965
frost$collections$Array* $tmp4128 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4129 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4128, ((frost$core$Object*) $tmp4129));
goto block9;
block11:;
// line 1967
frost$core$Int64 $tmp4130 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4131 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4130);
org$frostlang$frostc$parser$Token$nullable $tmp4132 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4131, &$s4133);
frost$core$Bit $tmp4134 = frost$core$Bit$init$builtin_bit(!$tmp4132.nonnull);
bool $tmp4135 = $tmp4134.value;
if ($tmp4135) goto block14; else goto block15;
block14:;
// line 1968
frost$collections$Stack** $tmp4136 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4137 = *$tmp4136;
frost$core$Object* $tmp4138 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4137);
frost$core$Frost$unref$frost$core$Object$Q($tmp4138);
// line 1969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4139 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4140 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4142 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4142));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1972
frost$collections$Stack** $tmp4143 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4144 = *$tmp4143;
frost$core$Object* $tmp4145 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4144);
frost$core$Frost$unref$frost$core$Object$Q($tmp4145);
// line 1973
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4146 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4147 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4148 = *(&local0);
org$frostlang$frostc$Position $tmp4149 = ((org$frostlang$frostc$parser$Token) $tmp4148.value).position;
org$frostlang$frostc$ASTNode* $tmp4150 = *(&local1);
frost$collections$Array* $tmp4151 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4152 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4151);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4146, $tmp4147, $tmp4149, $tmp4150, $tmp4152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4146));
frost$collections$Array* $tmp4153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4154));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4146;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1980
frost$core$Int64 $tmp4155 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4156 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4155);
org$frostlang$frostc$parser$Token$nullable $tmp4157 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4156, &$s4158);
*(&local0) = $tmp4157;
// line 1981
org$frostlang$frostc$parser$Token$nullable $tmp4159 = *(&local0);
frost$core$Bit $tmp4160 = frost$core$Bit$init$builtin_bit(!$tmp4159.nonnull);
bool $tmp4161 = $tmp4160.value;
if ($tmp4161) goto block1; else goto block2;
block1:;
// line 1982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1984
frost$core$Int64 $tmp4162 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4163 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4162);
org$frostlang$frostc$parser$Token$nullable $tmp4164 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4163);
*(&local1) = $tmp4164;
// line 1985
org$frostlang$frostc$parser$Token$nullable $tmp4165 = *(&local1);
frost$core$Bit $tmp4166 = frost$core$Bit$init$builtin_bit($tmp4165.nonnull);
bool $tmp4167 = $tmp4166.value;
if ($tmp4167) goto block3; else goto block4;
block3:;
// line 1986
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4168 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4169 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4170 = *(&local0);
org$frostlang$frostc$Position $tmp4171 = ((org$frostlang$frostc$parser$Token) $tmp4170.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4172 = *(&local1);
frost$core$String* $tmp4173 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4172.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4168, $tmp4169, $tmp4171, $tmp4173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
return $tmp4168;
block4:;
// line 1988
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4174 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4175 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4176 = *(&local0);
org$frostlang$frostc$Position $tmp4177 = ((org$frostlang$frostc$parser$Token) $tmp4176.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4174, $tmp4175, $tmp4177, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
return $tmp4174;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1995
frost$core$Int64 $tmp4178 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4179 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4178);
org$frostlang$frostc$parser$Token$nullable $tmp4180 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4179, &$s4181);
*(&local0) = $tmp4180;
// line 1996
org$frostlang$frostc$parser$Token$nullable $tmp4182 = *(&local0);
frost$core$Bit $tmp4183 = frost$core$Bit$init$builtin_bit(!$tmp4182.nonnull);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block1; else goto block2;
block1:;
// line 1997
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1999
frost$core$Int64 $tmp4185 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4186 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4185);
org$frostlang$frostc$parser$Token$nullable $tmp4187 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4186);
*(&local1) = $tmp4187;
// line 2000
org$frostlang$frostc$parser$Token$nullable $tmp4188 = *(&local1);
frost$core$Bit $tmp4189 = frost$core$Bit$init$builtin_bit($tmp4188.nonnull);
bool $tmp4190 = $tmp4189.value;
if ($tmp4190) goto block3; else goto block4;
block3:;
// line 2001
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4191 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4192 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4193 = *(&local0);
org$frostlang$frostc$Position $tmp4194 = ((org$frostlang$frostc$parser$Token) $tmp4193.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4195 = *(&local1);
frost$core$String* $tmp4196 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4195.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4191, $tmp4192, $tmp4194, $tmp4196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
return $tmp4191;
block4:;
// line 2003
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4197 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4198 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4199 = *(&local0);
org$frostlang$frostc$Position $tmp4200 = ((org$frostlang$frostc$parser$Token) $tmp4199.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4197, $tmp4198, $tmp4200, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
return $tmp4197;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2010
frost$core$Int64 $tmp4201 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4202 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4201);
org$frostlang$frostc$parser$Token$nullable $tmp4203 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4202, &$s4204);
*(&local0) = $tmp4203;
// line 2011
org$frostlang$frostc$parser$Token$nullable $tmp4205 = *(&local0);
frost$core$Bit $tmp4206 = frost$core$Bit$init$builtin_bit(!$tmp4205.nonnull);
bool $tmp4207 = $tmp4206.value;
if ($tmp4207) goto block1; else goto block2;
block1:;
// line 2012
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2014
org$frostlang$frostc$parser$Token $tmp4208 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4209 = $tmp4208.kind;
frost$core$Int64 $tmp4210 = $tmp4209.$rawValue;
frost$core$Int64 $tmp4211 = (frost$core$Int64) {104};
frost$core$Bit $tmp4212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4210, $tmp4211);
bool $tmp4213 = $tmp4212.value;
if ($tmp4213) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4214 = (frost$core$Int64) {40};
frost$core$Bit $tmp4215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4210, $tmp4214);
bool $tmp4216 = $tmp4215.value;
if ($tmp4216) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4217 = (frost$core$Int64) {41};
frost$core$Bit $tmp4218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4210, $tmp4217);
bool $tmp4219 = $tmp4218.value;
if ($tmp4219) goto block4; else goto block7;
block4:;
// line 2016
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4220 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4221 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4222 = *(&local0);
org$frostlang$frostc$Position $tmp4223 = ((org$frostlang$frostc$parser$Token) $tmp4222.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4220, $tmp4221, $tmp4223, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
return $tmp4220;
block7:;
// line 2019
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4224 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4224);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
frost$collections$Array* $tmp4225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4225));
*(&local1) = $tmp4224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
// line 2020
org$frostlang$frostc$ASTNode* $tmp4226 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
org$frostlang$frostc$ASTNode* $tmp4227 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
*(&local2) = $tmp4226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
// line 2021
org$frostlang$frostc$ASTNode* $tmp4228 = *(&local2);
frost$core$Bit $tmp4229 = frost$core$Bit$init$builtin_bit($tmp4228 == NULL);
bool $tmp4230 = $tmp4229.value;
if ($tmp4230) goto block8; else goto block9;
block8:;
// line 2022
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2024
frost$collections$Array* $tmp4233 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4234 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4233, ((frost$core$Object*) $tmp4234));
// line 2025
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4235 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4236 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4237 = *(&local0);
org$frostlang$frostc$Position $tmp4238 = ((org$frostlang$frostc$parser$Token) $tmp4237.value).position;
org$frostlang$frostc$ASTNode* $tmp4239 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4235, $tmp4236, $tmp4238, $tmp4239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
org$frostlang$frostc$ASTNode* $tmp4240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4235;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2034
org$frostlang$frostc$parser$Token $tmp4242 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4243 = $tmp4242.kind;
frost$core$Int64 $tmp4244 = $tmp4243.$rawValue;
frost$core$Int64 $tmp4245 = (frost$core$Int64) {29};
frost$core$Bit $tmp4246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4244, $tmp4245);
bool $tmp4247 = $tmp4246.value;
if ($tmp4247) goto block2; else goto block3;
block2:;
// line 2035
org$frostlang$frostc$ASTNode* $tmp4248 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
return $tmp4248;
block3:;
frost$core$Int64 $tmp4249 = (frost$core$Int64) {30};
frost$core$Bit $tmp4250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4244, $tmp4249);
bool $tmp4251 = $tmp4250.value;
if ($tmp4251) goto block4; else goto block5;
block4:;
// line 2036
org$frostlang$frostc$ASTNode* $tmp4252 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
return $tmp4252;
block5:;
frost$core$Int64 $tmp4253 = (frost$core$Int64) {28};
frost$core$Bit $tmp4254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4244, $tmp4253);
bool $tmp4255 = $tmp4254.value;
if ($tmp4255) goto block6; else goto block7;
block6:;
// line 2037
org$frostlang$frostc$ASTNode* $tmp4256 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
return $tmp4256;
block7:;
// line 2038
frost$core$Int64 $tmp4257 = (frost$core$Int64) {2038};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4258, $tmp4257);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2046
org$frostlang$frostc$parser$Token $tmp4259 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4260 = $tmp4259.kind;
frost$core$Int64 $tmp4261 = $tmp4260.$rawValue;
frost$core$Int64 $tmp4262 = (frost$core$Int64) {31};
frost$core$Bit $tmp4263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4261, $tmp4262);
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block2; else goto block3;
block2:;
// line 2047
org$frostlang$frostc$ASTNode* $tmp4265 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
return $tmp4265;
block3:;
frost$core$Int64 $tmp4266 = (frost$core$Int64) {33};
frost$core$Bit $tmp4267 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4261, $tmp4266);
bool $tmp4268 = $tmp4267.value;
if ($tmp4268) goto block4; else goto block5;
block4:;
// line 2048
org$frostlang$frostc$ASTNode* $tmp4269 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
return $tmp4269;
block5:;
frost$core$Int64 $tmp4270 = (frost$core$Int64) {36};
frost$core$Bit $tmp4271 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4261, $tmp4270);
bool $tmp4272 = $tmp4271.value;
if ($tmp4272) goto block6; else goto block7;
block6:;
// line 2049
org$frostlang$frostc$ASTNode* $tmp4273 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
return $tmp4273;
block7:;
frost$core$Int64 $tmp4274 = (frost$core$Int64) {32};
frost$core$Bit $tmp4275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4261, $tmp4274);
bool $tmp4276 = $tmp4275.value;
if ($tmp4276) goto block8; else goto block9;
block8:;
// line 2050
org$frostlang$frostc$ASTNode* $tmp4277 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
return $tmp4277;
block9:;
// line 2053
frost$core$Int64 $tmp4278 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4279 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4278);
org$frostlang$frostc$parser$Token$nullable $tmp4280 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4279, &$s4281);
// line 2054
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
// line 2063
// line 2064
frost$core$Int64 $tmp4282 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4283 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4282);
org$frostlang$frostc$parser$Token$nullable $tmp4284 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4283);
*(&local1) = $tmp4284;
// line 2065
org$frostlang$frostc$parser$Token$nullable $tmp4285 = *(&local1);
frost$core$Bit $tmp4286 = frost$core$Bit$init$builtin_bit(!$tmp4285.nonnull);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block1; else goto block3;
block1:;
// line 2066
frost$core$Int64 $tmp4288 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4289 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4288);
org$frostlang$frostc$parser$Token$nullable $tmp4290 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4289, &$s4291);
*(&local1) = $tmp4290;
// line 2067
org$frostlang$frostc$parser$Token$nullable $tmp4292 = *(&local1);
frost$core$Bit $tmp4293 = frost$core$Bit$init$builtin_bit(!$tmp4292.nonnull);
bool $tmp4294 = $tmp4293.value;
if ($tmp4294) goto block4; else goto block5;
block4:;
// line 2068
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2070
frost$core$Int64 $tmp4295 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4296 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4295);
*(&local0) = $tmp4296;
goto block2;
block3:;
// line 1
// line 2073
frost$core$Int64 $tmp4297 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4298 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4297);
*(&local0) = $tmp4298;
goto block2;
block2:;
// line 2075
frost$core$Int64 $tmp4299 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4300 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4299);
org$frostlang$frostc$parser$Token$nullable $tmp4301 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4300, &$s4302);
*(&local2) = $tmp4301;
// line 2076
org$frostlang$frostc$parser$Token$nullable $tmp4303 = *(&local2);
frost$core$Bit $tmp4304 = frost$core$Bit$init$builtin_bit(!$tmp4303.nonnull);
bool $tmp4305 = $tmp4304.value;
if ($tmp4305) goto block6; else goto block7;
block6:;
// line 2077
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2079
org$frostlang$frostc$FixedArray* $tmp4306 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
org$frostlang$frostc$FixedArray* $tmp4307 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
*(&local3) = $tmp4306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
// line 2080
org$frostlang$frostc$FixedArray* $tmp4308 = *(&local3);
frost$core$Bit $tmp4309 = frost$core$Bit$init$builtin_bit($tmp4308 == NULL);
bool $tmp4310 = $tmp4309.value;
if ($tmp4310) goto block8; else goto block9;
block8:;
// line 2081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4311 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2083
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2084
org$frostlang$frostc$parser$Token $tmp4312 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4313 = $tmp4312.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4314;
$tmp4314 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4314->value = $tmp4313;
frost$core$Int64 $tmp4315 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4316 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4315);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4317;
$tmp4317 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4317->value = $tmp4316;
ITable* $tmp4318 = ((frost$core$Equatable*) $tmp4314)->$class->itable;
while ($tmp4318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4318 = $tmp4318->next;
}
$fn4320 $tmp4319 = $tmp4318->methods[0];
frost$core$Bit $tmp4321 = $tmp4319(((frost$core$Equatable*) $tmp4314), ((frost$core$Equatable*) $tmp4317));
bool $tmp4322 = $tmp4321.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4317)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4314)));
if ($tmp4322) goto block10; else goto block12;
block10:;
// line 2085
org$frostlang$frostc$ASTNode* $tmp4323 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
org$frostlang$frostc$ASTNode* $tmp4324 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
*(&local4) = $tmp4323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
// line 2086
org$frostlang$frostc$ASTNode* $tmp4325 = *(&local4);
frost$core$Bit $tmp4326 = frost$core$Bit$init$builtin_bit($tmp4325 == NULL);
bool $tmp4327 = $tmp4326.value;
if ($tmp4327) goto block13; else goto block14;
block13:;
// line 2087
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4328 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4328));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4329 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2091
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2093
org$frostlang$frostc$FixedArray* $tmp4331 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
org$frostlang$frostc$FixedArray* $tmp4332 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
*(&local5) = $tmp4331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
// line 2094
org$frostlang$frostc$FixedArray* $tmp4333 = *(&local5);
frost$core$Bit $tmp4334 = frost$core$Bit$init$builtin_bit($tmp4333 == NULL);
bool $tmp4335 = $tmp4334.value;
if ($tmp4335) goto block15; else goto block16;
block15:;
// line 2095
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4336 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4336));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4337 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4338 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2097
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4339 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4340 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4341 = *(&local1);
org$frostlang$frostc$Position $tmp4342 = ((org$frostlang$frostc$parser$Token) $tmp4341.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4343 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4343);
org$frostlang$frostc$MethodDecl$Kind $tmp4344 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4345 = *(&local2);
frost$core$String* $tmp4346 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4345.value));
org$frostlang$frostc$FixedArray* $tmp4347 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4348 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4349 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4339, $tmp4340, $tmp4342, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4343, $tmp4344, $tmp4346, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4347, $tmp4348, $tmp4349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
org$frostlang$frostc$FixedArray* $tmp4350 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4350));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4351 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4352 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4352));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4339;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2105
frost$core$Int64 $tmp4353 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4354 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4353);
org$frostlang$frostc$parser$Token$nullable $tmp4355 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4354, &$s4356);
*(&local0) = $tmp4355;
// line 2106
org$frostlang$frostc$parser$Token$nullable $tmp4357 = *(&local0);
frost$core$Bit $tmp4358 = frost$core$Bit$init$builtin_bit(!$tmp4357.nonnull);
bool $tmp4359 = $tmp4358.value;
if ($tmp4359) goto block1; else goto block2;
block1:;
// line 2107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2109
org$frostlang$frostc$FixedArray* $tmp4360 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
org$frostlang$frostc$FixedArray* $tmp4361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
*(&local1) = $tmp4360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
// line 2110
org$frostlang$frostc$FixedArray* $tmp4362 = *(&local1);
frost$core$Bit $tmp4363 = frost$core$Bit$init$builtin_bit($tmp4362 == NULL);
bool $tmp4364 = $tmp4363.value;
if ($tmp4364) goto block3; else goto block4;
block3:;
// line 2111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2113
frost$core$Int64 $tmp4366 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4367 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4366);
org$frostlang$frostc$parser$Token$nullable $tmp4368 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4367, &$s4369);
frost$core$Bit $tmp4370 = frost$core$Bit$init$builtin_bit(!$tmp4368.nonnull);
bool $tmp4371 = $tmp4370.value;
if ($tmp4371) goto block5; else goto block6;
block5:;
// line 2114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2116
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2117
frost$core$Int64 $tmp4373 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4374 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4373);
org$frostlang$frostc$parser$Token$nullable $tmp4375 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4374);
frost$core$Bit $tmp4376 = frost$core$Bit$init$builtin_bit($tmp4375.nonnull);
bool $tmp4377 = $tmp4376.value;
if ($tmp4377) goto block7; else goto block9;
block7:;
// line 2118
frost$core$Int64 $tmp4378 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4379 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4378);
org$frostlang$frostc$parser$Token$nullable $tmp4380 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4379, &$s4381);
*(&local3) = $tmp4380;
// line 2119
org$frostlang$frostc$parser$Token$nullable $tmp4382 = *(&local3);
frost$core$Bit $tmp4383 = frost$core$Bit$init$builtin_bit(!$tmp4382.nonnull);
bool $tmp4384 = $tmp4383.value;
if ($tmp4384) goto block10; else goto block11;
block10:;
// line 2120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4385 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4386 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4386));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2122
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4387 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4388 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4389 = *(&local3);
org$frostlang$frostc$Position $tmp4390 = ((org$frostlang$frostc$parser$Token) $tmp4389.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4391 = *(&local3);
frost$core$String* $tmp4392 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4391.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4387, $tmp4388, $tmp4390, $tmp4392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
org$frostlang$frostc$ASTNode* $tmp4393 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
*(&local2) = $tmp4387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
// line 2123
frost$core$Int64 $tmp4394 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4395 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4394);
org$frostlang$frostc$parser$Token$nullable $tmp4396 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4395, &$s4397);
frost$core$Bit $tmp4398 = frost$core$Bit$init$builtin_bit(!$tmp4396.nonnull);
bool $tmp4399 = $tmp4398.value;
if ($tmp4399) goto block12; else goto block13;
block12:;
// line 2124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4402 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2130
org$frostlang$frostc$FixedArray* $tmp4403 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4403));
org$frostlang$frostc$FixedArray* $tmp4404 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
*(&local4) = $tmp4403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4403));
// line 2131
org$frostlang$frostc$FixedArray* $tmp4405 = *(&local4);
frost$core$Bit $tmp4406 = frost$core$Bit$init$builtin_bit($tmp4405 == NULL);
bool $tmp4407 = $tmp4406.value;
if ($tmp4407) goto block14; else goto block15;
block14:;
// line 2132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2134
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4411 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4412 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4413 = *(&local0);
org$frostlang$frostc$Position $tmp4414 = ((org$frostlang$frostc$parser$Token) $tmp4413.value).position;
org$frostlang$frostc$FixedArray* $tmp4415 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4416 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4417 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4411, $tmp4412, $tmp4414, $tmp4415, $tmp4416, $tmp4417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
org$frostlang$frostc$FixedArray* $tmp4418 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4411;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2142
org$frostlang$frostc$parser$Token $tmp4421 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4422 = $tmp4421.kind;
frost$core$Int64 $tmp4423 = $tmp4422.$rawValue;
frost$core$Int64 $tmp4424 = (frost$core$Int64) {37};
frost$core$Bit $tmp4425 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4424);
bool $tmp4426 = $tmp4425.value;
if ($tmp4426) goto block2; else goto block3;
block2:;
// line 2143
org$frostlang$frostc$ASTNode* $tmp4427 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
return $tmp4427;
block3:;
frost$core$Int64 $tmp4428 = (frost$core$Int64) {33};
frost$core$Bit $tmp4429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4428);
bool $tmp4430 = $tmp4429.value;
if ($tmp4430) goto block4; else goto block5;
block4:;
// line 2144
org$frostlang$frostc$ASTNode* $tmp4431 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
return $tmp4431;
block5:;
frost$core$Int64 $tmp4432 = (frost$core$Int64) {32};
frost$core$Bit $tmp4433 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4432);
bool $tmp4434 = $tmp4433.value;
if ($tmp4434) goto block6; else goto block7;
block6:;
// line 2145
org$frostlang$frostc$ASTNode* $tmp4435 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
return $tmp4435;
block7:;
frost$core$Int64 $tmp4436 = (frost$core$Int64) {31};
frost$core$Bit $tmp4437 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4436);
bool $tmp4438 = $tmp4437.value;
if ($tmp4438) goto block8; else goto block9;
block8:;
// line 2146
org$frostlang$frostc$ASTNode* $tmp4439 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
return $tmp4439;
block9:;
frost$core$Int64 $tmp4440 = (frost$core$Int64) {36};
frost$core$Bit $tmp4441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4440);
bool $tmp4442 = $tmp4441.value;
if ($tmp4442) goto block10; else goto block11;
block10:;
// line 2147
org$frostlang$frostc$ASTNode* $tmp4443 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
return $tmp4443;
block11:;
frost$core$Int64 $tmp4444 = (frost$core$Int64) {45};
frost$core$Bit $tmp4445 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4444);
bool $tmp4446 = $tmp4445.value;
if ($tmp4446) goto block12; else goto block13;
block12:;
// line 2148
org$frostlang$frostc$ASTNode* $tmp4447 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
return $tmp4447;
block13:;
frost$core$Int64 $tmp4448 = (frost$core$Int64) {39};
frost$core$Bit $tmp4449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4448);
bool $tmp4450 = $tmp4449.value;
if ($tmp4450) goto block14; else goto block15;
block14:;
// line 2149
org$frostlang$frostc$ASTNode* $tmp4451 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
return $tmp4451;
block15:;
frost$core$Int64 $tmp4452 = (frost$core$Int64) {103};
frost$core$Bit $tmp4453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4452);
bool $tmp4454 = $tmp4453.value;
if ($tmp4454) goto block16; else goto block17;
block16:;
// line 2150
org$frostlang$frostc$ASTNode* $tmp4455 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
return $tmp4455;
block17:;
frost$core$Int64 $tmp4456 = (frost$core$Int64) {52};
frost$core$Bit $tmp4457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4456);
bool $tmp4458 = $tmp4457.value;
if ($tmp4458) goto block18; else goto block19;
block18:;
// line 2152
org$frostlang$frostc$parser$Token $tmp4459 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4459;
// line 2153
frost$core$Int64 $tmp4460 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4461 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4460);
org$frostlang$frostc$parser$Token$nullable $tmp4462 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4461);
*(&local1) = $tmp4462;
// line 2154
org$frostlang$frostc$parser$Token$nullable $tmp4463 = *(&local1);
frost$core$Bit $tmp4464 = frost$core$Bit$init$builtin_bit($tmp4463.nonnull);
bool $tmp4465 = $tmp4464.value;
if ($tmp4465) goto block20; else goto block21;
block20:;
// line 2155
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4466 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4467 = *$tmp4466;
frost$core$Bit $tmp4468 = frost$core$Bit$init$builtin_bit($tmp4467 != NULL);
bool $tmp4469 = $tmp4468.value;
if ($tmp4469) goto block22; else goto block23;
block22:;
// line 2156
org$frostlang$frostc$parser$Token$nullable $tmp4470 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4470.value));
// line 2157
org$frostlang$frostc$parser$Token $tmp4471 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4471);
// line 2158
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4472 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4473 = *$tmp4472;
frost$core$Int64 $tmp4474 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4475 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4474);
$fn4477 $tmp4476 = ($fn4477) $tmp4473->$class->vtable[3];
$tmp4476($tmp4473, $tmp4475);
// line 2159
org$frostlang$frostc$parser$Token $tmp4478 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2160
org$frostlang$frostc$parser$Token $tmp4479 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2161
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4480 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4481 = *$tmp4480;
frost$core$Int64 $tmp4482 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4483 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4482);
$fn4485 $tmp4484 = ($fn4485) $tmp4481->$class->vtable[4];
$tmp4484($tmp4481, $tmp4483);
goto block23;
block23:;
// line 2163
org$frostlang$frostc$parser$Token $tmp4486 = *(&local0);
frost$core$String* $tmp4487 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4486);
org$frostlang$frostc$ASTNode* $tmp4488 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
return $tmp4488;
block21:;
// line 2165
org$frostlang$frostc$parser$Token $tmp4489 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4489);
// line 2166
org$frostlang$frostc$ASTNode* $tmp4490 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
return $tmp4490;
block19:;
frost$core$Int64 $tmp4491 = (frost$core$Int64) {49};
frost$core$Bit $tmp4492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4491);
bool $tmp4493 = $tmp4492.value;
if ($tmp4493) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4494 = (frost$core$Int64) {50};
frost$core$Bit $tmp4495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4494);
bool $tmp4496 = $tmp4495.value;
if ($tmp4496) goto block24; else goto block26;
block24:;
// line 2169
org$frostlang$frostc$ASTNode* $tmp4497 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
return $tmp4497;
block26:;
frost$core$Int64 $tmp4498 = (frost$core$Int64) {24};
frost$core$Bit $tmp4499 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4498);
bool $tmp4500 = $tmp4499.value;
if ($tmp4500) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4501 = (frost$core$Int64) {25};
frost$core$Bit $tmp4502 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4501);
bool $tmp4503 = $tmp4502.value;
if ($tmp4503) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4504 = (frost$core$Int64) {26};
frost$core$Bit $tmp4505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4504);
bool $tmp4506 = $tmp4505.value;
if ($tmp4506) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4507 = (frost$core$Int64) {27};
frost$core$Bit $tmp4508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4507);
bool $tmp4509 = $tmp4508.value;
if ($tmp4509) goto block27; else goto block31;
block27:;
// line 2172
org$frostlang$frostc$ASTNode* $tmp4510 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
return $tmp4510;
block31:;
frost$core$Int64 $tmp4511 = (frost$core$Int64) {23};
frost$core$Bit $tmp4512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4511);
bool $tmp4513 = $tmp4512.value;
if ($tmp4513) goto block32; else goto block33;
block32:;
// line 2175
org$frostlang$frostc$ASTNode* $tmp4514 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
return $tmp4514;
block33:;
frost$core$Int64 $tmp4515 = (frost$core$Int64) {22};
frost$core$Bit $tmp4516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4515);
bool $tmp4517 = $tmp4516.value;
if ($tmp4517) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4518 = (frost$core$Int64) {21};
frost$core$Bit $tmp4519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4518);
bool $tmp4520 = $tmp4519.value;
if ($tmp4520) goto block34; else goto block36;
block34:;
// line 2178
org$frostlang$frostc$ASTNode* $tmp4521 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
return $tmp4521;
block36:;
frost$core$Int64 $tmp4522 = (frost$core$Int64) {47};
frost$core$Bit $tmp4523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4522);
bool $tmp4524 = $tmp4523.value;
if ($tmp4524) goto block37; else goto block38;
block37:;
// line 2181
org$frostlang$frostc$ASTNode* $tmp4525 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
return $tmp4525;
block38:;
frost$core$Int64 $tmp4526 = (frost$core$Int64) {46};
frost$core$Bit $tmp4527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4423, $tmp4526);
bool $tmp4528 = $tmp4527.value;
if ($tmp4528) goto block39; else goto block40;
block39:;
// line 2184
org$frostlang$frostc$ASTNode* $tmp4529 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
return $tmp4529;
block40:;
// line 2188
frost$core$Int64 $tmp4530 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4531 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4530);
org$frostlang$frostc$parser$Token$nullable $tmp4532 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4531, &$s4533);
// line 2189
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
// line 2198
frost$core$Int64 $tmp4534 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4535 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4534);
org$frostlang$frostc$parser$Token$nullable $tmp4536 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4535, &$s4537);
*(&local0) = $tmp4536;
// line 2199
org$frostlang$frostc$parser$Token$nullable $tmp4538 = *(&local0);
frost$core$Bit $tmp4539 = frost$core$Bit$init$builtin_bit(!$tmp4538.nonnull);
bool $tmp4540 = $tmp4539.value;
if ($tmp4540) goto block1; else goto block2;
block1:;
// line 2200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2202
frost$core$Int64 $tmp4541 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4542 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4541);
org$frostlang$frostc$parser$Token$nullable $tmp4543 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4542, &$s4544);
*(&local1) = $tmp4543;
// line 2203
org$frostlang$frostc$parser$Token$nullable $tmp4545 = *(&local1);
frost$core$Bit $tmp4546 = frost$core$Bit$init$builtin_bit(!$tmp4545.nonnull);
bool $tmp4547 = $tmp4546.value;
if ($tmp4547) goto block3; else goto block4;
block3:;
// line 2204
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2206
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4548 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4549 = *(&local1);
frost$core$String* $tmp4550 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4549.value));
frost$core$MutableString$init$frost$core$String($tmp4548, $tmp4550);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
frost$core$MutableString* $tmp4551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
*(&local2) = $tmp4548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
// line 2207
goto block5;
block5:;
// line 2208
frost$core$Int64 $tmp4552 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4553 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4552);
org$frostlang$frostc$parser$Token$nullable $tmp4554 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4553);
*(&local1) = $tmp4554;
// line 2209
org$frostlang$frostc$parser$Token$nullable $tmp4555 = *(&local1);
frost$core$Bit $tmp4556 = frost$core$Bit$init$builtin_bit(!$tmp4555.nonnull);
bool $tmp4557 = $tmp4556.value;
if ($tmp4557) goto block7; else goto block8;
block7:;
// line 2210
goto block6;
block8:;
// line 2212
frost$core$MutableString* $tmp4558 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4558, &$s4559);
// line 2213
frost$core$Int64 $tmp4560 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4561 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4560);
org$frostlang$frostc$parser$Token$nullable $tmp4562 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4561, &$s4563);
*(&local1) = $tmp4562;
// line 2214
org$frostlang$frostc$parser$Token$nullable $tmp4564 = *(&local1);
frost$core$Bit $tmp4565 = frost$core$Bit$init$builtin_bit(!$tmp4564.nonnull);
bool $tmp4566 = $tmp4565.value;
if ($tmp4566) goto block9; else goto block10;
block9:;
// line 2215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4567));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2217
frost$core$MutableString* $tmp4568 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4569 = *(&local1);
frost$core$String* $tmp4570 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4569.value));
frost$core$MutableString$append$frost$core$String($tmp4568, $tmp4570);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
goto block5;
block6:;
// line 2219
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4571 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4572 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4573 = *(&local0);
org$frostlang$frostc$Position $tmp4574 = ((org$frostlang$frostc$parser$Token) $tmp4573.value).position;
frost$core$MutableString* $tmp4575 = *(&local2);
frost$core$String* $tmp4576 = frost$core$MutableString$finish$R$frost$core$String($tmp4575);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4571, $tmp4572, $tmp4574, $tmp4576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4571));
frost$core$MutableString* $tmp4577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4571;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2226
frost$core$Int64 $tmp4578 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4579 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4578);
org$frostlang$frostc$parser$Token$nullable $tmp4580 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4579, &$s4581);
*(&local0) = $tmp4580;
// line 2227
org$frostlang$frostc$parser$Token$nullable $tmp4582 = *(&local0);
frost$core$Bit $tmp4583 = frost$core$Bit$init$builtin_bit(!$tmp4582.nonnull);
bool $tmp4584 = $tmp4583.value;
if ($tmp4584) goto block1; else goto block2;
block1:;
// line 2228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2230
frost$core$Int64 $tmp4585 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4586 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4585);
org$frostlang$frostc$parser$Token$nullable $tmp4587 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4586, &$s4588);
*(&local1) = $tmp4587;
// line 2231
org$frostlang$frostc$parser$Token$nullable $tmp4589 = *(&local1);
frost$core$Bit $tmp4590 = frost$core$Bit$init$builtin_bit(!$tmp4589.nonnull);
bool $tmp4591 = $tmp4590.value;
if ($tmp4591) goto block3; else goto block4;
block3:;
// line 2232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2234
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4592 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4593 = *(&local1);
frost$core$String* $tmp4594 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4593.value));
frost$core$MutableString$init$frost$core$String($tmp4592, $tmp4594);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
frost$core$MutableString* $tmp4595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local2) = $tmp4592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
// line 2235
goto block5;
block5:;
// line 2236
frost$core$Int64 $tmp4596 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4597 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4596);
org$frostlang$frostc$parser$Token$nullable $tmp4598 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4597);
*(&local1) = $tmp4598;
// line 2237
org$frostlang$frostc$parser$Token$nullable $tmp4599 = *(&local1);
frost$core$Bit $tmp4600 = frost$core$Bit$init$builtin_bit(!$tmp4599.nonnull);
bool $tmp4601 = $tmp4600.value;
if ($tmp4601) goto block7; else goto block8;
block7:;
// line 2238
goto block6;
block8:;
// line 2240
frost$core$MutableString* $tmp4602 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4602, &$s4603);
// line 2241
frost$core$Int64 $tmp4604 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4605 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4604);
org$frostlang$frostc$parser$Token$nullable $tmp4606 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4605, &$s4607);
*(&local1) = $tmp4606;
// line 2242
org$frostlang$frostc$parser$Token$nullable $tmp4608 = *(&local1);
frost$core$Bit $tmp4609 = frost$core$Bit$init$builtin_bit(!$tmp4608.nonnull);
bool $tmp4610 = $tmp4609.value;
if ($tmp4610) goto block9; else goto block10;
block9:;
// line 2243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4611 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2245
frost$core$MutableString* $tmp4612 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4613 = *(&local1);
frost$core$String* $tmp4614 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4613.value));
frost$core$MutableString$append$frost$core$String($tmp4612, $tmp4614);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
goto block5;
block6:;
// line 2247
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4615 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4616 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$nullable $tmp4617 = *(&local0);
org$frostlang$frostc$Position $tmp4618 = ((org$frostlang$frostc$parser$Token) $tmp4617.value).position;
frost$core$MutableString* $tmp4619 = *(&local2);
frost$core$String* $tmp4620 = frost$core$MutableString$finish$R$frost$core$String($tmp4619);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4615, $tmp4616, $tmp4618, $tmp4620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
frost$core$MutableString* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4615;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2254
frost$core$Int64 $tmp4622 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4623 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4622);
org$frostlang$frostc$parser$Token$nullable $tmp4624 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4623, &$s4625);
*(&local0) = $tmp4624;
// line 2255
org$frostlang$frostc$parser$Token$nullable $tmp4626 = *(&local0);
frost$core$Bit $tmp4627 = frost$core$Bit$init$builtin_bit(!$tmp4626.nonnull);
bool $tmp4628 = $tmp4627.value;
if ($tmp4628) goto block1; else goto block2;
block1:;
// line 2256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2258
frost$core$Int64 $tmp4629 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4630 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4629);
org$frostlang$frostc$parser$Token$nullable $tmp4631 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4630, &$s4632);
*(&local1) = $tmp4631;
// line 2259
org$frostlang$frostc$parser$Token$nullable $tmp4633 = *(&local1);
frost$core$Bit $tmp4634 = frost$core$Bit$init$builtin_bit(!$tmp4633.nonnull);
bool $tmp4635 = $tmp4634.value;
if ($tmp4635) goto block3; else goto block4;
block3:;
// line 2260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2262
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4636);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
frost$collections$Array* $tmp4637 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
*(&local2) = $tmp4636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
// line 2263
frost$core$Int64 $tmp4638 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4639 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4638);
org$frostlang$frostc$parser$Token$nullable $tmp4640 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4639);
frost$core$Bit $tmp4641 = frost$core$Bit$init$builtin_bit($tmp4640.nonnull);
bool $tmp4642 = $tmp4641.value;
if ($tmp4642) goto block5; else goto block7;
block5:;
// line 2264
org$frostlang$frostc$ASTNode* $tmp4643 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
org$frostlang$frostc$ASTNode* $tmp4644 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
*(&local3) = $tmp4643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
// line 2265
org$frostlang$frostc$ASTNode* $tmp4645 = *(&local3);
frost$core$Bit $tmp4646 = frost$core$Bit$init$builtin_bit($tmp4645 == NULL);
bool $tmp4647 = $tmp4646.value;
if ($tmp4647) goto block8; else goto block9;
block8:;
// line 2266
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4648 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4648));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2268
frost$collections$Array* $tmp4650 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4651 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4652 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp4653 = *(&local1);
org$frostlang$frostc$Position $tmp4654 = ((org$frostlang$frostc$parser$Token) $tmp4653.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4655 = *(&local1);
frost$core$String* $tmp4656 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4655.value));
org$frostlang$frostc$ASTNode* $tmp4657 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4651, $tmp4652, $tmp4654, $tmp4656, $tmp4657);
frost$collections$Array$add$frost$collections$Array$T($tmp4650, ((frost$core$Object*) $tmp4651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
org$frostlang$frostc$ASTNode* $tmp4658 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2271
frost$collections$Array* $tmp4659 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4660 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4661 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4662 = *(&local1);
org$frostlang$frostc$Position $tmp4663 = ((org$frostlang$frostc$parser$Token) $tmp4662.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4664 = *(&local1);
frost$core$String* $tmp4665 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4664.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4660, $tmp4661, $tmp4663, $tmp4665);
frost$collections$Array$add$frost$collections$Array$T($tmp4659, ((frost$core$Object*) $tmp4660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
goto block6;
block6:;
// line 2273
goto block10;
block10:;
frost$core$Int64 $tmp4666 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4667 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4666);
org$frostlang$frostc$parser$Token$nullable $tmp4668 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4667);
frost$core$Bit $tmp4669 = frost$core$Bit$init$builtin_bit($tmp4668.nonnull);
bool $tmp4670 = $tmp4669.value;
if ($tmp4670) goto block11; else goto block12;
block11:;
// line 2274
frost$core$Int64 $tmp4671 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4672 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4671);
org$frostlang$frostc$parser$Token$nullable $tmp4673 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4672, &$s4674);
*(&local1) = $tmp4673;
// line 2275
org$frostlang$frostc$parser$Token$nullable $tmp4675 = *(&local1);
frost$core$Bit $tmp4676 = frost$core$Bit$init$builtin_bit(!$tmp4675.nonnull);
bool $tmp4677 = $tmp4676.value;
if ($tmp4677) goto block13; else goto block14;
block13:;
// line 2276
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2278
frost$core$Int64 $tmp4679 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4680 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4679);
org$frostlang$frostc$parser$Token$nullable $tmp4681 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4680);
frost$core$Bit $tmp4682 = frost$core$Bit$init$builtin_bit($tmp4681.nonnull);
bool $tmp4683 = $tmp4682.value;
if ($tmp4683) goto block15; else goto block17;
block15:;
// line 2279
org$frostlang$frostc$ASTNode* $tmp4684 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
org$frostlang$frostc$ASTNode* $tmp4685 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
*(&local4) = $tmp4684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
// line 2280
org$frostlang$frostc$ASTNode* $tmp4686 = *(&local4);
frost$core$Bit $tmp4687 = frost$core$Bit$init$builtin_bit($tmp4686 == NULL);
bool $tmp4688 = $tmp4687.value;
if ($tmp4688) goto block18; else goto block19;
block18:;
// line 2281
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4689 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4690));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2283
frost$collections$Array* $tmp4691 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4692 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4693 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$nullable $tmp4694 = *(&local1);
org$frostlang$frostc$Position $tmp4695 = ((org$frostlang$frostc$parser$Token) $tmp4694.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4696 = *(&local1);
frost$core$String* $tmp4697 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4696.value));
org$frostlang$frostc$ASTNode* $tmp4698 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4692, $tmp4693, $tmp4695, $tmp4697, $tmp4698);
frost$collections$Array$add$frost$collections$Array$T($tmp4691, ((frost$core$Object*) $tmp4692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
org$frostlang$frostc$ASTNode* $tmp4699 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4699));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2286
frost$collections$Array* $tmp4700 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4701 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4702 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4703 = *(&local1);
org$frostlang$frostc$Position $tmp4704 = ((org$frostlang$frostc$parser$Token) $tmp4703.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4705 = *(&local1);
frost$core$String* $tmp4706 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4705.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4701, $tmp4702, $tmp4704, $tmp4706);
frost$collections$Array$add$frost$collections$Array$T($tmp4700, ((frost$core$Object*) $tmp4701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
goto block16;
block16:;
goto block10;
block12:;
// line 2289
frost$core$Int64 $tmp4707 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4708 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4707);
org$frostlang$frostc$parser$Token$nullable $tmp4709 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4708, &$s4710);
frost$core$Bit $tmp4711 = frost$core$Bit$init$builtin_bit(!$tmp4709.nonnull);
bool $tmp4712 = $tmp4711.value;
if ($tmp4712) goto block20; else goto block21;
block20:;
// line 2290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4713 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2292
frost$collections$Array* $tmp4714 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4715 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$collections$Array* $tmp4716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4715;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2299
frost$core$Int64 $tmp4717 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4718 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4717);
org$frostlang$frostc$parser$Token$nullable $tmp4719 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4718, &$s4720);
*(&local0) = $tmp4719;
// line 2300
org$frostlang$frostc$parser$Token$nullable $tmp4721 = *(&local0);
frost$core$Bit $tmp4722 = frost$core$Bit$init$builtin_bit(!$tmp4721.nonnull);
bool $tmp4723 = $tmp4722.value;
if ($tmp4723) goto block1; else goto block2;
block1:;
// line 2301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2303
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4724 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4724);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$collections$Array* $tmp4725 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
*(&local1) = $tmp4724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
// line 2304
org$frostlang$frostc$ASTNode* $tmp4726 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
org$frostlang$frostc$ASTNode* $tmp4727 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4727));
*(&local2) = $tmp4726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
// line 2305
org$frostlang$frostc$ASTNode* $tmp4728 = *(&local2);
frost$core$Bit $tmp4729 = frost$core$Bit$init$builtin_bit($tmp4728 == NULL);
bool $tmp4730 = $tmp4729.value;
if ($tmp4730) goto block3; else goto block4;
block3:;
// line 2306
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4731 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2308
frost$collections$Array* $tmp4733 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4734 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4733, ((frost$core$Object*) $tmp4734));
// line 2309
goto block5;
block5:;
frost$core$Int64 $tmp4735 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4736 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4735);
org$frostlang$frostc$parser$Token$nullable $tmp4737 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4736);
frost$core$Bit $tmp4738 = frost$core$Bit$init$builtin_bit($tmp4737.nonnull);
bool $tmp4739 = $tmp4738.value;
if ($tmp4739) goto block6; else goto block7;
block6:;
// line 2310
org$frostlang$frostc$ASTNode* $tmp4740 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
org$frostlang$frostc$ASTNode* $tmp4741 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
*(&local2) = $tmp4740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
// line 2311
org$frostlang$frostc$ASTNode* $tmp4742 = *(&local2);
frost$core$Bit $tmp4743 = frost$core$Bit$init$builtin_bit($tmp4742 == NULL);
bool $tmp4744 = $tmp4743.value;
if ($tmp4744) goto block8; else goto block9;
block8:;
// line 2312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4745 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4745));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4746 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4746));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2314
frost$collections$Array* $tmp4747 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4748 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4747, ((frost$core$Object*) $tmp4748));
goto block5;
block7:;
// line 2316
frost$collections$Array* $tmp4749 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4750 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
org$frostlang$frostc$ASTNode* $tmp4751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4750;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2323
frost$core$Int64 $tmp4753 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4754 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4753);
org$frostlang$frostc$parser$Token$nullable $tmp4755 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4754, &$s4756);
*(&local0) = $tmp4755;
// line 2324
*(&local1) = ((frost$core$String*) NULL);
// line 2325
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4757 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2326
frost$core$Int64 $tmp4758 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4759 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4758);
org$frostlang$frostc$parser$Token$nullable $tmp4760 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4759);
*(&local3) = $tmp4760;
// line 2327
org$frostlang$frostc$parser$Token$nullable $tmp4761 = *(&local3);
frost$core$Bit $tmp4762 = frost$core$Bit$init$builtin_bit($tmp4761.nonnull);
bool $tmp4763 = $tmp4762.value;
if ($tmp4763) goto block1; else goto block2;
block1:;
// line 2328
org$frostlang$frostc$ASTNode* $tmp4764 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
org$frostlang$frostc$ASTNode* $tmp4765 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
*(&local2) = $tmp4764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
// line 2329
org$frostlang$frostc$ASTNode* $tmp4766 = *(&local2);
frost$core$Bit $tmp4767 = frost$core$Bit$init$builtin_bit($tmp4766 == NULL);
bool $tmp4768 = $tmp4767.value;
if ($tmp4768) goto block3; else goto block4;
block3:;
// line 2330
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4769 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2332
frost$core$Int64 $tmp4771 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4772 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4771);
org$frostlang$frostc$parser$Token$nullable $tmp4773 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4772, &$s4774);
*(&local4) = $tmp4773;
// line 2333
org$frostlang$frostc$parser$Token$nullable $tmp4775 = *(&local4);
frost$core$Bit $tmp4776 = frost$core$Bit$init$builtin_bit(!$tmp4775.nonnull);
bool $tmp4777 = $tmp4776.value;
if ($tmp4777) goto block5; else goto block6;
block5:;
// line 2334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4778 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4778));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2336
frost$core$String** $tmp4780 = &param0->source;
frost$core$String* $tmp4781 = *$tmp4780;
frost$core$String** $tmp4782 = &param0->source;
frost$core$String* $tmp4783 = *$tmp4782;
org$frostlang$frostc$parser$Token$nullable $tmp4784 = *(&local3);
frost$core$String$Index $tmp4785 = ((org$frostlang$frostc$parser$Token) $tmp4784.value).start;
frost$core$String$Index $tmp4786 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4783, $tmp4785);
org$frostlang$frostc$parser$Token$nullable $tmp4787 = *(&local4);
frost$core$String$Index $tmp4788 = ((org$frostlang$frostc$parser$Token) $tmp4787.value).start;
frost$core$Bit $tmp4789 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4790 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4786, $tmp4788, $tmp4789);
frost$core$String* $tmp4791 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4781, $tmp4790);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
frost$core$String* $tmp4792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
*(&local1) = $tmp4791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
goto block2;
block2:;
// line 2338
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4793 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4794 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4795 = *(&local0);
org$frostlang$frostc$Position $tmp4796 = ((org$frostlang$frostc$parser$Token) $tmp4795.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4797 = *(&local0);
frost$core$String* $tmp4798 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4797.value));
frost$core$String* $tmp4799 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4800 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4793, $tmp4794, $tmp4796, $tmp4798, $tmp4799, $tmp4800);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
org$frostlang$frostc$ASTNode* $tmp4801 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4802 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4793;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2345
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4803 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4803);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
frost$collections$Array* $tmp4804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
*(&local0) = $tmp4803;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
// line 2346
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4805 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4806 = $tmp4805.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4807;
$tmp4807 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4807->value = $tmp4806;
frost$core$Int64 $tmp4808 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4809 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4808);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4810;
$tmp4810 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4810->value = $tmp4809;
ITable* $tmp4811 = ((frost$core$Equatable*) $tmp4807)->$class->itable;
while ($tmp4811->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4811 = $tmp4811->next;
}
$fn4813 $tmp4812 = $tmp4811->methods[0];
frost$core$Bit $tmp4814 = $tmp4812(((frost$core$Equatable*) $tmp4807), ((frost$core$Equatable*) $tmp4810));
bool $tmp4815 = $tmp4814.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4810)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4807)));
if ($tmp4815) goto block2; else goto block3;
block2:;
// line 2347
org$frostlang$frostc$ASTNode* $tmp4816 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
org$frostlang$frostc$ASTNode* $tmp4817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
*(&local1) = $tmp4816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
// line 2348
org$frostlang$frostc$ASTNode* $tmp4818 = *(&local1);
frost$core$Bit $tmp4819 = frost$core$Bit$init$builtin_bit($tmp4818 == NULL);
bool $tmp4820 = $tmp4819.value;
if ($tmp4820) goto block4; else goto block5;
block4:;
// line 2349
org$frostlang$frostc$ASTNode* $tmp4821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2351
frost$collections$Array* $tmp4822 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4823 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4822, ((frost$core$Object*) $tmp4823));
org$frostlang$frostc$ASTNode* $tmp4824 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4824));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2353
frost$collections$Array* $tmp4825 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4826 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$collections$Array* $tmp4827 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4826;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2357
frost$core$Int64 $tmp4828 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4829 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4828);
org$frostlang$frostc$parser$Token$nullable $tmp4830 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4829, &$s4831);
*(&local0) = $tmp4830;
// line 2358
org$frostlang$frostc$parser$Token$nullable $tmp4832 = *(&local0);
frost$core$Bit $tmp4833 = frost$core$Bit$init$builtin_bit(!$tmp4832.nonnull);
bool $tmp4834 = $tmp4833.value;
if ($tmp4834) goto block1; else goto block2;
block1:;
// line 2359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2361
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp4835 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4835);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$core$MutableString* $tmp4836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
*(&local1) = $tmp4835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
// line 2362
goto block3;
block3:;
// line 2363
org$frostlang$frostc$parser$Token $tmp4837 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4837;
// line 2364
org$frostlang$frostc$parser$Token $tmp4838 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4839 = $tmp4838.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4840;
$tmp4840 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4840->value = $tmp4839;
frost$core$Int64 $tmp4841 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4842 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4841);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4843;
$tmp4843 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4843->value = $tmp4842;
ITable* $tmp4844 = ((frost$core$Equatable*) $tmp4840)->$class->itable;
while ($tmp4844->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4844 = $tmp4844->next;
}
$fn4846 $tmp4845 = $tmp4844->methods[0];
frost$core$Bit $tmp4847 = $tmp4845(((frost$core$Equatable*) $tmp4840), ((frost$core$Equatable*) $tmp4843));
bool $tmp4848 = $tmp4847.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4843)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4840)));
if ($tmp4848) goto block5; else goto block6;
block5:;
// line 2365
goto block4;
block6:;
// line 2367
org$frostlang$frostc$parser$Token $tmp4849 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4850 = $tmp4849.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4851;
$tmp4851 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4851->value = $tmp4850;
frost$core$Int64 $tmp4852 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4853 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4852);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4854;
$tmp4854 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4854->value = $tmp4853;
ITable* $tmp4855 = ((frost$core$Equatable*) $tmp4851)->$class->itable;
while ($tmp4855->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4855 = $tmp4855->next;
}
$fn4857 $tmp4856 = $tmp4855->methods[0];
frost$core$Bit $tmp4858 = $tmp4856(((frost$core$Equatable*) $tmp4851), ((frost$core$Equatable*) $tmp4854));
bool $tmp4859 = $tmp4858.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4854)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4851)));
if ($tmp4859) goto block7; else goto block8;
block7:;
// line 2368
org$frostlang$frostc$parser$Token$nullable $tmp4860 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4860.value), &$s4861);
// line 2369
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4862 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2371
frost$core$MutableString* $tmp4863 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4864 = *(&local2);
frost$core$String* $tmp4865 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4864);
frost$core$MutableString$append$frost$core$String($tmp4863, $tmp4865);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
goto block3;
block4:;
// line 2373
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4866 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4867 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4868 = *(&local0);
org$frostlang$frostc$Position $tmp4869 = ((org$frostlang$frostc$parser$Token) $tmp4868.value).position;
frost$core$MutableString* $tmp4870 = *(&local1);
frost$core$String* $tmp4871 = frost$core$MutableString$finish$R$frost$core$String($tmp4870);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4866, $tmp4867, $tmp4869, $tmp4871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
frost$core$MutableString* $tmp4872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4866;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2380
frost$core$Int64 $tmp4873 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4874 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4873);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4874);
// line 2381
frost$core$Int64 $tmp4875 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4876 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4875);
org$frostlang$frostc$parser$Token$nullable $tmp4877 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4876, &$s4878);
*(&local0) = $tmp4877;
// line 2382
frost$core$Int64 $tmp4879 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4880 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4879);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4880);
// line 2383
org$frostlang$frostc$parser$Token$nullable $tmp4881 = *(&local0);
frost$core$Bit $tmp4882 = frost$core$Bit$init$builtin_bit(!$tmp4881.nonnull);
bool $tmp4883 = $tmp4882.value;
if ($tmp4883) goto block1; else goto block2;
block1:;
// line 2384
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2386
org$frostlang$frostc$ASTNode* $tmp4884 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
org$frostlang$frostc$ASTNode* $tmp4885 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
*(&local1) = $tmp4884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
// line 2387
org$frostlang$frostc$ASTNode* $tmp4886 = *(&local1);
frost$core$Bit $tmp4887 = frost$core$Bit$init$builtin_bit($tmp4886 == NULL);
bool $tmp4888 = $tmp4887.value;
if ($tmp4888) goto block3; else goto block4;
block3:;
// line 2388
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4889 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2390
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4890 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4891 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4892 = *(&local0);
org$frostlang$frostc$Position $tmp4893 = ((org$frostlang$frostc$parser$Token) $tmp4892.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4894 = *(&local0);
frost$core$String* $tmp4895 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4894.value));
org$frostlang$frostc$ASTNode* $tmp4896 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4890, $tmp4891, $tmp4893, $tmp4895, $tmp4896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
org$frostlang$frostc$ASTNode* $tmp4897 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4890;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2397
frost$core$Int64 $tmp4898 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4899 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4898);
org$frostlang$frostc$parser$Token$nullable $tmp4900 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4899, &$s4901);
*(&local0) = $tmp4900;
// line 2398
org$frostlang$frostc$parser$Token$nullable $tmp4902 = *(&local0);
frost$core$Bit $tmp4903 = frost$core$Bit$init$builtin_bit(!$tmp4902.nonnull);
bool $tmp4904 = $tmp4903.value;
if ($tmp4904) goto block1; else goto block2;
block1:;
// line 2399
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2401
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4905 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4905);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
frost$collections$Array* $tmp4906 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
*(&local1) = $tmp4905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
// line 2402
frost$core$Int64 $tmp4907 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4908 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4907);
org$frostlang$frostc$parser$Token$nullable $tmp4909 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4908);
frost$core$Bit $tmp4910 = frost$core$Bit$init$builtin_bit(!$tmp4909.nonnull);
bool $tmp4911 = $tmp4910.value;
if ($tmp4911) goto block3; else goto block4;
block3:;
// line 2403
org$frostlang$frostc$ASTNode* $tmp4912 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
org$frostlang$frostc$ASTNode* $tmp4913 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
*(&local2) = $tmp4912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
// line 2404
org$frostlang$frostc$ASTNode* $tmp4914 = *(&local2);
frost$core$Bit $tmp4915 = frost$core$Bit$init$builtin_bit($tmp4914 == NULL);
bool $tmp4916 = $tmp4915.value;
if ($tmp4916) goto block5; else goto block6;
block5:;
// line 2405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4918 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2407
frost$collections$Array* $tmp4919 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4920 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4919, ((frost$core$Object*) $tmp4920));
// line 2408
goto block7;
block7:;
frost$core$Int64 $tmp4921 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4922 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4921);
org$frostlang$frostc$parser$Token$nullable $tmp4923 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4922);
frost$core$Bit $tmp4924 = frost$core$Bit$init$builtin_bit($tmp4923.nonnull);
bool $tmp4925 = $tmp4924.value;
if ($tmp4925) goto block8; else goto block9;
block8:;
// line 2409
org$frostlang$frostc$ASTNode* $tmp4926 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
org$frostlang$frostc$ASTNode* $tmp4927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
*(&local2) = $tmp4926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
// line 2410
org$frostlang$frostc$ASTNode* $tmp4928 = *(&local2);
frost$core$Bit $tmp4929 = frost$core$Bit$init$builtin_bit($tmp4928 == NULL);
bool $tmp4930 = $tmp4929.value;
if ($tmp4930) goto block10; else goto block11;
block10:;
// line 2411
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4931 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2413
frost$collections$Array* $tmp4933 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4934 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4933, ((frost$core$Object*) $tmp4934));
goto block7;
block9:;
// line 2415
frost$core$Int64 $tmp4935 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4936 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4935);
org$frostlang$frostc$parser$Token$nullable $tmp4937 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4936, &$s4938);
frost$core$Bit $tmp4939 = frost$core$Bit$init$builtin_bit(!$tmp4937.nonnull);
bool $tmp4940 = $tmp4939.value;
if ($tmp4940) goto block12; else goto block13;
block12:;
// line 2416
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2419
frost$collections$Array* $tmp4944 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4945 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4944);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
frost$collections$Array* $tmp4946 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4946));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4945;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
// line 2427
// line 2428
frost$core$Int64 $tmp4947 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4948 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4947);
org$frostlang$frostc$parser$Token$nullable $tmp4949 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4948);
*(&local1) = $tmp4949;
// line 2429
org$frostlang$frostc$parser$Token$nullable $tmp4950 = *(&local1);
frost$core$Bit $tmp4951 = frost$core$Bit$init$builtin_bit(!$tmp4950.nonnull);
bool $tmp4952 = $tmp4951.value;
if ($tmp4952) goto block1; else goto block3;
block1:;
// line 2430
frost$core$Int64 $tmp4953 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4954 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4953);
org$frostlang$frostc$parser$Token$nullable $tmp4955 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4954, &$s4956);
*(&local1) = $tmp4955;
// line 2431
org$frostlang$frostc$parser$Token$nullable $tmp4957 = *(&local1);
frost$core$Bit $tmp4958 = frost$core$Bit$init$builtin_bit(!$tmp4957.nonnull);
bool $tmp4959 = $tmp4958.value;
if ($tmp4959) goto block4; else goto block5;
block4:;
// line 2432
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2434
frost$core$Int64 $tmp4960 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4961 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4960);
*(&local0) = $tmp4961;
goto block2;
block3:;
// line 1
// line 2437
frost$core$Int64 $tmp4962 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4963 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4962);
*(&local0) = $tmp4963;
goto block2;
block2:;
// line 2439
frost$core$Int64 $tmp4964 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4965 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4964);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4965);
// line 2440
frost$core$String* $tmp4966 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
frost$core$String* $tmp4967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4967));
*(&local2) = $tmp4966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
// line 2441
frost$core$Int64 $tmp4968 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4969 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4968);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4969);
// line 2442
frost$core$String* $tmp4970 = *(&local2);
frost$core$Bit $tmp4971 = frost$core$Bit$init$builtin_bit($tmp4970 == NULL);
bool $tmp4972 = $tmp4971.value;
if ($tmp4972) goto block6; else goto block7;
block6:;
// line 2443
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2445
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2446
org$frostlang$frostc$parser$Token $tmp4974 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4975 = $tmp4974.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4976;
$tmp4976 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4976->value = $tmp4975;
frost$core$Int64 $tmp4977 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4978 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4977);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4979;
$tmp4979 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4979->value = $tmp4978;
ITable* $tmp4980 = ((frost$core$Equatable*) $tmp4976)->$class->itable;
while ($tmp4980->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4980 = $tmp4980->next;
}
$fn4982 $tmp4981 = $tmp4980->methods[0];
frost$core$Bit $tmp4983 = $tmp4981(((frost$core$Equatable*) $tmp4976), ((frost$core$Equatable*) $tmp4979));
bool $tmp4984 = $tmp4983.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4979)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4976)));
if ($tmp4984) goto block8; else goto block10;
block8:;
// line 2447
org$frostlang$frostc$FixedArray* $tmp4985 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
org$frostlang$frostc$FixedArray* $tmp4986 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
*(&local3) = $tmp4985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
goto block9;
block10:;
// line 1
// line 2450
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4987 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2452
org$frostlang$frostc$FixedArray* $tmp4988 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
org$frostlang$frostc$FixedArray* $tmp4989 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
*(&local4) = $tmp4988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
// line 2453
org$frostlang$frostc$FixedArray* $tmp4990 = *(&local4);
frost$core$Bit $tmp4991 = frost$core$Bit$init$builtin_bit($tmp4990 == NULL);
bool $tmp4992 = $tmp4991.value;
if ($tmp4992) goto block11; else goto block12;
block11:;
// line 2454
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4993 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4994 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4995 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2456
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2457
org$frostlang$frostc$parser$Token $tmp4996 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4997 = $tmp4996.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4998;
$tmp4998 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4998->value = $tmp4997;
frost$core$Int64 $tmp4999 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5000 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4999);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5001;
$tmp5001 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5001->value = $tmp5000;
ITable* $tmp5002 = ((frost$core$Equatable*) $tmp4998)->$class->itable;
while ($tmp5002->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5002 = $tmp5002->next;
}
$fn5004 $tmp5003 = $tmp5002->methods[0];
frost$core$Bit $tmp5005 = $tmp5003(((frost$core$Equatable*) $tmp4998), ((frost$core$Equatable*) $tmp5001));
bool $tmp5006 = $tmp5005.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5001)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4998)));
if ($tmp5006) goto block13; else goto block15;
block13:;
// line 2458
org$frostlang$frostc$ASTNode* $tmp5007 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
org$frostlang$frostc$ASTNode* $tmp5008 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
*(&local5) = $tmp5007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
// line 2459
org$frostlang$frostc$ASTNode* $tmp5009 = *(&local5);
frost$core$Bit $tmp5010 = frost$core$Bit$init$builtin_bit($tmp5009 == NULL);
bool $tmp5011 = $tmp5010.value;
if ($tmp5011) goto block16; else goto block17;
block16:;
// line 2460
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5012 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5013 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5014 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5015 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2464
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5016 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2466
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2467
org$frostlang$frostc$parser$Token $tmp5017 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5018 = $tmp5017.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5019;
$tmp5019 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5019->value = $tmp5018;
frost$core$Int64 $tmp5020 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5021 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5020);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5022;
$tmp5022 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5022->value = $tmp5021;
ITable* $tmp5023 = ((frost$core$Equatable*) $tmp5019)->$class->itable;
while ($tmp5023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5023 = $tmp5023->next;
}
$fn5025 $tmp5024 = $tmp5023->methods[0];
frost$core$Bit $tmp5026 = $tmp5024(((frost$core$Equatable*) $tmp5019), ((frost$core$Equatable*) $tmp5022));
bool $tmp5027 = $tmp5026.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5022)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5019)));
if ($tmp5027) goto block18; else goto block20;
block18:;
// line 2468
org$frostlang$frostc$FixedArray* $tmp5028 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
org$frostlang$frostc$FixedArray* $tmp5029 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
*(&local6) = $tmp5028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
// line 2469
org$frostlang$frostc$FixedArray* $tmp5030 = *(&local6);
frost$core$Bit $tmp5031 = frost$core$Bit$init$builtin_bit($tmp5030 == NULL);
bool $tmp5032 = $tmp5031.value;
if ($tmp5032) goto block21; else goto block22;
block21:;
// line 2470
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5033 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5034 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5035 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5036 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2474
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5038 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2476
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5039 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5040 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5041 = *(&local1);
org$frostlang$frostc$Position $tmp5042 = ((org$frostlang$frostc$parser$Token) $tmp5041.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp5043 = *(&local0);
frost$core$String* $tmp5044 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5045 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5046 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5047 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5048 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5039, $tmp5040, $tmp5042, param1, param2, $tmp5043, $tmp5044, $tmp5045, $tmp5046, $tmp5047, $tmp5048);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
org$frostlang$frostc$FixedArray* $tmp5049 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5050 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5051 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5052 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5052));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp5053 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
*(&local2) = ((frost$core$String*) NULL);
return $tmp5039;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2484
// line 2485
frost$core$Int64 $tmp5054 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp5055 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5054);
org$frostlang$frostc$parser$Token$nullable $tmp5056 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5055);
*(&local1) = $tmp5056;
// line 2486
org$frostlang$frostc$parser$Token$nullable $tmp5057 = *(&local1);
frost$core$Bit $tmp5058 = frost$core$Bit$init$builtin_bit(!$tmp5057.nonnull);
bool $tmp5059 = $tmp5058.value;
if ($tmp5059) goto block1; else goto block3;
block1:;
// line 2487
frost$core$Int64 $tmp5060 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp5061 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5060);
org$frostlang$frostc$parser$Token$nullable $tmp5062 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5061, &$s5063);
*(&local1) = $tmp5062;
// line 2488
org$frostlang$frostc$parser$Token$nullable $tmp5064 = *(&local1);
frost$core$Bit $tmp5065 = frost$core$Bit$init$builtin_bit(!$tmp5064.nonnull);
bool $tmp5066 = $tmp5065.value;
if ($tmp5066) goto block4; else goto block5;
block4:;
// line 2489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2491
frost$core$Int64 $tmp5067 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp5068 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5067);
*(&local0) = $tmp5068;
goto block2;
block3:;
// line 1
// line 2494
frost$core$Int64 $tmp5069 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp5070 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5069);
*(&local0) = $tmp5070;
goto block2;
block2:;
// line 2496
org$frostlang$frostc$FixedArray* $tmp5071 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
org$frostlang$frostc$FixedArray* $tmp5072 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
*(&local2) = $tmp5071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
// line 2497
org$frostlang$frostc$FixedArray* $tmp5073 = *(&local2);
frost$core$Bit $tmp5074 = frost$core$Bit$init$builtin_bit($tmp5073 == NULL);
bool $tmp5075 = $tmp5074.value;
if ($tmp5075) goto block6; else goto block7;
block6:;
// line 2498
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5076 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2500
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2501
org$frostlang$frostc$parser$Token $tmp5077 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5078 = $tmp5077.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5079;
$tmp5079 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5079->value = $tmp5078;
frost$core$Int64 $tmp5080 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5081 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5080);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5082;
$tmp5082 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5082->value = $tmp5081;
ITable* $tmp5083 = ((frost$core$Equatable*) $tmp5079)->$class->itable;
while ($tmp5083->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5083 = $tmp5083->next;
}
$fn5085 $tmp5084 = $tmp5083->methods[0];
frost$core$Bit $tmp5086 = $tmp5084(((frost$core$Equatable*) $tmp5079), ((frost$core$Equatable*) $tmp5082));
bool $tmp5087 = $tmp5086.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5082)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5079)));
if ($tmp5087) goto block8; else goto block10;
block8:;
// line 2502
org$frostlang$frostc$ASTNode* $tmp5088 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5088));
org$frostlang$frostc$ASTNode* $tmp5089 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
*(&local3) = $tmp5088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5088));
// line 2503
org$frostlang$frostc$ASTNode* $tmp5090 = *(&local3);
frost$core$Bit $tmp5091 = frost$core$Bit$init$builtin_bit($tmp5090 == NULL);
bool $tmp5092 = $tmp5091.value;
if ($tmp5092) goto block11; else goto block12;
block11:;
// line 2504
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5093 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5094 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5095 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2510
org$frostlang$frostc$FixedArray* $tmp5096 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
org$frostlang$frostc$FixedArray* $tmp5097 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
*(&local4) = $tmp5096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
// line 2511
org$frostlang$frostc$FixedArray* $tmp5098 = *(&local4);
frost$core$Bit $tmp5099 = frost$core$Bit$init$builtin_bit($tmp5098 == NULL);
bool $tmp5100 = $tmp5099.value;
if ($tmp5100) goto block13; else goto block14;
block13:;
// line 2512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5101 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5102 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2514
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5104 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5105 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5106 = *(&local1);
org$frostlang$frostc$Position $tmp5107 = ((org$frostlang$frostc$parser$Token) $tmp5106.value).position;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5108 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5108);
org$frostlang$frostc$MethodDecl$Kind $tmp5109 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5110 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5111 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5112 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5104, $tmp5105, $tmp5107, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5108, $tmp5109, &$s5113, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5110, $tmp5111, $tmp5112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
org$frostlang$frostc$FixedArray* $tmp5114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5116 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5104;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2522
frost$core$Int64 $tmp5117 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp5118 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5117);
org$frostlang$frostc$parser$Token$nullable $tmp5119 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5118, &$s5120);
*(&local0) = $tmp5119;
// line 2523
org$frostlang$frostc$parser$Token$nullable $tmp5121 = *(&local0);
frost$core$Bit $tmp5122 = frost$core$Bit$init$builtin_bit(!$tmp5121.nonnull);
bool $tmp5123 = $tmp5122.value;
if ($tmp5123) goto block1; else goto block2;
block1:;
// line 2524
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2526
org$frostlang$frostc$FixedArray* $tmp5124 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
org$frostlang$frostc$FixedArray* $tmp5125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5125));
*(&local1) = $tmp5124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
// line 2527
org$frostlang$frostc$FixedArray* $tmp5126 = *(&local1);
frost$core$Bit $tmp5127 = frost$core$Bit$init$builtin_bit($tmp5126 == NULL);
bool $tmp5128 = $tmp5127.value;
if ($tmp5128) goto block3; else goto block4;
block3:;
// line 2528
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5129));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2530
org$frostlang$frostc$FixedArray* $tmp5130 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
org$frostlang$frostc$FixedArray* $tmp5131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
*(&local2) = $tmp5130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
// line 2531
org$frostlang$frostc$FixedArray* $tmp5132 = *(&local2);
frost$core$Bit $tmp5133 = frost$core$Bit$init$builtin_bit($tmp5132 == NULL);
bool $tmp5134 = $tmp5133.value;
if ($tmp5134) goto block5; else goto block6;
block5:;
// line 2532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5136));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2534
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5137 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5138 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5139 = *(&local0);
org$frostlang$frostc$Position $tmp5140 = ((org$frostlang$frostc$parser$Token) $tmp5139.value).position;
frost$core$Int64 $tmp5141 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5142 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5141);
org$frostlang$frostc$FixedArray* $tmp5143 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5144 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5137, $tmp5138, $tmp5140, param1, param2, $tmp5142, &$s5145, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5143, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
org$frostlang$frostc$FixedArray* $tmp5146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5137;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2542
org$frostlang$frostc$ASTNode* $tmp5148 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
org$frostlang$frostc$ASTNode* $tmp5149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
*(&local0) = $tmp5148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
// line 2543
org$frostlang$frostc$ASTNode* $tmp5150 = *(&local0);
frost$core$Bit $tmp5151 = frost$core$Bit$init$builtin_bit($tmp5150 == NULL);
bool $tmp5152 = $tmp5151.value;
if ($tmp5152) goto block1; else goto block2;
block1:;
// line 2544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2546
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5154 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5155 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5156 = *(&local0);
$fn5158 $tmp5157 = ($fn5158) $tmp5156->$class->vtable[2];
org$frostlang$frostc$Position $tmp5159 = $tmp5157($tmp5156);
org$frostlang$frostc$ASTNode* $tmp5160 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5154, $tmp5155, $tmp5159, param1, param2, $tmp5160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
org$frostlang$frostc$ASTNode* $tmp5161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5154;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2553
frost$core$Int64 $tmp5162 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5163 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5162);
org$frostlang$frostc$parser$Token$nullable $tmp5164 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5163, &$s5165);
*(&local0) = $tmp5164;
// line 2554
org$frostlang$frostc$parser$Token$nullable $tmp5166 = *(&local0);
frost$core$Bit $tmp5167 = frost$core$Bit$init$builtin_bit(!$tmp5166.nonnull);
bool $tmp5168 = $tmp5167.value;
if ($tmp5168) goto block1; else goto block2;
block1:;
// line 2555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2557
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5169 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5169);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5169));
frost$collections$Array* $tmp5170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
*(&local1) = $tmp5169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5169));
// line 2558
frost$core$Int64 $tmp5171 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5172 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5171);
org$frostlang$frostc$parser$Token$nullable $tmp5173 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5172);
frost$core$Bit $tmp5174 = frost$core$Bit$init$builtin_bit($tmp5173.nonnull);
bool $tmp5175 = $tmp5174.value;
if ($tmp5175) goto block3; else goto block4;
block3:;
// line 2559
org$frostlang$frostc$parser$Token $tmp5176 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5177 = $tmp5176.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5178;
$tmp5178 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5178->value = $tmp5177;
frost$core$Int64 $tmp5179 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5180 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5179);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5181;
$tmp5181 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5181->value = $tmp5180;
ITable* $tmp5182 = ((frost$core$Equatable*) $tmp5178)->$class->itable;
while ($tmp5182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5182 = $tmp5182->next;
}
$fn5184 $tmp5183 = $tmp5182->methods[1];
frost$core$Bit $tmp5185 = $tmp5183(((frost$core$Equatable*) $tmp5178), ((frost$core$Equatable*) $tmp5181));
bool $tmp5186 = $tmp5185.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5181)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5178)));
if ($tmp5186) goto block5; else goto block6;
block5:;
// line 2560
org$frostlang$frostc$ASTNode* $tmp5187 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
org$frostlang$frostc$ASTNode* $tmp5188 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5188));
*(&local2) = $tmp5187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
// line 2561
org$frostlang$frostc$ASTNode* $tmp5189 = *(&local2);
frost$core$Bit $tmp5190 = frost$core$Bit$init$builtin_bit($tmp5189 == NULL);
bool $tmp5191 = $tmp5190.value;
if ($tmp5191) goto block7; else goto block8;
block7:;
// line 2562
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5192));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2564
frost$collections$Array* $tmp5194 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5195 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5194, ((frost$core$Object*) $tmp5195));
// line 2565
goto block9;
block9:;
frost$core$Int64 $tmp5196 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5197 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5196);
org$frostlang$frostc$parser$Token$nullable $tmp5198 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5197);
frost$core$Bit $tmp5199 = frost$core$Bit$init$builtin_bit($tmp5198.nonnull);
bool $tmp5200 = $tmp5199.value;
if ($tmp5200) goto block10; else goto block11;
block10:;
// line 2566
org$frostlang$frostc$ASTNode* $tmp5201 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
org$frostlang$frostc$ASTNode* $tmp5202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
*(&local2) = $tmp5201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
// line 2567
org$frostlang$frostc$ASTNode* $tmp5203 = *(&local2);
frost$core$Bit $tmp5204 = frost$core$Bit$init$builtin_bit($tmp5203 == NULL);
bool $tmp5205 = $tmp5204.value;
if ($tmp5205) goto block12; else goto block13;
block12:;
// line 2568
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2570
frost$collections$Array* $tmp5208 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5209 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5208, ((frost$core$Object*) $tmp5209));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2573
frost$core$Int64 $tmp5211 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5212 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5211);
org$frostlang$frostc$parser$Token$nullable $tmp5213 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5212, &$s5214);
frost$core$Bit $tmp5215 = frost$core$Bit$init$builtin_bit(!$tmp5213.nonnull);
bool $tmp5216 = $tmp5215.value;
if ($tmp5216) goto block14; else goto block15;
block14:;
// line 2574
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5217));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2577
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5218 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5219 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5220 = *(&local0);
org$frostlang$frostc$Position $tmp5221 = ((org$frostlang$frostc$parser$Token) $tmp5220.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5222 = *(&local0);
frost$core$String* $tmp5223 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5222.value));
frost$collections$Array* $tmp5224 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5225 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5224);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5218, $tmp5219, $tmp5221, param1, $tmp5223, $tmp5225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$collections$Array* $tmp5226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5218;

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
// line 2587
frost$core$Int64 $tmp5227 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5228 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5227);
org$frostlang$frostc$parser$Token$nullable $tmp5229 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5228, &$s5230);
*(&local0) = $tmp5229;
// line 2588
org$frostlang$frostc$parser$Token$nullable $tmp5231 = *(&local0);
frost$core$Bit $tmp5232 = frost$core$Bit$init$builtin_bit(!$tmp5231.nonnull);
bool $tmp5233 = $tmp5232.value;
if ($tmp5233) goto block1; else goto block2;
block1:;
// line 2589
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2591
frost$core$Int64 $tmp5234 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5235 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5234);
org$frostlang$frostc$parser$Token$nullable $tmp5236 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5235, &$s5237);
*(&local1) = $tmp5236;
// line 2592
org$frostlang$frostc$parser$Token$nullable $tmp5238 = *(&local1);
frost$core$Bit $tmp5239 = frost$core$Bit$init$builtin_bit(!$tmp5238.nonnull);
bool $tmp5240 = $tmp5239.value;
if ($tmp5240) goto block3; else goto block4;
block3:;
// line 2593
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2595
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2596
org$frostlang$frostc$parser$Token $tmp5241 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5242 = $tmp5241.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5243;
$tmp5243 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5243->value = $tmp5242;
frost$core$Int64 $tmp5244 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5245 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5244);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5246;
$tmp5246 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5246->value = $tmp5245;
ITable* $tmp5247 = ((frost$core$Equatable*) $tmp5243)->$class->itable;
while ($tmp5247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5247 = $tmp5247->next;
}
$fn5249 $tmp5248 = $tmp5247->methods[0];
frost$core$Bit $tmp5250 = $tmp5248(((frost$core$Equatable*) $tmp5243), ((frost$core$Equatable*) $tmp5246));
bool $tmp5251 = $tmp5250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5243)));
if ($tmp5251) goto block5; else goto block7;
block5:;
// line 2597
org$frostlang$frostc$FixedArray* $tmp5252 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
org$frostlang$frostc$FixedArray* $tmp5253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
*(&local2) = $tmp5252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
// line 2598
org$frostlang$frostc$FixedArray* $tmp5254 = *(&local2);
frost$core$Bit $tmp5255 = frost$core$Bit$init$builtin_bit($tmp5254 == NULL);
bool $tmp5256 = $tmp5255.value;
if ($tmp5256) goto block8; else goto block9;
block8:;
// line 2599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5257 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2603
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5258));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2605
frost$core$Int64 $tmp5259 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5260 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5259);
org$frostlang$frostc$parser$Token$nullable $tmp5261 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5260, &$s5262);
frost$core$Bit $tmp5263 = frost$core$Bit$init$builtin_bit(!$tmp5261.nonnull);
bool $tmp5264 = $tmp5263.value;
if ($tmp5264) goto block10; else goto block11;
block10:;
// line 2606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2608
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5266 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5266);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
frost$collections$Array* $tmp5267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
*(&local3) = $tmp5266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
// line 2609
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5268 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2610
goto block12;
block12:;
// line 2611
org$frostlang$frostc$parser$Token $tmp5269 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5269;
// line 2612
org$frostlang$frostc$parser$Token $tmp5270 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5271 = $tmp5270.kind;
frost$core$Int64 $tmp5272 = $tmp5271.$rawValue;
frost$core$Int64 $tmp5273 = (frost$core$Int64) {18};
frost$core$Bit $tmp5274 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5273);
bool $tmp5275 = $tmp5274.value;
if ($tmp5275) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5276 = (frost$core$Int64) {19};
frost$core$Bit $tmp5277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5276);
bool $tmp5278 = $tmp5277.value;
if ($tmp5278) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5279 = (frost$core$Int64) {20};
frost$core$Bit $tmp5280 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5279);
bool $tmp5281 = $tmp5280.value;
if ($tmp5281) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5282 = (frost$core$Int64) {22};
frost$core$Bit $tmp5283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5282);
bool $tmp5284 = $tmp5283.value;
if ($tmp5284) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5285 = (frost$core$Int64) {21};
frost$core$Bit $tmp5286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5285);
bool $tmp5287 = $tmp5286.value;
if ($tmp5287) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5288 = (frost$core$Int64) {14};
frost$core$Bit $tmp5289 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5288);
bool $tmp5290 = $tmp5289.value;
if ($tmp5290) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5291 = (frost$core$Int64) {24};
frost$core$Bit $tmp5292 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5291);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5294 = (frost$core$Int64) {25};
frost$core$Bit $tmp5295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5294);
bool $tmp5296 = $tmp5295.value;
if ($tmp5296) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5297 = (frost$core$Int64) {26};
frost$core$Bit $tmp5298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5297);
bool $tmp5299 = $tmp5298.value;
if ($tmp5299) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5300 = (frost$core$Int64) {27};
frost$core$Bit $tmp5301 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5300);
bool $tmp5302 = $tmp5301.value;
if ($tmp5302) goto block15; else goto block25;
block15:;
// line 2616
goto block13;
block25:;
frost$core$Int64 $tmp5303 = (frost$core$Int64) {12};
frost$core$Bit $tmp5304 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5303);
bool $tmp5305 = $tmp5304.value;
if ($tmp5305) goto block26; else goto block27;
block26:;
// line 2619
org$frostlang$frostc$ASTNode* $tmp5306 = *(&local4);
frost$core$Bit $tmp5307 = frost$core$Bit$init$builtin_bit($tmp5306 != NULL);
bool $tmp5308 = $tmp5307.value;
if ($tmp5308) goto block28; else goto block29;
block28:;
// line 2620
org$frostlang$frostc$parser$Token $tmp5309 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5310 = *(&local5);
frost$core$String* $tmp5311 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5310);
frost$core$String* $tmp5312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5313, $tmp5311);
frost$core$String* $tmp5314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5312, &$s5315);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5309, $tmp5314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
goto block29;
block29:;
// line 2622
org$frostlang$frostc$ASTNode* $tmp5316 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
org$frostlang$frostc$ASTNode* $tmp5317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
*(&local4) = $tmp5316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
goto block14;
block27:;
frost$core$Int64 $tmp5318 = (frost$core$Int64) {52};
frost$core$Bit $tmp5319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5272, $tmp5318);
bool $tmp5320 = $tmp5319.value;
if ($tmp5320) goto block30; else goto block31;
block30:;
// line 2625
org$frostlang$frostc$ASTNode* $tmp5321 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5322 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5321);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5322));
org$frostlang$frostc$ASTNode* $tmp5323 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
*(&local6) = $tmp5322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5322));
// line 2626
org$frostlang$frostc$ASTNode* $tmp5324 = *(&local6);
frost$core$Bit $tmp5325 = frost$core$Bit$init$builtin_bit($tmp5324 == NULL);
bool $tmp5326 = $tmp5325.value;
if ($tmp5326) goto block32; else goto block33;
block32:;
// line 2627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5327 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5327));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5328 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5328));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5329 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5330 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5330));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2629
frost$collections$Array* $tmp5331 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5332 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5331, ((frost$core$Object*) $tmp5332));
// line 2630
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5334 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5334));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2633
goto block13;
block14:;
goto block12;
block13:;
// line 2637
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5335 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5335);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5335));
org$frostlang$frostc$FixedArray* $tmp5336 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
*(&local7) = $tmp5335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5335));
// line 2638
goto block34;
block34:;
// line 2639
org$frostlang$frostc$parser$Token $tmp5337 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5337;
// line 2640
org$frostlang$frostc$parser$Token $tmp5338 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5339 = $tmp5338.kind;
frost$core$Int64 $tmp5340 = $tmp5339.$rawValue;
frost$core$Int64 $tmp5341 = (frost$core$Int64) {14};
frost$core$Bit $tmp5342 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5341);
bool $tmp5343 = $tmp5342.value;
if ($tmp5343) goto block37; else goto block38;
block37:;
// line 2642
org$frostlang$frostc$FixedArray* $tmp5344 = *(&local7);
ITable* $tmp5345 = ((frost$collections$CollectionView*) $tmp5344)->$class->itable;
while ($tmp5345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5345 = $tmp5345->next;
}
$fn5347 $tmp5346 = $tmp5345->methods[0];
frost$core$Int64 $tmp5348 = $tmp5346(((frost$collections$CollectionView*) $tmp5344));
frost$core$Int64 $tmp5349 = (frost$core$Int64) {0};
int64_t $tmp5350 = $tmp5348.value;
int64_t $tmp5351 = $tmp5349.value;
bool $tmp5352 = $tmp5350 > $tmp5351;
frost$core$Bit $tmp5353 = (frost$core$Bit) {$tmp5352};
bool $tmp5354 = $tmp5353.value;
if ($tmp5354) goto block39; else goto block40;
block39:;
// line 2643
org$frostlang$frostc$parser$Token $tmp5355 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5356 = *(&local8);
frost$core$String* $tmp5357 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5356);
frost$core$String* $tmp5358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5359, $tmp5357);
frost$core$String* $tmp5360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5358, &$s5361);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5355, $tmp5360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
// line 2644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5362 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5362));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2646
org$frostlang$frostc$FixedArray* $tmp5366 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
org$frostlang$frostc$FixedArray* $tmp5367 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
*(&local7) = $tmp5366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
goto block36;
block38:;
frost$core$Int64 $tmp5368 = (frost$core$Int64) {12};
frost$core$Bit $tmp5369 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5368);
bool $tmp5370 = $tmp5369.value;
if ($tmp5370) goto block41; else goto block42;
block41:;
// line 2649
org$frostlang$frostc$ASTNode* $tmp5371 = *(&local4);
frost$core$Bit $tmp5372 = frost$core$Bit$init$builtin_bit($tmp5371 != NULL);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block43; else goto block45;
block45:;
org$frostlang$frostc$FixedArray* $tmp5374 = *(&local7);
ITable* $tmp5375 = ((frost$collections$CollectionView*) $tmp5374)->$class->itable;
while ($tmp5375->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5375 = $tmp5375->next;
}
$fn5377 $tmp5376 = $tmp5375->methods[0];
frost$core$Int64 $tmp5378 = $tmp5376(((frost$collections$CollectionView*) $tmp5374));
frost$core$Int64 $tmp5379 = (frost$core$Int64) {0};
int64_t $tmp5380 = $tmp5378.value;
int64_t $tmp5381 = $tmp5379.value;
bool $tmp5382 = $tmp5380 > $tmp5381;
frost$core$Bit $tmp5383 = (frost$core$Bit) {$tmp5382};
bool $tmp5384 = $tmp5383.value;
if ($tmp5384) goto block43; else goto block44;
block43:;
// line 2650
org$frostlang$frostc$parser$Token $tmp5385 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5386 = *(&local8);
frost$core$String* $tmp5387 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5386);
frost$core$String* $tmp5388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5389, $tmp5387);
frost$core$String* $tmp5390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5388, &$s5391);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5385, $tmp5390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
// line 2651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5392 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5393 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5394 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5394));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2653
org$frostlang$frostc$ASTNode* $tmp5396 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
org$frostlang$frostc$ASTNode* $tmp5397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
*(&local4) = $tmp5396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
goto block36;
block42:;
frost$core$Int64 $tmp5398 = (frost$core$Int64) {18};
frost$core$Bit $tmp5399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5398);
bool $tmp5400 = $tmp5399.value;
if ($tmp5400) goto block46; else goto block47;
block46:;
// line 2656
org$frostlang$frostc$ASTNode* $tmp5401 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5402 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5403 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5401, $tmp5402);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
org$frostlang$frostc$ASTNode* $tmp5404 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
*(&local9) = $tmp5403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
// line 2657
org$frostlang$frostc$ASTNode* $tmp5405 = *(&local9);
frost$core$Bit $tmp5406 = frost$core$Bit$init$builtin_bit($tmp5405 == NULL);
bool $tmp5407 = $tmp5406.value;
if ($tmp5407) goto block48; else goto block49;
block48:;
// line 2658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5408 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5408));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5409 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5409));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5411 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 2660
frost$collections$Array* $tmp5413 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5414 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp5413, ((frost$core$Object*) $tmp5414));
// line 2661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5415 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2662
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5416 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
org$frostlang$frostc$FixedArray* $tmp5417 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
*(&local7) = $tmp5416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
org$frostlang$frostc$ASTNode* $tmp5418 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block47:;
frost$core$Int64 $tmp5419 = (frost$core$Int64) {19};
frost$core$Bit $tmp5420 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5419);
bool $tmp5421 = $tmp5420.value;
if ($tmp5421) goto block50; else goto block51;
block50:;
// line 2665
org$frostlang$frostc$ASTNode* $tmp5422 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5423 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5424 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5422, $tmp5423);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
org$frostlang$frostc$ASTNode* $tmp5425 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
*(&local10) = $tmp5424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
// line 2666
org$frostlang$frostc$ASTNode* $tmp5426 = *(&local10);
frost$core$Bit $tmp5427 = frost$core$Bit$init$builtin_bit($tmp5426 == NULL);
bool $tmp5428 = $tmp5427.value;
if ($tmp5428) goto block52; else goto block53;
block52:;
// line 2667
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5429 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5430 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5430));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5431 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5432 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block53:;
// line 2669
frost$collections$Array* $tmp5434 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5435 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5434, ((frost$core$Object*) $tmp5435));
// line 2670
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5436 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5436));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2671
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5437 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
org$frostlang$frostc$FixedArray* $tmp5438 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
*(&local7) = $tmp5437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
org$frostlang$frostc$ASTNode* $tmp5439 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block51:;
frost$core$Int64 $tmp5440 = (frost$core$Int64) {20};
frost$core$Bit $tmp5441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5440);
bool $tmp5442 = $tmp5441.value;
if ($tmp5442) goto block54; else goto block55;
block54:;
// line 2674
org$frostlang$frostc$ASTNode* $tmp5443 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5444 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5445 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5443, $tmp5444);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
org$frostlang$frostc$ASTNode* $tmp5446 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local11) = $tmp5445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
// line 2675
org$frostlang$frostc$ASTNode* $tmp5447 = *(&local11);
frost$core$Bit $tmp5448 = frost$core$Bit$init$builtin_bit($tmp5447 == NULL);
bool $tmp5449 = $tmp5448.value;
if ($tmp5449) goto block56; else goto block57;
block56:;
// line 2676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5450 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5451 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5452 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5453 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 2678
frost$collections$Array* $tmp5455 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5456 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5455, ((frost$core$Object*) $tmp5456));
// line 2679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5457 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2680
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5458 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
org$frostlang$frostc$FixedArray* $tmp5459 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
*(&local7) = $tmp5458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
org$frostlang$frostc$ASTNode* $tmp5460 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block55:;
frost$core$Int64 $tmp5461 = (frost$core$Int64) {22};
frost$core$Bit $tmp5462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5461);
bool $tmp5463 = $tmp5462.value;
if ($tmp5463) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp5464 = (frost$core$Int64) {21};
frost$core$Bit $tmp5465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5464);
bool $tmp5466 = $tmp5465.value;
if ($tmp5466) goto block58; else goto block60;
block58:;
// line 2683
org$frostlang$frostc$ASTNode* $tmp5467 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5468 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5469 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5467, $tmp5468);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
org$frostlang$frostc$ASTNode* $tmp5470 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5470));
*(&local12) = $tmp5469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
// line 2684
org$frostlang$frostc$ASTNode* $tmp5471 = *(&local12);
frost$core$Bit $tmp5472 = frost$core$Bit$init$builtin_bit($tmp5471 == NULL);
bool $tmp5473 = $tmp5472.value;
if ($tmp5473) goto block61; else goto block62;
block61:;
// line 2685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5474 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5475 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5476 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5476));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5477 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5477));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5478));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block62:;
// line 2687
frost$collections$Array* $tmp5479 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5480 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5479, ((frost$core$Object*) $tmp5480));
// line 2688
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5481 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5481));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2689
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5482 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$FixedArray* $tmp5483 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local7) = $tmp5482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$ASTNode* $tmp5484 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block60:;
frost$core$Int64 $tmp5485 = (frost$core$Int64) {24};
frost$core$Bit $tmp5486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5485);
bool $tmp5487 = $tmp5486.value;
if ($tmp5487) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp5488 = (frost$core$Int64) {25};
frost$core$Bit $tmp5489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5488);
bool $tmp5490 = $tmp5489.value;
if ($tmp5490) goto block63; else goto block65;
block65:;
frost$core$Int64 $tmp5491 = (frost$core$Int64) {26};
frost$core$Bit $tmp5492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5491);
bool $tmp5493 = $tmp5492.value;
if ($tmp5493) goto block63; else goto block66;
block66:;
frost$core$Int64 $tmp5494 = (frost$core$Int64) {27};
frost$core$Bit $tmp5495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5494);
bool $tmp5496 = $tmp5495.value;
if ($tmp5496) goto block63; else goto block67;
block63:;
// line 2692
org$frostlang$frostc$ASTNode* $tmp5497 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5498 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5499 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5497, $tmp5498);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5499));
org$frostlang$frostc$ASTNode* $tmp5500 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5500));
*(&local13) = $tmp5499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5499));
// line 2693
org$frostlang$frostc$ASTNode* $tmp5501 = *(&local13);
frost$core$Bit $tmp5502 = frost$core$Bit$init$builtin_bit($tmp5501 == NULL);
bool $tmp5503 = $tmp5502.value;
if ($tmp5503) goto block68; else goto block69;
block68:;
// line 2694
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5504 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5504));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5505 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5506 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5507 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5507));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5508));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block69:;
// line 2696
frost$collections$Array* $tmp5509 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5510 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5509, ((frost$core$Object*) $tmp5510));
// line 2697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5511 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2698
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5512 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5512));
org$frostlang$frostc$FixedArray* $tmp5513 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5513));
*(&local7) = $tmp5512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5512));
org$frostlang$frostc$ASTNode* $tmp5514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5514));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block67:;
frost$core$Int64 $tmp5515 = (frost$core$Int64) {104};
frost$core$Bit $tmp5516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5340, $tmp5515);
bool $tmp5517 = $tmp5516.value;
if ($tmp5517) goto block70; else goto block71;
block70:;
// line 2701
frost$core$Int64 $tmp5518 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5519 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5518);
org$frostlang$frostc$parser$Token$nullable $tmp5520 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5519, &$s5521);
// line 2702
goto block35;
block71:;
// line 2705
org$frostlang$frostc$parser$Token $tmp5522 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5523 = *(&local8);
frost$core$String* $tmp5524 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5523);
frost$core$String* $tmp5525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5526, $tmp5524);
frost$core$String* $tmp5527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5525, &$s5528);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5522, $tmp5527);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5524));
// line 2706
org$frostlang$frostc$parser$Token $tmp5529 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5530 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5530));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5531 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5531));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5532 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5532));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2711
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5534 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5535 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5536 = *(&local0);
org$frostlang$frostc$Position $tmp5537 = ((org$frostlang$frostc$parser$Token) $tmp5536.value).position;
frost$core$Int64 $tmp5538 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5539 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5538);
org$frostlang$frostc$parser$Token$nullable $tmp5540 = *(&local1);
frost$core$String* $tmp5541 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5540.value));
org$frostlang$frostc$FixedArray* $tmp5542 = *(&local2);
frost$collections$Array* $tmp5543 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5544 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5543);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5534, $tmp5535, $tmp5537, param1, param2, $tmp5539, $tmp5541, $tmp5542, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5544);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
org$frostlang$frostc$FixedArray* $tmp5545 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5545));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5546));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5547));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5548));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5534;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2721
org$frostlang$frostc$parser$Token $tmp5549 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5549;
// line 2722
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2723
org$frostlang$frostc$parser$Token $tmp5550 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5551 = $tmp5550.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5552;
$tmp5552 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5552->value = $tmp5551;
frost$core$Int64 $tmp5553 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5554 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5553);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5555;
$tmp5555 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5555->value = $tmp5554;
ITable* $tmp5556 = ((frost$core$Equatable*) $tmp5552)->$class->itable;
while ($tmp5556->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5556 = $tmp5556->next;
}
$fn5558 $tmp5557 = $tmp5556->methods[0];
frost$core$Bit $tmp5559 = $tmp5557(((frost$core$Equatable*) $tmp5552), ((frost$core$Equatable*) $tmp5555));
bool $tmp5560 = $tmp5559.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5555)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5552)));
if ($tmp5560) goto block1; else goto block3;
block1:;
// line 2724
org$frostlang$frostc$ASTNode* $tmp5561 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
org$frostlang$frostc$ASTNode* $tmp5562 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5562));
*(&local1) = $tmp5561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
// line 2725
org$frostlang$frostc$ASTNode* $tmp5563 = *(&local1);
frost$core$Bit $tmp5564 = frost$core$Bit$init$builtin_bit($tmp5563 == NULL);
bool $tmp5565 = $tmp5564.value;
if ($tmp5565) goto block4; else goto block5;
block4:;
// line 2726
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2730
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5567));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2732
org$frostlang$frostc$FixedArray* $tmp5568 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
org$frostlang$frostc$FixedArray* $tmp5569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5569));
*(&local2) = $tmp5568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
// line 2733
org$frostlang$frostc$FixedArray* $tmp5570 = *(&local2);
frost$core$Bit $tmp5571 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5572 = $tmp5571.value;
if ($tmp5572) goto block6; else goto block7;
block6:;
// line 2734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5573 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5573));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5574));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2736
org$frostlang$frostc$parser$Token $tmp5575 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5576 = $tmp5575.kind;
frost$core$Int64 $tmp5577 = $tmp5576.$rawValue;
frost$core$Int64 $tmp5578 = (frost$core$Int64) {18};
frost$core$Bit $tmp5579 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5578);
bool $tmp5580 = $tmp5579.value;
if ($tmp5580) goto block9; else goto block10;
block9:;
// line 2738
org$frostlang$frostc$ASTNode* $tmp5581 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5582 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5583 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5581, $tmp5582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
org$frostlang$frostc$FixedArray* $tmp5584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5585));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5583;
block10:;
frost$core$Int64 $tmp5586 = (frost$core$Int64) {19};
frost$core$Bit $tmp5587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5586);
bool $tmp5588 = $tmp5587.value;
if ($tmp5588) goto block11; else goto block12;
block11:;
// line 2741
org$frostlang$frostc$ASTNode* $tmp5589 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5590 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5591 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5589, $tmp5590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
org$frostlang$frostc$FixedArray* $tmp5592 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5592));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5591;
block12:;
frost$core$Int64 $tmp5594 = (frost$core$Int64) {20};
frost$core$Bit $tmp5595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5594);
bool $tmp5596 = $tmp5595.value;
if ($tmp5596) goto block13; else goto block14;
block13:;
// line 2744
org$frostlang$frostc$ASTNode* $tmp5597 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5598 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5599 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5597, $tmp5598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5599));
org$frostlang$frostc$FixedArray* $tmp5600 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5600));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5601 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5599;
block14:;
frost$core$Int64 $tmp5602 = (frost$core$Int64) {22};
frost$core$Bit $tmp5603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5602);
bool $tmp5604 = $tmp5603.value;
if ($tmp5604) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5605 = (frost$core$Int64) {21};
frost$core$Bit $tmp5606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5605);
bool $tmp5607 = $tmp5606.value;
if ($tmp5607) goto block15; else goto block17;
block15:;
// line 2747
org$frostlang$frostc$ASTNode* $tmp5608 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5609 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5610 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5608, $tmp5609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5610));
org$frostlang$frostc$FixedArray* $tmp5611 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5611));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5612 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5610;
block17:;
frost$core$Int64 $tmp5613 = (frost$core$Int64) {23};
frost$core$Bit $tmp5614 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5613);
bool $tmp5615 = $tmp5614.value;
if ($tmp5615) goto block18; else goto block19;
block18:;
// line 2750
org$frostlang$frostc$ASTNode* $tmp5616 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5617 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5618 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5616, $tmp5617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
org$frostlang$frostc$FixedArray* $tmp5619 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5618;
block19:;
frost$core$Int64 $tmp5621 = (frost$core$Int64) {24};
frost$core$Bit $tmp5622 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5621);
bool $tmp5623 = $tmp5622.value;
if ($tmp5623) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5624 = (frost$core$Int64) {25};
frost$core$Bit $tmp5625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5624);
bool $tmp5626 = $tmp5625.value;
if ($tmp5626) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5627 = (frost$core$Int64) {26};
frost$core$Bit $tmp5628 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5627);
bool $tmp5629 = $tmp5628.value;
if ($tmp5629) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5630 = (frost$core$Int64) {27};
frost$core$Bit $tmp5631 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5577, $tmp5630);
bool $tmp5632 = $tmp5631.value;
if ($tmp5632) goto block20; else goto block24;
block20:;
// line 2753
org$frostlang$frostc$ASTNode* $tmp5633 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5634 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5635 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5633, $tmp5634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
org$frostlang$frostc$FixedArray* $tmp5636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5637));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5635;
block24:;
// line 2757
frost$core$Int64 $tmp5638 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5639 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5638);
org$frostlang$frostc$parser$Token$nullable $tmp5640 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5639, &$s5641);
// line 2758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5642));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5643));
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
// line 2767
frost$core$Int64 $tmp5644 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5645 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5644);
org$frostlang$frostc$parser$Token$nullable $tmp5646 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5645, &$s5647);
*(&local0) = $tmp5646;
// line 2768
org$frostlang$frostc$parser$Token$nullable $tmp5648 = *(&local0);
frost$core$Bit $tmp5649 = frost$core$Bit$init$builtin_bit(!$tmp5648.nonnull);
bool $tmp5650 = $tmp5649.value;
if ($tmp5650) goto block1; else goto block2;
block1:;
// line 2769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2771
frost$core$Int64 $tmp5651 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5652 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5651);
org$frostlang$frostc$parser$Token$nullable $tmp5653 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5652, &$s5654);
*(&local1) = $tmp5653;
// line 2772
org$frostlang$frostc$parser$Token$nullable $tmp5655 = *(&local1);
frost$core$Bit $tmp5656 = frost$core$Bit$init$builtin_bit(!$tmp5655.nonnull);
bool $tmp5657 = $tmp5656.value;
if ($tmp5657) goto block3; else goto block4;
block3:;
// line 2773
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2775
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2776
org$frostlang$frostc$parser$Token $tmp5658 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5659 = $tmp5658.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5660;
$tmp5660 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5660->value = $tmp5659;
frost$core$Int64 $tmp5661 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5662 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5661);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5663;
$tmp5663 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5663->value = $tmp5662;
ITable* $tmp5664 = ((frost$core$Equatable*) $tmp5660)->$class->itable;
while ($tmp5664->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5664 = $tmp5664->next;
}
$fn5666 $tmp5665 = $tmp5664->methods[0];
frost$core$Bit $tmp5667 = $tmp5665(((frost$core$Equatable*) $tmp5660), ((frost$core$Equatable*) $tmp5663));
bool $tmp5668 = $tmp5667.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5663)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5660)));
if ($tmp5668) goto block5; else goto block7;
block5:;
// line 2777
org$frostlang$frostc$FixedArray* $tmp5669 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
org$frostlang$frostc$FixedArray* $tmp5670 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
*(&local2) = $tmp5669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
// line 2778
org$frostlang$frostc$FixedArray* $tmp5671 = *(&local2);
frost$core$Bit $tmp5672 = frost$core$Bit$init$builtin_bit($tmp5671 == NULL);
bool $tmp5673 = $tmp5672.value;
if ($tmp5673) goto block8; else goto block9;
block8:;
// line 2779
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5674 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5674));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2783
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5675));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2785
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2786
org$frostlang$frostc$parser$Token $tmp5676 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5677 = $tmp5676.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5678;
$tmp5678 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5678->value = $tmp5677;
frost$core$Int64 $tmp5679 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5680 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5679);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5681;
$tmp5681 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5681->value = $tmp5680;
ITable* $tmp5682 = ((frost$core$Equatable*) $tmp5678)->$class->itable;
while ($tmp5682->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5682 = $tmp5682->next;
}
$fn5684 $tmp5683 = $tmp5682->methods[0];
frost$core$Bit $tmp5685 = $tmp5683(((frost$core$Equatable*) $tmp5678), ((frost$core$Equatable*) $tmp5681));
bool $tmp5686 = $tmp5685.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5681)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5678)));
if ($tmp5686) goto block10; else goto block12;
block10:;
// line 2787
org$frostlang$frostc$FixedArray* $tmp5687 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5687));
org$frostlang$frostc$FixedArray* $tmp5688 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
*(&local3) = $tmp5687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5687));
// line 2788
org$frostlang$frostc$FixedArray* $tmp5689 = *(&local3);
frost$core$Bit $tmp5690 = frost$core$Bit$init$builtin_bit($tmp5689 == NULL);
bool $tmp5691 = $tmp5690.value;
if ($tmp5691) goto block13; else goto block14;
block13:;
// line 2789
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5692 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5693 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5693));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2793
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5694));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2795
frost$core$Int64 $tmp5695 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5696 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5695);
org$frostlang$frostc$parser$Token$nullable $tmp5697 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5696, &$s5698);
frost$core$Bit $tmp5699 = frost$core$Bit$init$builtin_bit(!$tmp5697.nonnull);
bool $tmp5700 = $tmp5699.value;
if ($tmp5700) goto block15; else goto block16;
block15:;
// line 2796
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5701 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2798
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5703 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5703);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
frost$collections$Array* $tmp5704 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5704));
*(&local4) = $tmp5703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
// line 2799
goto block17;
block17:;
frost$core$Int64 $tmp5705 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5706 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5705);
org$frostlang$frostc$parser$Token$nullable $tmp5707 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5706);
frost$core$Bit $tmp5708 = frost$core$Bit$init$builtin_bit(!$tmp5707.nonnull);
bool $tmp5709 = $tmp5708.value;
if ($tmp5709) goto block18; else goto block19;
block18:;
// line 2800
org$frostlang$frostc$ASTNode* $tmp5710 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
org$frostlang$frostc$ASTNode* $tmp5711 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5711));
*(&local5) = $tmp5710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
// line 2801
org$frostlang$frostc$ASTNode* $tmp5712 = *(&local5);
frost$core$Bit $tmp5713 = frost$core$Bit$init$builtin_bit($tmp5712 == NULL);
bool $tmp5714 = $tmp5713.value;
if ($tmp5714) goto block20; else goto block21;
block20:;
// line 2802
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5715 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5715));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5716 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5717 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5718 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5718));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2804
frost$collections$Array* $tmp5719 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5720 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5719, ((frost$core$Object*) $tmp5720));
org$frostlang$frostc$ASTNode* $tmp5721 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2806
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5722 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5723 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5724 = *(&local0);
org$frostlang$frostc$Position $tmp5725 = ((org$frostlang$frostc$parser$Token) $tmp5724.value).position;
frost$core$Int64 $tmp5726 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5727 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5726);
org$frostlang$frostc$parser$Token$nullable $tmp5728 = *(&local1);
frost$core$String* $tmp5729 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5728.value));
org$frostlang$frostc$FixedArray* $tmp5730 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5731 = *(&local3);
frost$collections$Array* $tmp5732 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5733 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5732);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5722, $tmp5723, $tmp5725, param1, param2, $tmp5727, $tmp5729, $tmp5730, $tmp5731, $tmp5733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
frost$collections$Array* $tmp5734 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5722;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 2815
frost$core$Int64 $tmp5737 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5738 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5737);
org$frostlang$frostc$parser$Token$nullable $tmp5739 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5738, &$s5740);
*(&local0) = $tmp5739;
// line 2816
org$frostlang$frostc$parser$Token$nullable $tmp5741 = *(&local0);
frost$core$Bit $tmp5742 = frost$core$Bit$init$builtin_bit(!$tmp5741.nonnull);
bool $tmp5743 = $tmp5742.value;
if ($tmp5743) goto block1; else goto block2;
block1:;
// line 2817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2819
frost$core$Int64 $tmp5744 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5745 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5744);
org$frostlang$frostc$parser$Token$nullable $tmp5746 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5745, &$s5747);
*(&local1) = $tmp5746;
// line 2820
org$frostlang$frostc$parser$Token$nullable $tmp5748 = *(&local1);
frost$core$Bit $tmp5749 = frost$core$Bit$init$builtin_bit(!$tmp5748.nonnull);
bool $tmp5750 = $tmp5749.value;
if ($tmp5750) goto block3; else goto block4;
block3:;
// line 2821
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2823
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2824
org$frostlang$frostc$parser$Token $tmp5751 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5752 = $tmp5751.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5753;
$tmp5753 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5753->value = $tmp5752;
frost$core$Int64 $tmp5754 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5755 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5754);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5756;
$tmp5756 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5756->value = $tmp5755;
ITable* $tmp5757 = ((frost$core$Equatable*) $tmp5753)->$class->itable;
while ($tmp5757->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5757 = $tmp5757->next;
}
$fn5759 $tmp5758 = $tmp5757->methods[0];
frost$core$Bit $tmp5760 = $tmp5758(((frost$core$Equatable*) $tmp5753), ((frost$core$Equatable*) $tmp5756));
bool $tmp5761 = $tmp5760.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5756)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5753)));
if ($tmp5761) goto block5; else goto block7;
block5:;
// line 2825
org$frostlang$frostc$FixedArray* $tmp5762 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5762));
org$frostlang$frostc$FixedArray* $tmp5763 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
*(&local2) = $tmp5762;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5762));
// line 2826
org$frostlang$frostc$FixedArray* $tmp5764 = *(&local2);
frost$core$Bit $tmp5765 = frost$core$Bit$init$builtin_bit($tmp5764 == NULL);
bool $tmp5766 = $tmp5765.value;
if ($tmp5766) goto block8; else goto block9;
block8:;
// line 2827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2831
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp5768 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5768));
org$frostlang$frostc$FixedArray* $tmp5769 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5769));
*(&local2) = $tmp5768;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5768));
goto block6;
block6:;
// line 2833
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5770 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5770);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5770));
frost$collections$Array* $tmp5771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5771));
*(&local3) = $tmp5770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5770));
// line 2834
frost$core$Int64 $tmp5772 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5773 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5772);
org$frostlang$frostc$parser$Token$nullable $tmp5774 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5773);
frost$core$Bit $tmp5775 = frost$core$Bit$init$builtin_bit($tmp5774.nonnull);
bool $tmp5776 = $tmp5775.value;
if ($tmp5776) goto block10; else goto block11;
block10:;
// line 2835
org$frostlang$frostc$ASTNode* $tmp5777 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
org$frostlang$frostc$ASTNode* $tmp5778 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5778));
*(&local4) = $tmp5777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
// line 2836
org$frostlang$frostc$ASTNode* $tmp5779 = *(&local4);
frost$core$Bit $tmp5780 = frost$core$Bit$init$builtin_bit($tmp5779 == NULL);
bool $tmp5781 = $tmp5780.value;
if ($tmp5781) goto block12; else goto block13;
block12:;
// line 2837
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5782 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5783 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5783));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5784 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2839
frost$collections$Array* $tmp5785 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5786 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5785, ((frost$core$Object*) $tmp5786));
// line 2840
goto block14;
block14:;
frost$core$Int64 $tmp5787 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5788 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5787);
org$frostlang$frostc$parser$Token$nullable $tmp5789 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5788);
frost$core$Bit $tmp5790 = frost$core$Bit$init$builtin_bit($tmp5789.nonnull);
bool $tmp5791 = $tmp5790.value;
if ($tmp5791) goto block15; else goto block16;
block15:;
// line 2841
org$frostlang$frostc$ASTNode* $tmp5792 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
org$frostlang$frostc$ASTNode* $tmp5793 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5793));
*(&local4) = $tmp5792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
// line 2842
org$frostlang$frostc$ASTNode* $tmp5794 = *(&local4);
frost$core$Bit $tmp5795 = frost$core$Bit$init$builtin_bit($tmp5794 == NULL);
bool $tmp5796 = $tmp5795.value;
if ($tmp5796) goto block17; else goto block18;
block17:;
// line 2843
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5797 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5797));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2845
frost$collections$Array* $tmp5800 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5801 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5800, ((frost$core$Object*) $tmp5801));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5802 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5802));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2848
frost$core$Int64 $tmp5803 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5804 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5803);
org$frostlang$frostc$parser$Token$nullable $tmp5805 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5804, &$s5806);
frost$core$Bit $tmp5807 = frost$core$Bit$init$builtin_bit(!$tmp5805.nonnull);
bool $tmp5808 = $tmp5807.value;
if ($tmp5808) goto block19; else goto block20;
block19:;
// line 2849
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5809 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5810 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5810));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2851
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5811 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5811);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5811));
frost$collections$Array* $tmp5812 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5812));
*(&local5) = $tmp5811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5811));
// line 2852
goto block21;
block21:;
frost$core$Int64 $tmp5813 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5814 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5813);
org$frostlang$frostc$parser$Token$nullable $tmp5815 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5814);
frost$core$Bit $tmp5816 = frost$core$Bit$init$builtin_bit(!$tmp5815.nonnull);
bool $tmp5817 = $tmp5816.value;
if ($tmp5817) goto block22; else goto block23;
block22:;
// line 2853
org$frostlang$frostc$ASTNode* $tmp5818 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
org$frostlang$frostc$ASTNode* $tmp5819 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5819));
*(&local6) = $tmp5818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
// line 2854
org$frostlang$frostc$ASTNode* $tmp5820 = *(&local6);
frost$core$Bit $tmp5821 = frost$core$Bit$init$builtin_bit($tmp5820 == NULL);
bool $tmp5822 = $tmp5821.value;
if ($tmp5822) goto block24; else goto block25;
block24:;
// line 2855
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5823 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5823));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5824 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5824));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5825 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5825));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5826 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5826));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2857
frost$collections$Array* $tmp5827 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5828 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5827, ((frost$core$Object*) $tmp5828));
org$frostlang$frostc$ASTNode* $tmp5829 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2859
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5830 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5831 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5832 = *(&local0);
org$frostlang$frostc$Position $tmp5833 = ((org$frostlang$frostc$parser$Token) $tmp5832.value).position;
frost$core$Int64 $tmp5834 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5835 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5834);
org$frostlang$frostc$parser$Token$nullable $tmp5836 = *(&local1);
frost$core$String* $tmp5837 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5836.value));
org$frostlang$frostc$FixedArray* $tmp5838 = *(&local2);
frost$collections$Array* $tmp5839 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5840 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5839);
frost$collections$Array* $tmp5841 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5842 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5841);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5830, $tmp5831, $tmp5833, param1, param2, $tmp5835, $tmp5837, $tmp5838, $tmp5840, $tmp5842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5830));
frost$collections$Array* $tmp5843 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5843));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5844 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5844));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5845 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5845));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5830;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2868
org$frostlang$frostc$parser$Token $tmp5846 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5847 = $tmp5846.kind;
frost$core$Int64 $tmp5848 = $tmp5847.$rawValue;
frost$core$Int64 $tmp5849 = (frost$core$Int64) {16};
frost$core$Bit $tmp5850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5848, $tmp5849);
bool $tmp5851 = $tmp5850.value;
if ($tmp5851) goto block2; else goto block3;
block2:;
// line 2870
org$frostlang$frostc$ASTNode* $tmp5852 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5852));
return $tmp5852;
block3:;
// line 2873
org$frostlang$frostc$ASTNode* $tmp5853 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
return $tmp5853;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2882
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5854 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5854);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
frost$collections$Array* $tmp5855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5855));
*(&local0) = $tmp5854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
// line 2883
org$frostlang$frostc$parser$Token $tmp5856 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5857 = $tmp5856.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5858;
$tmp5858 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5858->value = $tmp5857;
frost$core$Int64 $tmp5859 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5860 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5859);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5861;
$tmp5861 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5861->value = $tmp5860;
ITable* $tmp5862 = ((frost$core$Equatable*) $tmp5858)->$class->itable;
while ($tmp5862->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5862 = $tmp5862->next;
}
$fn5864 $tmp5863 = $tmp5862->methods[0];
frost$core$Bit $tmp5865 = $tmp5863(((frost$core$Equatable*) $tmp5858), ((frost$core$Equatable*) $tmp5861));
bool $tmp5866 = $tmp5865.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5861)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5858)));
if ($tmp5866) goto block1; else goto block2;
block1:;
// line 2884
org$frostlang$frostc$ASTNode* $tmp5867 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5867));
org$frostlang$frostc$ASTNode* $tmp5868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5868));
*(&local1) = $tmp5867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5867));
// line 2885
org$frostlang$frostc$ASTNode* $tmp5869 = *(&local1);
frost$core$Bit $tmp5870 = frost$core$Bit$init$builtin_bit($tmp5869 != NULL);
bool $tmp5871 = $tmp5870.value;
if ($tmp5871) goto block3; else goto block4;
block3:;
// line 2886
frost$collections$Array* $tmp5872 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5873 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5872, ((frost$core$Object*) $tmp5873));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5874 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5874));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2889
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5875 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5876 = $tmp5875.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5877;
$tmp5877 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5877->value = $tmp5876;
frost$core$Int64 $tmp5878 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5879 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5878);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5880;
$tmp5880 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5880->value = $tmp5879;
ITable* $tmp5881 = ((frost$core$Equatable*) $tmp5877)->$class->itable;
while ($tmp5881->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5881 = $tmp5881->next;
}
$fn5883 $tmp5882 = $tmp5881->methods[1];
frost$core$Bit $tmp5884 = $tmp5882(((frost$core$Equatable*) $tmp5877), ((frost$core$Equatable*) $tmp5880));
bool $tmp5885 = $tmp5884.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5880)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5877)));
if ($tmp5885) goto block6; else goto block7;
block6:;
// line 2890
org$frostlang$frostc$ASTNode* $tmp5886 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5886));
org$frostlang$frostc$ASTNode* $tmp5887 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5887));
*(&local2) = $tmp5886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5886));
// line 2891
org$frostlang$frostc$ASTNode* $tmp5888 = *(&local2);
frost$core$Bit $tmp5889 = frost$core$Bit$init$builtin_bit($tmp5888 == NULL);
bool $tmp5890 = $tmp5889.value;
if ($tmp5890) goto block8; else goto block9;
block8:;
// line 2892
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5891 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5891));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5892 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5892));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2894
frost$collections$Stack** $tmp5893 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5894 = *$tmp5893;
frost$core$Int64 $tmp5895 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5894);
frost$core$Int64 $tmp5896 = (frost$core$Int64) {0};
frost$core$Bit $tmp5897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5895, $tmp5896);
bool $tmp5898 = $tmp5897.value;
if ($tmp5898) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5899 = (frost$core$Int64) {2894};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5900, $tmp5899);
abort(); // unreachable
block10:;
// line 2895
frost$collections$Array* $tmp5901 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5902 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5901, ((frost$core$Object*) $tmp5902));
org$frostlang$frostc$ASTNode* $tmp5903 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5903));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2897
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp5904 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5905 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5906 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5907 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5906);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5904, $tmp5905, $tmp5907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5904));
frost$collections$Array* $tmp5908 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5908));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5904;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5909 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5910 = *$tmp5909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5910));
org$frostlang$regex$RegexParser** $tmp5911 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5912 = *$tmp5911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5912));
frost$threads$MessageQueue** $tmp5913 = &param0->errors;
frost$threads$MessageQueue* $tmp5914 = *$tmp5913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5914));
frost$io$File** $tmp5915 = &param0->path;
frost$io$File* $tmp5916 = *$tmp5915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5916));
frost$core$String** $tmp5917 = &param0->source;
frost$core$String* $tmp5918 = *$tmp5917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5918));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5919 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5920 = *$tmp5919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5920));
frost$collections$Stack** $tmp5921 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5922 = *$tmp5921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
frost$collections$Stack** $tmp5923 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5924 = *$tmp5923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5924));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5925 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5926 = *$tmp5925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5926));
return;

}

