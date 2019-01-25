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
typedef frost$core$Bit (*$fn1417)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1725)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn1729)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef org$frostlang$frostc$Position (*$fn1745)(org$frostlang$frostc$ASTNode*);
typedef void (*$fn1749)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Bit (*$fn1771)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1781)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2088)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2234)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2243)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2280)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2337)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2429)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2620)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2774)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2916)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3017)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3028)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3039)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3077)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3241)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3294)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3802)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3827)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3863)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3880)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4200)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4357)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4365)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4693)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4726)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4737)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4862)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4884)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4905)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4965)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5038)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5064)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5129)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5227)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5257)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5438)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5564)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5639)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5744)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5763)(frost$core$Equatable*, frost$core$Equatable*);

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
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x31\x27", 5, 14631941951, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s3951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s3958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

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
org$frostlang$frostc$ASTNode* local7 = NULL;
frost$collections$Array* local8 = NULL;
frost$core$Bit local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
frost$collections$Array* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
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
// line 498
frost$core$Int64 $tmp1256 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1257 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1256);
org$frostlang$frostc$parser$Token$nullable $tmp1258 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1257, &$s1259);
frost$core$Bit $tmp1260 = frost$core$Bit$init$builtin_bit(!$tmp1258.nonnull);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block17; else goto block18;
block17:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 501
frost$core$Int64 $tmp1264 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1265 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1264);
org$frostlang$frostc$parser$Token$nullable $tmp1266 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1265, &$s1267);
frost$core$Bit $tmp1268 = frost$core$Bit$init$builtin_bit(!$tmp1266.nonnull);
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block19; else goto block20;
block19:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1271 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 504
org$frostlang$frostc$ASTNode* $tmp1272 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
org$frostlang$frostc$ASTNode* $tmp1273 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local7) = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// line 505
org$frostlang$frostc$ASTNode* $tmp1274 = *(&local7);
frost$core$Bit $tmp1275 = frost$core$Bit$init$builtin_bit($tmp1274 == NULL);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block21; else goto block22;
block21:;
// line 506
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1278 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1279 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 508
org$frostlang$frostc$ASTNode* $tmp1280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1281 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1282 = *(&local0);
org$frostlang$frostc$Position $tmp1283 = ((org$frostlang$frostc$parser$Token) $tmp1282.value).position;
frost$collections$Array* $tmp1284 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1285 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1284);
org$frostlang$frostc$ASTNode* $tmp1286 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1280, $tmp1281, $tmp1283, $tmp1285, $tmp1286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
org$frostlang$frostc$ASTNode* $tmp1287 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1289 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local3) = ((frost$collections$Array*) NULL);
return $tmp1280;
block7:;
frost$core$Int64 $tmp1290 = (frost$core$Int64) {109};
frost$core$Bit $tmp1291 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1290);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block23; else goto block24;
block23:;
// line 513
frost$collections$Array* $tmp1293 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1293);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$collections$Array* $tmp1294 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local8) = $tmp1293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
// line 514
frost$collections$Array* $tmp1295 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp1296 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1298 = *(&local1);
org$frostlang$frostc$Position $tmp1299 = $tmp1298.position;
org$frostlang$frostc$parser$Token $tmp1300 = *(&local1);
frost$core$String* $tmp1301 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1300);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1296, $tmp1297, $tmp1299, $tmp1301);
frost$collections$Array$add$frost$collections$Array$T($tmp1295, ((frost$core$Object*) $tmp1296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// line 515
frost$core$Bit $tmp1302 = frost$core$Bit$init$builtin_bit(true);
*(&local9) = $tmp1302;
// line 516
goto block25;
block25:;
// line 517
org$frostlang$frostc$ASTNode* $tmp1303 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
org$frostlang$frostc$ASTNode* $tmp1304 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local10) = $tmp1303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// line 518
org$frostlang$frostc$ASTNode* $tmp1305 = *(&local10);
frost$core$Bit $tmp1306 = frost$core$Bit$init$builtin_bit($tmp1305 == NULL);
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block28; else goto block29;
block28:;
// line 519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1309 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 521
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local10);
frost$core$Int64* $tmp1311 = &$tmp1310->$rawValue;
frost$core$Int64 $tmp1312 = *$tmp1311;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {22};
frost$core$Bit $tmp1314 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1312, $tmp1313);
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block31; else goto block32;
block31:;
goto block30;
block32:;
// line 526
frost$core$Bit $tmp1316 = frost$core$Bit$init$builtin_bit(false);
*(&local9) = $tmp1316;
goto block30;
block30:;
// line 529
frost$collections$Array* $tmp1317 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp1318 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp1317, ((frost$core$Object*) $tmp1318));
org$frostlang$frostc$ASTNode* $tmp1319 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block26:;
frost$core$Int64 $tmp1320 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1321 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1320);
org$frostlang$frostc$parser$Token$nullable $tmp1322 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1321);
frost$core$Bit $tmp1323 = frost$core$Bit$init$builtin_bit($tmp1322.nonnull);
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block25; else goto block27;
block27:;
// line 532
frost$core$Int64 $tmp1325 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1326 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1325);
org$frostlang$frostc$parser$Token$nullable $tmp1327 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1326, &$s1328);
frost$core$Bit $tmp1329 = frost$core$Bit$init$builtin_bit(!$tmp1327.nonnull);
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block33; else goto block34;
block33:;
// line 533
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1331 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// line 535
frost$core$Bit $tmp1332 = *(&local9);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block37; else goto block36;
block37:;
frost$core$Int64 $tmp1334 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1335 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1334);
org$frostlang$frostc$parser$Token$nullable $tmp1336 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1335);
frost$core$Bit $tmp1337 = frost$core$Bit$init$builtin_bit($tmp1336.nonnull);
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block35; else goto block36;
block35:;
// line 536
org$frostlang$frostc$ASTNode* $tmp1339 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
org$frostlang$frostc$ASTNode* $tmp1340 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local11) = $tmp1339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
// line 537
org$frostlang$frostc$ASTNode* $tmp1341 = *(&local11);
frost$core$Bit $tmp1342 = frost$core$Bit$init$builtin_bit($tmp1341 == NULL);
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block38; else goto block39;
block38:;
// line 538
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1345 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block39:;
// line 540
org$frostlang$frostc$ASTNode* $tmp1346 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1347 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1348 = *(&local0);
org$frostlang$frostc$Position $tmp1349 = ((org$frostlang$frostc$parser$Token) $tmp1348.value).position;
frost$collections$Array* $tmp1350 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1351 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1350);
org$frostlang$frostc$ASTNode* $tmp1352 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1346, $tmp1347, $tmp1349, $tmp1351, $tmp1352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
org$frostlang$frostc$ASTNode* $tmp1353 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1354 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp1346;
block36:;
// line 543
org$frostlang$frostc$ASTNode* $tmp1355 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1356 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1357 = *(&local0);
org$frostlang$frostc$Position $tmp1358 = ((org$frostlang$frostc$parser$Token) $tmp1357.value).position;
frost$collections$Array* $tmp1359 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1360 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1359);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1355, $tmp1356, $tmp1358, $tmp1360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$Array* $tmp1361 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp1355;
block24:;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {108};
frost$core$Bit $tmp1363 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1362);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block40; else goto block41;
block40:;
// line 547
frost$core$Int64 $tmp1365 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1366 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1365);
org$frostlang$frostc$parser$Token$nullable $tmp1367 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1366);
frost$core$Bit $tmp1368 = frost$core$Bit$init$builtin_bit($tmp1367.nonnull);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block42; else goto block43;
block42:;
// line 548
frost$collections$Array* $tmp1370 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1370);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$collections$Array* $tmp1371 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local12) = $tmp1370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// line 549
frost$collections$Array* $tmp1372 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp1373 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1375 = *(&local1);
org$frostlang$frostc$Position $tmp1376 = $tmp1375.position;
org$frostlang$frostc$parser$Token $tmp1377 = *(&local1);
frost$core$String* $tmp1378 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1377);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1373, $tmp1374, $tmp1376, $tmp1378);
frost$collections$Array$add$frost$collections$Array$T($tmp1372, ((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// line 550
org$frostlang$frostc$ASTNode* $tmp1379 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
org$frostlang$frostc$ASTNode* $tmp1380 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local13) = $tmp1379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// line 551
org$frostlang$frostc$ASTNode* $tmp1381 = *(&local13);
frost$core$Bit $tmp1382 = frost$core$Bit$init$builtin_bit($tmp1381 == NULL);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block44; else goto block45;
block44:;
// line 552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1384 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1385 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local12) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block45:;
// line 554
org$frostlang$frostc$ASTNode* $tmp1386 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1387 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1388 = *(&local0);
org$frostlang$frostc$Position $tmp1389 = ((org$frostlang$frostc$parser$Token) $tmp1388.value).position;
frost$collections$Array* $tmp1390 = *(&local12);
org$frostlang$frostc$FixedArray* $tmp1391 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1390);
org$frostlang$frostc$ASTNode* $tmp1392 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1386, $tmp1387, $tmp1389, $tmp1391, $tmp1392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
org$frostlang$frostc$ASTNode* $tmp1393 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1394 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local12) = ((frost$collections$Array*) NULL);
return $tmp1386;
block43:;
// line 558
org$frostlang$frostc$ASTNode* $tmp1395 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1396 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1397 = *(&local1);
org$frostlang$frostc$Position $tmp1398 = $tmp1397.position;
org$frostlang$frostc$parser$Token $tmp1399 = *(&local1);
frost$core$String* $tmp1400 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1399);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1395, $tmp1396, $tmp1398, $tmp1400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
return $tmp1395;
block41:;
// line 561
org$frostlang$frostc$parser$Token $tmp1401 = *(&local2);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1401);
goto block5;
block5:;
goto block4;
block4:;
// line 565
org$frostlang$frostc$parser$Token $tmp1402 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1402);
// line 566
org$frostlang$frostc$ASTNode* $tmp1403 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
org$frostlang$frostc$ASTNode* $tmp1404 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local14) = $tmp1403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// line 567
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local14);
frost$core$Bit $tmp1406 = frost$core$Bit$init$builtin_bit($tmp1405 == NULL);
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block46; else goto block47;
block46:;
// line 568
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1408 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block47:;
// line 570
org$frostlang$frostc$parser$Token $tmp1409 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1410 = $tmp1409.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1411;
$tmp1411 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1411->value = $tmp1410;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1413 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1412);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1414;
$tmp1414 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1414->value = $tmp1413;
ITable* $tmp1415 = ((frost$core$Equatable*) $tmp1411)->$class->itable;
while ($tmp1415->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1415 = $tmp1415->next;
}
$fn1417 $tmp1416 = $tmp1415->methods[0];
frost$core$Bit $tmp1418 = $tmp1416(((frost$core$Equatable*) $tmp1411), ((frost$core$Equatable*) $tmp1414));
bool $tmp1419 = $tmp1418.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1414)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1411)));
if ($tmp1419) goto block48; else goto block49;
block48:;
// line 572
frost$collections$Array* $tmp1420 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1421 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1420, $tmp1421);
org$frostlang$frostc$ASTNode* $tmp1422 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1420, ((frost$core$Object*) $tmp1422));
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$collections$Array* $tmp1423 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local15) = $tmp1420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// line 573
goto block50;
block50:;
frost$core$Int64 $tmp1424 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1425 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1424);
org$frostlang$frostc$parser$Token$nullable $tmp1426 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1425);
frost$core$Bit $tmp1427 = frost$core$Bit$init$builtin_bit($tmp1426.nonnull);
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block51; else goto block52;
block51:;
// line 574
org$frostlang$frostc$ASTNode* $tmp1429 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
org$frostlang$frostc$ASTNode* $tmp1430 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local16) = $tmp1429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// line 575
org$frostlang$frostc$ASTNode* $tmp1431 = *(&local16);
frost$core$Bit $tmp1432 = frost$core$Bit$init$builtin_bit($tmp1431 == NULL);
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block53; else goto block54;
block53:;
// line 576
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1434 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1435 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1436 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block54:;
// line 578
frost$collections$Array* $tmp1437 = *(&local15);
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1437, ((frost$core$Object*) $tmp1438));
org$frostlang$frostc$ASTNode* $tmp1439 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block50;
block52:;
// line 580
org$frostlang$frostc$ASTNode* $tmp1440 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1441 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1442 = *(&local0);
org$frostlang$frostc$Position $tmp1443 = ((org$frostlang$frostc$parser$Token) $tmp1442.value).position;
frost$collections$Array* $tmp1444 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1445 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1444);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1440, $tmp1441, $tmp1443, $tmp1445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
org$frostlang$frostc$ASTNode* $tmp1446 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local14) = $tmp1440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$collections$Array* $tmp1447 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local15) = ((frost$collections$Array*) NULL);
goto block49;
block49:;
// line 582
frost$core$Int64 $tmp1448 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1449 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1448);
org$frostlang$frostc$parser$Token$nullable $tmp1450 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1449, &$s1451);
// line 583
org$frostlang$frostc$ASTNode* $tmp1452 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1452;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 590
frost$core$Int64 $tmp1454 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp1455 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1454);
org$frostlang$frostc$parser$Token$nullable $tmp1456 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1455, &$s1457);
*(&local0) = $tmp1456;
// line 591
frost$collections$Array* $tmp1458 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1458);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$collections$Array* $tmp1459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local1) = $tmp1458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// line 592
frost$core$Int64 $tmp1460 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1461 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1460);
org$frostlang$frostc$parser$Token$nullable $tmp1462 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1461);
frost$core$Bit $tmp1463 = frost$core$Bit$init$builtin_bit(!$tmp1462.nonnull);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block1; else goto block2;
block1:;
// line 593
frost$collections$Stack** $tmp1465 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1466 = *$tmp1465;
frost$core$Bit $tmp1467 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1468;
$tmp1468 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1468->value = $tmp1467;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1466, ((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// line 594
frost$core$Int64 $tmp1469 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1470 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1469);
org$frostlang$frostc$parser$Token$nullable $tmp1471 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1470);
frost$core$Bit $tmp1472 = frost$core$Bit$init$builtin_bit(!$tmp1471.nonnull);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block3; else goto block4;
block3:;
// line 595
org$frostlang$frostc$ASTNode* $tmp1474 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
org$frostlang$frostc$ASTNode* $tmp1475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local2) = $tmp1474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
// line 596
org$frostlang$frostc$ASTNode* $tmp1476 = *(&local2);
frost$core$Bit $tmp1477 = frost$core$Bit$init$builtin_bit($tmp1476 == NULL);
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block5; else goto block6;
block5:;
// line 597
frost$collections$Stack** $tmp1479 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1480 = *$tmp1479;
frost$core$Object* $tmp1481 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1480);
frost$core$Frost$unref$frost$core$Object$Q($tmp1481);
// line 598
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 600
frost$collections$Array* $tmp1484 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1485 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1484, ((frost$core$Object*) $tmp1485));
// line 601
goto block7;
block7:;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1487 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1486);
org$frostlang$frostc$parser$Token$nullable $tmp1488 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1487);
frost$core$Bit $tmp1489 = frost$core$Bit$init$builtin_bit($tmp1488.nonnull);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block8; else goto block9;
block8:;
// line 602
org$frostlang$frostc$ASTNode* $tmp1491 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
org$frostlang$frostc$ASTNode* $tmp1492 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local2) = $tmp1491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
// line 603
org$frostlang$frostc$ASTNode* $tmp1493 = *(&local2);
frost$core$Bit $tmp1494 = frost$core$Bit$init$builtin_bit($tmp1493 == NULL);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block10; else goto block11;
block10:;
// line 604
frost$collections$Stack** $tmp1496 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1497 = *$tmp1496;
frost$core$Object* $tmp1498 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1497);
frost$core$Frost$unref$frost$core$Object$Q($tmp1498);
// line 605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 607
frost$collections$Array* $tmp1501 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1502 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1501, ((frost$core$Object*) $tmp1502));
goto block7;
block9:;
// line 609
frost$core$Int64 $tmp1503 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1504 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1503);
org$frostlang$frostc$parser$Token$nullable $tmp1505 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1504, &$s1506);
frost$core$Bit $tmp1507 = frost$core$Bit$init$builtin_bit(!$tmp1505.nonnull);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block12; else goto block13;
block12:;
// line 610
frost$collections$Stack** $tmp1509 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1510 = *$tmp1509;
frost$core$Object* $tmp1511 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1510);
frost$core$Frost$unref$frost$core$Object$Q($tmp1511);
// line 611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1512 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp1514 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 614
frost$collections$Stack** $tmp1515 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1516 = *$tmp1515;
frost$core$Object* $tmp1517 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1516);
frost$core$Frost$unref$frost$core$Object$Q($tmp1517);
goto block2;
block2:;
// line 616
org$frostlang$frostc$ASTNode* $tmp1518 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1519 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$Token$nullable $tmp1520 = *(&local0);
org$frostlang$frostc$Position $tmp1521 = ((org$frostlang$frostc$parser$Token) $tmp1520.value).position;
frost$collections$Array* $tmp1522 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1523 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1522);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1518, $tmp1519, $tmp1521, $tmp1523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$collections$Array* $tmp1524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1518;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 623
frost$core$Int64 $tmp1525 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1526 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1525);
org$frostlang$frostc$parser$Token$nullable $tmp1527 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1526, &$s1528);
*(&local0) = $tmp1527;
// line 624
frost$core$Int64 $tmp1529 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1530 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1529);
org$frostlang$frostc$parser$Token$nullable $tmp1531 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1530);
frost$core$Bit $tmp1532 = frost$core$Bit$init$builtin_bit($tmp1531.nonnull);
bool $tmp1533 = $tmp1532.value;
if ($tmp1533) goto block1; else goto block2;
block1:;
// line 625
org$frostlang$frostc$ASTNode* $tmp1534 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
org$frostlang$frostc$ASTNode* $tmp1535 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local1) = $tmp1534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// line 626
org$frostlang$frostc$ASTNode* $tmp1536 = *(&local1);
frost$core$Bit $tmp1537 = frost$core$Bit$init$builtin_bit($tmp1536 == NULL);
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block3; else goto block4;
block3:;
// line 627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1539 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 629
frost$collections$Array* $tmp1540 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1540);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
frost$collections$Array* $tmp1541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local2) = $tmp1540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
// line 630
frost$collections$Array* $tmp1542 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1543 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1544 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1545 = *(&local0);
org$frostlang$frostc$Position $tmp1546 = ((org$frostlang$frostc$parser$Token) $tmp1545.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1547 = *(&local0);
frost$core$String* $tmp1548 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1547.value));
org$frostlang$frostc$ASTNode* $tmp1549 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1543, $tmp1544, $tmp1546, $tmp1548, $tmp1549);
frost$collections$Array$add$frost$collections$Array$T($tmp1542, ((frost$core$Object*) $tmp1543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
// line 631
frost$core$Int64 $tmp1550 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1551 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1550);
org$frostlang$frostc$parser$Token$nullable $tmp1552 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1551, &$s1553);
frost$core$Bit $tmp1554 = frost$core$Bit$init$builtin_bit(!$tmp1552.nonnull);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block5; else goto block6;
block5:;
// line 632
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1556 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 634
org$frostlang$frostc$ASTNode* $tmp1558 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
org$frostlang$frostc$ASTNode* $tmp1559 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
*(&local3) = $tmp1558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
// line 635
org$frostlang$frostc$ASTNode* $tmp1560 = *(&local3);
frost$core$Bit $tmp1561 = frost$core$Bit$init$builtin_bit($tmp1560 == NULL);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block7; else goto block8;
block7:;
// line 636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1564 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1565 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 638
org$frostlang$frostc$ASTNode* $tmp1566 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1567 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1568 = *(&local0);
org$frostlang$frostc$Position $tmp1569 = ((org$frostlang$frostc$parser$Token) $tmp1568.value).position;
frost$collections$Array* $tmp1570 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp1571 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1570);
org$frostlang$frostc$ASTNode* $tmp1572 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1566, $tmp1567, $tmp1569, $tmp1571, $tmp1572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
org$frostlang$frostc$ASTNode* $tmp1573 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1575 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1566;
block2:;
// line 641
frost$collections$Array* $tmp1576 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1576);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
frost$collections$Array* $tmp1577 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local4) = $tmp1576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
// line 642
frost$collections$Array* $tmp1578 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1579 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1580 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp1581 = *(&local0);
org$frostlang$frostc$Position $tmp1582 = ((org$frostlang$frostc$parser$Token) $tmp1581.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1583 = *(&local0);
frost$core$String* $tmp1584 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1583.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1579, $tmp1580, $tmp1582, $tmp1584);
frost$collections$Array$add$frost$collections$Array$T($tmp1578, ((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// line 643
frost$core$Int64 $tmp1585 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1586 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1585);
org$frostlang$frostc$parser$Token$nullable $tmp1587 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1586, &$s1588);
frost$core$Bit $tmp1589 = frost$core$Bit$init$builtin_bit(!$tmp1587.nonnull);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1591 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 646
org$frostlang$frostc$ASTNode* $tmp1592 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
org$frostlang$frostc$ASTNode* $tmp1593 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local5) = $tmp1592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
// line 647
org$frostlang$frostc$ASTNode* $tmp1594 = *(&local5);
frost$core$Bit $tmp1595 = frost$core$Bit$init$builtin_bit($tmp1594 == NULL);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block11; else goto block12;
block11:;
// line 648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1598 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 650
org$frostlang$frostc$ASTNode* $tmp1599 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1600 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1601 = *(&local0);
org$frostlang$frostc$Position $tmp1602 = ((org$frostlang$frostc$parser$Token) $tmp1601.value).position;
frost$collections$Array* $tmp1603 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp1604 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1603);
org$frostlang$frostc$ASTNode* $tmp1605 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1599, $tmp1600, $tmp1602, $tmp1604, $tmp1605);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
org$frostlang$frostc$ASTNode* $tmp1606 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1599;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 658
frost$core$Int64 $tmp1608 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1609 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1608);
org$frostlang$frostc$parser$Token$nullable $tmp1610 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1609, &$s1611);
frost$core$Bit $tmp1612 = frost$core$Bit$init$builtin_bit(!$tmp1610.nonnull);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block1; else goto block2;
block1:;
// line 659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 662
org$frostlang$frostc$parser$Lexer** $tmp1614 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1615 = *$tmp1614;
org$frostlang$plex$runtime$DFA** $tmp1616 = &$tmp1615->dfa;
org$frostlang$plex$runtime$DFA* $tmp1617 = *$tmp1616;
frost$core$Int64* $tmp1618 = &$tmp1617->offset;
frost$core$Int64 $tmp1619 = *$tmp1618;
frost$core$Int64 $tmp1620 = (frost$core$Int64) {1};
int64_t $tmp1621 = $tmp1619.value;
int64_t $tmp1622 = $tmp1620.value;
int64_t $tmp1623 = $tmp1621 - $tmp1622;
frost$core$Int64 $tmp1624 = (frost$core$Int64) {$tmp1623};
*(&local0) = $tmp1624;
// line 663
org$frostlang$regex$RegexParser** $tmp1625 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1626 = *$tmp1625;
org$frostlang$regex$RegexLexer** $tmp1627 = &$tmp1626->lexer;
org$frostlang$regex$RegexLexer* $tmp1628 = *$tmp1627;
org$frostlang$plex$runtime$DFA** $tmp1629 = &$tmp1628->dfa;
org$frostlang$plex$runtime$DFA* $tmp1630 = *$tmp1629;
org$frostlang$frostc$parser$Lexer** $tmp1631 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1632 = *$tmp1631;
org$frostlang$plex$runtime$DFA** $tmp1633 = &$tmp1632->dfa;
org$frostlang$plex$runtime$DFA* $tmp1634 = *$tmp1633;
frost$core$Int64* $tmp1635 = &$tmp1634->offset;
frost$core$Int64 $tmp1636 = *$tmp1635;
frost$core$Int64* $tmp1637 = &$tmp1630->offset;
*$tmp1637 = $tmp1636;
// line 664
org$frostlang$regex$RegexParser** $tmp1638 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1639 = *$tmp1638;
org$frostlang$regex$RegexLexer** $tmp1640 = &$tmp1639->lexer;
org$frostlang$regex$RegexLexer* $tmp1641 = *$tmp1640;
org$frostlang$plex$runtime$DFA** $tmp1642 = &$tmp1641->dfa;
org$frostlang$plex$runtime$DFA* $tmp1643 = *$tmp1642;
org$frostlang$frostc$parser$Lexer** $tmp1644 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1645 = *$tmp1644;
org$frostlang$plex$runtime$DFA** $tmp1646 = &$tmp1645->dfa;
org$frostlang$plex$runtime$DFA* $tmp1647 = *$tmp1646;
frost$core$Int64* $tmp1648 = &$tmp1647->line;
frost$core$Int64 $tmp1649 = *$tmp1648;
frost$core$Int64* $tmp1650 = &$tmp1643->line;
*$tmp1650 = $tmp1649;
// line 665
org$frostlang$regex$RegexParser** $tmp1651 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1652 = *$tmp1651;
org$frostlang$regex$RegexLexer** $tmp1653 = &$tmp1652->lexer;
org$frostlang$regex$RegexLexer* $tmp1654 = *$tmp1653;
org$frostlang$plex$runtime$DFA** $tmp1655 = &$tmp1654->dfa;
org$frostlang$plex$runtime$DFA* $tmp1656 = *$tmp1655;
org$frostlang$frostc$parser$Lexer** $tmp1657 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1658 = *$tmp1657;
org$frostlang$plex$runtime$DFA** $tmp1659 = &$tmp1658->dfa;
org$frostlang$plex$runtime$DFA* $tmp1660 = *$tmp1659;
frost$core$Int64* $tmp1661 = &$tmp1660->column;
frost$core$Int64 $tmp1662 = *$tmp1661;
frost$core$Int64* $tmp1663 = &$tmp1656->column;
*$tmp1663 = $tmp1662;
// line 666
org$frostlang$regex$RegexParser** $tmp1664 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1665 = *$tmp1664;
org$frostlang$frostc$ASTNode* $tmp1666 = org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q($tmp1665);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
org$frostlang$frostc$ASTNode* $tmp1667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local1) = $tmp1666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
// line 667
org$frostlang$frostc$parser$Lexer** $tmp1668 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1669 = *$tmp1668;
org$frostlang$plex$runtime$DFA** $tmp1670 = &$tmp1669->dfa;
org$frostlang$plex$runtime$DFA* $tmp1671 = *$tmp1670;
org$frostlang$regex$RegexParser** $tmp1672 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1673 = *$tmp1672;
org$frostlang$regex$RegexLexer** $tmp1674 = &$tmp1673->lexer;
org$frostlang$regex$RegexLexer* $tmp1675 = *$tmp1674;
org$frostlang$plex$runtime$DFA** $tmp1676 = &$tmp1675->dfa;
org$frostlang$plex$runtime$DFA* $tmp1677 = *$tmp1676;
frost$core$Int64* $tmp1678 = &$tmp1677->offset;
frost$core$Int64 $tmp1679 = *$tmp1678;
frost$core$Int64* $tmp1680 = &$tmp1671->offset;
*$tmp1680 = $tmp1679;
// line 668
org$frostlang$frostc$parser$Lexer** $tmp1681 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1682 = *$tmp1681;
org$frostlang$plex$runtime$DFA** $tmp1683 = &$tmp1682->dfa;
org$frostlang$plex$runtime$DFA* $tmp1684 = *$tmp1683;
org$frostlang$regex$RegexParser** $tmp1685 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1686 = *$tmp1685;
org$frostlang$regex$RegexLexer** $tmp1687 = &$tmp1686->lexer;
org$frostlang$regex$RegexLexer* $tmp1688 = *$tmp1687;
org$frostlang$plex$runtime$DFA** $tmp1689 = &$tmp1688->dfa;
org$frostlang$plex$runtime$DFA* $tmp1690 = *$tmp1689;
frost$core$Int64* $tmp1691 = &$tmp1690->line;
frost$core$Int64 $tmp1692 = *$tmp1691;
frost$core$Int64* $tmp1693 = &$tmp1684->line;
*$tmp1693 = $tmp1692;
// line 669
org$frostlang$frostc$parser$Lexer** $tmp1694 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1695 = *$tmp1694;
org$frostlang$plex$runtime$DFA** $tmp1696 = &$tmp1695->dfa;
org$frostlang$plex$runtime$DFA* $tmp1697 = *$tmp1696;
org$frostlang$regex$RegexParser** $tmp1698 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1699 = *$tmp1698;
org$frostlang$regex$RegexLexer** $tmp1700 = &$tmp1699->lexer;
org$frostlang$regex$RegexLexer* $tmp1701 = *$tmp1700;
org$frostlang$plex$runtime$DFA** $tmp1702 = &$tmp1701->dfa;
org$frostlang$plex$runtime$DFA* $tmp1703 = *$tmp1702;
frost$core$Int64* $tmp1704 = &$tmp1703->column;
frost$core$Int64 $tmp1705 = *$tmp1704;
frost$core$Int64* $tmp1706 = &$tmp1697->column;
*$tmp1706 = $tmp1705;
// line 670
org$frostlang$frostc$ASTNode* $tmp1707 = *(&local1);
frost$core$Bit $tmp1708 = frost$core$Bit$init$builtin_bit($tmp1707 == NULL);
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block3; else goto block4;
block3:;
// line 671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 673
frost$core$Int64 $tmp1711 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1712 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1711);
org$frostlang$frostc$parser$Token$nullable $tmp1713 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1712, &$s1714);
frost$core$Bit $tmp1715 = frost$core$Bit$init$builtin_bit(!$tmp1713.nonnull);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block5; else goto block6;
block5:;
// line 674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 676
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1718 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1719 = *$tmp1718;
frost$core$Bit $tmp1720 = frost$core$Bit$init$builtin_bit($tmp1719 != NULL);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block7; else goto block8;
block7:;
// line 678
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1722 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1723 = *$tmp1722;
$fn1725 $tmp1724 = ($fn1725) $tmp1723->$class->vtable[7];
$tmp1724($tmp1723);
// line 679
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1726 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1727 = *$tmp1726;
$fn1729 $tmp1728 = ($fn1729) $tmp1727->$class->vtable[7];
$tmp1728($tmp1727);
// line 681
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1730 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1731 = *$tmp1730;
frost$core$Int64 $tmp1732 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$Kind $tmp1733 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1732);
frost$core$Int64 $tmp1734 = *(&local0);
frost$core$String$Index $tmp1735 = frost$core$String$Index$init$frost$core$Int64($tmp1734);
org$frostlang$frostc$parser$Lexer** $tmp1736 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1737 = *$tmp1736;
org$frostlang$plex$runtime$DFA** $tmp1738 = &$tmp1737->dfa;
org$frostlang$plex$runtime$DFA* $tmp1739 = *$tmp1738;
frost$core$Int64* $tmp1740 = &$tmp1739->offset;
frost$core$Int64 $tmp1741 = *$tmp1740;
frost$core$String$Index $tmp1742 = frost$core$String$Index$init$frost$core$Int64($tmp1741);
org$frostlang$frostc$ASTNode* $tmp1743 = *(&local1);
$fn1745 $tmp1744 = ($fn1745) $tmp1743->$class->vtable[2];
org$frostlang$frostc$Position $tmp1746 = $tmp1744($tmp1743);
org$frostlang$frostc$parser$Token $tmp1747 = org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp1733, $tmp1735, $tmp1742, $tmp1746);
$fn1749 $tmp1748 = ($fn1749) $tmp1731->$class->vtable[6];
$tmp1748($tmp1731, $tmp1747);
goto block8;
block8:;
// line 684
org$frostlang$frostc$ASTNode* $tmp1750 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
org$frostlang$frostc$ASTNode* $tmp1751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1750;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$Kind local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 694
org$frostlang$frostc$parser$Token $tmp1752 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp1752;
// line 695
org$frostlang$frostc$parser$Token $tmp1753 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp1754 = $tmp1753.kind;
frost$core$Int64 $tmp1755 = $tmp1754.$rawValue;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {52};
frost$core$Bit $tmp1757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1756);
bool $tmp1758 = $tmp1757.value;
if ($tmp1758) goto block2; else goto block3;
block2:;
// line 697
org$frostlang$frostc$parser$Token $tmp1759 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1760 = $tmp1759.kind;
*(&local1) = $tmp1760;
// line 698
frost$core$Bit* $tmp1761 = &param0->allowLambdas;
frost$core$Bit $tmp1762 = *$tmp1761;
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$Token$Kind $tmp1764 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1765;
$tmp1765 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1765->value = $tmp1764;
frost$core$Int64 $tmp1766 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1767 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1766);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1768;
$tmp1768 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1768->value = $tmp1767;
ITable* $tmp1769 = ((frost$core$Equatable*) $tmp1765)->$class->itable;
while ($tmp1769->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1769 = $tmp1769->next;
}
$fn1771 $tmp1770 = $tmp1769->methods[0];
frost$core$Bit $tmp1772 = $tmp1770(((frost$core$Equatable*) $tmp1765), ((frost$core$Equatable*) $tmp1768));
bool $tmp1773 = $tmp1772.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1768)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1765)));
if ($tmp1773) goto block4; else goto block6;
block6:;
org$frostlang$frostc$parser$Token$Kind $tmp1774 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1775;
$tmp1775 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1775->value = $tmp1774;
frost$core$Int64 $tmp1776 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1777 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1776);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1778;
$tmp1778 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1778->value = $tmp1777;
ITable* $tmp1779 = ((frost$core$Equatable*) $tmp1775)->$class->itable;
while ($tmp1779->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[0];
frost$core$Bit $tmp1782 = $tmp1780(((frost$core$Equatable*) $tmp1775), ((frost$core$Equatable*) $tmp1778));
bool $tmp1783 = $tmp1782.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1778)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1775)));
if ($tmp1783) goto block4; else goto block5;
block4:;
// line 699
org$frostlang$frostc$parser$Token $tmp1784 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1784);
// line 700
org$frostlang$frostc$ASTNode* $tmp1785 = org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
return $tmp1785;
block5:;
// line 702
org$frostlang$frostc$ASTNode* $tmp1786 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1787 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1788 = *(&local0);
org$frostlang$frostc$Position $tmp1789 = $tmp1788.position;
org$frostlang$frostc$parser$Token $tmp1790 = *(&local0);
frost$core$String* $tmp1791 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1790);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1786, $tmp1787, $tmp1789, $tmp1791);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
return $tmp1786;
block3:;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {3};
frost$core$Bit $tmp1793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block8; else goto block9;
block8:;
// line 705
org$frostlang$frostc$ASTNode* $tmp1795 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1796 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1797 = *(&local0);
org$frostlang$frostc$Position $tmp1798 = $tmp1797.position;
org$frostlang$frostc$parser$Token $tmp1799 = *(&local0);
frost$core$String* $tmp1800 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1799);
frost$core$UInt64$nullable $tmp1801 = frost$core$String$get_asUInt64$R$frost$core$UInt64$Q($tmp1800);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1795, $tmp1796, $tmp1798, ((frost$core$UInt64) $tmp1801.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
return $tmp1795;
block9:;
frost$core$Int64 $tmp1802 = (frost$core$Int64) {4};
frost$core$Bit $tmp1803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1802);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block10; else goto block11;
block10:;
// line 708
org$frostlang$frostc$ASTNode* $tmp1805 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1807 = *(&local0);
org$frostlang$frostc$Position $tmp1808 = $tmp1807.position;
org$frostlang$frostc$parser$Token $tmp1809 = *(&local0);
frost$core$String* $tmp1810 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1809);
frost$core$Int64 $tmp1811 = (frost$core$Int64) {2};
frost$core$Bit $tmp1812 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1813 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1811, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1812);
frost$core$String* $tmp1814 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1810, $tmp1813);
frost$core$Int64 $tmp1815 = (frost$core$Int64) {2};
frost$core$UInt64$nullable $tmp1816 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1814, $tmp1815);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1805, $tmp1806, $tmp1808, ((frost$core$UInt64) $tmp1816.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
return $tmp1805;
block11:;
frost$core$Int64 $tmp1817 = (frost$core$Int64) {5};
frost$core$Bit $tmp1818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1817);
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block12; else goto block13;
block12:;
// line 711
org$frostlang$frostc$ASTNode* $tmp1820 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1821 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1822 = *(&local0);
org$frostlang$frostc$Position $tmp1823 = $tmp1822.position;
org$frostlang$frostc$parser$Token $tmp1824 = *(&local0);
frost$core$String* $tmp1825 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1824);
frost$core$Int64 $tmp1826 = (frost$core$Int64) {2};
frost$core$Bit $tmp1827 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1828 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1826, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1827);
frost$core$String* $tmp1829 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1825, $tmp1828);
frost$core$Int64 $tmp1830 = (frost$core$Int64) {16};
frost$core$UInt64$nullable $tmp1831 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1829, $tmp1830);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1820, $tmp1821, $tmp1823, ((frost$core$UInt64) $tmp1831.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
return $tmp1820;
block13:;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {6};
frost$core$Bit $tmp1833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1832);
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block14; else goto block15;
block14:;
// line 714
org$frostlang$frostc$ASTNode* $tmp1835 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token $tmp1837 = *(&local0);
org$frostlang$frostc$Position $tmp1838 = $tmp1837.position;
org$frostlang$frostc$parser$Token $tmp1839 = *(&local0);
frost$core$String* $tmp1840 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1839);
frost$core$Real64$nullable $tmp1841 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp1840);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64($tmp1835, $tmp1836, $tmp1838, ((frost$core$Real64) $tmp1841.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
return $tmp1835;
block15:;
frost$core$Int64 $tmp1842 = (frost$core$Int64) {49};
frost$core$Bit $tmp1843 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1842);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block16; else goto block17;
block16:;
// line 717
org$frostlang$frostc$ASTNode* $tmp1845 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1846 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token $tmp1847 = *(&local0);
org$frostlang$frostc$Position $tmp1848 = $tmp1847.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1845, $tmp1846, $tmp1848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
return $tmp1845;
block17:;
frost$core$Int64 $tmp1849 = (frost$core$Int64) {50};
frost$core$Bit $tmp1850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1849);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block18; else goto block19;
block18:;
// line 720
org$frostlang$frostc$ASTNode* $tmp1852 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1853 = (frost$core$Int64) {41};
org$frostlang$frostc$parser$Token $tmp1854 = *(&local0);
org$frostlang$frostc$Position $tmp1855 = $tmp1854.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1852, $tmp1853, $tmp1855);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
return $tmp1852;
block19:;
frost$core$Int64 $tmp1856 = (frost$core$Int64) {44};
frost$core$Bit $tmp1857 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1856);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block20; else goto block21;
block20:;
// line 723
org$frostlang$frostc$ASTNode* $tmp1859 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1860 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token $tmp1861 = *(&local0);
org$frostlang$frostc$Position $tmp1862 = $tmp1861.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1859, $tmp1860, $tmp1862);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
return $tmp1859;
block21:;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {42};
frost$core$Bit $tmp1864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block22; else goto block23;
block22:;
// line 726
org$frostlang$frostc$ASTNode* $tmp1866 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1867 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1868 = *(&local0);
org$frostlang$frostc$Position $tmp1869 = $tmp1868.position;
frost$core$Bit $tmp1870 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1866, $tmp1867, $tmp1869, $tmp1870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
return $tmp1866;
block23:;
frost$core$Int64 $tmp1871 = (frost$core$Int64) {43};
frost$core$Bit $tmp1872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1871);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block24; else goto block25;
block24:;
// line 729
org$frostlang$frostc$ASTNode* $tmp1874 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1875 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1876 = *(&local0);
org$frostlang$frostc$Position $tmp1877 = $tmp1876.position;
frost$core$Bit $tmp1878 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1874, $tmp1875, $tmp1877, $tmp1878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
return $tmp1874;
block25:;
frost$core$Int64 $tmp1879 = (frost$core$Int64) {8};
frost$core$Bit $tmp1880 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1879);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {7};
frost$core$Bit $tmp1883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1882);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block26; else goto block28;
block26:;
// line 732
org$frostlang$frostc$parser$Token $tmp1885 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1885);
// line 733
org$frostlang$frostc$ASTNode* $tmp1886 = org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
return $tmp1886;
block28:;
frost$core$Int64 $tmp1887 = (frost$core$Int64) {107};
frost$core$Bit $tmp1888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1887);
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block29; else goto block30;
block29:;
// line 736
org$frostlang$frostc$parser$Token $tmp1890 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1890);
// line 737
org$frostlang$frostc$ASTNode* $tmp1891 = org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
return $tmp1891;
block30:;
frost$core$Int64 $tmp1892 = (frost$core$Int64) {105};
frost$core$Bit $tmp1893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1892);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block31; else goto block32;
block31:;
// line 740
org$frostlang$frostc$parser$Token $tmp1895 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1895);
// line 741
org$frostlang$frostc$ASTNode* $tmp1896 = org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
return $tmp1896;
block32:;
frost$core$Int64 $tmp1897 = (frost$core$Int64) {14};
frost$core$Bit $tmp1898 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1897);
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block33; else goto block34;
block33:;
// line 744
org$frostlang$frostc$parser$Token $tmp1900 = *(&local0);
frost$core$String* $tmp1901 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1900);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$String* $tmp1902 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local2) = $tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// line 745
frost$core$String* $tmp1903 = *(&local2);
frost$core$Bit $tmp1904 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1903, &$s1905);
bool $tmp1906 = $tmp1904.value;
if ($tmp1906) goto block35; else goto block37;
block35:;
// line 746
frost$core$Int64 $tmp1907 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1908 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1907);
org$frostlang$frostc$parser$Token$nullable $tmp1909 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1908, &$s1910);
// line 747
org$frostlang$frostc$ASTNode* $tmp1911 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local3) = $tmp1911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// line 748
org$frostlang$frostc$ASTNode* $tmp1913 = *(&local3);
frost$core$Bit $tmp1914 = frost$core$Bit$init$builtin_bit($tmp1913 == NULL);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block38; else goto block39;
block38:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1916 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block39:;
// line 751
frost$core$Int64 $tmp1918 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1919 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1918);
org$frostlang$frostc$parser$Token$nullable $tmp1920 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1919, &$s1921);
// line 752
org$frostlang$frostc$ASTNode* $tmp1922 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1923 = (frost$core$Int64) {3};
org$frostlang$frostc$parser$Token $tmp1924 = *(&local0);
org$frostlang$frostc$Position $tmp1925 = $tmp1924.position;
org$frostlang$frostc$ASTNode* $tmp1926 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp1922, $tmp1923, $tmp1925, $tmp1926);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
org$frostlang$frostc$ASTNode* $tmp1927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1922;
block37:;
// line 754
frost$core$String* $tmp1929 = *(&local2);
frost$core$Bit $tmp1930 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1929, &$s1931);
bool $tmp1932 = $tmp1930.value;
if ($tmp1932) goto block40; else goto block41;
block40:;
// line 755
org$frostlang$frostc$ASTNode* $tmp1933 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1934 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$Token $tmp1935 = *(&local0);
org$frostlang$frostc$Position $tmp1936 = $tmp1935.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1933, $tmp1934, $tmp1936);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$core$String* $tmp1937 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1933;
block41:;
goto block36;
block36:;
// line 757
org$frostlang$frostc$parser$Token $tmp1938 = *(&local0);
frost$core$String* $tmp1939 = *(&local2);
frost$core$String* $tmp1940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1941, $tmp1939);
frost$core$String* $tmp1942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1940, &$s1943);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1938, $tmp1942);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
frost$core$Int64 $tmp1945 = (frost$core$Int64) {21};
frost$core$Bit $tmp1946 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1945);
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {22};
frost$core$Bit $tmp1949 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1948);
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block42; else goto block44;
block42:;
// line 761
org$frostlang$frostc$parser$Token $tmp1951 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1951);
// line 762
org$frostlang$frostc$ASTNode* $tmp1952 = org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
return $tmp1952;
block44:;
frost$core$Int64 $tmp1953 = (frost$core$Int64) {58};
frost$core$Bit $tmp1954 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1755, $tmp1953);
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block45; else goto block46;
block45:;
// line 765
org$frostlang$frostc$parser$Token $tmp1956 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1956);
// line 766
org$frostlang$frostc$ASTNode* $tmp1957 = org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
return $tmp1957;
block46:;
// line 769
org$frostlang$frostc$parser$Token $tmp1958 = *(&local0);
org$frostlang$frostc$parser$Token $tmp1959 = *(&local0);
frost$core$String* $tmp1960 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1959);
frost$core$String* $tmp1961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1962, $tmp1960);
frost$core$String* $tmp1963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1961, &$s1964);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1958, $tmp1963);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// line 770
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
// line 777
frost$core$Int64* $tmp1965 = &param0->$rawValue;
frost$core$Int64 $tmp1966 = *$tmp1965;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {22};
frost$core$Bit $tmp1968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1966, $tmp1967);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1970 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1971 = *$tmp1970;
frost$core$String** $tmp1972 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1973 = *$tmp1972;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$String* $tmp1974 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local0) = $tmp1973;
// line 779
frost$core$String* $tmp1975 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
frost$core$String* $tmp1976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1975;
block3:;
frost$core$Int64 $tmp1977 = (frost$core$Int64) {16};
frost$core$Bit $tmp1978 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1966, $tmp1977);
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1980 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1981 = *$tmp1980;
org$frostlang$frostc$ASTNode** $tmp1982 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1983 = *$tmp1982;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
org$frostlang$frostc$ASTNode* $tmp1984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local1) = $tmp1983;
frost$core$String** $tmp1985 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1986 = *$tmp1985;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
frost$core$String* $tmp1987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local2) = $tmp1986;
// line 782
org$frostlang$frostc$ASTNode* $tmp1988 = *(&local1);
frost$core$String* $tmp1989 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp1988);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
frost$core$String* $tmp1990 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local3) = $tmp1989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
// line 783
frost$core$String* $tmp1991 = *(&local3);
frost$core$Bit $tmp1992 = frost$core$Bit$init$builtin_bit($tmp1991 != NULL);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block6; else goto block7;
block6:;
// line 784
frost$core$String* $tmp1994 = *(&local3);
frost$core$String* $tmp1995 = *(&local2);
frost$core$String* $tmp1996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1997, $tmp1995);
frost$core$String* $tmp1998 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1994, $tmp1996);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
frost$core$String* $tmp1999 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local3) = $tmp1998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
goto block7;
block7:;
// line 786
frost$core$String* $tmp2000 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$String* $tmp2001 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2000;
block5:;
// line 789
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token local1;
// line 800
org$frostlang$frostc$parser$Token $tmp2004 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2004;
// line 801
org$frostlang$frostc$parser$Token $tmp2005 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2006 = $tmp2005.kind;
frost$core$Int64 $tmp2007 = $tmp2006.$rawValue;
frost$core$Int64 $tmp2008 = (frost$core$Int64) {52};
frost$core$Bit $tmp2009 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2008);
bool $tmp2010 = $tmp2009.value;
if ($tmp2010) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2011 = (frost$core$Int64) {55};
frost$core$Bit $tmp2012 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2011);
bool $tmp2013 = $tmp2012.value;
if ($tmp2013) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2014 = (frost$core$Int64) {56};
frost$core$Bit $tmp2015 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2014);
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp2017 = (frost$core$Int64) {57};
frost$core$Bit $tmp2018 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2017);
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp2020 = (frost$core$Int64) {58};
frost$core$Bit $tmp2021 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2020);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp2023 = (frost$core$Int64) {59};
frost$core$Bit $tmp2024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp2026 = (frost$core$Int64) {61};
frost$core$Bit $tmp2027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2026);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {62};
frost$core$Bit $tmp2030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2029);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {63};
frost$core$Bit $tmp2033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2032);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {66};
frost$core$Bit $tmp2036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {69};
frost$core$Bit $tmp2039 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2038);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {68};
frost$core$Bit $tmp2042 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {60};
frost$core$Bit $tmp2045 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2044);
bool $tmp2046 = $tmp2045.value;
if ($tmp2046) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp2047 = (frost$core$Int64) {70};
frost$core$Bit $tmp2048 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2047);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {71};
frost$core$Bit $tmp2051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2050);
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {72};
frost$core$Bit $tmp2054 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2053);
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block2; else goto block18;
block18:;
frost$core$Int64 $tmp2056 = (frost$core$Int64) {73};
frost$core$Bit $tmp2057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2056);
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp2059 = (frost$core$Int64) {74};
frost$core$Bit $tmp2060 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2059);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block2; else goto block20;
block20:;
frost$core$Int64 $tmp2062 = (frost$core$Int64) {75};
frost$core$Bit $tmp2063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2062);
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block2; else goto block21;
block21:;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {53};
frost$core$Bit $tmp2066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2065);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block2; else goto block22;
block22:;
frost$core$Int64 $tmp2068 = (frost$core$Int64) {54};
frost$core$Bit $tmp2069 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2068);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block2; else goto block23;
block23:;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {76};
frost$core$Bit $tmp2072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2071);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block2; else goto block24;
block2:;
// line 808
org$frostlang$frostc$parser$Token $tmp2074 = *(&local0);
frost$core$String* $tmp2075 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2074);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
return $tmp2075;
block24:;
frost$core$Int64 $tmp2076 = (frost$core$Int64) {67};
frost$core$Bit $tmp2077 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2076);
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block25; else goto block26;
block25:;
// line 811
org$frostlang$frostc$parser$Token $tmp2079 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2079;
// line 812
org$frostlang$frostc$parser$Token $tmp2080 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2081 = $tmp2080.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2082;
$tmp2082 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2082->value = $tmp2081;
frost$core$Int64 $tmp2083 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2084 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2083);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2085;
$tmp2085 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2085->value = $tmp2084;
ITable* $tmp2086 = ((frost$core$Equatable*) $tmp2082)->$class->itable;
while ($tmp2086->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2086 = $tmp2086->next;
}
$fn2088 $tmp2087 = $tmp2086->methods[0];
frost$core$Bit $tmp2089 = $tmp2087(((frost$core$Equatable*) $tmp2082), ((frost$core$Equatable*) $tmp2085));
bool $tmp2090 = $tmp2089.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2085)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2082)));
if ($tmp2090) goto block27; else goto block29;
block27:;
// line 813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2091));
return &$s2091;
block29:;
// line 1
// line 816
org$frostlang$frostc$parser$Token $tmp2092 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2092);
// line 817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2093));
return &$s2093;
block28:;
goto block1;
block26:;
frost$core$Int64 $tmp2094 = (frost$core$Int64) {105};
frost$core$Bit $tmp2095 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2007, $tmp2094);
bool $tmp2096 = $tmp2095.value;
if ($tmp2096) goto block30; else goto block31;
block30:;
// line 821
frost$core$Int64 $tmp2097 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2098 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2097);
org$frostlang$frostc$parser$Token$nullable $tmp2099 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2098, &$s2100);
frost$core$Bit $tmp2101 = frost$core$Bit$init$builtin_bit(!$tmp2099.nonnull);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block32; else goto block33;
block32:;
// line 822
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block33:;
// line 824
frost$core$Int64 $tmp2103 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp2104 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2103);
org$frostlang$frostc$parser$Token$nullable $tmp2105 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2104);
frost$core$Bit $tmp2106 = frost$core$Bit$init$builtin_bit($tmp2105.nonnull);
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block34; else goto block35;
block34:;
// line 825
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2108));
return &$s2108;
block35:;
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2109));
return &$s2109;
block31:;
// line 830
org$frostlang$frostc$parser$Token $tmp2110 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2111 = *(&local0);
frost$core$String* $tmp2112 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2111);
frost$core$String* $tmp2113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2114, $tmp2112);
frost$core$String* $tmp2115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2113, &$s2116);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp2110, $tmp2115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// line 832
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block36;
block36:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 838
frost$core$Bit $tmp2117 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode* $tmp2118 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
return $tmp2118;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 846
frost$core$Int64 $tmp2119 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2120 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2119);
org$frostlang$frostc$parser$Token$nullable $tmp2121 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2120, &$s2122);
*(&local0) = $tmp2121;
// line 847
org$frostlang$frostc$parser$Token$nullable $tmp2123 = *(&local0);
frost$core$Bit $tmp2124 = frost$core$Bit$init$builtin_bit(!$tmp2123.nonnull);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block1; else goto block2;
block1:;
// line 848
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 850
frost$collections$Array* $tmp2126 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2126);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$collections$Array* $tmp2127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local1) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
// line 851
frost$core$Int64 $tmp2128 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2129 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2128);
org$frostlang$frostc$parser$Token$nullable $tmp2130 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2129);
frost$core$Bit $tmp2131 = frost$core$Bit$init$builtin_bit(!$tmp2130.nonnull);
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block3; else goto block4;
block3:;
// line 852
org$frostlang$frostc$ASTNode* $tmp2133 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
org$frostlang$frostc$ASTNode* $tmp2134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local2) = $tmp2133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// line 853
org$frostlang$frostc$ASTNode* $tmp2135 = *(&local2);
frost$core$Bit $tmp2136 = frost$core$Bit$init$builtin_bit($tmp2135 == NULL);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block5; else goto block6;
block5:;
// line 854
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 856
frost$collections$Array* $tmp2140 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2141 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2140, ((frost$core$Object*) $tmp2141));
// line 857
goto block7;
block7:;
frost$core$Int64 $tmp2142 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2143 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2142);
org$frostlang$frostc$parser$Token$nullable $tmp2144 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2143);
frost$core$Bit $tmp2145 = frost$core$Bit$init$builtin_bit($tmp2144.nonnull);
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block8; else goto block9;
block8:;
// line 858
org$frostlang$frostc$ASTNode* $tmp2147 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
org$frostlang$frostc$ASTNode* $tmp2148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local2) = $tmp2147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// line 859
org$frostlang$frostc$ASTNode* $tmp2149 = *(&local2);
frost$core$Bit $tmp2150 = frost$core$Bit$init$builtin_bit($tmp2149 == NULL);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block10; else goto block11;
block10:;
// line 860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 862
frost$collections$Array* $tmp2154 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2155 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2154, ((frost$core$Object*) $tmp2155));
goto block7;
block9:;
// line 864
frost$core$Int64 $tmp2156 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2157 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2156);
org$frostlang$frostc$parser$Token$nullable $tmp2158 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2157, &$s2159);
frost$core$Bit $tmp2160 = frost$core$Bit$init$builtin_bit(!$tmp2158.nonnull);
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block12; else goto block13;
block12:;
// line 865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp2164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 868
org$frostlang$frostc$parser$Token $tmp2165 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2165;
// line 869
org$frostlang$frostc$parser$Token $tmp2166 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2167 = $tmp2166.kind;
frost$core$Int64 $tmp2168 = $tmp2167.$rawValue;
frost$core$Int64 $tmp2169 = (frost$core$Int64) {94};
frost$core$Bit $tmp2170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2168, $tmp2169);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2172 = (frost$core$Int64) {95};
frost$core$Bit $tmp2173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2168, $tmp2172);
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {96};
frost$core$Bit $tmp2176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2168, $tmp2175);
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp2178 = (frost$core$Int64) {97};
frost$core$Bit $tmp2179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2168, $tmp2178);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block15; else goto block19;
block15:;
// line 872
org$frostlang$frostc$parser$Token $tmp2181 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 873
frost$core$Int64 $tmp2182 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2183 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2182);
org$frostlang$frostc$parser$Token$nullable $tmp2184 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2183, &$s2185);
frost$core$Bit $tmp2186 = frost$core$Bit$init$builtin_bit(!$tmp2184.nonnull);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block20; else goto block21;
block20:;
// line 874
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 876
frost$collections$Array* $tmp2189 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2189);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$collections$Array* $tmp2190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local4) = $tmp2189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// line 877
frost$core$Int64 $tmp2191 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2192 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2191);
org$frostlang$frostc$parser$Token$nullable $tmp2193 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2192);
frost$core$Bit $tmp2194 = frost$core$Bit$init$builtin_bit(!$tmp2193.nonnull);
bool $tmp2195 = $tmp2194.value;
if ($tmp2195) goto block22; else goto block23;
block22:;
// line 878
org$frostlang$frostc$ASTNode* $tmp2196 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
org$frostlang$frostc$ASTNode* $tmp2197 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local5) = $tmp2196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// line 879
org$frostlang$frostc$ASTNode* $tmp2198 = *(&local5);
frost$core$Bit $tmp2199 = frost$core$Bit$init$builtin_bit($tmp2198 == NULL);
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block24; else goto block25;
block24:;
// line 880
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2201 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2202 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2203 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 882
frost$collections$Array* $tmp2204 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2205 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2204, ((frost$core$Object*) $tmp2205));
// line 883
goto block26;
block26:;
frost$core$Int64 $tmp2206 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2207 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2206);
org$frostlang$frostc$parser$Token$nullable $tmp2208 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2207);
frost$core$Bit $tmp2209 = frost$core$Bit$init$builtin_bit($tmp2208.nonnull);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block27; else goto block28;
block27:;
// line 884
org$frostlang$frostc$ASTNode* $tmp2211 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
org$frostlang$frostc$ASTNode* $tmp2212 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
*(&local5) = $tmp2211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// line 885
org$frostlang$frostc$ASTNode* $tmp2213 = *(&local5);
frost$core$Bit $tmp2214 = frost$core$Bit$init$builtin_bit($tmp2213 == NULL);
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block29; else goto block30;
block29:;
// line 886
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2217 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2218 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block30:;
// line 888
frost$collections$Array* $tmp2219 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2220 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2219, ((frost$core$Object*) $tmp2220));
goto block26;
block28:;
// line 890
frost$core$Int64 $tmp2221 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2222 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2221);
org$frostlang$frostc$parser$Token$nullable $tmp2223 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2222, &$s2224);
frost$core$Bit $tmp2225 = frost$core$Bit$init$builtin_bit(!$tmp2223.nonnull);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block31; else goto block32;
block31:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2227 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2228 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block32:;
org$frostlang$frostc$ASTNode* $tmp2230 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 894
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 895
frost$collections$Array* $tmp2231 = *(&local4);
ITable* $tmp2232 = ((frost$collections$CollectionView*) $tmp2231)->$class->itable;
while ($tmp2232->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2232 = $tmp2232->next;
}
$fn2234 $tmp2233 = $tmp2232->methods[0];
frost$core$Int64 $tmp2235 = $tmp2233(((frost$collections$CollectionView*) $tmp2231));
frost$core$Int64 $tmp2236 = (frost$core$Int64) {0};
frost$core$Bit $tmp2237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2235, $tmp2236);
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block33; else goto block35;
block33:;
// line 896
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2239 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block35:;
// line 898
frost$collections$Array* $tmp2240 = *(&local4);
ITable* $tmp2241 = ((frost$collections$CollectionView*) $tmp2240)->$class->itable;
while ($tmp2241->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2241 = $tmp2241->next;
}
$fn2243 $tmp2242 = $tmp2241->methods[0];
frost$core$Int64 $tmp2244 = $tmp2242(((frost$collections$CollectionView*) $tmp2240));
frost$core$Int64 $tmp2245 = (frost$core$Int64) {1};
frost$core$Bit $tmp2246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2244, $tmp2245);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block36; else goto block38;
block36:;
// line 899
frost$collections$Array* $tmp2248 = *(&local4);
frost$core$Int64 $tmp2249 = (frost$core$Int64) {0};
frost$core$Object* $tmp2250 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2248, $tmp2249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2250)));
org$frostlang$frostc$ASTNode* $tmp2251 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2250);
frost$core$Frost$unref$frost$core$Object$Q($tmp2250);
goto block37;
block38:;
// line 1
// line 903
org$frostlang$frostc$parser$Token$nullable $tmp2252 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2252.value), &$s2253);
// line 904
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2254 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2255 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 906
org$frostlang$frostc$ASTNode* $tmp2257 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2258 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$nullable $tmp2259 = *(&local0);
org$frostlang$frostc$Position $tmp2260 = ((org$frostlang$frostc$parser$Token) $tmp2259.value).position;
org$frostlang$frostc$parser$Token $tmp2261 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2262 = $tmp2261.kind;
frost$collections$Array* $tmp2263 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2264 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2263);
org$frostlang$frostc$ASTNode* $tmp2265 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp2257, $tmp2258, $tmp2260, $tmp2262, $tmp2264, $tmp2265);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
org$frostlang$frostc$ASTNode* $tmp2266 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2267 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2257;
block19:;
// line 911
org$frostlang$frostc$parser$Token$nullable $tmp2269 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2269.value), &$s2270);
// line 912
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
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
// line 922
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 923
org$frostlang$frostc$parser$Token $tmp2272 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2273 = $tmp2272.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2274;
$tmp2274 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2274->value = $tmp2273;
frost$core$Int64 $tmp2275 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2276 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2275);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2277;
$tmp2277 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2277->value = $tmp2276;
ITable* $tmp2278 = ((frost$core$Equatable*) $tmp2274)->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
frost$core$Bit $tmp2281 = $tmp2279(((frost$core$Equatable*) $tmp2274), ((frost$core$Equatable*) $tmp2277));
bool $tmp2282 = $tmp2281.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2277)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2274)));
if ($tmp2282) goto block1; else goto block3;
block1:;
// line 924
org$frostlang$frostc$ASTNode* $tmp2283 = org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
org$frostlang$frostc$ASTNode* $tmp2284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local0) = $tmp2283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
// line 925
org$frostlang$frostc$ASTNode* $tmp2285 = *(&local0);
frost$core$Bit $tmp2286 = frost$core$Bit$init$builtin_bit($tmp2285 == NULL);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block4; else goto block5;
block4:;
// line 926
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 930
frost$core$Int64 $tmp2289 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2290 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2289);
org$frostlang$frostc$parser$Token$nullable $tmp2291 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2290, &$s2292);
*(&local1) = $tmp2291;
// line 931
org$frostlang$frostc$parser$Token$nullable $tmp2293 = *(&local1);
frost$core$Bit $tmp2294 = frost$core$Bit$init$builtin_bit(!$tmp2293.nonnull);
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block6; else goto block7;
block6:;
// line 932
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2296 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 934
frost$core$MutableString* $tmp2297 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp2298 = *(&local1);
frost$core$String* $tmp2299 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2298.value));
frost$core$MutableString$init$frost$core$String($tmp2297, $tmp2299);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
frost$core$MutableString* $tmp2300 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local2) = $tmp2297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// line 935
goto block8;
block8:;
frost$core$Int64 $tmp2301 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp2302 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2301);
org$frostlang$frostc$parser$Token$nullable $tmp2303 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2302);
frost$core$Bit $tmp2304 = frost$core$Bit$init$builtin_bit($tmp2303.nonnull);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block9; else goto block10;
block9:;
// line 936
frost$core$Int64 $tmp2306 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2307 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2306);
org$frostlang$frostc$parser$Token$nullable $tmp2308 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2307, &$s2309);
*(&local3) = $tmp2308;
// line 937
org$frostlang$frostc$parser$Token$nullable $tmp2310 = *(&local3);
frost$core$Bit $tmp2311 = frost$core$Bit$init$builtin_bit(!$tmp2310.nonnull);
bool $tmp2312 = $tmp2311.value;
if ($tmp2312) goto block11; else goto block12;
block11:;
// line 938
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2313 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 940
frost$core$MutableString* $tmp2315 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2315, &$s2316);
// line 941
frost$core$MutableString* $tmp2317 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp2318 = *(&local3);
frost$core$String* $tmp2319 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2318.value));
frost$core$MutableString$append$frost$core$String($tmp2317, $tmp2319);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
goto block8;
block10:;
// line 943
frost$core$MutableString* $tmp2320 = *(&local2);
frost$core$String* $tmp2321 = frost$core$MutableString$finish$R$frost$core$String($tmp2320);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$String* $tmp2322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local4) = $tmp2321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// line 944
org$frostlang$frostc$ASTNode* $tmp2323 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2324 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2325 = *(&local1);
org$frostlang$frostc$Position $tmp2326 = ((org$frostlang$frostc$parser$Token) $tmp2325.value).position;
frost$core$String* $tmp2327 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2323, $tmp2324, $tmp2326, $tmp2327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
org$frostlang$frostc$ASTNode* $tmp2328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local0) = $tmp2323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
// line 945
org$frostlang$frostc$parser$Token $tmp2329 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2330 = $tmp2329.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2331;
$tmp2331 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2331->value = $tmp2330;
frost$core$Int64 $tmp2332 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2333 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2332);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2334;
$tmp2334 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2334->value = $tmp2333;
ITable* $tmp2335 = ((frost$core$Equatable*) $tmp2331)->$class->itable;
while ($tmp2335->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2335 = $tmp2335->next;
}
$fn2337 $tmp2336 = $tmp2335->methods[0];
frost$core$Bit $tmp2338 = $tmp2336(((frost$core$Equatable*) $tmp2331), ((frost$core$Equatable*) $tmp2334));
bool $tmp2339 = $tmp2338.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2334)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2331)));
if ($tmp2339) goto block13; else goto block14;
block13:;
// line 948
bool $tmp2340 = param1.value;
if ($tmp2340) goto block15; else goto block16;
block15:;
// line 949
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 951
org$frostlang$frostc$parser$Token $tmp2341 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 952
frost$collections$Array* $tmp2342 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2342);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$collections$Array* $tmp2343 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
*(&local5) = $tmp2342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
// line 953
frost$core$Bit $tmp2344 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2345 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2344);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
org$frostlang$frostc$ASTNode* $tmp2346 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
*(&local6) = $tmp2345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
// line 954
org$frostlang$frostc$ASTNode* $tmp2347 = *(&local6);
frost$core$Bit $tmp2348 = frost$core$Bit$init$builtin_bit($tmp2347 == NULL);
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block17; else goto block18;
block17:;
// line 955
bool $tmp2350 = param1.value;
if ($tmp2350) goto block19; else goto block20;
block19:;
// line 956
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 957
org$frostlang$frostc$ASTNode* $tmp2351 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
org$frostlang$frostc$ASTNode* $tmp2352 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2353 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2354 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2355 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2351;
block20:;
// line 959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2357 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2358 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2359 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 961
frost$collections$Array* $tmp2362 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2362, ((frost$core$Object*) $tmp2363));
// line 962
goto block21;
block21:;
frost$core$Int64 $tmp2364 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2365 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2364);
org$frostlang$frostc$parser$Token$nullable $tmp2366 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2365);
frost$core$Bit $tmp2367 = frost$core$Bit$init$builtin_bit($tmp2366.nonnull);
bool $tmp2368 = $tmp2367.value;
if ($tmp2368) goto block22; else goto block23;
block22:;
// line 963
frost$core$Bit $tmp2369 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2370 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
org$frostlang$frostc$ASTNode* $tmp2371 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local6) = $tmp2370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// line 964
org$frostlang$frostc$ASTNode* $tmp2372 = *(&local6);
frost$core$Bit $tmp2373 = frost$core$Bit$init$builtin_bit($tmp2372 == NULL);
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block24; else goto block25;
block24:;
// line 965
bool $tmp2375 = param1.value;
if ($tmp2375) goto block26; else goto block27;
block26:;
// line 966
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 967
org$frostlang$frostc$ASTNode* $tmp2376 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
org$frostlang$frostc$ASTNode* $tmp2377 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2378 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2379 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2376;
block27:;
// line 969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2382 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2383 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2384 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2385 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2386 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 971
frost$collections$Array* $tmp2387 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2388 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2387, ((frost$core$Object*) $tmp2388));
goto block21;
block23:;
// line 973
frost$core$Int64 $tmp2389 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2390 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2389);
org$frostlang$frostc$parser$Token$nullable $tmp2391 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2390, &$s2392);
frost$core$Bit $tmp2393 = frost$core$Bit$init$builtin_bit(!$tmp2391.nonnull);
bool $tmp2394 = $tmp2393.value;
if ($tmp2394) goto block28; else goto block29;
block28:;
// line 974
bool $tmp2395 = param1.value;
if ($tmp2395) goto block30; else goto block31;
block30:;
// line 975
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 976
org$frostlang$frostc$ASTNode* $tmp2396 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2398 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2399 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2401 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2396;
block31:;
// line 978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2403 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2404 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2406 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 980
org$frostlang$frostc$ASTNode* $tmp2407 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2408 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$nullable $tmp2409 = *(&local1);
org$frostlang$frostc$Position $tmp2410 = ((org$frostlang$frostc$parser$Token) $tmp2409.value).position;
frost$core$String* $tmp2411 = *(&local4);
frost$collections$Array* $tmp2412 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2413 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2412);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2407, $tmp2408, $tmp2410, $tmp2411, $tmp2413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
org$frostlang$frostc$ASTNode* $tmp2414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local0) = $tmp2407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// line 982
bool $tmp2415 = param1.value;
if ($tmp2415) goto block32; else goto block33;
block32:;
// line 983
org$frostlang$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2416 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2417 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2418 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 987
frost$core$Int64 $tmp2420 = (frost$core$Int64) {98};
org$frostlang$frostc$parser$Token$Kind $tmp2421 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2420);
org$frostlang$frostc$parser$Token$nullable $tmp2422 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2421);
frost$core$Bit $tmp2423 = frost$core$Bit$init$builtin_bit($tmp2422.nonnull);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block34; else goto block35;
block34:;
// line 988
org$frostlang$frostc$ASTNode* $tmp2425 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2426 = (frost$core$Int64) {32};
org$frostlang$frostc$ASTNode* $tmp2427 = *(&local0);
$fn2429 $tmp2428 = ($fn2429) $tmp2427->$class->vtable[2];
org$frostlang$frostc$Position $tmp2430 = $tmp2428($tmp2427);
org$frostlang$frostc$ASTNode* $tmp2431 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp2425, $tmp2426, $tmp2430, $tmp2431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local0) = $tmp2425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
goto block35;
block35:;
// line 990
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
org$frostlang$frostc$ASTNode* $tmp2434 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2433;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 997
frost$core$Int64 $tmp2435 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2436 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2435);
org$frostlang$frostc$parser$Token$nullable $tmp2437 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2436, &$s2438);
frost$core$Bit $tmp2439 = frost$core$Bit$init$builtin_bit(!$tmp2437.nonnull);
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block1; else goto block2;
block1:;
// line 998
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1000
frost$collections$Array* $tmp2441 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2441);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
frost$collections$Array* $tmp2442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
*(&local0) = $tmp2441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// line 1
// line 1002
org$frostlang$frostc$ASTNode* $tmp2443 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
org$frostlang$frostc$ASTNode* $tmp2444 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local1) = $tmp2443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
// line 1003
org$frostlang$frostc$ASTNode* $tmp2445 = *(&local1);
frost$core$Bit $tmp2446 = frost$core$Bit$init$builtin_bit($tmp2445 == NULL);
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block3; else goto block4;
block3:;
// line 1004
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 1006
frost$collections$Array* $tmp2450 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2451 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2450, ((frost$core$Object*) $tmp2451));
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1008
goto block5;
block5:;
frost$core$Int64 $tmp2453 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2454 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2453);
org$frostlang$frostc$parser$Token$nullable $tmp2455 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2454);
frost$core$Bit $tmp2456 = frost$core$Bit$init$builtin_bit($tmp2455.nonnull);
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block6; else goto block7;
block6:;
// line 1009
org$frostlang$frostc$ASTNode* $tmp2458 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
org$frostlang$frostc$ASTNode* $tmp2459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local2) = $tmp2458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
// line 1010
org$frostlang$frostc$ASTNode* $tmp2460 = *(&local2);
frost$core$Bit $tmp2461 = frost$core$Bit$init$builtin_bit($tmp2460 == NULL);
bool $tmp2462 = $tmp2461.value;
if ($tmp2462) goto block8; else goto block9;
block8:;
// line 1011
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2464 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 1013
frost$collections$Array* $tmp2465 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2466 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2465, ((frost$core$Object*) $tmp2466));
org$frostlang$frostc$ASTNode* $tmp2467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1015
frost$core$Int64 $tmp2468 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2469 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2468);
org$frostlang$frostc$parser$Token$nullable $tmp2470 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2469, &$s2471);
frost$core$Bit $tmp2472 = frost$core$Bit$init$builtin_bit(!$tmp2470.nonnull);
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block10; else goto block11;
block10:;
// line 1016
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2474 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 1018
frost$collections$Array* $tmp2475 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp2476 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
frost$collections$Array* $tmp2477 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2476;

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
// line 1032
org$frostlang$frostc$ASTNode* $tmp2478 = org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
org$frostlang$frostc$ASTNode* $tmp2479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local0) = $tmp2478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
// line 1033
org$frostlang$frostc$ASTNode* $tmp2480 = *(&local0);
frost$core$Bit $tmp2481 = frost$core$Bit$init$builtin_bit($tmp2480 == NULL);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block1; else goto block2;
block1:;
// line 1034
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1036
goto block3;
block3:;
// line 1037
org$frostlang$frostc$parser$Token $tmp2484 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2484;
// line 1038
org$frostlang$frostc$parser$Token $tmp2485 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2486 = $tmp2485.kind;
frost$core$Int64 $tmp2487 = $tmp2486.$rawValue;
frost$core$Int64 $tmp2488 = (frost$core$Int64) {107};
frost$core$Bit $tmp2489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2488);
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block6; else goto block7;
block6:;
// line 1040
frost$collections$Stack** $tmp2491 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2492 = *$tmp2491;
frost$core$Bit $tmp2493 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2494;
$tmp2494 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2494->value = $tmp2493;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2492, ((frost$core$Object*) $tmp2494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
// line 1041
frost$collections$Array* $tmp2495 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2495);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
frost$collections$Array* $tmp2496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local2) = $tmp2495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
// line 1042
frost$core$Int64 $tmp2497 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2498 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2497);
org$frostlang$frostc$parser$Token$nullable $tmp2499 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2498);
frost$core$Bit $tmp2500 = frost$core$Bit$init$builtin_bit(!$tmp2499.nonnull);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block8; else goto block9;
block8:;
// line 1043
org$frostlang$frostc$ASTNode* $tmp2502 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
org$frostlang$frostc$ASTNode* $tmp2503 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
*(&local3) = $tmp2502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
// line 1044
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local3);
frost$core$Bit $tmp2505 = frost$core$Bit$init$builtin_bit($tmp2504 == NULL);
bool $tmp2506 = $tmp2505.value;
if ($tmp2506) goto block10; else goto block11;
block10:;
// line 1045
frost$collections$Stack** $tmp2507 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2508 = *$tmp2507;
frost$core$Object* $tmp2509 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2508);
frost$core$Frost$unref$frost$core$Object$Q($tmp2509);
// line 1046
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2512 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1048
frost$collections$Array* $tmp2513 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2514 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2513, ((frost$core$Object*) $tmp2514));
// line 1049
goto block12;
block12:;
frost$core$Int64 $tmp2515 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2516 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2515);
org$frostlang$frostc$parser$Token$nullable $tmp2517 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2516);
frost$core$Bit $tmp2518 = frost$core$Bit$init$builtin_bit($tmp2517.nonnull);
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block13; else goto block14;
block13:;
// line 1050
org$frostlang$frostc$ASTNode* $tmp2520 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local3) = $tmp2520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
// line 1051
org$frostlang$frostc$ASTNode* $tmp2522 = *(&local3);
frost$core$Bit $tmp2523 = frost$core$Bit$init$builtin_bit($tmp2522 == NULL);
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block15; else goto block16;
block15:;
// line 1052
frost$collections$Stack** $tmp2525 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2526 = *$tmp2525;
frost$core$Object* $tmp2527 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2526);
frost$core$Frost$unref$frost$core$Object$Q($tmp2527);
// line 1053
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2530 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1055
frost$collections$Array* $tmp2531 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2532 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2531, ((frost$core$Object*) $tmp2532));
goto block12;
block14:;
// line 1057
frost$core$Int64 $tmp2533 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2534 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2533);
org$frostlang$frostc$parser$Token$nullable $tmp2535 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2534, &$s2536);
frost$core$Bit $tmp2537 = frost$core$Bit$init$builtin_bit(!$tmp2535.nonnull);
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block17; else goto block18;
block17:;
// line 1058
frost$collections$Stack** $tmp2539 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2540 = *$tmp2539;
frost$core$Object* $tmp2541 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2540);
frost$core$Frost$unref$frost$core$Object$Q($tmp2541);
// line 1059
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2542 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2543 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
org$frostlang$frostc$ASTNode* $tmp2545 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1062
frost$collections$Stack** $tmp2546 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2547 = *$tmp2546;
frost$core$Object* $tmp2548 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2547);
frost$core$Frost$unref$frost$core$Object$Q($tmp2548);
// line 1063
org$frostlang$frostc$ASTNode* $tmp2549 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2550 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token $tmp2551 = *(&local1);
org$frostlang$frostc$Position $tmp2552 = $tmp2551.position;
org$frostlang$frostc$ASTNode* $tmp2553 = *(&local0);
frost$collections$Array* $tmp2554 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2555 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2554);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2549, $tmp2550, $tmp2552, $tmp2553, $tmp2555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
org$frostlang$frostc$ASTNode* $tmp2556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
*(&local0) = $tmp2549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
frost$collections$Array* $tmp2557 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {105};
frost$core$Bit $tmp2559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2558);
bool $tmp2560 = $tmp2559.value;
if ($tmp2560) goto block19; else goto block20;
block19:;
// line 1067
org$frostlang$frostc$ASTNode* $tmp2561 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local4) = $tmp2561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// line 1068
org$frostlang$frostc$ASTNode* $tmp2563 = *(&local4);
frost$core$Bit $tmp2564 = frost$core$Bit$init$builtin_bit($tmp2563 == NULL);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block21; else goto block22;
block21:;
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2566 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1071
frost$core$Int64 $tmp2568 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2569 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2568);
org$frostlang$frostc$parser$Token$nullable $tmp2570 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2569, &$s2571);
frost$core$Bit $tmp2572 = frost$core$Bit$init$builtin_bit(!$tmp2570.nonnull);
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block23; else goto block24;
block23:;
// line 1072
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2574 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2575 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block24:;
// line 1074
org$frostlang$frostc$ASTNode* $tmp2576 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2577 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2578 = *(&local1);
org$frostlang$frostc$Position $tmp2579 = $tmp2578.position;
org$frostlang$frostc$ASTNode* $tmp2580 = *(&local0);
frost$core$Int64 $tmp2581 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp2582 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2581);
org$frostlang$frostc$ASTNode* $tmp2583 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2576, $tmp2577, $tmp2579, $tmp2580, $tmp2582, $tmp2583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
org$frostlang$frostc$ASTNode* $tmp2584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local0) = $tmp2576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
org$frostlang$frostc$ASTNode* $tmp2585 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2586 = (frost$core$Int64) {102};
frost$core$Bit $tmp2587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2586);
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block25; else goto block26;
block25:;
// line 1077
*(&local5) = ((frost$core$String*) NULL);
// line 1078
frost$core$Int64 $tmp2589 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp2590 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2589);
org$frostlang$frostc$parser$Token$nullable $tmp2591 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2590);
frost$core$Bit $tmp2592 = frost$core$Bit$init$builtin_bit($tmp2591.nonnull);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block27; else goto block29;
block27:;
// line 1079
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2594));
frost$core$String* $tmp2595 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local5) = &$s2594;
goto block28;
block29:;
// line 1
// line 1082
frost$core$String* $tmp2596 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
frost$core$String* $tmp2597 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local5) = $tmp2596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// line 1083
frost$core$String* $tmp2598 = *(&local5);
frost$core$Bit $tmp2599 = frost$core$Bit$init$builtin_bit($tmp2598 == NULL);
bool $tmp2600 = $tmp2599.value;
if ($tmp2600) goto block30; else goto block31;
block30:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2601 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2602 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1087
org$frostlang$frostc$ASTNode* $tmp2603 = *(&local0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
org$frostlang$frostc$ASTNode* $tmp2604 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local6) = $tmp2603;
// line 1088
org$frostlang$frostc$ASTNode* $tmp2605 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2606 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token $tmp2607 = *(&local1);
org$frostlang$frostc$Position $tmp2608 = $tmp2607.position;
org$frostlang$frostc$ASTNode* $tmp2609 = *(&local6);
frost$core$String* $tmp2610 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2605, $tmp2606, $tmp2608, $tmp2609, $tmp2610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
org$frostlang$frostc$ASTNode* $tmp2611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local0) = $tmp2605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
// line 1089
org$frostlang$frostc$parser$Token $tmp2612 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2613 = $tmp2612.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2614;
$tmp2614 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2614->value = $tmp2613;
frost$core$Int64 $tmp2615 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2616 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2615);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2617;
$tmp2617 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2617->value = $tmp2616;
ITable* $tmp2618 = ((frost$core$Equatable*) $tmp2614)->$class->itable;
while ($tmp2618->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2618 = $tmp2618->next;
}
$fn2620 $tmp2619 = $tmp2618->methods[0];
frost$core$Bit $tmp2621 = $tmp2619(((frost$core$Equatable*) $tmp2614), ((frost$core$Equatable*) $tmp2617));
bool $tmp2622 = $tmp2621.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2617)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2614)));
if ($tmp2622) goto block32; else goto block33;
block32:;
// line 1090
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1091
org$frostlang$frostc$FixedArray* $tmp2623 = org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local7) = $tmp2623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
// line 1092
org$frostlang$frostc$FixedArray* $tmp2625 = *(&local7);
frost$core$Bit $tmp2626 = frost$core$Bit$init$builtin_bit($tmp2625 != NULL);
bool $tmp2627 = $tmp2626.value;
if ($tmp2627) goto block34; else goto block36;
block34:;
// line 1093
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1094
org$frostlang$frostc$ASTNode* $tmp2628 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2629 = (frost$core$Int64) {17};
org$frostlang$frostc$parser$Token $tmp2630 = *(&local1);
org$frostlang$frostc$Position $tmp2631 = $tmp2630.position;
org$frostlang$frostc$ASTNode* $tmp2632 = *(&local6);
frost$core$String* $tmp2633 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2634 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2628, $tmp2629, $tmp2631, $tmp2632, $tmp2633, $tmp2634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
org$frostlang$frostc$ASTNode* $tmp2635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local0) = $tmp2628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
goto block35;
block36:;
// line 1
// line 1097
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1098
org$frostlang$frostc$ASTNode* $tmp2636 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
org$frostlang$frostc$FixedArray* $tmp2637 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2638 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2640 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2636;
block35:;
org$frostlang$frostc$FixedArray* $tmp2641 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2642 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2643 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2644 = (frost$core$Int64) {93};
frost$core$Bit $tmp2645 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2644);
bool $tmp2646 = $tmp2645.value;
if ($tmp2646) goto block37; else goto block38;
block37:;
// line 1103
org$frostlang$frostc$ASTNode* $tmp2647 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local8) = $tmp2647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// line 1104
org$frostlang$frostc$ASTNode* $tmp2649 = *(&local8);
frost$core$Bit $tmp2650 = frost$core$Bit$init$builtin_bit($tmp2649 == NULL);
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block39; else goto block40;
block39:;
// line 1105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2652 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2653 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 1107
org$frostlang$frostc$ASTNode* $tmp2654 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2655 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2656 = *(&local1);
org$frostlang$frostc$Position $tmp2657 = $tmp2656.position;
org$frostlang$frostc$ASTNode* $tmp2658 = *(&local0);
frost$core$Int64 $tmp2659 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp2660 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2659);
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2654, $tmp2655, $tmp2657, $tmp2658, $tmp2660, $tmp2661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
org$frostlang$frostc$ASTNode* $tmp2662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local0) = $tmp2654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
org$frostlang$frostc$ASTNode* $tmp2663 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2664 = (frost$core$Int64) {66};
frost$core$Bit $tmp2665 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2487, $tmp2664);
bool $tmp2666 = $tmp2665.value;
if ($tmp2666) goto block41; else goto block42;
block41:;
// line 1112
org$frostlang$frostc$parser$Token $tmp2667 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2667);
// line 1113
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local0);
frost$core$String* $tmp2669 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2668);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
frost$core$String* $tmp2670 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
*(&local9) = $tmp2669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
// line 1114
frost$core$String* $tmp2671 = *(&local9);
frost$core$Bit $tmp2672 = frost$core$Bit$init$builtin_bit($tmp2671 != NULL);
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block43; else goto block44;
block43:;
// line 1115
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1116
org$frostlang$frostc$parser$Token $tmp2674 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1119
frost$collections$Array* $tmp2675 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2675);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$collections$Array* $tmp2676 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local10) = $tmp2675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
// line 1120
frost$core$Bit $tmp2677 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2678 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2677);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
org$frostlang$frostc$ASTNode* $tmp2679 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local11) = $tmp2678;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
// line 1121
org$frostlang$frostc$ASTNode* $tmp2680 = *(&local11);
frost$core$Bit $tmp2681 = frost$core$Bit$init$builtin_bit($tmp2680 == NULL);
bool $tmp2682 = $tmp2681.value;
if ($tmp2682) goto block45; else goto block46;
block45:;
// line 1122
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1123
org$frostlang$frostc$ASTNode* $tmp2683 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
org$frostlang$frostc$ASTNode* $tmp2684 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2685 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2686 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2687 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2683;
block46:;
// line 1125
frost$collections$Array* $tmp2688 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2689 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2688, ((frost$core$Object*) $tmp2689));
// line 1126
goto block47;
block47:;
frost$core$Int64 $tmp2690 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2691 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2690);
org$frostlang$frostc$parser$Token$nullable $tmp2692 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2691);
frost$core$Bit $tmp2693 = frost$core$Bit$init$builtin_bit($tmp2692.nonnull);
bool $tmp2694 = $tmp2693.value;
if ($tmp2694) goto block48; else goto block49;
block48:;
// line 1127
frost$core$Bit $tmp2695 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2696 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
org$frostlang$frostc$ASTNode* $tmp2697 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local11) = $tmp2696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
// line 1128
org$frostlang$frostc$ASTNode* $tmp2698 = *(&local11);
frost$core$Bit $tmp2699 = frost$core$Bit$init$builtin_bit($tmp2698 == NULL);
bool $tmp2700 = $tmp2699.value;
if ($tmp2700) goto block50; else goto block51;
block50:;
// line 1129
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1130
org$frostlang$frostc$ASTNode* $tmp2701 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
org$frostlang$frostc$ASTNode* $tmp2702 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2703 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2704 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2705 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2701;
block51:;
// line 1132
frost$collections$Array* $tmp2706 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2707 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2706, ((frost$core$Object*) $tmp2707));
goto block47;
block49:;
// line 1134
frost$core$Int64 $tmp2708 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2709 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2708);
org$frostlang$frostc$parser$Token$nullable $tmp2710 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2709, &$s2711);
*(&local12) = $tmp2710;
// line 1135
org$frostlang$frostc$parser$Token$nullable $tmp2712 = *(&local12);
frost$core$Bit $tmp2713 = frost$core$Bit$init$builtin_bit(!$tmp2712.nonnull);
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block52; else goto block53;
block52:;
// line 1136
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1137
org$frostlang$frostc$ASTNode* $tmp2715 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
org$frostlang$frostc$ASTNode* $tmp2716 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2717 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2718 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2719 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2715;
block53:;
// line 1166
// line 1167
frost$collections$Stack** $tmp2720 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2721 = *$tmp2720;
frost$core$Int64 $tmp2722 = (frost$core$Int64) {0};
frost$core$Object* $tmp2723 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2721, $tmp2722);
bool $tmp2724 = ((frost$core$Bit$wrapper*) $tmp2723)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2723);
if ($tmp2724) goto block54; else goto block56;
block54:;
// line 1168
org$frostlang$frostc$parser$Token $tmp2725 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local14) = $tmp2725;
// line 1169
org$frostlang$frostc$parser$Token $tmp2726 = *(&local14);
org$frostlang$frostc$parser$Token$Kind $tmp2727 = $tmp2726.kind;
frost$core$Int64 $tmp2728 = $tmp2727.$rawValue;
frost$core$Int64 $tmp2729 = (frost$core$Int64) {102};
frost$core$Bit $tmp2730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2728, $tmp2729);
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2732 = (frost$core$Int64) {109};
frost$core$Bit $tmp2733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2728, $tmp2732);
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2735 = (frost$core$Int64) {93};
frost$core$Bit $tmp2736 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2728, $tmp2735);
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block58; else goto block61;
block58:;
// line 1171
frost$core$Bit $tmp2738 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2738;
goto block57;
block61:;
frost$core$Int64 $tmp2739 = (frost$core$Int64) {107};
frost$core$Bit $tmp2740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2728, $tmp2739);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block62; else goto block63;
block62:;
// line 1174
org$frostlang$frostc$parser$Token $tmp2742 = *(&local14);
org$frostlang$frostc$Position $tmp2743 = $tmp2742.position;
frost$core$Int64 $tmp2744 = $tmp2743.line;
org$frostlang$frostc$parser$Token$nullable $tmp2745 = *(&local12);
org$frostlang$frostc$Position $tmp2746 = ((org$frostlang$frostc$parser$Token) $tmp2745.value).position;
frost$core$Int64 $tmp2747 = $tmp2746.line;
frost$core$Bit $tmp2748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2744, $tmp2747);
bool $tmp2749 = $tmp2748.value;
if ($tmp2749) goto block64; else goto block65;
block64:;
org$frostlang$frostc$parser$Token $tmp2750 = *(&local14);
org$frostlang$frostc$Position $tmp2751 = $tmp2750.position;
frost$core$Int64 $tmp2752 = $tmp2751.column;
org$frostlang$frostc$parser$Token$nullable $tmp2753 = *(&local12);
org$frostlang$frostc$Position $tmp2754 = ((org$frostlang$frostc$parser$Token) $tmp2753.value).position;
frost$core$Int64 $tmp2755 = $tmp2754.column;
frost$core$Int64 $tmp2756 = (frost$core$Int64) {1};
int64_t $tmp2757 = $tmp2755.value;
int64_t $tmp2758 = $tmp2756.value;
int64_t $tmp2759 = $tmp2757 + $tmp2758;
frost$core$Int64 $tmp2760 = (frost$core$Int64) {$tmp2759};
frost$core$Bit $tmp2761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2752, $tmp2760);
*(&local15) = $tmp2761;
goto block66;
block65:;
*(&local15) = $tmp2748;
goto block66;
block66:;
frost$core$Bit $tmp2762 = *(&local15);
*(&local13) = $tmp2762;
goto block57;
block63:;
// line 1178
frost$core$Bit $tmp2763 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2763;
goto block57;
block57:;
// line 1181
frost$core$Bit $tmp2764 = *(&local13);
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block67; else goto block68;
block67:;
// line 1182
org$frostlang$frostc$parser$Token $tmp2766 = *(&local14);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2766);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1186
frost$core$Bit $tmp2767 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2767;
goto block55;
block55:;
// line 1188
frost$core$Bit $tmp2768 = *(&local13);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block69; else goto block71;
block69:;
// line 1189
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1190
org$frostlang$frostc$ASTNode* $tmp2770 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2771 = (frost$core$Int64) {21};
org$frostlang$frostc$ASTNode* $tmp2772 = *(&local0);
$fn2774 $tmp2773 = ($fn2774) $tmp2772->$class->vtable[2];
org$frostlang$frostc$Position $tmp2775 = $tmp2773($tmp2772);
frost$core$String* $tmp2776 = *(&local9);
frost$collections$Array* $tmp2777 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2778 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2777);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2770, $tmp2771, $tmp2775, $tmp2776, $tmp2778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
org$frostlang$frostc$ASTNode* $tmp2779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local0) = $tmp2770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
// line 1192
org$frostlang$frostc$ASTNode* $tmp2780 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2781 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2782 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1195
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1196
org$frostlang$frostc$ASTNode* $tmp2783 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
org$frostlang$frostc$ASTNode* $tmp2784 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2785 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2786 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2787 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2783;
block70:;
org$frostlang$frostc$ASTNode* $tmp2788 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2789 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1199
org$frostlang$frostc$ASTNode* $tmp2790 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$String* $tmp2791 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2790;
block42:;
// line 1202
org$frostlang$frostc$parser$Token $tmp2793 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2793);
// line 1203
org$frostlang$frostc$ASTNode* $tmp2794 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
org$frostlang$frostc$ASTNode* $tmp2795 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2794;
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
// line 1213
org$frostlang$frostc$ASTNode* $tmp2796 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
org$frostlang$frostc$ASTNode* $tmp2797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local0) = $tmp2796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
// line 1214
org$frostlang$frostc$ASTNode* $tmp2798 = *(&local0);
frost$core$Bit $tmp2799 = frost$core$Bit$init$builtin_bit($tmp2798 == NULL);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block1; else goto block2;
block1:;
// line 1215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2801 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1217
goto block3;
block3:;
// line 1218
frost$core$Int64 $tmp2802 = (frost$core$Int64) {61};
org$frostlang$frostc$parser$Token$Kind $tmp2803 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2802);
org$frostlang$frostc$parser$Token$nullable $tmp2804 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2803);
*(&local1) = $tmp2804;
// line 1219
org$frostlang$frostc$parser$Token$nullable $tmp2805 = *(&local1);
frost$core$Bit $tmp2806 = frost$core$Bit$init$builtin_bit(!$tmp2805.nonnull);
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block5; else goto block6;
block5:;
// line 1220
goto block4;
block6:;
// line 1222
org$frostlang$frostc$ASTNode* $tmp2808 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$ASTNode* $tmp2809 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local2) = $tmp2808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
// line 1223
org$frostlang$frostc$ASTNode* $tmp2810 = *(&local2);
frost$core$Bit $tmp2811 = frost$core$Bit$init$builtin_bit($tmp2810 == NULL);
bool $tmp2812 = $tmp2811.value;
if ($tmp2812) goto block7; else goto block8;
block7:;
// line 1224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2814 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1226
org$frostlang$frostc$ASTNode* $tmp2815 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2816 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp2817 = *(&local1);
org$frostlang$frostc$Position $tmp2818 = ((org$frostlang$frostc$parser$Token) $tmp2817.value).position;
org$frostlang$frostc$ASTNode* $tmp2819 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp2820 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2821 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp2820.value));
org$frostlang$frostc$ASTNode* $tmp2822 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2815, $tmp2816, $tmp2818, $tmp2819, $tmp2821, $tmp2822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$ASTNode* $tmp2823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local0) = $tmp2815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$ASTNode* $tmp2824 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1228
org$frostlang$frostc$ASTNode* $tmp2825 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2825;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1235
org$frostlang$frostc$parser$Token $tmp2827 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2827;
// line 1236
org$frostlang$frostc$parser$Token $tmp2828 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2829 = $tmp2828.kind;
frost$core$Int64 $tmp2830 = $tmp2829.$rawValue;
frost$core$Int64 $tmp2831 = (frost$core$Int64) {56};
frost$core$Bit $tmp2832 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2830, $tmp2831);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2834 = (frost$core$Int64) {53};
frost$core$Bit $tmp2835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2830, $tmp2834);
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2837 = (frost$core$Int64) {54};
frost$core$Bit $tmp2838 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2830, $tmp2837);
bool $tmp2839 = $tmp2838.value;
if ($tmp2839) goto block2; else goto block5;
block2:;
// line 1238
org$frostlang$frostc$ASTNode* $tmp2840 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
org$frostlang$frostc$ASTNode* $tmp2841 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local1) = $tmp2840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
// line 1239
org$frostlang$frostc$ASTNode* $tmp2842 = *(&local1);
frost$core$Bit $tmp2843 = frost$core$Bit$init$builtin_bit($tmp2842 == NULL);
bool $tmp2844 = $tmp2843.value;
if ($tmp2844) goto block6; else goto block7;
block6:;
// line 1240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2845 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 1242
org$frostlang$frostc$ASTNode* $tmp2846 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2847 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token $tmp2848 = *(&local0);
org$frostlang$frostc$Position $tmp2849 = $tmp2848.position;
org$frostlang$frostc$parser$Token $tmp2850 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator $tmp2851 = org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator($tmp2850);
org$frostlang$frostc$ASTNode* $tmp2852 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode($tmp2846, $tmp2847, $tmp2849, $tmp2851, $tmp2852);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$ASTNode* $tmp2853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2846;
block5:;
// line 1245
org$frostlang$frostc$parser$Token $tmp2854 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2854);
// line 1246
org$frostlang$frostc$ASTNode* $tmp2855 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
return $tmp2855;
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
// line 1258
org$frostlang$frostc$ASTNode* $tmp2856 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
org$frostlang$frostc$ASTNode* $tmp2857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local0) = $tmp2856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
// line 1259
org$frostlang$frostc$ASTNode* $tmp2858 = *(&local0);
frost$core$Bit $tmp2859 = frost$core$Bit$init$builtin_bit($tmp2858 == NULL);
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block1; else goto block2;
block1:;
// line 1260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2861 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1262
goto block3;
block3:;
// line 1263
org$frostlang$frostc$parser$Token $tmp2862 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2862;
// line 1264
org$frostlang$frostc$parser$Token $tmp2863 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2864 = $tmp2863.kind;
frost$core$Int64 $tmp2865 = $tmp2864.$rawValue;
frost$core$Int64 $tmp2866 = (frost$core$Int64) {57};
frost$core$Bit $tmp2867 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2866);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2869 = (frost$core$Int64) {58};
frost$core$Bit $tmp2870 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2869);
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2872 = (frost$core$Int64) {59};
frost$core$Bit $tmp2873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2872);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2875 = (frost$core$Int64) {60};
frost$core$Bit $tmp2876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2875);
bool $tmp2877 = $tmp2876.value;
if ($tmp2877) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2878 = (frost$core$Int64) {76};
frost$core$Bit $tmp2879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2878);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2881 = (frost$core$Int64) {71};
frost$core$Bit $tmp2882 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2881);
bool $tmp2883 = $tmp2882.value;
if ($tmp2883) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {73};
frost$core$Bit $tmp2885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2884);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block6; else goto block13;
block6:;
// line 1267
org$frostlang$frostc$ASTNode* $tmp2887 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
org$frostlang$frostc$ASTNode* $tmp2888 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
*(&local2) = $tmp2887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
// line 1268
org$frostlang$frostc$ASTNode* $tmp2889 = *(&local2);
frost$core$Bit $tmp2890 = frost$core$Bit$init$builtin_bit($tmp2889 == NULL);
bool $tmp2891 = $tmp2890.value;
if ($tmp2891) goto block14; else goto block15;
block14:;
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2892 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1271
org$frostlang$frostc$ASTNode* $tmp2894 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2895 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2896 = *(&local1);
org$frostlang$frostc$Position $tmp2897 = $tmp2896.position;
org$frostlang$frostc$ASTNode* $tmp2898 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2899 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2900 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2899);
org$frostlang$frostc$ASTNode* $tmp2901 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2894, $tmp2895, $tmp2897, $tmp2898, $tmp2900, $tmp2901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
org$frostlang$frostc$ASTNode* $tmp2902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local0) = $tmp2894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
org$frostlang$frostc$ASTNode* $tmp2903 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2904 = (frost$core$Int64) {67};
frost$core$Bit $tmp2905 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2865, $tmp2904);
bool $tmp2906 = $tmp2905.value;
if ($tmp2906) goto block16; else goto block17;
block16:;
// line 1275
org$frostlang$frostc$parser$Token $tmp2907 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2907;
// line 1276
org$frostlang$frostc$parser$Token $tmp2908 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2909 = $tmp2908.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2910;
$tmp2910 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2910->value = $tmp2909;
frost$core$Int64 $tmp2911 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2912 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2911);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2913;
$tmp2913 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2913->value = $tmp2912;
ITable* $tmp2914 = ((frost$core$Equatable*) $tmp2910)->$class->itable;
while ($tmp2914->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2914 = $tmp2914->next;
}
$fn2916 $tmp2915 = $tmp2914->methods[0];
frost$core$Bit $tmp2917 = $tmp2915(((frost$core$Equatable*) $tmp2910), ((frost$core$Equatable*) $tmp2913));
bool $tmp2918 = $tmp2917.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2913)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2910)));
if ($tmp2918) goto block18; else goto block20;
block18:;
// line 1278
org$frostlang$frostc$ASTNode* $tmp2919 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$ASTNode* $tmp2920 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local4) = $tmp2919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
// line 1279
org$frostlang$frostc$ASTNode* $tmp2921 = *(&local4);
frost$core$Bit $tmp2922 = frost$core$Bit$init$builtin_bit($tmp2921 == NULL);
bool $tmp2923 = $tmp2922.value;
if ($tmp2923) goto block21; else goto block22;
block21:;
// line 1280
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2924 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2925 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1282
org$frostlang$frostc$ASTNode* $tmp2926 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2927 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2928 = *(&local1);
org$frostlang$frostc$Position $tmp2929 = $tmp2928.position;
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local0);
frost$core$Int64 $tmp2931 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2932 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2931);
org$frostlang$frostc$ASTNode* $tmp2933 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2926, $tmp2927, $tmp2929, $tmp2930, $tmp2932, $tmp2933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
org$frostlang$frostc$ASTNode* $tmp2934 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
*(&local0) = $tmp2926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
org$frostlang$frostc$ASTNode* $tmp2935 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1286
org$frostlang$frostc$parser$Token $tmp2936 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2936);
// line 1287
org$frostlang$frostc$parser$Token $tmp2937 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2937);
// line 1288
org$frostlang$frostc$ASTNode* $tmp2938 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2938;
block19:;
goto block5;
block17:;
// line 1292
org$frostlang$frostc$parser$Token $tmp2940 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2940);
// line 1293
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2941;
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
// line 1304
org$frostlang$frostc$ASTNode* $tmp2943 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local0) = $tmp2943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// line 1305
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local0);
frost$core$Bit $tmp2946 = frost$core$Bit$init$builtin_bit($tmp2945 == NULL);
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block1; else goto block2;
block1:;
// line 1306
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2948 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1308
goto block3;
block3:;
// line 1309
org$frostlang$frostc$parser$Token $tmp2949 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2949;
// line 1310
org$frostlang$frostc$parser$Token $tmp2950 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2951 = $tmp2950.kind;
frost$core$Int64 $tmp2952 = $tmp2951.$rawValue;
frost$core$Int64 $tmp2953 = (frost$core$Int64) {55};
frost$core$Bit $tmp2954 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2952, $tmp2953);
bool $tmp2955 = $tmp2954.value;
if ($tmp2955) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2956 = (frost$core$Int64) {56};
frost$core$Bit $tmp2957 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2952, $tmp2956);
bool $tmp2958 = $tmp2957.value;
if ($tmp2958) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2959 = (frost$core$Int64) {75};
frost$core$Bit $tmp2960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2952, $tmp2959);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block6; else goto block9;
block6:;
// line 1312
org$frostlang$frostc$ASTNode* $tmp2962 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local2) = $tmp2962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
// line 1313
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local2);
frost$core$Bit $tmp2965 = frost$core$Bit$init$builtin_bit($tmp2964 == NULL);
bool $tmp2966 = $tmp2965.value;
if ($tmp2966) goto block10; else goto block11;
block10:;
// line 1314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2968 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1316
org$frostlang$frostc$ASTNode* $tmp2969 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2970 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2971 = *(&local1);
org$frostlang$frostc$Position $tmp2972 = $tmp2971.position;
org$frostlang$frostc$ASTNode* $tmp2973 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2974 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2975 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2974);
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2969, $tmp2970, $tmp2972, $tmp2973, $tmp2975, $tmp2976);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
org$frostlang$frostc$ASTNode* $tmp2977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local0) = $tmp2969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
org$frostlang$frostc$ASTNode* $tmp2978 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1320
org$frostlang$frostc$parser$Token $tmp2979 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2979);
// line 1321
org$frostlang$frostc$ASTNode* $tmp2980 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
org$frostlang$frostc$ASTNode* $tmp2981 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2980;
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
// line 1332
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1333
org$frostlang$frostc$parser$Token $tmp2982 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2983 = $tmp2982.kind;
frost$core$Int64 $tmp2984 = $tmp2983.$rawValue;
frost$core$Int64 $tmp2985 = (frost$core$Int64) {101};
frost$core$Bit $tmp2986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2984, $tmp2985);
bool $tmp2987 = $tmp2986.value;
if ($tmp2987) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2988 = (frost$core$Int64) {100};
frost$core$Bit $tmp2989 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2984, $tmp2988);
bool $tmp2990 = $tmp2989.value;
if ($tmp2990) goto block2; else goto block4;
block2:;
// line 1335
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2991 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1338
org$frostlang$frostc$ASTNode* $tmp2992 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$ASTNode* $tmp2993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local0) = $tmp2992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// line 1339
org$frostlang$frostc$ASTNode* $tmp2994 = *(&local0);
frost$core$Bit $tmp2995 = frost$core$Bit$init$builtin_bit($tmp2994 == NULL);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block5; else goto block6;
block5:;
// line 1340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1344
org$frostlang$frostc$parser$Token $tmp2998 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2998;
// line 1345
org$frostlang$frostc$parser$Token $tmp2999 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3000 = $tmp2999.kind;
frost$core$Int64 $tmp3001 = $tmp3000.$rawValue;
frost$core$Int64 $tmp3002 = (frost$core$Int64) {101};
frost$core$Bit $tmp3003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3001, $tmp3002);
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3005 = (frost$core$Int64) {100};
frost$core$Bit $tmp3006 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3001, $tmp3005);
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block8; else goto block10;
block8:;
// line 1347
org$frostlang$frostc$parser$Token $tmp3008 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3008;
// line 1348
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1349
org$frostlang$frostc$parser$Token $tmp3009 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3010 = $tmp3009.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3011;
$tmp3011 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3011->value = $tmp3010;
frost$core$Int64 $tmp3012 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp3013 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3012);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3014;
$tmp3014 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3014->value = $tmp3013;
ITable* $tmp3015 = ((frost$core$Equatable*) $tmp3011)->$class->itable;
while ($tmp3015->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3015 = $tmp3015->next;
}
$fn3017 $tmp3016 = $tmp3015->methods[1];
frost$core$Bit $tmp3018 = $tmp3016(((frost$core$Equatable*) $tmp3011), ((frost$core$Equatable*) $tmp3014));
bool $tmp3019 = $tmp3018.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3014)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3011)));
if ($tmp3019) goto block15; else goto block13;
block15:;
org$frostlang$frostc$parser$Token $tmp3020 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3021 = $tmp3020.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3022;
$tmp3022 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3022->value = $tmp3021;
frost$core$Int64 $tmp3023 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3024 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3023);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3025;
$tmp3025 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3025->value = $tmp3024;
ITable* $tmp3026 = ((frost$core$Equatable*) $tmp3022)->$class->itable;
while ($tmp3026->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3026 = $tmp3026->next;
}
$fn3028 $tmp3027 = $tmp3026->methods[1];
frost$core$Bit $tmp3029 = $tmp3027(((frost$core$Equatable*) $tmp3022), ((frost$core$Equatable*) $tmp3025));
bool $tmp3030 = $tmp3029.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3025)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3022)));
if ($tmp3030) goto block14; else goto block13;
block14:;
org$frostlang$frostc$parser$Token $tmp3031 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3032 = $tmp3031.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3033;
$tmp3033 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3033->value = $tmp3032;
frost$core$Int64 $tmp3034 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3035 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3034);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3036;
$tmp3036 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3036->value = $tmp3035;
ITable* $tmp3037 = ((frost$core$Equatable*) $tmp3033)->$class->itable;
while ($tmp3037->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3037 = $tmp3037->next;
}
$fn3039 $tmp3038 = $tmp3037->methods[1];
frost$core$Bit $tmp3040 = $tmp3038(((frost$core$Equatable*) $tmp3033), ((frost$core$Equatable*) $tmp3036));
bool $tmp3041 = $tmp3040.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3036)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3033)));
if ($tmp3041) goto block11; else goto block13;
block11:;
// line 1351
org$frostlang$frostc$ASTNode* $tmp3042 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
org$frostlang$frostc$ASTNode* $tmp3043 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local3) = $tmp3042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
// line 1352
org$frostlang$frostc$ASTNode* $tmp3044 = *(&local3);
frost$core$Bit $tmp3045 = frost$core$Bit$init$builtin_bit($tmp3044 == NULL);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block16; else goto block17;
block16:;
// line 1353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3047 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3048 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block12;
block13:;
// line 1
// line 1357
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3049 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block12:;
// line 1359
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1360
frost$core$Int64 $tmp3050 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3051 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3050);
org$frostlang$frostc$parser$Token$nullable $tmp3052 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3051);
frost$core$Bit $tmp3053 = frost$core$Bit$init$builtin_bit($tmp3052.nonnull);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block18; else goto block20;
block18:;
// line 1361
org$frostlang$frostc$ASTNode* $tmp3055 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
org$frostlang$frostc$ASTNode* $tmp3056 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
*(&local4) = $tmp3055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
// line 1362
org$frostlang$frostc$ASTNode* $tmp3057 = *(&local4);
frost$core$Bit $tmp3058 = frost$core$Bit$init$builtin_bit($tmp3057 == NULL);
bool $tmp3059 = $tmp3058.value;
if ($tmp3059) goto block21; else goto block22;
block21:;
// line 1363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3060 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3061 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3062 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 1367
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block19:;
// line 1369
org$frostlang$frostc$ASTNode* $tmp3064 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3065 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3066 = *(&local1);
org$frostlang$frostc$Position $tmp3067 = $tmp3066.position;
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3069 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3070 = $tmp3069.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3071;
$tmp3071 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3071->value = $tmp3070;
frost$core$Int64 $tmp3072 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3073 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3072);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3074;
$tmp3074 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3074->value = $tmp3073;
ITable* $tmp3075 = ((frost$core$Equatable*) $tmp3071)->$class->itable;
while ($tmp3075->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3075 = $tmp3075->next;
}
$fn3077 $tmp3076 = $tmp3075->methods[0];
frost$core$Bit $tmp3078 = $tmp3076(((frost$core$Equatable*) $tmp3071), ((frost$core$Equatable*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3079 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3080 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3064, $tmp3065, $tmp3067, $tmp3068, $tmp3078, $tmp3079, $tmp3080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3074)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$ASTNode* $tmp3081 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3082 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3083 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3064;
block10:;
// line 1373
org$frostlang$frostc$parser$Token $tmp3084 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3084);
// line 1374
org$frostlang$frostc$ASTNode* $tmp3085 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
org$frostlang$frostc$ASTNode* $tmp3086 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3085;
block7:;
goto block23;
block23:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1384
org$frostlang$frostc$ASTNode* $tmp3087 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
org$frostlang$frostc$ASTNode* $tmp3088 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local0) = $tmp3087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
// line 1385
org$frostlang$frostc$ASTNode* $tmp3089 = *(&local0);
frost$core$Bit $tmp3090 = frost$core$Bit$init$builtin_bit($tmp3089 == NULL);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block1; else goto block2;
block1:;
// line 1386
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3092 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1388
goto block3;
block3:;
// line 1389
org$frostlang$frostc$parser$Token $tmp3093 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3093;
// line 1390
org$frostlang$frostc$parser$Token $tmp3094 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3095 = $tmp3094.kind;
frost$core$Int64 $tmp3096 = $tmp3095.$rawValue;
frost$core$Int64 $tmp3097 = (frost$core$Int64) {62};
frost$core$Bit $tmp3098 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3097);
bool $tmp3099 = $tmp3098.value;
if ($tmp3099) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3100 = (frost$core$Int64) {63};
frost$core$Bit $tmp3101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3100);
bool $tmp3102 = $tmp3101.value;
if ($tmp3102) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3103 = (frost$core$Int64) {64};
frost$core$Bit $tmp3104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3103);
bool $tmp3105 = $tmp3104.value;
if ($tmp3105) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3106 = (frost$core$Int64) {65};
frost$core$Bit $tmp3107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3106);
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3109 = (frost$core$Int64) {66};
frost$core$Bit $tmp3110 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3109);
bool $tmp3111 = $tmp3110.value;
if ($tmp3111) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3112 = (frost$core$Int64) {67};
frost$core$Bit $tmp3113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3112);
bool $tmp3114 = $tmp3113.value;
if ($tmp3114) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3115 = (frost$core$Int64) {68};
frost$core$Bit $tmp3116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3115);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3118 = (frost$core$Int64) {69};
frost$core$Bit $tmp3119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3096, $tmp3118);
bool $tmp3120 = $tmp3119.value;
if ($tmp3120) goto block6; else goto block14;
block6:;
// line 1399
org$frostlang$frostc$ASTNode* $tmp3121 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
org$frostlang$frostc$ASTNode* $tmp3122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local2) = $tmp3121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// line 1400
org$frostlang$frostc$ASTNode* $tmp3123 = *(&local2);
frost$core$Bit $tmp3124 = frost$core$Bit$init$builtin_bit($tmp3123 == NULL);
bool $tmp3125 = $tmp3124.value;
if ($tmp3125) goto block15; else goto block16;
block15:;
// line 1401
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1403
org$frostlang$frostc$ASTNode* $tmp3128 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3129 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3130 = *(&local1);
org$frostlang$frostc$Position $tmp3131 = $tmp3130.position;
org$frostlang$frostc$ASTNode* $tmp3132 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3133 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3134 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3133);
org$frostlang$frostc$ASTNode* $tmp3135 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3128, $tmp3129, $tmp3131, $tmp3132, $tmp3134, $tmp3135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
org$frostlang$frostc$ASTNode* $tmp3136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
*(&local0) = $tmp3128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
org$frostlang$frostc$ASTNode* $tmp3137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1407
org$frostlang$frostc$parser$Token $tmp3138 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3138);
// line 1408
org$frostlang$frostc$ASTNode* $tmp3139 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3139;
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
// line 1418
org$frostlang$frostc$ASTNode* $tmp3141 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
org$frostlang$frostc$ASTNode* $tmp3142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
*(&local0) = $tmp3141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
// line 1419
org$frostlang$frostc$ASTNode* $tmp3143 = *(&local0);
frost$core$Bit $tmp3144 = frost$core$Bit$init$builtin_bit($tmp3143 == NULL);
bool $tmp3145 = $tmp3144.value;
if ($tmp3145) goto block1; else goto block2;
block1:;
// line 1420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1422
goto block3;
block3:;
// line 1423
org$frostlang$frostc$parser$Token $tmp3147 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3147;
// line 1424
org$frostlang$frostc$parser$Token $tmp3148 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3149 = $tmp3148.kind;
frost$core$Int64 $tmp3150 = $tmp3149.$rawValue;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {70};
frost$core$Bit $tmp3152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3150, $tmp3151);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3154 = (frost$core$Int64) {74};
frost$core$Bit $tmp3155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3150, $tmp3154);
bool $tmp3156 = $tmp3155.value;
if ($tmp3156) goto block6; else goto block8;
block6:;
// line 1426
org$frostlang$frostc$ASTNode* $tmp3157 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local2) = $tmp3157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
// line 1427
org$frostlang$frostc$ASTNode* $tmp3159 = *(&local2);
frost$core$Bit $tmp3160 = frost$core$Bit$init$builtin_bit($tmp3159 == NULL);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block9; else goto block10;
block9:;
// line 1428
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3163 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1430
org$frostlang$frostc$ASTNode* $tmp3164 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3165 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3166 = *(&local1);
org$frostlang$frostc$Position $tmp3167 = $tmp3166.position;
org$frostlang$frostc$ASTNode* $tmp3168 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3169 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3170 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3169);
org$frostlang$frostc$ASTNode* $tmp3171 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3164, $tmp3165, $tmp3167, $tmp3168, $tmp3170, $tmp3171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
org$frostlang$frostc$ASTNode* $tmp3172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
*(&local0) = $tmp3164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
org$frostlang$frostc$ASTNode* $tmp3173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1434
org$frostlang$frostc$parser$Token $tmp3174 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3174);
// line 1435
org$frostlang$frostc$ASTNode* $tmp3175 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3175;
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
// line 1445
org$frostlang$frostc$ASTNode* $tmp3177 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
org$frostlang$frostc$ASTNode* $tmp3178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
*(&local0) = $tmp3177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
// line 1446
org$frostlang$frostc$ASTNode* $tmp3179 = *(&local0);
frost$core$Bit $tmp3180 = frost$core$Bit$init$builtin_bit($tmp3179 == NULL);
bool $tmp3181 = $tmp3180.value;
if ($tmp3181) goto block1; else goto block2;
block1:;
// line 1447
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1449
goto block3;
block3:;
// line 1450
frost$core$Int64 $tmp3183 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3184 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3183);
org$frostlang$frostc$parser$Token$nullable $tmp3185 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3184);
*(&local1) = $tmp3185;
// line 1451
org$frostlang$frostc$parser$Token$nullable $tmp3186 = *(&local1);
frost$core$Bit $tmp3187 = frost$core$Bit$init$builtin_bit(!$tmp3186.nonnull);
bool $tmp3188 = $tmp3187.value;
if ($tmp3188) goto block5; else goto block6;
block5:;
// line 1452
goto block4;
block6:;
// line 1454
org$frostlang$frostc$ASTNode* $tmp3189 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlang$frostc$ASTNode* $tmp3190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local2) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// line 1455
org$frostlang$frostc$ASTNode* $tmp3191 = *(&local2);
frost$core$Bit $tmp3192 = frost$core$Bit$init$builtin_bit($tmp3191 == NULL);
bool $tmp3193 = $tmp3192.value;
if ($tmp3193) goto block7; else goto block8;
block7:;
// line 1456
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1458
org$frostlang$frostc$ASTNode* $tmp3196 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3197 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3198 = *(&local1);
org$frostlang$frostc$Position $tmp3199 = ((org$frostlang$frostc$parser$Token) $tmp3198.value).position;
org$frostlang$frostc$ASTNode* $tmp3200 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3201 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3202 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3201.value));
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3196, $tmp3197, $tmp3199, $tmp3200, $tmp3202, $tmp3203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
org$frostlang$frostc$ASTNode* $tmp3204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local0) = $tmp3196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
org$frostlang$frostc$ASTNode* $tmp3205 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1460
org$frostlang$frostc$ASTNode* $tmp3206 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
org$frostlang$frostc$ASTNode* $tmp3207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3206;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1467
frost$core$Int64 $tmp3208 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3209 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3208);
org$frostlang$frostc$parser$Token$nullable $tmp3210 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3209, &$s3211);
*(&local0) = $tmp3210;
// line 1468
org$frostlang$frostc$parser$Token$nullable $tmp3212 = *(&local0);
frost$core$Bit $tmp3213 = frost$core$Bit$init$builtin_bit(!$tmp3212.nonnull);
bool $tmp3214 = $tmp3213.value;
if ($tmp3214) goto block1; else goto block2;
block1:;
// line 1469
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1471
org$frostlang$frostc$ASTNode* $tmp3215 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
org$frostlang$frostc$ASTNode* $tmp3216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
*(&local1) = $tmp3215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
// line 1472
org$frostlang$frostc$ASTNode* $tmp3217 = *(&local1);
frost$core$Bit $tmp3218 = frost$core$Bit$init$builtin_bit($tmp3217 == NULL);
bool $tmp3219 = $tmp3218.value;
if ($tmp3219) goto block3; else goto block4;
block3:;
// line 1473
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1475
org$frostlang$frostc$FixedArray* $tmp3221 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
org$frostlang$frostc$FixedArray* $tmp3222 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local2) = $tmp3221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
// line 1476
org$frostlang$frostc$FixedArray* $tmp3223 = *(&local2);
frost$core$Bit $tmp3224 = frost$core$Bit$init$builtin_bit($tmp3223 == NULL);
bool $tmp3225 = $tmp3224.value;
if ($tmp3225) goto block5; else goto block6;
block5:;
// line 1477
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1479
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1480
frost$core$Int64 $tmp3228 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3229 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3228);
org$frostlang$frostc$parser$Token$nullable $tmp3230 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3229);
frost$core$Bit $tmp3231 = frost$core$Bit$init$builtin_bit($tmp3230.nonnull);
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block7; else goto block9;
block7:;
// line 1481
org$frostlang$frostc$parser$Token $tmp3233 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3234 = $tmp3233.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3235;
$tmp3235 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3235->value = $tmp3234;
frost$core$Int64 $tmp3236 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3237 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3236);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3238;
$tmp3238 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3238->value = $tmp3237;
ITable* $tmp3239 = ((frost$core$Equatable*) $tmp3235)->$class->itable;
while ($tmp3239->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3239 = $tmp3239->next;
}
$fn3241 $tmp3240 = $tmp3239->methods[0];
frost$core$Bit $tmp3242 = $tmp3240(((frost$core$Equatable*) $tmp3235), ((frost$core$Equatable*) $tmp3238));
bool $tmp3243 = $tmp3242.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3238)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3235)));
if ($tmp3243) goto block10; else goto block12;
block10:;
// line 1482
org$frostlang$frostc$ASTNode* $tmp3244 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
org$frostlang$frostc$ASTNode* $tmp3245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local3) = $tmp3244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
// line 1483
org$frostlang$frostc$ASTNode* $tmp3246 = *(&local3);
frost$core$Bit $tmp3247 = frost$core$Bit$init$builtin_bit($tmp3246 == NULL);
bool $tmp3248 = $tmp3247.value;
if ($tmp3248) goto block13; else goto block14;
block13:;
// line 1484
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3249 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1488
org$frostlang$frostc$ASTNode* $tmp3252 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$ASTNode* $tmp3253 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local3) = $tmp3252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
// line 1489
org$frostlang$frostc$ASTNode* $tmp3254 = *(&local3);
frost$core$Bit $tmp3255 = frost$core$Bit$init$builtin_bit($tmp3254 == NULL);
bool $tmp3256 = $tmp3255.value;
if ($tmp3256) goto block15; else goto block16;
block15:;
// line 1490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1495
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1497
org$frostlang$frostc$ASTNode* $tmp3261 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3262 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3263 = *(&local0);
org$frostlang$frostc$Position $tmp3264 = ((org$frostlang$frostc$parser$Token) $tmp3263.value).position;
org$frostlang$frostc$ASTNode* $tmp3265 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3266 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3267 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3261, $tmp3262, $tmp3264, $tmp3265, $tmp3266, $tmp3267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3269 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3270 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3261;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1504
frost$core$Int64 $tmp3271 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3272 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3271);
org$frostlang$frostc$parser$Token$nullable $tmp3273 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3272, &$s3274);
frost$core$Bit $tmp3275 = frost$core$Bit$init$builtin_bit(!$tmp3273.nonnull);
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block1; else goto block2;
block1:;
// line 1505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1507
frost$core$Bit $tmp3277 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3278 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
return $tmp3278;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1514
frost$core$Int64 $tmp3279 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3280 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3279);
org$frostlang$frostc$parser$Token$nullable $tmp3281 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3280, &$s3282);
*(&local0) = $tmp3281;
// line 1515
org$frostlang$frostc$parser$Token$nullable $tmp3283 = *(&local0);
frost$core$Bit $tmp3284 = frost$core$Bit$init$builtin_bit(!$tmp3283.nonnull);
bool $tmp3285 = $tmp3284.value;
if ($tmp3285) goto block1; else goto block2;
block1:;
// line 1516
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1518
org$frostlang$frostc$parser$Token $tmp3286 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3287 = $tmp3286.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3288;
$tmp3288 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3288->value = $tmp3287;
frost$core$Int64 $tmp3289 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3290 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3289);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3291;
$tmp3291 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3291->value = $tmp3290;
ITable* $tmp3292 = ((frost$core$Equatable*) $tmp3288)->$class->itable;
while ($tmp3292->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3292 = $tmp3292->next;
}
$fn3294 $tmp3293 = $tmp3292->methods[0];
frost$core$Bit $tmp3295 = $tmp3293(((frost$core$Equatable*) $tmp3288), ((frost$core$Equatable*) $tmp3291));
bool $tmp3296 = $tmp3295.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3291)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3288)));
if ($tmp3296) goto block3; else goto block4;
block3:;
// line 1519
org$frostlang$frostc$ASTNode* $tmp3297 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
org$frostlang$frostc$ASTNode* $tmp3298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
*(&local1) = $tmp3297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
// line 1520
org$frostlang$frostc$ASTNode* $tmp3299 = *(&local1);
frost$core$Bit $tmp3300 = frost$core$Bit$init$builtin_bit($tmp3299 == NULL);
bool $tmp3301 = $tmp3300.value;
if ($tmp3301) goto block5; else goto block6;
block5:;
// line 1521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1523
org$frostlang$frostc$ASTNode* $tmp3303 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3304 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp3305 = *(&local0);
org$frostlang$frostc$Position $tmp3306 = ((org$frostlang$frostc$parser$Token) $tmp3305.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3307 = *(&local0);
frost$core$String* $tmp3308 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3307.value));
org$frostlang$frostc$ASTNode* $tmp3309 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3303, $tmp3304, $tmp3306, $tmp3308, $tmp3309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
org$frostlang$frostc$ASTNode* $tmp3310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3303;
block4:;
// line 1525
org$frostlang$frostc$ASTNode* $tmp3311 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3312 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3313 = *(&local0);
org$frostlang$frostc$Position $tmp3314 = ((org$frostlang$frostc$parser$Token) $tmp3313.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3315 = *(&local0);
frost$core$String* $tmp3316 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3315.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3311, $tmp3312, $tmp3314, $tmp3316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
return $tmp3311;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1532
frost$core$Int64 $tmp3317 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3318 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3317);
org$frostlang$frostc$parser$Token$nullable $tmp3319 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3318, &$s3320);
*(&local0) = $tmp3319;
// line 1533
org$frostlang$frostc$parser$Token$nullable $tmp3321 = *(&local0);
frost$core$Bit $tmp3322 = frost$core$Bit$init$builtin_bit(!$tmp3321.nonnull);
bool $tmp3323 = $tmp3322.value;
if ($tmp3323) goto block1; else goto block2;
block1:;
// line 1534
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1536
org$frostlang$frostc$ASTNode* $tmp3324 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
org$frostlang$frostc$ASTNode* $tmp3325 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3325));
*(&local1) = $tmp3324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
// line 1537
org$frostlang$frostc$ASTNode* $tmp3326 = *(&local1);
frost$core$Bit $tmp3327 = frost$core$Bit$init$builtin_bit($tmp3326 == NULL);
bool $tmp3328 = $tmp3327.value;
if ($tmp3328) goto block3; else goto block4;
block3:;
// line 1538
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1540
frost$core$Int64 $tmp3330 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3331 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3330);
org$frostlang$frostc$parser$Token$nullable $tmp3332 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3331, &$s3333);
frost$core$Bit $tmp3334 = frost$core$Bit$init$builtin_bit(!$tmp3332.nonnull);
bool $tmp3335 = $tmp3334.value;
if ($tmp3335) goto block5; else goto block6;
block5:;
// line 1541
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1543
org$frostlang$frostc$ASTNode* $tmp3337 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
org$frostlang$frostc$ASTNode* $tmp3338 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
*(&local2) = $tmp3337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
// line 1544
org$frostlang$frostc$ASTNode* $tmp3339 = *(&local2);
frost$core$Bit $tmp3340 = frost$core$Bit$init$builtin_bit($tmp3339 == NULL);
bool $tmp3341 = $tmp3340.value;
if ($tmp3341) goto block7; else goto block8;
block7:;
// line 1545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1547
org$frostlang$frostc$FixedArray* $tmp3344 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
org$frostlang$frostc$FixedArray* $tmp3345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
*(&local3) = $tmp3344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
// line 1548
org$frostlang$frostc$FixedArray* $tmp3346 = *(&local3);
frost$core$Bit $tmp3347 = frost$core$Bit$init$builtin_bit($tmp3346 == NULL);
bool $tmp3348 = $tmp3347.value;
if ($tmp3348) goto block9; else goto block10;
block9:;
// line 1549
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3349 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3350 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1551
org$frostlang$frostc$ASTNode* $tmp3352 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3353 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3354 = *(&local0);
org$frostlang$frostc$Position $tmp3355 = ((org$frostlang$frostc$parser$Token) $tmp3354.value).position;
org$frostlang$frostc$ASTNode* $tmp3356 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3357 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3358 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3352, $tmp3353, $tmp3355, param1, $tmp3356, $tmp3357, $tmp3358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
org$frostlang$frostc$FixedArray* $tmp3359 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3361));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3352;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1558
frost$core$Int64 $tmp3362 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3363 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3362);
org$frostlang$frostc$parser$Token$nullable $tmp3364 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3363, &$s3365);
*(&local0) = $tmp3364;
// line 1559
org$frostlang$frostc$parser$Token$nullable $tmp3366 = *(&local0);
frost$core$Bit $tmp3367 = frost$core$Bit$init$builtin_bit(!$tmp3366.nonnull);
bool $tmp3368 = $tmp3367.value;
if ($tmp3368) goto block1; else goto block2;
block1:;
// line 1560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1562
org$frostlang$frostc$ASTNode* $tmp3369 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
org$frostlang$frostc$ASTNode* $tmp3370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local1) = $tmp3369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
// line 1563
org$frostlang$frostc$ASTNode* $tmp3371 = *(&local1);
frost$core$Bit $tmp3372 = frost$core$Bit$init$builtin_bit($tmp3371 == NULL);
bool $tmp3373 = $tmp3372.value;
if ($tmp3373) goto block3; else goto block4;
block3:;
// line 1564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1566
org$frostlang$frostc$FixedArray* $tmp3375 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
org$frostlang$frostc$FixedArray* $tmp3376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
*(&local2) = $tmp3375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
// line 1567
org$frostlang$frostc$FixedArray* $tmp3377 = *(&local2);
frost$core$Bit $tmp3378 = frost$core$Bit$init$builtin_bit($tmp3377 == NULL);
bool $tmp3379 = $tmp3378.value;
if ($tmp3379) goto block5; else goto block6;
block5:;
// line 1568
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1570
org$frostlang$frostc$ASTNode* $tmp3382 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3383 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3384 = *(&local0);
org$frostlang$frostc$Position $tmp3385 = ((org$frostlang$frostc$parser$Token) $tmp3384.value).position;
org$frostlang$frostc$ASTNode* $tmp3386 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3387 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3382, $tmp3383, $tmp3385, param1, $tmp3386, $tmp3387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
org$frostlang$frostc$FixedArray* $tmp3388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3382;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1577
frost$core$Int64 $tmp3390 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3391 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3390);
org$frostlang$frostc$parser$Token$nullable $tmp3392 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3391, &$s3393);
*(&local0) = $tmp3392;
// line 1578
org$frostlang$frostc$parser$Token$nullable $tmp3394 = *(&local0);
frost$core$Bit $tmp3395 = frost$core$Bit$init$builtin_bit(!$tmp3394.nonnull);
bool $tmp3396 = $tmp3395.value;
if ($tmp3396) goto block1; else goto block2;
block1:;
// line 1579
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1581
org$frostlang$frostc$FixedArray* $tmp3397 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
org$frostlang$frostc$FixedArray* $tmp3398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
*(&local1) = $tmp3397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
// line 1582
org$frostlang$frostc$FixedArray* $tmp3399 = *(&local1);
frost$core$Bit $tmp3400 = frost$core$Bit$init$builtin_bit($tmp3399 == NULL);
bool $tmp3401 = $tmp3400.value;
if ($tmp3401) goto block3; else goto block4;
block3:;
// line 1583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1585
frost$core$Int64 $tmp3403 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3404 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3403);
org$frostlang$frostc$parser$Token$nullable $tmp3405 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3404, &$s3406);
frost$core$Bit $tmp3407 = frost$core$Bit$init$builtin_bit(!$tmp3405.nonnull);
bool $tmp3408 = $tmp3407.value;
if ($tmp3408) goto block5; else goto block6;
block5:;
// line 1586
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3409 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1588
org$frostlang$frostc$ASTNode* $tmp3410 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
org$frostlang$frostc$ASTNode* $tmp3411 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
*(&local2) = $tmp3410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
// line 1589
org$frostlang$frostc$ASTNode* $tmp3412 = *(&local2);
frost$core$Bit $tmp3413 = frost$core$Bit$init$builtin_bit($tmp3412 == NULL);
bool $tmp3414 = $tmp3413.value;
if ($tmp3414) goto block7; else goto block8;
block7:;
// line 1590
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1592
org$frostlang$frostc$ASTNode* $tmp3417 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3418 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3419 = *(&local0);
org$frostlang$frostc$Position $tmp3420 = ((org$frostlang$frostc$parser$Token) $tmp3419.value).position;
org$frostlang$frostc$FixedArray* $tmp3421 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3422 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3417, $tmp3418, $tmp3420, param1, $tmp3421, $tmp3422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
org$frostlang$frostc$ASTNode* $tmp3423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3417;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1599
frost$core$Int64 $tmp3425 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3426 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3425);
org$frostlang$frostc$parser$Token$nullable $tmp3427 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3426, &$s3428);
*(&local0) = $tmp3427;
// line 1600
org$frostlang$frostc$parser$Token$nullable $tmp3429 = *(&local0);
frost$core$Bit $tmp3430 = frost$core$Bit$init$builtin_bit(!$tmp3429.nonnull);
bool $tmp3431 = $tmp3430.value;
if ($tmp3431) goto block1; else goto block2;
block1:;
// line 1601
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1603
org$frostlang$frostc$FixedArray* $tmp3432 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
org$frostlang$frostc$FixedArray* $tmp3433 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local1) = $tmp3432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
// line 1604
org$frostlang$frostc$FixedArray* $tmp3434 = *(&local1);
frost$core$Bit $tmp3435 = frost$core$Bit$init$builtin_bit($tmp3434 == NULL);
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block3; else goto block4;
block3:;
// line 1605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3437 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3437));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1607
org$frostlang$frostc$ASTNode* $tmp3438 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3439 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3440 = *(&local0);
org$frostlang$frostc$Position $tmp3441 = ((org$frostlang$frostc$parser$Token) $tmp3440.value).position;
org$frostlang$frostc$FixedArray* $tmp3442 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3438, $tmp3439, $tmp3441, param1, $tmp3442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
org$frostlang$frostc$FixedArray* $tmp3443 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3438;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1614
frost$core$Int64 $tmp3444 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3445 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3444);
org$frostlang$frostc$parser$Token$nullable $tmp3446 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3445, &$s3447);
*(&local0) = $tmp3446;
// line 1615
org$frostlang$frostc$parser$Token$nullable $tmp3448 = *(&local0);
frost$core$Bit $tmp3449 = frost$core$Bit$init$builtin_bit(!$tmp3448.nonnull);
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block1; else goto block2;
block1:;
// line 1616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1618
org$frostlang$frostc$ASTNode* $tmp3451 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
org$frostlang$frostc$ASTNode* $tmp3452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
*(&local1) = $tmp3451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
// line 1619
org$frostlang$frostc$ASTNode* $tmp3453 = *(&local1);
frost$core$Bit $tmp3454 = frost$core$Bit$init$builtin_bit($tmp3453 == NULL);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block3; else goto block4;
block3:;
// line 1620
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1622
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1623
frost$core$Int64 $tmp3457 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3458 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3457);
org$frostlang$frostc$parser$Token$nullable $tmp3459 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3458);
frost$core$Bit $tmp3460 = frost$core$Bit$init$builtin_bit($tmp3459.nonnull);
bool $tmp3461 = $tmp3460.value;
if ($tmp3461) goto block5; else goto block7;
block5:;
// line 1624
org$frostlang$frostc$ASTNode* $tmp3462 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
org$frostlang$frostc$ASTNode* $tmp3463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
*(&local2) = $tmp3462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
// line 1625
org$frostlang$frostc$ASTNode* $tmp3464 = *(&local2);
frost$core$Bit $tmp3465 = frost$core$Bit$init$builtin_bit($tmp3464 == NULL);
bool $tmp3466 = $tmp3465.value;
if ($tmp3466) goto block8; else goto block9;
block8:;
// line 1626
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3468 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1630
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1632
org$frostlang$frostc$ASTNode* $tmp3470 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3471 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3472 = *(&local0);
org$frostlang$frostc$Position $tmp3473 = ((org$frostlang$frostc$parser$Token) $tmp3472.value).position;
org$frostlang$frostc$ASTNode* $tmp3474 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3475 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3470, $tmp3471, $tmp3473, $tmp3474, $tmp3475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
org$frostlang$frostc$ASTNode* $tmp3476 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3470;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1639
frost$core$Int64 $tmp3478 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3479 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3478);
org$frostlang$frostc$parser$Token$nullable $tmp3480 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3479, &$s3481);
*(&local0) = $tmp3480;
// line 1640
org$frostlang$frostc$parser$Token$nullable $tmp3482 = *(&local0);
frost$core$Bit $tmp3483 = frost$core$Bit$init$builtin_bit(!$tmp3482.nonnull);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block1; else goto block2;
block1:;
// line 1641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1643
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1644
frost$core$Int64 $tmp3485 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3486 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3485);
org$frostlang$frostc$parser$Token$nullable $tmp3487 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3486);
frost$core$Bit $tmp3488 = frost$core$Bit$init$builtin_bit($tmp3487.nonnull);
bool $tmp3489 = $tmp3488.value;
if ($tmp3489) goto block3; else goto block5;
block3:;
// line 1645
org$frostlang$frostc$ASTNode* $tmp3490 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
org$frostlang$frostc$ASTNode* $tmp3491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
*(&local1) = $tmp3490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
// line 1646
org$frostlang$frostc$ASTNode* $tmp3492 = *(&local1);
frost$core$Bit $tmp3493 = frost$core$Bit$init$builtin_bit($tmp3492 == NULL);
bool $tmp3494 = $tmp3493.value;
if ($tmp3494) goto block6; else goto block7;
block6:;
// line 1647
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3495 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1653
org$frostlang$frostc$ASTNode* $tmp3497 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3498 = (frost$core$Int64) {49};
org$frostlang$frostc$parser$Token$nullable $tmp3499 = *(&local0);
org$frostlang$frostc$Position $tmp3500 = ((org$frostlang$frostc$parser$Token) $tmp3499.value).position;
org$frostlang$frostc$ASTNode* $tmp3501 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3497, $tmp3498, $tmp3500, $tmp3501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
org$frostlang$frostc$ASTNode* $tmp3502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3497;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3503 = &param0->allowLambdas;
frost$core$Bit $tmp3504 = *$tmp3503;
bool $tmp3505 = $tmp3504.value;
if ($tmp3505) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3506 = (frost$core$Int64) {1661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3507, $tmp3506, &$s3508);
abort(); // unreachable
block1:;
// line 1662
frost$core$Int64 $tmp3509 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3510 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3509);
org$frostlang$frostc$parser$Token$nullable $tmp3511 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3510, &$s3512);
*(&local1) = $tmp3511;
// line 1663
org$frostlang$frostc$parser$Token$nullable $tmp3513 = *(&local1);
frost$core$Bit $tmp3514 = frost$core$Bit$init$builtin_bit(!$tmp3513.nonnull);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block6; else goto block7;
block6:;
// line 1664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1666
frost$collections$Array* $tmp3516 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3516);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
frost$collections$Array* $tmp3517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
*(&local2) = $tmp3516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
// line 1667
org$frostlang$frostc$ASTNode* $tmp3518 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
org$frostlang$frostc$ASTNode* $tmp3519 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
*(&local3) = $tmp3518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
// line 1668
org$frostlang$frostc$ASTNode* $tmp3520 = *(&local3);
frost$core$Bit $tmp3521 = frost$core$Bit$init$builtin_bit($tmp3520 == NULL);
bool $tmp3522 = $tmp3521.value;
if ($tmp3522) goto block8; else goto block9;
block8:;
// line 1669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3523 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1671
frost$collections$Array* $tmp3525 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3526 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3525, ((frost$core$Object*) $tmp3526));
// line 1672
goto block10;
block10:;
frost$core$Int64 $tmp3527 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3528 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3527);
org$frostlang$frostc$parser$Token$nullable $tmp3529 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3528);
frost$core$Bit $tmp3530 = frost$core$Bit$init$builtin_bit($tmp3529.nonnull);
bool $tmp3531 = $tmp3530.value;
if ($tmp3531) goto block11; else goto block12;
block11:;
// line 1673
org$frostlang$frostc$ASTNode* $tmp3532 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
org$frostlang$frostc$ASTNode* $tmp3533 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local3) = $tmp3532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
// line 1674
org$frostlang$frostc$ASTNode* $tmp3534 = *(&local3);
frost$core$Bit $tmp3535 = frost$core$Bit$init$builtin_bit($tmp3534 == NULL);
bool $tmp3536 = $tmp3535.value;
if ($tmp3536) goto block13; else goto block14;
block13:;
// line 1675
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3537 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3538 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1677
frost$collections$Array* $tmp3539 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3540 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3539, ((frost$core$Object*) $tmp3540));
goto block10;
block12:;
// line 1679
org$frostlang$frostc$FixedArray* $tmp3541 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
org$frostlang$frostc$FixedArray* $tmp3542 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3542));
*(&local4) = $tmp3541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
// line 1680
org$frostlang$frostc$FixedArray* $tmp3543 = *(&local4);
frost$core$Bit $tmp3544 = frost$core$Bit$init$builtin_bit($tmp3543 == NULL);
bool $tmp3545 = $tmp3544.value;
if ($tmp3545) goto block15; else goto block16;
block15:;
// line 1681
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1683
org$frostlang$frostc$ASTNode* $tmp3549 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3550 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token$nullable $tmp3551 = *(&local1);
org$frostlang$frostc$Position $tmp3552 = ((org$frostlang$frostc$parser$Token) $tmp3551.value).position;
frost$collections$Array* $tmp3553 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3554 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3553);
org$frostlang$frostc$FixedArray* $tmp3555 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3549, $tmp3550, $tmp3552, $tmp3554, $tmp3555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
org$frostlang$frostc$FixedArray* $tmp3556 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3557 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3549;
goto block3;
block3:;
frost$core$Bit* $tmp3559 = &param0->allowLambdas;
frost$core$Bit $tmp3560 = *$tmp3559;
bool $tmp3561 = $tmp3560.value;
if ($tmp3561) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3562 = *(&local0);
return $tmp3562;
block5:;
frost$core$Int64 $tmp3563 = (frost$core$Int64) {1661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3564, $tmp3563, &$s3565);
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
// line 1690
frost$core$Int64 $tmp3566 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3567 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3566);
org$frostlang$frostc$parser$Token$nullable $tmp3568 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3567, &$s3569);
*(&local0) = $tmp3568;
// line 1691
org$frostlang$frostc$parser$Token$nullable $tmp3570 = *(&local0);
frost$core$Bit $tmp3571 = frost$core$Bit$init$builtin_bit(!$tmp3570.nonnull);
bool $tmp3572 = $tmp3571.value;
if ($tmp3572) goto block1; else goto block2;
block1:;
// line 1692
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1694
org$frostlang$frostc$ASTNode* $tmp3573 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
org$frostlang$frostc$ASTNode* $tmp3574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3574));
*(&local1) = $tmp3573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
// line 1695
org$frostlang$frostc$ASTNode* $tmp3575 = *(&local1);
frost$core$Bit $tmp3576 = frost$core$Bit$init$builtin_bit($tmp3575 == NULL);
bool $tmp3577 = $tmp3576.value;
if ($tmp3577) goto block3; else goto block4;
block3:;
// line 1696
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1698
frost$core$Int64 $tmp3579 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3580 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3579);
org$frostlang$frostc$parser$Token$nullable $tmp3581 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3580, &$s3582);
frost$core$Bit $tmp3583 = frost$core$Bit$init$builtin_bit(!$tmp3581.nonnull);
bool $tmp3584 = $tmp3583.value;
if ($tmp3584) goto block5; else goto block6;
block5:;
// line 1699
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3585));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1701
frost$collections$Array* $tmp3586 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3586);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
frost$collections$Array* $tmp3587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
*(&local2) = $tmp3586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
// line 1702
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3588 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1703
goto block7;
block7:;
// line 1704
org$frostlang$frostc$parser$Token $tmp3589 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3589;
// line 1705
org$frostlang$frostc$parser$Token $tmp3590 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3591 = $tmp3590.kind;
frost$core$Int64 $tmp3592 = $tmp3591.$rawValue;
frost$core$Int64 $tmp3593 = (frost$core$Int64) {104};
frost$core$Bit $tmp3594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3592, $tmp3593);
bool $tmp3595 = $tmp3594.value;
if ($tmp3595) goto block10; else goto block11;
block10:;
// line 1707
goto block8;
block11:;
frost$core$Int64 $tmp3596 = (frost$core$Int64) {40};
frost$core$Bit $tmp3597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3592, $tmp3596);
bool $tmp3598 = $tmp3597.value;
if ($tmp3598) goto block12; else goto block13;
block12:;
// line 1710
org$frostlang$frostc$ASTNode* $tmp3599 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
org$frostlang$frostc$ASTNode* $tmp3600 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
*(&local5) = $tmp3599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
// line 1711
org$frostlang$frostc$ASTNode* $tmp3601 = *(&local5);
frost$core$Bit $tmp3602 = frost$core$Bit$init$builtin_bit($tmp3601 == NULL);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block14; else goto block15;
block14:;
// line 1712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3604 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3605 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1714
frost$collections$Array* $tmp3608 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3609 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3608, ((frost$core$Object*) $tmp3609));
org$frostlang$frostc$ASTNode* $tmp3610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3611 = (frost$core$Int64) {41};
frost$core$Bit $tmp3612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3592, $tmp3611);
bool $tmp3613 = $tmp3612.value;
if ($tmp3613) goto block16; else goto block17;
block16:;
// line 1717
org$frostlang$frostc$parser$Token $tmp3614 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3614;
// line 1718
org$frostlang$frostc$FixedArray* $tmp3615 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
org$frostlang$frostc$FixedArray* $tmp3616 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3616));
*(&local3) = $tmp3615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
// line 1719
org$frostlang$frostc$FixedArray* $tmp3617 = *(&local3);
frost$core$Bit $tmp3618 = frost$core$Bit$init$builtin_bit($tmp3617 == NULL);
bool $tmp3619 = $tmp3618.value;
if ($tmp3619) goto block18; else goto block19;
block18:;
// line 1720
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1722
goto block8;
block17:;
// line 1725
org$frostlang$frostc$parser$Token $tmp3623 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1726
org$frostlang$frostc$parser$Token $tmp3624 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3625 = *(&local4);
frost$core$String* $tmp3626 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3625);
frost$core$String* $tmp3627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3628, $tmp3626);
frost$core$String* $tmp3629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3627, &$s3630);
frost$core$String* $tmp3631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3632, $tmp3629);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3624, $tmp3631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// line 1728
goto block8;
block9:;
goto block7;
block8:;
// line 1732
frost$core$Int64 $tmp3633 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3634 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3633);
org$frostlang$frostc$parser$Token$nullable $tmp3635 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3634, &$s3636);
frost$core$Bit $tmp3637 = frost$core$Bit$init$builtin_bit(!$tmp3635.nonnull);
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block20; else goto block21;
block20:;
// line 1733
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3640 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3641 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3641));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1735
org$frostlang$frostc$FixedArray* $tmp3642 = *(&local3);
frost$core$Bit $tmp3643 = frost$core$Bit$init$builtin_bit($tmp3642 != NULL);
bool $tmp3644 = $tmp3643.value;
if ($tmp3644) goto block22; else goto block23;
block22:;
// line 1736
org$frostlang$frostc$ASTNode* $tmp3645 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3646 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3647 = *(&local0);
org$frostlang$frostc$Position $tmp3648 = ((org$frostlang$frostc$parser$Token) $tmp3647.value).position;
org$frostlang$frostc$ASTNode* $tmp3649 = *(&local1);
frost$collections$Array* $tmp3650 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3651 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3650);
org$frostlang$frostc$FixedArray* $tmp3652 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3645, $tmp3646, $tmp3648, $tmp3649, $tmp3651, $tmp3652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
org$frostlang$frostc$FixedArray* $tmp3653 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3645;
block23:;
// line 1738
org$frostlang$frostc$ASTNode* $tmp3656 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3657 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3658 = *(&local0);
org$frostlang$frostc$Position $tmp3659 = ((org$frostlang$frostc$parser$Token) $tmp3658.value).position;
org$frostlang$frostc$ASTNode* $tmp3660 = *(&local1);
frost$collections$Array* $tmp3661 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3662 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3661);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3656, $tmp3657, $tmp3659, $tmp3660, $tmp3662, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
org$frostlang$frostc$FixedArray* $tmp3663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3665 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3656;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1745
frost$core$Int64 $tmp3666 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3667 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3666);
org$frostlang$frostc$parser$Token$nullable $tmp3668 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3667, &$s3669);
*(&local0) = $tmp3668;
// line 1746
org$frostlang$frostc$parser$Token$nullable $tmp3670 = *(&local0);
frost$core$Bit $tmp3671 = frost$core$Bit$init$builtin_bit(!$tmp3670.nonnull);
bool $tmp3672 = $tmp3671.value;
if ($tmp3672) goto block1; else goto block2;
block1:;
// line 1747
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1749
frost$collections$Array* $tmp3673 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3673);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
frost$collections$Array* $tmp3674 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local1) = $tmp3673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
// line 1750
goto block3;
block3:;
// line 1751
org$frostlang$frostc$parser$Token $tmp3675 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3676 = $tmp3675.kind;
frost$core$Int64 $tmp3677 = $tmp3676.$rawValue;
frost$core$Int64 $tmp3678 = (frost$core$Int64) {104};
frost$core$Bit $tmp3679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3677, $tmp3678);
bool $tmp3680 = $tmp3679.value;
if ($tmp3680) goto block6; else goto block7;
block6:;
// line 1753
org$frostlang$frostc$parser$Token $tmp3681 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1754
goto block4;
block7:;
frost$core$Int64 $tmp3682 = (frost$core$Int64) {29};
frost$core$Bit $tmp3683 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3677, $tmp3682);
bool $tmp3684 = $tmp3683.value;
if ($tmp3684) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3685 = (frost$core$Int64) {30};
frost$core$Bit $tmp3686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3677, $tmp3685);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3688 = (frost$core$Int64) {28};
frost$core$Bit $tmp3689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3677, $tmp3688);
bool $tmp3690 = $tmp3689.value;
if ($tmp3690) goto block8; else goto block11;
block8:;
// line 1757
org$frostlang$frostc$ASTNode* $tmp3691 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
org$frostlang$frostc$ASTNode* $tmp3692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
*(&local2) = $tmp3691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
// line 1758
org$frostlang$frostc$ASTNode* $tmp3693 = *(&local2);
frost$core$Bit $tmp3694 = frost$core$Bit$init$builtin_bit($tmp3693 == NULL);
bool $tmp3695 = $tmp3694.value;
if ($tmp3695) goto block12; else goto block13;
block12:;
// line 1759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3696 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1761
frost$core$Int64 $tmp3698 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3699 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3698);
org$frostlang$frostc$parser$Token$nullable $tmp3700 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3699, &$s3701);
frost$core$Bit $tmp3702 = frost$core$Bit$init$builtin_bit(!$tmp3700.nonnull);
bool $tmp3703 = $tmp3702.value;
if ($tmp3703) goto block14; else goto block15;
block14:;
// line 1762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3704 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3705 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1764
frost$collections$Array* $tmp3706 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3707 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3706, ((frost$core$Object*) $tmp3707));
// line 1765
org$frostlang$frostc$ASTNode* $tmp3708 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1768
org$frostlang$frostc$ASTNode* $tmp3709 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
org$frostlang$frostc$ASTNode* $tmp3710 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local3) = $tmp3709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
// line 1769
org$frostlang$frostc$ASTNode* $tmp3711 = *(&local3);
frost$core$Bit $tmp3712 = frost$core$Bit$init$builtin_bit($tmp3711 == NULL);
bool $tmp3713 = $tmp3712.value;
if ($tmp3713) goto block16; else goto block17;
block16:;
// line 1770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3714 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3715 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1772
frost$collections$Array* $tmp3716 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3717 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3716, ((frost$core$Object*) $tmp3717));
org$frostlang$frostc$ASTNode* $tmp3718 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1776
frost$collections$Array* $tmp3719 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3720 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
frost$collections$Array* $tmp3721 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3720;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1783
org$frostlang$frostc$FixedArray* $tmp3722 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
org$frostlang$frostc$FixedArray* $tmp3723 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
*(&local0) = $tmp3722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
// line 1784
org$frostlang$frostc$FixedArray* $tmp3724 = *(&local0);
frost$core$Bit $tmp3725 = frost$core$Bit$init$builtin_bit($tmp3724 == NULL);
bool $tmp3726 = $tmp3725.value;
if ($tmp3726) goto block1; else goto block2;
block1:;
// line 1785
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1787
org$frostlang$frostc$ASTNode* $tmp3728 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3729 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3730 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3731 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3728, $tmp3729, $tmp3730, $tmp3731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
org$frostlang$frostc$FixedArray* $tmp3732 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3728;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1794
org$frostlang$frostc$ASTNode* $tmp3733 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
org$frostlang$frostc$ASTNode* $tmp3734 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
*(&local0) = $tmp3733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
// line 1795
org$frostlang$frostc$ASTNode* $tmp3735 = *(&local0);
frost$core$Bit $tmp3736 = frost$core$Bit$init$builtin_bit($tmp3735 == NULL);
bool $tmp3737 = $tmp3736.value;
if ($tmp3737) goto block1; else goto block2;
block1:;
// line 1796
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3738));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1798
org$frostlang$frostc$parser$Token $tmp3739 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3740 = $tmp3739.kind;
frost$core$Int64 $tmp3741 = $tmp3740.$rawValue;
frost$core$Int64 $tmp3742 = (frost$core$Int64) {77};
frost$core$Bit $tmp3743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3742);
bool $tmp3744 = $tmp3743.value;
if ($tmp3744) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3745 = (frost$core$Int64) {78};
frost$core$Bit $tmp3746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3745);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3748 = (frost$core$Int64) {79};
frost$core$Bit $tmp3749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3748);
bool $tmp3750 = $tmp3749.value;
if ($tmp3750) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3751 = (frost$core$Int64) {80};
frost$core$Bit $tmp3752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3751);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3754 = (frost$core$Int64) {81};
frost$core$Bit $tmp3755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3754);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3757 = (frost$core$Int64) {82};
frost$core$Bit $tmp3758 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3757);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3760 = (frost$core$Int64) {83};
frost$core$Bit $tmp3761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3760);
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3763 = (frost$core$Int64) {84};
frost$core$Bit $tmp3764 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3763);
bool $tmp3765 = $tmp3764.value;
if ($tmp3765) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3766 = (frost$core$Int64) {85};
frost$core$Bit $tmp3767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3766);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3769 = (frost$core$Int64) {86};
frost$core$Bit $tmp3770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3769);
bool $tmp3771 = $tmp3770.value;
if ($tmp3771) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3772 = (frost$core$Int64) {87};
frost$core$Bit $tmp3773 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3772);
bool $tmp3774 = $tmp3773.value;
if ($tmp3774) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3775 = (frost$core$Int64) {88};
frost$core$Bit $tmp3776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3775);
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3778 = (frost$core$Int64) {89};
frost$core$Bit $tmp3779 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3778);
bool $tmp3780 = $tmp3779.value;
if ($tmp3780) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3781 = (frost$core$Int64) {90};
frost$core$Bit $tmp3782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3781);
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3784 = (frost$core$Int64) {91};
frost$core$Bit $tmp3785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3784);
bool $tmp3786 = $tmp3785.value;
if ($tmp3786) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3787 = (frost$core$Int64) {92};
frost$core$Bit $tmp3788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3787);
bool $tmp3789 = $tmp3788.value;
if ($tmp3789) goto block4; else goto block20;
block4:;
// line 1804
org$frostlang$frostc$parser$Token $tmp3790 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3790;
// line 1805
org$frostlang$frostc$ASTNode* $tmp3791 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
org$frostlang$frostc$ASTNode* $tmp3792 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
*(&local2) = $tmp3791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
// line 1806
org$frostlang$frostc$ASTNode* $tmp3793 = *(&local2);
frost$core$Bit $tmp3794 = frost$core$Bit$init$builtin_bit($tmp3793 == NULL);
bool $tmp3795 = $tmp3794.value;
if ($tmp3795) goto block21; else goto block22;
block21:;
// line 1807
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3797));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1809
org$frostlang$frostc$ASTNode* $tmp3798 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3799 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3800 = *(&local0);
$fn3802 $tmp3801 = ($fn3802) $tmp3800->$class->vtable[2];
org$frostlang$frostc$Position $tmp3803 = $tmp3801($tmp3800);
org$frostlang$frostc$ASTNode* $tmp3804 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3805 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3806 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3805);
org$frostlang$frostc$ASTNode* $tmp3807 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3798, $tmp3799, $tmp3803, $tmp3804, $tmp3806, $tmp3807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3798));
org$frostlang$frostc$ASTNode* $tmp3808 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3798;
block20:;
frost$core$Int64 $tmp3810 = (frost$core$Int64) {62};
frost$core$Bit $tmp3811 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3741, $tmp3810);
bool $tmp3812 = $tmp3811.value;
if ($tmp3812) goto block23; else goto block24;
block23:;
// line 1813
org$frostlang$frostc$parser$Token $tmp3813 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3813, &$s3814);
// line 1814
org$frostlang$frostc$parser$Token $tmp3815 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3815;
// line 1815
org$frostlang$frostc$ASTNode* $tmp3816 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
org$frostlang$frostc$ASTNode* $tmp3817 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local4) = $tmp3816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
// line 1816
org$frostlang$frostc$ASTNode* $tmp3818 = *(&local4);
frost$core$Bit $tmp3819 = frost$core$Bit$init$builtin_bit($tmp3818 == NULL);
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block25; else goto block26;
block25:;
// line 1817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1819
org$frostlang$frostc$ASTNode* $tmp3823 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3824 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3825 = *(&local0);
$fn3827 $tmp3826 = ($fn3827) $tmp3825->$class->vtable[2];
org$frostlang$frostc$Position $tmp3828 = $tmp3826($tmp3825);
org$frostlang$frostc$ASTNode* $tmp3829 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3830 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3831 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3830);
org$frostlang$frostc$ASTNode* $tmp3832 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3823, $tmp3824, $tmp3828, $tmp3829, $tmp3831, $tmp3832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
org$frostlang$frostc$ASTNode* $tmp3833 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3834 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3823;
block24:;
// line 1823
org$frostlang$frostc$ASTNode* $tmp3835 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
org$frostlang$frostc$ASTNode* $tmp3836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3835;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1832
org$frostlang$frostc$ASTNode* $tmp3837 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
org$frostlang$frostc$ASTNode* $tmp3838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
*(&local0) = $tmp3837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
// line 1833
org$frostlang$frostc$ASTNode* $tmp3839 = *(&local0);
frost$core$Bit $tmp3840 = frost$core$Bit$init$builtin_bit($tmp3839 == NULL);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block1; else goto block2;
block1:;
// line 1834
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1836
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1837
frost$core$Int64 $tmp3843 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp3844 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3843);
org$frostlang$frostc$parser$Token$nullable $tmp3845 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3844);
frost$core$Bit $tmp3846 = frost$core$Bit$init$builtin_bit($tmp3845.nonnull);
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block3; else goto block5;
block3:;
// line 1838
org$frostlang$frostc$ASTNode* $tmp3848 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
org$frostlang$frostc$ASTNode* $tmp3849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
*(&local1) = $tmp3848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
// line 1839
org$frostlang$frostc$ASTNode* $tmp3850 = *(&local1);
frost$core$Bit $tmp3851 = frost$core$Bit$init$builtin_bit($tmp3850 == NULL);
bool $tmp3852 = $tmp3851.value;
if ($tmp3852) goto block6; else goto block7;
block6:;
// line 1840
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1843
org$frostlang$frostc$parser$Token $tmp3855 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3856 = $tmp3855.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3857;
$tmp3857 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3857->value = $tmp3856;
frost$core$Int64 $tmp3858 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp3859 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3858);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3860;
$tmp3860 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3860->value = $tmp3859;
ITable* $tmp3861 = ((frost$core$Equatable*) $tmp3857)->$class->itable;
while ($tmp3861->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3861 = $tmp3861->next;
}
$fn3863 $tmp3862 = $tmp3861->methods[0];
frost$core$Bit $tmp3864 = $tmp3862(((frost$core$Equatable*) $tmp3857), ((frost$core$Equatable*) $tmp3860));
bool $tmp3865 = $tmp3864.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3860)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3857)));
if ($tmp3865) goto block8; else goto block10;
block8:;
// line 1844
org$frostlang$frostc$parser$Token $tmp3866 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3866, &$s3867);
// line 1845
org$frostlang$frostc$ASTNode* $tmp3868 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
org$frostlang$frostc$ASTNode* $tmp3869 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3869));
*(&local1) = $tmp3868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
// line 1846
org$frostlang$frostc$ASTNode* $tmp3870 = *(&local1);
frost$core$Bit $tmp3871 = frost$core$Bit$init$builtin_bit($tmp3870 == NULL);
bool $tmp3872 = $tmp3871.value;
if ($tmp3872) goto block11; else goto block12;
block11:;
// line 1847
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3874 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1851
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3875 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1853
org$frostlang$frostc$ASTNode* $tmp3876 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3877 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp3878 = *(&local0);
$fn3880 $tmp3879 = ($fn3880) $tmp3878->$class->vtable[2];
org$frostlang$frostc$Position $tmp3881 = $tmp3879($tmp3878);
org$frostlang$frostc$ASTNode* $tmp3882 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp3883 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3876, $tmp3877, $tmp3881, $tmp3882, $tmp3883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
org$frostlang$frostc$ASTNode* $tmp3884 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3885 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3885));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3876;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1860
org$frostlang$frostc$parser$Token $tmp3886 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp3886;
// line 1861
// line 1862
org$frostlang$frostc$parser$Token $tmp3887 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp3888 = $tmp3887.kind;
frost$core$Int64 $tmp3889 = $tmp3888.$rawValue;
frost$core$Int64 $tmp3890 = (frost$core$Int64) {24};
frost$core$Bit $tmp3891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3889, $tmp3890);
bool $tmp3892 = $tmp3891.value;
if ($tmp3892) goto block2; else goto block3;
block2:;
// line 1864
frost$core$Int64 $tmp3893 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp3894 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3893);
*(&local1) = $tmp3894;
goto block1;
block3:;
frost$core$Int64 $tmp3895 = (frost$core$Int64) {25};
frost$core$Bit $tmp3896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3889, $tmp3895);
bool $tmp3897 = $tmp3896.value;
if ($tmp3897) goto block4; else goto block5;
block4:;
// line 1867
frost$core$Int64 $tmp3898 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp3899 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3898);
*(&local1) = $tmp3899;
goto block1;
block5:;
frost$core$Int64 $tmp3900 = (frost$core$Int64) {26};
frost$core$Bit $tmp3901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3889, $tmp3900);
bool $tmp3902 = $tmp3901.value;
if ($tmp3902) goto block6; else goto block7;
block6:;
// line 1870
frost$core$Int64 $tmp3903 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp3904 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3903);
*(&local1) = $tmp3904;
goto block1;
block7:;
frost$core$Int64 $tmp3905 = (frost$core$Int64) {27};
frost$core$Bit $tmp3906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3889, $tmp3905);
bool $tmp3907 = $tmp3906.value;
if ($tmp3907) goto block8; else goto block9;
block8:;
// line 1873
frost$core$Int64 $tmp3908 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp3909 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3908);
*(&local1) = $tmp3909;
goto block1;
block9:;
// line 1876
org$frostlang$frostc$parser$Token $tmp3910 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3910, &$s3911);
goto block1;
block1:;
// line 1879
frost$collections$Array* $tmp3912 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3912);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
frost$collections$Array* $tmp3913 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
*(&local2) = $tmp3912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
// line 1880
org$frostlang$frostc$ASTNode* $tmp3914 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
org$frostlang$frostc$ASTNode* $tmp3915 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
*(&local3) = $tmp3914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
// line 1881
org$frostlang$frostc$ASTNode* $tmp3916 = *(&local3);
frost$core$Bit $tmp3917 = frost$core$Bit$init$builtin_bit($tmp3916 == NULL);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block10; else goto block11;
block10:;
// line 1882
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3920 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3920));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1884
frost$collections$Array* $tmp3921 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3922 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3921, ((frost$core$Object*) $tmp3922));
// line 1885
goto block12;
block12:;
frost$core$Int64 $tmp3923 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3924 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3923);
org$frostlang$frostc$parser$Token$nullable $tmp3925 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3924);
frost$core$Bit $tmp3926 = frost$core$Bit$init$builtin_bit($tmp3925.nonnull);
bool $tmp3927 = $tmp3926.value;
if ($tmp3927) goto block13; else goto block14;
block13:;
// line 1886
org$frostlang$frostc$ASTNode* $tmp3928 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
org$frostlang$frostc$ASTNode* $tmp3929 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
*(&local4) = $tmp3928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
// line 1887
org$frostlang$frostc$ASTNode* $tmp3930 = *(&local4);
frost$core$Bit $tmp3931 = frost$core$Bit$init$builtin_bit($tmp3930 == NULL);
bool $tmp3932 = $tmp3931.value;
if ($tmp3932) goto block15; else goto block16;
block15:;
// line 1888
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3933 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3934 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3934));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3935));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1890
frost$collections$Array* $tmp3936 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3937 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp3936, ((frost$core$Object*) $tmp3937));
org$frostlang$frostc$ASTNode* $tmp3938 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1892
org$frostlang$frostc$ASTNode* $tmp3939 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3940 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token $tmp3941 = *(&local0);
org$frostlang$frostc$Position $tmp3942 = $tmp3941.position;
org$frostlang$frostc$Variable$Kind $tmp3943 = *(&local1);
frost$collections$Array* $tmp3944 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3945 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3944);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3939, $tmp3940, $tmp3942, $tmp3943, $tmp3945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
org$frostlang$frostc$ASTNode* $tmp3946 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3946));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp3939;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1899
frost$core$Int64 $tmp3948 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp3949 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3948);
org$frostlang$frostc$parser$Token$nullable $tmp3950 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3949, &$s3951);
*(&local0) = $tmp3950;
// line 1900
org$frostlang$frostc$parser$Token$nullable $tmp3952 = *(&local0);
frost$core$Bit $tmp3953 = frost$core$Bit$init$builtin_bit(!$tmp3952.nonnull);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block1; else goto block2;
block1:;
// line 1901
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1903
frost$core$Int64 $tmp3955 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp3956 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3955);
org$frostlang$frostc$parser$Token$nullable $tmp3957 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3956, &$s3958);
frost$core$Bit $tmp3959 = frost$core$Bit$init$builtin_bit(!$tmp3957.nonnull);
bool $tmp3960 = $tmp3959.value;
if ($tmp3960) goto block3; else goto block4;
block3:;
// line 1904
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1906
frost$collections$Stack** $tmp3961 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp3962 = *$tmp3961;
frost$core$Bit $tmp3963 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp3964;
$tmp3964 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3964->value = $tmp3963;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3962, ((frost$core$Object*) $tmp3964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
// line 1907
org$frostlang$frostc$ASTNode* $tmp3965 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3966 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3967 = *(&local0);
org$frostlang$frostc$Position $tmp3968 = ((org$frostlang$frostc$parser$Token) $tmp3967.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3969 = *(&local0);
frost$core$String* $tmp3970 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3969.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3965, $tmp3966, $tmp3968, $tmp3970);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
org$frostlang$frostc$ASTNode* $tmp3971 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
*(&local1) = $tmp3965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
// line 1908
frost$collections$Array* $tmp3972 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3972);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
frost$collections$Array* $tmp3973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
*(&local2) = $tmp3972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
// line 1909
frost$core$Int64 $tmp3974 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3975 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3974);
org$frostlang$frostc$parser$Token$nullable $tmp3976 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3975);
frost$core$Bit $tmp3977 = frost$core$Bit$init$builtin_bit(!$tmp3976.nonnull);
bool $tmp3978 = $tmp3977.value;
if ($tmp3978) goto block5; else goto block6;
block5:;
// line 1910
org$frostlang$frostc$ASTNode* $tmp3979 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
org$frostlang$frostc$ASTNode* $tmp3980 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local3) = $tmp3979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
// line 1911
org$frostlang$frostc$ASTNode* $tmp3981 = *(&local3);
frost$core$Bit $tmp3982 = frost$core$Bit$init$builtin_bit($tmp3981 == NULL);
bool $tmp3983 = $tmp3982.value;
if ($tmp3983) goto block7; else goto block8;
block7:;
// line 1912
frost$collections$Stack** $tmp3984 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp3985 = *$tmp3984;
frost$core$Object* $tmp3986 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3985);
frost$core$Frost$unref$frost$core$Object$Q($tmp3986);
// line 1913
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3987 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3988 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3989 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1915
frost$collections$Array* $tmp3990 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3991 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3990, ((frost$core$Object*) $tmp3991));
// line 1916
goto block9;
block9:;
frost$core$Int64 $tmp3992 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3993 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3992);
org$frostlang$frostc$parser$Token$nullable $tmp3994 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3993);
frost$core$Bit $tmp3995 = frost$core$Bit$init$builtin_bit($tmp3994.nonnull);
bool $tmp3996 = $tmp3995.value;
if ($tmp3996) goto block10; else goto block11;
block10:;
// line 1917
org$frostlang$frostc$ASTNode* $tmp3997 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
org$frostlang$frostc$ASTNode* $tmp3998 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local3) = $tmp3997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
// line 1918
org$frostlang$frostc$ASTNode* $tmp3999 = *(&local3);
frost$core$Bit $tmp4000 = frost$core$Bit$init$builtin_bit($tmp3999 == NULL);
bool $tmp4001 = $tmp4000.value;
if ($tmp4001) goto block12; else goto block13;
block12:;
// line 1919
frost$collections$Stack** $tmp4002 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4003 = *$tmp4002;
frost$core$Object* $tmp4004 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4003);
frost$core$Frost$unref$frost$core$Object$Q($tmp4004);
// line 1920
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4005 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4007 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1922
frost$collections$Array* $tmp4008 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4009 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4008, ((frost$core$Object*) $tmp4009));
goto block9;
block11:;
// line 1924
frost$core$Int64 $tmp4010 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4011 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4010);
org$frostlang$frostc$parser$Token$nullable $tmp4012 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4011, &$s4013);
frost$core$Bit $tmp4014 = frost$core$Bit$init$builtin_bit(!$tmp4012.nonnull);
bool $tmp4015 = $tmp4014.value;
if ($tmp4015) goto block14; else goto block15;
block14:;
// line 1925
frost$collections$Stack** $tmp4016 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4017 = *$tmp4016;
frost$core$Object* $tmp4018 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4017);
frost$core$Frost$unref$frost$core$Object$Q($tmp4018);
// line 1926
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4019 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4020 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4021 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4022 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1929
frost$collections$Stack** $tmp4023 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4024 = *$tmp4023;
frost$core$Object* $tmp4025 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4024);
frost$core$Frost$unref$frost$core$Object$Q($tmp4025);
// line 1930
org$frostlang$frostc$ASTNode* $tmp4026 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4027 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4028 = *(&local0);
org$frostlang$frostc$Position $tmp4029 = ((org$frostlang$frostc$parser$Token) $tmp4028.value).position;
org$frostlang$frostc$ASTNode* $tmp4030 = *(&local1);
frost$collections$Array* $tmp4031 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4032 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4031);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4026, $tmp4027, $tmp4029, $tmp4030, $tmp4032);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
frost$collections$Array* $tmp4033 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4034 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4026;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1937
frost$core$Int64 $tmp4035 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4036 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4035);
org$frostlang$frostc$parser$Token$nullable $tmp4037 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4036, &$s4038);
*(&local0) = $tmp4037;
// line 1938
org$frostlang$frostc$parser$Token$nullable $tmp4039 = *(&local0);
frost$core$Bit $tmp4040 = frost$core$Bit$init$builtin_bit(!$tmp4039.nonnull);
bool $tmp4041 = $tmp4040.value;
if ($tmp4041) goto block1; else goto block2;
block1:;
// line 1939
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1941
frost$core$Int64 $tmp4042 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4043 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4042);
org$frostlang$frostc$parser$Token$nullable $tmp4044 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4043);
*(&local1) = $tmp4044;
// line 1942
org$frostlang$frostc$parser$Token$nullable $tmp4045 = *(&local1);
frost$core$Bit $tmp4046 = frost$core$Bit$init$builtin_bit($tmp4045.nonnull);
bool $tmp4047 = $tmp4046.value;
if ($tmp4047) goto block3; else goto block4;
block3:;
// line 1943
org$frostlang$frostc$ASTNode* $tmp4048 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4049 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4050 = *(&local0);
org$frostlang$frostc$Position $tmp4051 = ((org$frostlang$frostc$parser$Token) $tmp4050.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4052 = *(&local1);
frost$core$String* $tmp4053 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4052.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4048, $tmp4049, $tmp4051, $tmp4053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
return $tmp4048;
block4:;
// line 1945
org$frostlang$frostc$ASTNode* $tmp4054 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4055 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4056 = *(&local0);
org$frostlang$frostc$Position $tmp4057 = ((org$frostlang$frostc$parser$Token) $tmp4056.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4054, $tmp4055, $tmp4057, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
return $tmp4054;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1952
frost$core$Int64 $tmp4058 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4059 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4058);
org$frostlang$frostc$parser$Token$nullable $tmp4060 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4059, &$s4061);
*(&local0) = $tmp4060;
// line 1953
org$frostlang$frostc$parser$Token$nullable $tmp4062 = *(&local0);
frost$core$Bit $tmp4063 = frost$core$Bit$init$builtin_bit(!$tmp4062.nonnull);
bool $tmp4064 = $tmp4063.value;
if ($tmp4064) goto block1; else goto block2;
block1:;
// line 1954
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1956
frost$core$Int64 $tmp4065 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4066 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4065);
org$frostlang$frostc$parser$Token$nullable $tmp4067 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4066);
*(&local1) = $tmp4067;
// line 1957
org$frostlang$frostc$parser$Token$nullable $tmp4068 = *(&local1);
frost$core$Bit $tmp4069 = frost$core$Bit$init$builtin_bit($tmp4068.nonnull);
bool $tmp4070 = $tmp4069.value;
if ($tmp4070) goto block3; else goto block4;
block3:;
// line 1958
org$frostlang$frostc$ASTNode* $tmp4071 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4072 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4073 = *(&local0);
org$frostlang$frostc$Position $tmp4074 = ((org$frostlang$frostc$parser$Token) $tmp4073.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4075 = *(&local1);
frost$core$String* $tmp4076 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4075.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4071, $tmp4072, $tmp4074, $tmp4076);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
return $tmp4071;
block4:;
// line 1960
org$frostlang$frostc$ASTNode* $tmp4077 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4078 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4079 = *(&local0);
org$frostlang$frostc$Position $tmp4080 = ((org$frostlang$frostc$parser$Token) $tmp4079.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4077, $tmp4078, $tmp4080, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
return $tmp4077;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1967
frost$core$Int64 $tmp4081 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4082 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4081);
org$frostlang$frostc$parser$Token$nullable $tmp4083 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4082, &$s4084);
*(&local0) = $tmp4083;
// line 1968
org$frostlang$frostc$parser$Token$nullable $tmp4085 = *(&local0);
frost$core$Bit $tmp4086 = frost$core$Bit$init$builtin_bit(!$tmp4085.nonnull);
bool $tmp4087 = $tmp4086.value;
if ($tmp4087) goto block1; else goto block2;
block1:;
// line 1969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1971
org$frostlang$frostc$parser$Token $tmp4088 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4089 = $tmp4088.kind;
frost$core$Int64 $tmp4090 = $tmp4089.$rawValue;
frost$core$Int64 $tmp4091 = (frost$core$Int64) {104};
frost$core$Bit $tmp4092 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4090, $tmp4091);
bool $tmp4093 = $tmp4092.value;
if ($tmp4093) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4094 = (frost$core$Int64) {40};
frost$core$Bit $tmp4095 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4090, $tmp4094);
bool $tmp4096 = $tmp4095.value;
if ($tmp4096) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4097 = (frost$core$Int64) {41};
frost$core$Bit $tmp4098 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4090, $tmp4097);
bool $tmp4099 = $tmp4098.value;
if ($tmp4099) goto block4; else goto block7;
block4:;
// line 1973
org$frostlang$frostc$ASTNode* $tmp4100 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4101 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4102 = *(&local0);
org$frostlang$frostc$Position $tmp4103 = ((org$frostlang$frostc$parser$Token) $tmp4102.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4100, $tmp4101, $tmp4103, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
return $tmp4100;
block7:;
// line 1976
frost$collections$Array* $tmp4104 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4104);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4104));
frost$collections$Array* $tmp4105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
*(&local1) = $tmp4104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4104));
// line 1977
org$frostlang$frostc$ASTNode* $tmp4106 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
org$frostlang$frostc$ASTNode* $tmp4107 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
*(&local2) = $tmp4106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
// line 1978
org$frostlang$frostc$ASTNode* $tmp4108 = *(&local2);
frost$core$Bit $tmp4109 = frost$core$Bit$init$builtin_bit($tmp4108 == NULL);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block8; else goto block9;
block8:;
// line 1979
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 1981
frost$collections$Array* $tmp4113 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4114 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4113, ((frost$core$Object*) $tmp4114));
// line 1982
org$frostlang$frostc$ASTNode* $tmp4115 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4116 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4117 = *(&local0);
org$frostlang$frostc$Position $tmp4118 = ((org$frostlang$frostc$parser$Token) $tmp4117.value).position;
org$frostlang$frostc$ASTNode* $tmp4119 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4115, $tmp4116, $tmp4118, $tmp4119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4115));
org$frostlang$frostc$ASTNode* $tmp4120 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4120));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4115;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1991
org$frostlang$frostc$parser$Token $tmp4122 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4123 = $tmp4122.kind;
frost$core$Int64 $tmp4124 = $tmp4123.$rawValue;
frost$core$Int64 $tmp4125 = (frost$core$Int64) {29};
frost$core$Bit $tmp4126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4124, $tmp4125);
bool $tmp4127 = $tmp4126.value;
if ($tmp4127) goto block2; else goto block3;
block2:;
// line 1992
org$frostlang$frostc$ASTNode* $tmp4128 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
return $tmp4128;
block3:;
frost$core$Int64 $tmp4129 = (frost$core$Int64) {30};
frost$core$Bit $tmp4130 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4124, $tmp4129);
bool $tmp4131 = $tmp4130.value;
if ($tmp4131) goto block4; else goto block5;
block4:;
// line 1993
org$frostlang$frostc$ASTNode* $tmp4132 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4132));
return $tmp4132;
block5:;
frost$core$Int64 $tmp4133 = (frost$core$Int64) {28};
frost$core$Bit $tmp4134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4124, $tmp4133);
bool $tmp4135 = $tmp4134.value;
if ($tmp4135) goto block6; else goto block7;
block6:;
// line 1994
org$frostlang$frostc$ASTNode* $tmp4136 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
return $tmp4136;
block7:;
// line 1995
frost$core$Int64 $tmp4137 = (frost$core$Int64) {1995};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4138, $tmp4137);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2003
org$frostlang$frostc$parser$Token $tmp4139 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4140 = $tmp4139.kind;
frost$core$Int64 $tmp4141 = $tmp4140.$rawValue;
frost$core$Int64 $tmp4142 = (frost$core$Int64) {31};
frost$core$Bit $tmp4143 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4141, $tmp4142);
bool $tmp4144 = $tmp4143.value;
if ($tmp4144) goto block2; else goto block3;
block2:;
// line 2004
org$frostlang$frostc$ASTNode* $tmp4145 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4145));
return $tmp4145;
block3:;
frost$core$Int64 $tmp4146 = (frost$core$Int64) {33};
frost$core$Bit $tmp4147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4141, $tmp4146);
bool $tmp4148 = $tmp4147.value;
if ($tmp4148) goto block4; else goto block5;
block4:;
// line 2005
org$frostlang$frostc$ASTNode* $tmp4149 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4149));
return $tmp4149;
block5:;
frost$core$Int64 $tmp4150 = (frost$core$Int64) {36};
frost$core$Bit $tmp4151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4141, $tmp4150);
bool $tmp4152 = $tmp4151.value;
if ($tmp4152) goto block6; else goto block7;
block6:;
// line 2006
org$frostlang$frostc$ASTNode* $tmp4153 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
return $tmp4153;
block7:;
frost$core$Int64 $tmp4154 = (frost$core$Int64) {32};
frost$core$Bit $tmp4155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4141, $tmp4154);
bool $tmp4156 = $tmp4155.value;
if ($tmp4156) goto block8; else goto block9;
block8:;
// line 2007
org$frostlang$frostc$ASTNode* $tmp4157 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
return $tmp4157;
block9:;
// line 2010
frost$core$Int64 $tmp4158 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4159 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4158);
org$frostlang$frostc$parser$Token$nullable $tmp4160 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4159, &$s4161);
// line 2011
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
// line 2020
// line 2021
frost$core$Int64 $tmp4162 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4163 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4162);
org$frostlang$frostc$parser$Token$nullable $tmp4164 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4163);
*(&local1) = $tmp4164;
// line 2022
org$frostlang$frostc$parser$Token$nullable $tmp4165 = *(&local1);
frost$core$Bit $tmp4166 = frost$core$Bit$init$builtin_bit(!$tmp4165.nonnull);
bool $tmp4167 = $tmp4166.value;
if ($tmp4167) goto block1; else goto block3;
block1:;
// line 2023
frost$core$Int64 $tmp4168 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4169 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4168);
org$frostlang$frostc$parser$Token$nullable $tmp4170 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4169, &$s4171);
*(&local1) = $tmp4170;
// line 2024
org$frostlang$frostc$parser$Token$nullable $tmp4172 = *(&local1);
frost$core$Bit $tmp4173 = frost$core$Bit$init$builtin_bit(!$tmp4172.nonnull);
bool $tmp4174 = $tmp4173.value;
if ($tmp4174) goto block4; else goto block5;
block4:;
// line 2025
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2027
frost$core$Int64 $tmp4175 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4176 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4175);
*(&local0) = $tmp4176;
goto block2;
block3:;
// line 1
// line 2030
frost$core$Int64 $tmp4177 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4178 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4177);
*(&local0) = $tmp4178;
goto block2;
block2:;
// line 2032
frost$core$Int64 $tmp4179 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4180 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4179);
org$frostlang$frostc$parser$Token$nullable $tmp4181 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4180, &$s4182);
*(&local2) = $tmp4181;
// line 2033
org$frostlang$frostc$parser$Token$nullable $tmp4183 = *(&local2);
frost$core$Bit $tmp4184 = frost$core$Bit$init$builtin_bit(!$tmp4183.nonnull);
bool $tmp4185 = $tmp4184.value;
if ($tmp4185) goto block6; else goto block7;
block6:;
// line 2034
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2036
org$frostlang$frostc$FixedArray* $tmp4186 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
org$frostlang$frostc$FixedArray* $tmp4187 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4187));
*(&local3) = $tmp4186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
// line 2037
org$frostlang$frostc$FixedArray* $tmp4188 = *(&local3);
frost$core$Bit $tmp4189 = frost$core$Bit$init$builtin_bit($tmp4188 == NULL);
bool $tmp4190 = $tmp4189.value;
if ($tmp4190) goto block8; else goto block9;
block8:;
// line 2038
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4191 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2040
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2041
org$frostlang$frostc$parser$Token $tmp4192 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4193 = $tmp4192.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4194;
$tmp4194 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4194->value = $tmp4193;
frost$core$Int64 $tmp4195 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4196 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4195);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4197;
$tmp4197 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4197->value = $tmp4196;
ITable* $tmp4198 = ((frost$core$Equatable*) $tmp4194)->$class->itable;
while ($tmp4198->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4198 = $tmp4198->next;
}
$fn4200 $tmp4199 = $tmp4198->methods[0];
frost$core$Bit $tmp4201 = $tmp4199(((frost$core$Equatable*) $tmp4194), ((frost$core$Equatable*) $tmp4197));
bool $tmp4202 = $tmp4201.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4197)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4194)));
if ($tmp4202) goto block10; else goto block12;
block10:;
// line 2042
org$frostlang$frostc$ASTNode* $tmp4203 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4203));
org$frostlang$frostc$ASTNode* $tmp4204 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4204));
*(&local4) = $tmp4203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4203));
// line 2043
org$frostlang$frostc$ASTNode* $tmp4205 = *(&local4);
frost$core$Bit $tmp4206 = frost$core$Bit$init$builtin_bit($tmp4205 == NULL);
bool $tmp4207 = $tmp4206.value;
if ($tmp4207) goto block13; else goto block14;
block13:;
// line 2044
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4208 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4208));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4209 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4209));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2048
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4210 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2050
org$frostlang$frostc$FixedArray* $tmp4211 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4211));
org$frostlang$frostc$FixedArray* $tmp4212 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4212));
*(&local5) = $tmp4211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4211));
// line 2051
org$frostlang$frostc$FixedArray* $tmp4213 = *(&local5);
frost$core$Bit $tmp4214 = frost$core$Bit$init$builtin_bit($tmp4213 == NULL);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block15; else goto block16;
block15:;
// line 2052
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4216));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4217 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4217));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4218 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4218));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2054
org$frostlang$frostc$ASTNode* $tmp4219 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4220 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4221 = *(&local1);
org$frostlang$frostc$Position $tmp4222 = ((org$frostlang$frostc$parser$Token) $tmp4221.value).position;
org$frostlang$frostc$FixedArray* $tmp4223 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4223);
org$frostlang$frostc$MethodDecl$Kind $tmp4224 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4225 = *(&local2);
frost$core$String* $tmp4226 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4225.value));
org$frostlang$frostc$FixedArray* $tmp4227 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4228 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4229 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4219, $tmp4220, $tmp4222, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4223, $tmp4224, $tmp4226, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4227, $tmp4228, $tmp4229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
org$frostlang$frostc$FixedArray* $tmp4230 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4231 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4232 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4219;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2062
frost$core$Int64 $tmp4233 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4234 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4233);
org$frostlang$frostc$parser$Token$nullable $tmp4235 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4234, &$s4236);
*(&local0) = $tmp4235;
// line 2063
org$frostlang$frostc$parser$Token$nullable $tmp4237 = *(&local0);
frost$core$Bit $tmp4238 = frost$core$Bit$init$builtin_bit(!$tmp4237.nonnull);
bool $tmp4239 = $tmp4238.value;
if ($tmp4239) goto block1; else goto block2;
block1:;
// line 2064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2066
org$frostlang$frostc$FixedArray* $tmp4240 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
org$frostlang$frostc$FixedArray* $tmp4241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
*(&local1) = $tmp4240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
// line 2067
org$frostlang$frostc$FixedArray* $tmp4242 = *(&local1);
frost$core$Bit $tmp4243 = frost$core$Bit$init$builtin_bit($tmp4242 == NULL);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block3; else goto block4;
block3:;
// line 2068
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2070
frost$core$Int64 $tmp4246 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4247 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4246);
org$frostlang$frostc$parser$Token$nullable $tmp4248 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4247, &$s4249);
frost$core$Bit $tmp4250 = frost$core$Bit$init$builtin_bit(!$tmp4248.nonnull);
bool $tmp4251 = $tmp4250.value;
if ($tmp4251) goto block5; else goto block6;
block5:;
// line 2071
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2073
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2074
frost$core$Int64 $tmp4253 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4254 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4253);
org$frostlang$frostc$parser$Token$nullable $tmp4255 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4254);
frost$core$Bit $tmp4256 = frost$core$Bit$init$builtin_bit($tmp4255.nonnull);
bool $tmp4257 = $tmp4256.value;
if ($tmp4257) goto block7; else goto block9;
block7:;
// line 2075
frost$core$Int64 $tmp4258 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4259 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4258);
org$frostlang$frostc$parser$Token$nullable $tmp4260 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4259, &$s4261);
*(&local3) = $tmp4260;
// line 2076
org$frostlang$frostc$parser$Token$nullable $tmp4262 = *(&local3);
frost$core$Bit $tmp4263 = frost$core$Bit$init$builtin_bit(!$tmp4262.nonnull);
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block10; else goto block11;
block10:;
// line 2077
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2079
org$frostlang$frostc$ASTNode* $tmp4267 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4268 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4269 = *(&local3);
org$frostlang$frostc$Position $tmp4270 = ((org$frostlang$frostc$parser$Token) $tmp4269.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4271 = *(&local3);
frost$core$String* $tmp4272 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4271.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4267, $tmp4268, $tmp4270, $tmp4272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
org$frostlang$frostc$ASTNode* $tmp4273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
*(&local2) = $tmp4267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
// line 2080
frost$core$Int64 $tmp4274 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4275 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4274);
org$frostlang$frostc$parser$Token$nullable $tmp4276 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4275, &$s4277);
frost$core$Bit $tmp4278 = frost$core$Bit$init$builtin_bit(!$tmp4276.nonnull);
bool $tmp4279 = $tmp4278.value;
if ($tmp4279) goto block12; else goto block13;
block12:;
// line 2081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4280 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4281));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2085
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4282 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2087
org$frostlang$frostc$FixedArray* $tmp4283 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
org$frostlang$frostc$FixedArray* $tmp4284 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
*(&local4) = $tmp4283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
// line 2088
org$frostlang$frostc$FixedArray* $tmp4285 = *(&local4);
frost$core$Bit $tmp4286 = frost$core$Bit$init$builtin_bit($tmp4285 == NULL);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block14; else goto block15;
block14:;
// line 2089
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4289 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4289));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4290 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4290));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2091
org$frostlang$frostc$ASTNode* $tmp4291 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4292 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4293 = *(&local0);
org$frostlang$frostc$Position $tmp4294 = ((org$frostlang$frostc$parser$Token) $tmp4293.value).position;
org$frostlang$frostc$FixedArray* $tmp4295 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4296 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4297 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4291, $tmp4292, $tmp4294, $tmp4295, $tmp4296, $tmp4297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
org$frostlang$frostc$FixedArray* $tmp4298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4291;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2099
org$frostlang$frostc$parser$Token $tmp4301 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4302 = $tmp4301.kind;
frost$core$Int64 $tmp4303 = $tmp4302.$rawValue;
frost$core$Int64 $tmp4304 = (frost$core$Int64) {37};
frost$core$Bit $tmp4305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4304);
bool $tmp4306 = $tmp4305.value;
if ($tmp4306) goto block2; else goto block3;
block2:;
// line 2100
org$frostlang$frostc$ASTNode* $tmp4307 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
return $tmp4307;
block3:;
frost$core$Int64 $tmp4308 = (frost$core$Int64) {33};
frost$core$Bit $tmp4309 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4308);
bool $tmp4310 = $tmp4309.value;
if ($tmp4310) goto block4; else goto block5;
block4:;
// line 2101
org$frostlang$frostc$ASTNode* $tmp4311 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
return $tmp4311;
block5:;
frost$core$Int64 $tmp4312 = (frost$core$Int64) {32};
frost$core$Bit $tmp4313 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4312);
bool $tmp4314 = $tmp4313.value;
if ($tmp4314) goto block6; else goto block7;
block6:;
// line 2102
org$frostlang$frostc$ASTNode* $tmp4315 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
return $tmp4315;
block7:;
frost$core$Int64 $tmp4316 = (frost$core$Int64) {31};
frost$core$Bit $tmp4317 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4316);
bool $tmp4318 = $tmp4317.value;
if ($tmp4318) goto block8; else goto block9;
block8:;
// line 2103
org$frostlang$frostc$ASTNode* $tmp4319 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
return $tmp4319;
block9:;
frost$core$Int64 $tmp4320 = (frost$core$Int64) {36};
frost$core$Bit $tmp4321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4320);
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block10; else goto block11;
block10:;
// line 2104
org$frostlang$frostc$ASTNode* $tmp4323 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
return $tmp4323;
block11:;
frost$core$Int64 $tmp4324 = (frost$core$Int64) {45};
frost$core$Bit $tmp4325 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4324);
bool $tmp4326 = $tmp4325.value;
if ($tmp4326) goto block12; else goto block13;
block12:;
// line 2105
org$frostlang$frostc$ASTNode* $tmp4327 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
return $tmp4327;
block13:;
frost$core$Int64 $tmp4328 = (frost$core$Int64) {39};
frost$core$Bit $tmp4329 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4328);
bool $tmp4330 = $tmp4329.value;
if ($tmp4330) goto block14; else goto block15;
block14:;
// line 2106
org$frostlang$frostc$ASTNode* $tmp4331 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
return $tmp4331;
block15:;
frost$core$Int64 $tmp4332 = (frost$core$Int64) {103};
frost$core$Bit $tmp4333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4332);
bool $tmp4334 = $tmp4333.value;
if ($tmp4334) goto block16; else goto block17;
block16:;
// line 2107
org$frostlang$frostc$ASTNode* $tmp4335 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
return $tmp4335;
block17:;
frost$core$Int64 $tmp4336 = (frost$core$Int64) {52};
frost$core$Bit $tmp4337 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4336);
bool $tmp4338 = $tmp4337.value;
if ($tmp4338) goto block18; else goto block19;
block18:;
// line 2109
org$frostlang$frostc$parser$Token $tmp4339 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4339;
// line 2110
frost$core$Int64 $tmp4340 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4341 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4340);
org$frostlang$frostc$parser$Token$nullable $tmp4342 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4341);
*(&local1) = $tmp4342;
// line 2111
org$frostlang$frostc$parser$Token$nullable $tmp4343 = *(&local1);
frost$core$Bit $tmp4344 = frost$core$Bit$init$builtin_bit($tmp4343.nonnull);
bool $tmp4345 = $tmp4344.value;
if ($tmp4345) goto block20; else goto block21;
block20:;
// line 2112
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4346 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4347 = *$tmp4346;
frost$core$Bit $tmp4348 = frost$core$Bit$init$builtin_bit($tmp4347 != NULL);
bool $tmp4349 = $tmp4348.value;
if ($tmp4349) goto block22; else goto block23;
block22:;
// line 2113
org$frostlang$frostc$parser$Token$nullable $tmp4350 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4350.value));
// line 2114
org$frostlang$frostc$parser$Token $tmp4351 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4351);
// line 2115
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4352 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4353 = *$tmp4352;
frost$core$Int64 $tmp4354 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4355 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4354);
$fn4357 $tmp4356 = ($fn4357) $tmp4353->$class->vtable[3];
$tmp4356($tmp4353, $tmp4355);
// line 2116
org$frostlang$frostc$parser$Token $tmp4358 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2117
org$frostlang$frostc$parser$Token $tmp4359 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2118
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4360 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4361 = *$tmp4360;
frost$core$Int64 $tmp4362 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4363 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4362);
$fn4365 $tmp4364 = ($fn4365) $tmp4361->$class->vtable[4];
$tmp4364($tmp4361, $tmp4363);
goto block23;
block23:;
// line 2120
org$frostlang$frostc$parser$Token $tmp4366 = *(&local0);
frost$core$String* $tmp4367 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4366);
org$frostlang$frostc$ASTNode* $tmp4368 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
return $tmp4368;
block21:;
// line 2122
org$frostlang$frostc$parser$Token $tmp4369 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4369);
// line 2123
org$frostlang$frostc$ASTNode* $tmp4370 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4370));
return $tmp4370;
block19:;
frost$core$Int64 $tmp4371 = (frost$core$Int64) {49};
frost$core$Bit $tmp4372 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4371);
bool $tmp4373 = $tmp4372.value;
if ($tmp4373) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4374 = (frost$core$Int64) {50};
frost$core$Bit $tmp4375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4374);
bool $tmp4376 = $tmp4375.value;
if ($tmp4376) goto block24; else goto block26;
block24:;
// line 2126
org$frostlang$frostc$ASTNode* $tmp4377 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
return $tmp4377;
block26:;
frost$core$Int64 $tmp4378 = (frost$core$Int64) {24};
frost$core$Bit $tmp4379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4378);
bool $tmp4380 = $tmp4379.value;
if ($tmp4380) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4381 = (frost$core$Int64) {25};
frost$core$Bit $tmp4382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4381);
bool $tmp4383 = $tmp4382.value;
if ($tmp4383) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4384 = (frost$core$Int64) {26};
frost$core$Bit $tmp4385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4384);
bool $tmp4386 = $tmp4385.value;
if ($tmp4386) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4387 = (frost$core$Int64) {27};
frost$core$Bit $tmp4388 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4387);
bool $tmp4389 = $tmp4388.value;
if ($tmp4389) goto block27; else goto block31;
block27:;
// line 2129
org$frostlang$frostc$ASTNode* $tmp4390 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
return $tmp4390;
block31:;
frost$core$Int64 $tmp4391 = (frost$core$Int64) {23};
frost$core$Bit $tmp4392 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4391);
bool $tmp4393 = $tmp4392.value;
if ($tmp4393) goto block32; else goto block33;
block32:;
// line 2132
org$frostlang$frostc$ASTNode* $tmp4394 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
return $tmp4394;
block33:;
frost$core$Int64 $tmp4395 = (frost$core$Int64) {22};
frost$core$Bit $tmp4396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4395);
bool $tmp4397 = $tmp4396.value;
if ($tmp4397) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4398 = (frost$core$Int64) {21};
frost$core$Bit $tmp4399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4398);
bool $tmp4400 = $tmp4399.value;
if ($tmp4400) goto block34; else goto block36;
block34:;
// line 2135
org$frostlang$frostc$ASTNode* $tmp4401 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
return $tmp4401;
block36:;
frost$core$Int64 $tmp4402 = (frost$core$Int64) {47};
frost$core$Bit $tmp4403 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4402);
bool $tmp4404 = $tmp4403.value;
if ($tmp4404) goto block37; else goto block38;
block37:;
// line 2138
org$frostlang$frostc$ASTNode* $tmp4405 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
return $tmp4405;
block38:;
frost$core$Int64 $tmp4406 = (frost$core$Int64) {46};
frost$core$Bit $tmp4407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4303, $tmp4406);
bool $tmp4408 = $tmp4407.value;
if ($tmp4408) goto block39; else goto block40;
block39:;
// line 2141
org$frostlang$frostc$ASTNode* $tmp4409 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
return $tmp4409;
block40:;
// line 2145
frost$core$Int64 $tmp4410 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4411 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4410);
org$frostlang$frostc$parser$Token$nullable $tmp4412 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4411, &$s4413);
// line 2146
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
// line 2155
frost$core$Int64 $tmp4414 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4415 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4414);
org$frostlang$frostc$parser$Token$nullable $tmp4416 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4415, &$s4417);
*(&local0) = $tmp4416;
// line 2156
org$frostlang$frostc$parser$Token$nullable $tmp4418 = *(&local0);
frost$core$Bit $tmp4419 = frost$core$Bit$init$builtin_bit(!$tmp4418.nonnull);
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block1; else goto block2;
block1:;
// line 2157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2159
frost$core$Int64 $tmp4421 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4422 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4421);
org$frostlang$frostc$parser$Token$nullable $tmp4423 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4422, &$s4424);
*(&local1) = $tmp4423;
// line 2160
org$frostlang$frostc$parser$Token$nullable $tmp4425 = *(&local1);
frost$core$Bit $tmp4426 = frost$core$Bit$init$builtin_bit(!$tmp4425.nonnull);
bool $tmp4427 = $tmp4426.value;
if ($tmp4427) goto block3; else goto block4;
block3:;
// line 2161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2163
frost$core$MutableString* $tmp4428 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4429 = *(&local1);
frost$core$String* $tmp4430 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4429.value));
frost$core$MutableString$init$frost$core$String($tmp4428, $tmp4430);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
frost$core$MutableString* $tmp4431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
*(&local2) = $tmp4428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
// line 2164
goto block5;
block5:;
// line 2165
frost$core$Int64 $tmp4432 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4433 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4432);
org$frostlang$frostc$parser$Token$nullable $tmp4434 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4433);
*(&local1) = $tmp4434;
// line 2166
org$frostlang$frostc$parser$Token$nullable $tmp4435 = *(&local1);
frost$core$Bit $tmp4436 = frost$core$Bit$init$builtin_bit(!$tmp4435.nonnull);
bool $tmp4437 = $tmp4436.value;
if ($tmp4437) goto block7; else goto block8;
block7:;
// line 2167
goto block6;
block8:;
// line 2169
frost$core$MutableString* $tmp4438 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4438, &$s4439);
// line 2170
frost$core$Int64 $tmp4440 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4441 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4440);
org$frostlang$frostc$parser$Token$nullable $tmp4442 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4441, &$s4443);
*(&local1) = $tmp4442;
// line 2171
org$frostlang$frostc$parser$Token$nullable $tmp4444 = *(&local1);
frost$core$Bit $tmp4445 = frost$core$Bit$init$builtin_bit(!$tmp4444.nonnull);
bool $tmp4446 = $tmp4445.value;
if ($tmp4446) goto block9; else goto block10;
block9:;
// line 2172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4447 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2174
frost$core$MutableString* $tmp4448 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4449 = *(&local1);
frost$core$String* $tmp4450 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4449.value));
frost$core$MutableString$append$frost$core$String($tmp4448, $tmp4450);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
goto block5;
block6:;
// line 2176
org$frostlang$frostc$ASTNode* $tmp4451 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4452 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4453 = *(&local0);
org$frostlang$frostc$Position $tmp4454 = ((org$frostlang$frostc$parser$Token) $tmp4453.value).position;
frost$core$MutableString* $tmp4455 = *(&local2);
frost$core$String* $tmp4456 = frost$core$MutableString$finish$R$frost$core$String($tmp4455);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4451, $tmp4452, $tmp4454, $tmp4456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$MutableString* $tmp4457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4451;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2183
frost$core$Int64 $tmp4458 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4459 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4458);
org$frostlang$frostc$parser$Token$nullable $tmp4460 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4459, &$s4461);
*(&local0) = $tmp4460;
// line 2184
org$frostlang$frostc$parser$Token$nullable $tmp4462 = *(&local0);
frost$core$Bit $tmp4463 = frost$core$Bit$init$builtin_bit(!$tmp4462.nonnull);
bool $tmp4464 = $tmp4463.value;
if ($tmp4464) goto block1; else goto block2;
block1:;
// line 2185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2187
frost$core$Int64 $tmp4465 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4466 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4465);
org$frostlang$frostc$parser$Token$nullable $tmp4467 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4466, &$s4468);
*(&local1) = $tmp4467;
// line 2188
org$frostlang$frostc$parser$Token$nullable $tmp4469 = *(&local1);
frost$core$Bit $tmp4470 = frost$core$Bit$init$builtin_bit(!$tmp4469.nonnull);
bool $tmp4471 = $tmp4470.value;
if ($tmp4471) goto block3; else goto block4;
block3:;
// line 2189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2191
frost$core$MutableString* $tmp4472 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4473 = *(&local1);
frost$core$String* $tmp4474 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4473.value));
frost$core$MutableString$init$frost$core$String($tmp4472, $tmp4474);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4472));
frost$core$MutableString* $tmp4475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
*(&local2) = $tmp4472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4472));
// line 2192
goto block5;
block5:;
// line 2193
frost$core$Int64 $tmp4476 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4477 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4476);
org$frostlang$frostc$parser$Token$nullable $tmp4478 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4477);
*(&local1) = $tmp4478;
// line 2194
org$frostlang$frostc$parser$Token$nullable $tmp4479 = *(&local1);
frost$core$Bit $tmp4480 = frost$core$Bit$init$builtin_bit(!$tmp4479.nonnull);
bool $tmp4481 = $tmp4480.value;
if ($tmp4481) goto block7; else goto block8;
block7:;
// line 2195
goto block6;
block8:;
// line 2197
frost$core$MutableString* $tmp4482 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4482, &$s4483);
// line 2198
frost$core$Int64 $tmp4484 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4485 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4484);
org$frostlang$frostc$parser$Token$nullable $tmp4486 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4485, &$s4487);
*(&local1) = $tmp4486;
// line 2199
org$frostlang$frostc$parser$Token$nullable $tmp4488 = *(&local1);
frost$core$Bit $tmp4489 = frost$core$Bit$init$builtin_bit(!$tmp4488.nonnull);
bool $tmp4490 = $tmp4489.value;
if ($tmp4490) goto block9; else goto block10;
block9:;
// line 2200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2202
frost$core$MutableString* $tmp4492 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4493 = *(&local1);
frost$core$String* $tmp4494 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4493.value));
frost$core$MutableString$append$frost$core$String($tmp4492, $tmp4494);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
goto block5;
block6:;
// line 2204
org$frostlang$frostc$ASTNode* $tmp4495 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4496 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp4497 = *(&local0);
org$frostlang$frostc$Position $tmp4498 = ((org$frostlang$frostc$parser$Token) $tmp4497.value).position;
frost$core$MutableString* $tmp4499 = *(&local2);
frost$core$String* $tmp4500 = frost$core$MutableString$finish$R$frost$core$String($tmp4499);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4495, $tmp4496, $tmp4498, $tmp4500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4495));
frost$core$MutableString* $tmp4501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4495;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2211
frost$core$Int64 $tmp4502 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4503 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4502);
org$frostlang$frostc$parser$Token$nullable $tmp4504 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4503, &$s4505);
*(&local0) = $tmp4504;
// line 2212
org$frostlang$frostc$parser$Token$nullable $tmp4506 = *(&local0);
frost$core$Bit $tmp4507 = frost$core$Bit$init$builtin_bit(!$tmp4506.nonnull);
bool $tmp4508 = $tmp4507.value;
if ($tmp4508) goto block1; else goto block2;
block1:;
// line 2213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2215
frost$core$Int64 $tmp4509 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4510 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4509);
org$frostlang$frostc$parser$Token$nullable $tmp4511 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4510, &$s4512);
*(&local1) = $tmp4511;
// line 2216
org$frostlang$frostc$parser$Token$nullable $tmp4513 = *(&local1);
frost$core$Bit $tmp4514 = frost$core$Bit$init$builtin_bit(!$tmp4513.nonnull);
bool $tmp4515 = $tmp4514.value;
if ($tmp4515) goto block3; else goto block4;
block3:;
// line 2217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2219
frost$collections$Array* $tmp4516 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4516);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
frost$collections$Array* $tmp4517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
*(&local2) = $tmp4516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
// line 2220
frost$core$Int64 $tmp4518 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4519 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4518);
org$frostlang$frostc$parser$Token$nullable $tmp4520 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4519);
frost$core$Bit $tmp4521 = frost$core$Bit$init$builtin_bit($tmp4520.nonnull);
bool $tmp4522 = $tmp4521.value;
if ($tmp4522) goto block5; else goto block7;
block5:;
// line 2221
org$frostlang$frostc$ASTNode* $tmp4523 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
org$frostlang$frostc$ASTNode* $tmp4524 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4524));
*(&local3) = $tmp4523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
// line 2222
org$frostlang$frostc$ASTNode* $tmp4525 = *(&local3);
frost$core$Bit $tmp4526 = frost$core$Bit$init$builtin_bit($tmp4525 == NULL);
bool $tmp4527 = $tmp4526.value;
if ($tmp4527) goto block8; else goto block9;
block8:;
// line 2223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2225
frost$collections$Array* $tmp4530 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4531 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4532 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4533 = *(&local1);
org$frostlang$frostc$Position $tmp4534 = ((org$frostlang$frostc$parser$Token) $tmp4533.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4535 = *(&local1);
frost$core$String* $tmp4536 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4535.value));
org$frostlang$frostc$ASTNode* $tmp4537 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4531, $tmp4532, $tmp4534, $tmp4536, $tmp4537);
frost$collections$Array$add$frost$collections$Array$T($tmp4530, ((frost$core$Object*) $tmp4531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4531));
org$frostlang$frostc$ASTNode* $tmp4538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4538));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2228
frost$collections$Array* $tmp4539 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4540 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4541 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4542 = *(&local1);
org$frostlang$frostc$Position $tmp4543 = ((org$frostlang$frostc$parser$Token) $tmp4542.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4544 = *(&local1);
frost$core$String* $tmp4545 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4544.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4540, $tmp4541, $tmp4543, $tmp4545);
frost$collections$Array$add$frost$collections$Array$T($tmp4539, ((frost$core$Object*) $tmp4540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
goto block6;
block6:;
// line 2230
goto block10;
block10:;
frost$core$Int64 $tmp4546 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4547 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4546);
org$frostlang$frostc$parser$Token$nullable $tmp4548 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4547);
frost$core$Bit $tmp4549 = frost$core$Bit$init$builtin_bit($tmp4548.nonnull);
bool $tmp4550 = $tmp4549.value;
if ($tmp4550) goto block11; else goto block12;
block11:;
// line 2231
frost$core$Int64 $tmp4551 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4552 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4551);
org$frostlang$frostc$parser$Token$nullable $tmp4553 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4552, &$s4554);
*(&local1) = $tmp4553;
// line 2232
org$frostlang$frostc$parser$Token$nullable $tmp4555 = *(&local1);
frost$core$Bit $tmp4556 = frost$core$Bit$init$builtin_bit(!$tmp4555.nonnull);
bool $tmp4557 = $tmp4556.value;
if ($tmp4557) goto block13; else goto block14;
block13:;
// line 2233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4558));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2235
frost$core$Int64 $tmp4559 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4560 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4559);
org$frostlang$frostc$parser$Token$nullable $tmp4561 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4560);
frost$core$Bit $tmp4562 = frost$core$Bit$init$builtin_bit($tmp4561.nonnull);
bool $tmp4563 = $tmp4562.value;
if ($tmp4563) goto block15; else goto block17;
block15:;
// line 2236
org$frostlang$frostc$ASTNode* $tmp4564 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
org$frostlang$frostc$ASTNode* $tmp4565 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
*(&local4) = $tmp4564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
// line 2237
org$frostlang$frostc$ASTNode* $tmp4566 = *(&local4);
frost$core$Bit $tmp4567 = frost$core$Bit$init$builtin_bit($tmp4566 == NULL);
bool $tmp4568 = $tmp4567.value;
if ($tmp4568) goto block18; else goto block19;
block18:;
// line 2238
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4569 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2240
frost$collections$Array* $tmp4571 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4572 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4573 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4574 = *(&local1);
org$frostlang$frostc$Position $tmp4575 = ((org$frostlang$frostc$parser$Token) $tmp4574.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4576 = *(&local1);
frost$core$String* $tmp4577 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4576.value));
org$frostlang$frostc$ASTNode* $tmp4578 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4572, $tmp4573, $tmp4575, $tmp4577, $tmp4578);
frost$collections$Array$add$frost$collections$Array$T($tmp4571, ((frost$core$Object*) $tmp4572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4572));
org$frostlang$frostc$ASTNode* $tmp4579 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4579));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2243
frost$collections$Array* $tmp4580 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4581 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4582 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4583 = *(&local1);
org$frostlang$frostc$Position $tmp4584 = ((org$frostlang$frostc$parser$Token) $tmp4583.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4585 = *(&local1);
frost$core$String* $tmp4586 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4585.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4581, $tmp4582, $tmp4584, $tmp4586);
frost$collections$Array$add$frost$collections$Array$T($tmp4580, ((frost$core$Object*) $tmp4581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
goto block16;
block16:;
goto block10;
block12:;
// line 2246
frost$core$Int64 $tmp4587 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4588 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4587);
org$frostlang$frostc$parser$Token$nullable $tmp4589 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4588, &$s4590);
frost$core$Bit $tmp4591 = frost$core$Bit$init$builtin_bit(!$tmp4589.nonnull);
bool $tmp4592 = $tmp4591.value;
if ($tmp4592) goto block20; else goto block21;
block20:;
// line 2247
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2249
frost$collections$Array* $tmp4594 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4595 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
frost$collections$Array* $tmp4596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4596));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4595;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2256
frost$core$Int64 $tmp4597 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4598 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4597);
org$frostlang$frostc$parser$Token$nullable $tmp4599 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4598, &$s4600);
*(&local0) = $tmp4599;
// line 2257
org$frostlang$frostc$parser$Token$nullable $tmp4601 = *(&local0);
frost$core$Bit $tmp4602 = frost$core$Bit$init$builtin_bit(!$tmp4601.nonnull);
bool $tmp4603 = $tmp4602.value;
if ($tmp4603) goto block1; else goto block2;
block1:;
// line 2258
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2260
frost$collections$Array* $tmp4604 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4604);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
frost$collections$Array* $tmp4605 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
*(&local1) = $tmp4604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
// line 2261
org$frostlang$frostc$ASTNode* $tmp4606 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
org$frostlang$frostc$ASTNode* $tmp4607 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4607));
*(&local2) = $tmp4606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
// line 2262
org$frostlang$frostc$ASTNode* $tmp4608 = *(&local2);
frost$core$Bit $tmp4609 = frost$core$Bit$init$builtin_bit($tmp4608 == NULL);
bool $tmp4610 = $tmp4609.value;
if ($tmp4610) goto block3; else goto block4;
block3:;
// line 2263
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4611 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4612 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2265
frost$collections$Array* $tmp4613 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4614 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4613, ((frost$core$Object*) $tmp4614));
// line 2266
goto block5;
block5:;
frost$core$Int64 $tmp4615 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4616 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4615);
org$frostlang$frostc$parser$Token$nullable $tmp4617 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4616);
frost$core$Bit $tmp4618 = frost$core$Bit$init$builtin_bit($tmp4617.nonnull);
bool $tmp4619 = $tmp4618.value;
if ($tmp4619) goto block6; else goto block7;
block6:;
// line 2267
org$frostlang$frostc$ASTNode* $tmp4620 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
org$frostlang$frostc$ASTNode* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = $tmp4620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
// line 2268
org$frostlang$frostc$ASTNode* $tmp4622 = *(&local2);
frost$core$Bit $tmp4623 = frost$core$Bit$init$builtin_bit($tmp4622 == NULL);
bool $tmp4624 = $tmp4623.value;
if ($tmp4624) goto block8; else goto block9;
block8:;
// line 2269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4625 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4626 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2271
frost$collections$Array* $tmp4627 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4628 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4627, ((frost$core$Object*) $tmp4628));
goto block5;
block7:;
// line 2273
frost$collections$Array* $tmp4629 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4630 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
org$frostlang$frostc$ASTNode* $tmp4631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4630;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2280
frost$core$Int64 $tmp4633 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4634 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4633);
org$frostlang$frostc$parser$Token$nullable $tmp4635 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4634, &$s4636);
*(&local0) = $tmp4635;
// line 2281
*(&local1) = ((frost$core$String*) NULL);
// line 2282
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4637 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2283
frost$core$Int64 $tmp4638 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4639 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4638);
org$frostlang$frostc$parser$Token$nullable $tmp4640 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4639);
*(&local3) = $tmp4640;
// line 2284
org$frostlang$frostc$parser$Token$nullable $tmp4641 = *(&local3);
frost$core$Bit $tmp4642 = frost$core$Bit$init$builtin_bit($tmp4641.nonnull);
bool $tmp4643 = $tmp4642.value;
if ($tmp4643) goto block1; else goto block2;
block1:;
// line 2285
org$frostlang$frostc$ASTNode* $tmp4644 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
org$frostlang$frostc$ASTNode* $tmp4645 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4645));
*(&local2) = $tmp4644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
// line 2286
org$frostlang$frostc$ASTNode* $tmp4646 = *(&local2);
frost$core$Bit $tmp4647 = frost$core$Bit$init$builtin_bit($tmp4646 == NULL);
bool $tmp4648 = $tmp4647.value;
if ($tmp4648) goto block3; else goto block4;
block3:;
// line 2287
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4650 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2289
frost$core$Int64 $tmp4651 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4652 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4651);
org$frostlang$frostc$parser$Token$nullable $tmp4653 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4652, &$s4654);
*(&local4) = $tmp4653;
// line 2290
org$frostlang$frostc$parser$Token$nullable $tmp4655 = *(&local4);
frost$core$Bit $tmp4656 = frost$core$Bit$init$builtin_bit(!$tmp4655.nonnull);
bool $tmp4657 = $tmp4656.value;
if ($tmp4657) goto block5; else goto block6;
block5:;
// line 2291
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4659 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4659));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2293
frost$core$String** $tmp4660 = &param0->source;
frost$core$String* $tmp4661 = *$tmp4660;
frost$core$String** $tmp4662 = &param0->source;
frost$core$String* $tmp4663 = *$tmp4662;
org$frostlang$frostc$parser$Token$nullable $tmp4664 = *(&local3);
frost$core$String$Index $tmp4665 = ((org$frostlang$frostc$parser$Token) $tmp4664.value).start;
frost$core$String$Index $tmp4666 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4663, $tmp4665);
org$frostlang$frostc$parser$Token$nullable $tmp4667 = *(&local4);
frost$core$String$Index $tmp4668 = ((org$frostlang$frostc$parser$Token) $tmp4667.value).start;
frost$core$Bit $tmp4669 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4670 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4666, $tmp4668, $tmp4669);
frost$core$String* $tmp4671 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4661, $tmp4670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
frost$core$String* $tmp4672 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
*(&local1) = $tmp4671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
goto block2;
block2:;
// line 2295
org$frostlang$frostc$ASTNode* $tmp4673 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4674 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4675 = *(&local0);
org$frostlang$frostc$Position $tmp4676 = ((org$frostlang$frostc$parser$Token) $tmp4675.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4677 = *(&local0);
frost$core$String* $tmp4678 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4677.value));
frost$core$String* $tmp4679 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4680 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4673, $tmp4674, $tmp4676, $tmp4678, $tmp4679, $tmp4680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
org$frostlang$frostc$ASTNode* $tmp4681 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4673;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2302
frost$collections$Array* $tmp4683 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4683);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$collections$Array* $tmp4684 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
*(&local0) = $tmp4683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
// line 2303
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4685 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4686 = $tmp4685.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4687;
$tmp4687 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4687->value = $tmp4686;
frost$core$Int64 $tmp4688 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4689 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4688);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4690;
$tmp4690 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4690->value = $tmp4689;
ITable* $tmp4691 = ((frost$core$Equatable*) $tmp4687)->$class->itable;
while ($tmp4691->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4691 = $tmp4691->next;
}
$fn4693 $tmp4692 = $tmp4691->methods[0];
frost$core$Bit $tmp4694 = $tmp4692(((frost$core$Equatable*) $tmp4687), ((frost$core$Equatable*) $tmp4690));
bool $tmp4695 = $tmp4694.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4690)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4687)));
if ($tmp4695) goto block2; else goto block3;
block2:;
// line 2304
org$frostlang$frostc$ASTNode* $tmp4696 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
org$frostlang$frostc$ASTNode* $tmp4697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
*(&local1) = $tmp4696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
// line 2305
org$frostlang$frostc$ASTNode* $tmp4698 = *(&local1);
frost$core$Bit $tmp4699 = frost$core$Bit$init$builtin_bit($tmp4698 == NULL);
bool $tmp4700 = $tmp4699.value;
if ($tmp4700) goto block4; else goto block5;
block4:;
// line 2306
org$frostlang$frostc$ASTNode* $tmp4701 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2308
frost$collections$Array* $tmp4702 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4703 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4702, ((frost$core$Object*) $tmp4703));
org$frostlang$frostc$ASTNode* $tmp4704 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2310
frost$collections$Array* $tmp4705 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4706 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$collections$Array* $tmp4707 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4706;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2314
frost$core$Int64 $tmp4708 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4709 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4708);
org$frostlang$frostc$parser$Token$nullable $tmp4710 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4709, &$s4711);
*(&local0) = $tmp4710;
// line 2315
org$frostlang$frostc$parser$Token$nullable $tmp4712 = *(&local0);
frost$core$Bit $tmp4713 = frost$core$Bit$init$builtin_bit(!$tmp4712.nonnull);
bool $tmp4714 = $tmp4713.value;
if ($tmp4714) goto block1; else goto block2;
block1:;
// line 2316
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2318
frost$core$MutableString* $tmp4715 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4715);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$core$MutableString* $tmp4716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local1) = $tmp4715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
// line 2319
goto block3;
block3:;
// line 2320
org$frostlang$frostc$parser$Token $tmp4717 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4717;
// line 2321
org$frostlang$frostc$parser$Token $tmp4718 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4719 = $tmp4718.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4720;
$tmp4720 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4720->value = $tmp4719;
frost$core$Int64 $tmp4721 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4722 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4721);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4723;
$tmp4723 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4723->value = $tmp4722;
ITable* $tmp4724 = ((frost$core$Equatable*) $tmp4720)->$class->itable;
while ($tmp4724->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4724 = $tmp4724->next;
}
$fn4726 $tmp4725 = $tmp4724->methods[0];
frost$core$Bit $tmp4727 = $tmp4725(((frost$core$Equatable*) $tmp4720), ((frost$core$Equatable*) $tmp4723));
bool $tmp4728 = $tmp4727.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4723)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4720)));
if ($tmp4728) goto block5; else goto block6;
block5:;
// line 2322
goto block4;
block6:;
// line 2324
org$frostlang$frostc$parser$Token $tmp4729 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4730 = $tmp4729.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4731;
$tmp4731 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4731->value = $tmp4730;
frost$core$Int64 $tmp4732 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4733 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4732);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4734;
$tmp4734 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4734->value = $tmp4733;
ITable* $tmp4735 = ((frost$core$Equatable*) $tmp4731)->$class->itable;
while ($tmp4735->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4735 = $tmp4735->next;
}
$fn4737 $tmp4736 = $tmp4735->methods[0];
frost$core$Bit $tmp4738 = $tmp4736(((frost$core$Equatable*) $tmp4731), ((frost$core$Equatable*) $tmp4734));
bool $tmp4739 = $tmp4738.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4734)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4731)));
if ($tmp4739) goto block7; else goto block8;
block7:;
// line 2325
org$frostlang$frostc$parser$Token$nullable $tmp4740 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4740.value), &$s4741);
// line 2326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2328
frost$core$MutableString* $tmp4743 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4744 = *(&local2);
frost$core$String* $tmp4745 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4744);
frost$core$MutableString$append$frost$core$String($tmp4743, $tmp4745);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4745));
goto block3;
block4:;
// line 2330
org$frostlang$frostc$ASTNode* $tmp4746 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4747 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4748 = *(&local0);
org$frostlang$frostc$Position $tmp4749 = ((org$frostlang$frostc$parser$Token) $tmp4748.value).position;
frost$core$MutableString* $tmp4750 = *(&local1);
frost$core$String* $tmp4751 = frost$core$MutableString$finish$R$frost$core$String($tmp4750);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4746, $tmp4747, $tmp4749, $tmp4751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4746));
frost$core$MutableString* $tmp4752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4746;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2337
frost$core$Int64 $tmp4753 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4754 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4753);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4754);
// line 2338
frost$core$Int64 $tmp4755 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4756 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4755);
org$frostlang$frostc$parser$Token$nullable $tmp4757 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4756, &$s4758);
*(&local0) = $tmp4757;
// line 2339
frost$core$Int64 $tmp4759 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4760 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4759);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4760);
// line 2340
org$frostlang$frostc$parser$Token$nullable $tmp4761 = *(&local0);
frost$core$Bit $tmp4762 = frost$core$Bit$init$builtin_bit(!$tmp4761.nonnull);
bool $tmp4763 = $tmp4762.value;
if ($tmp4763) goto block1; else goto block2;
block1:;
// line 2341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2343
org$frostlang$frostc$ASTNode* $tmp4764 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
org$frostlang$frostc$ASTNode* $tmp4765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
*(&local1) = $tmp4764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
// line 2344
org$frostlang$frostc$ASTNode* $tmp4766 = *(&local1);
frost$core$Bit $tmp4767 = frost$core$Bit$init$builtin_bit($tmp4766 == NULL);
bool $tmp4768 = $tmp4767.value;
if ($tmp4768) goto block3; else goto block4;
block3:;
// line 2345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2347
org$frostlang$frostc$ASTNode* $tmp4770 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4771 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4772 = *(&local0);
org$frostlang$frostc$Position $tmp4773 = ((org$frostlang$frostc$parser$Token) $tmp4772.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4774 = *(&local0);
frost$core$String* $tmp4775 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4774.value));
org$frostlang$frostc$ASTNode* $tmp4776 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4770, $tmp4771, $tmp4773, $tmp4775, $tmp4776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
org$frostlang$frostc$ASTNode* $tmp4777 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4777));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4770;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2354
frost$core$Int64 $tmp4778 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4779 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4778);
org$frostlang$frostc$parser$Token$nullable $tmp4780 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4779, &$s4781);
*(&local0) = $tmp4780;
// line 2355
org$frostlang$frostc$parser$Token$nullable $tmp4782 = *(&local0);
frost$core$Bit $tmp4783 = frost$core$Bit$init$builtin_bit(!$tmp4782.nonnull);
bool $tmp4784 = $tmp4783.value;
if ($tmp4784) goto block1; else goto block2;
block1:;
// line 2356
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2358
frost$collections$Array* $tmp4785 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4785);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
frost$collections$Array* $tmp4786 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
*(&local1) = $tmp4785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
// line 2359
frost$core$Int64 $tmp4787 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4788 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4787);
org$frostlang$frostc$parser$Token$nullable $tmp4789 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4788);
frost$core$Bit $tmp4790 = frost$core$Bit$init$builtin_bit(!$tmp4789.nonnull);
bool $tmp4791 = $tmp4790.value;
if ($tmp4791) goto block3; else goto block4;
block3:;
// line 2360
org$frostlang$frostc$ASTNode* $tmp4792 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
org$frostlang$frostc$ASTNode* $tmp4793 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
*(&local2) = $tmp4792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
// line 2361
org$frostlang$frostc$ASTNode* $tmp4794 = *(&local2);
frost$core$Bit $tmp4795 = frost$core$Bit$init$builtin_bit($tmp4794 == NULL);
bool $tmp4796 = $tmp4795.value;
if ($tmp4796) goto block5; else goto block6;
block5:;
// line 2362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4797 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4798 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2364
frost$collections$Array* $tmp4799 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4800 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4799, ((frost$core$Object*) $tmp4800));
// line 2365
goto block7;
block7:;
frost$core$Int64 $tmp4801 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4802 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4801);
org$frostlang$frostc$parser$Token$nullable $tmp4803 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4802);
frost$core$Bit $tmp4804 = frost$core$Bit$init$builtin_bit($tmp4803.nonnull);
bool $tmp4805 = $tmp4804.value;
if ($tmp4805) goto block8; else goto block9;
block8:;
// line 2366
org$frostlang$frostc$ASTNode* $tmp4806 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
org$frostlang$frostc$ASTNode* $tmp4807 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
*(&local2) = $tmp4806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
// line 2367
org$frostlang$frostc$ASTNode* $tmp4808 = *(&local2);
frost$core$Bit $tmp4809 = frost$core$Bit$init$builtin_bit($tmp4808 == NULL);
bool $tmp4810 = $tmp4809.value;
if ($tmp4810) goto block10; else goto block11;
block10:;
// line 2368
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4811 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2370
frost$collections$Array* $tmp4813 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4814 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4813, ((frost$core$Object*) $tmp4814));
goto block7;
block9:;
// line 2372
frost$core$Int64 $tmp4815 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4816 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4815);
org$frostlang$frostc$parser$Token$nullable $tmp4817 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4816, &$s4818);
frost$core$Bit $tmp4819 = frost$core$Bit$init$builtin_bit(!$tmp4817.nonnull);
bool $tmp4820 = $tmp4819.value;
if ($tmp4820) goto block12; else goto block13;
block12:;
// line 2373
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4823 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4823));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2376
frost$collections$Array* $tmp4824 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4825 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
frost$collections$Array* $tmp4826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4825;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
// line 2384
// line 2385
frost$core$Int64 $tmp4827 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4828 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4827);
org$frostlang$frostc$parser$Token$nullable $tmp4829 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4828);
*(&local1) = $tmp4829;
// line 2386
org$frostlang$frostc$parser$Token$nullable $tmp4830 = *(&local1);
frost$core$Bit $tmp4831 = frost$core$Bit$init$builtin_bit(!$tmp4830.nonnull);
bool $tmp4832 = $tmp4831.value;
if ($tmp4832) goto block1; else goto block3;
block1:;
// line 2387
frost$core$Int64 $tmp4833 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4834 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4833);
org$frostlang$frostc$parser$Token$nullable $tmp4835 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4834, &$s4836);
*(&local1) = $tmp4835;
// line 2388
org$frostlang$frostc$parser$Token$nullable $tmp4837 = *(&local1);
frost$core$Bit $tmp4838 = frost$core$Bit$init$builtin_bit(!$tmp4837.nonnull);
bool $tmp4839 = $tmp4838.value;
if ($tmp4839) goto block4; else goto block5;
block4:;
// line 2389
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2391
frost$core$Int64 $tmp4840 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4841 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4840);
*(&local0) = $tmp4841;
goto block2;
block3:;
// line 1
// line 2394
frost$core$Int64 $tmp4842 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4843 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4842);
*(&local0) = $tmp4843;
goto block2;
block2:;
// line 2396
frost$core$Int64 $tmp4844 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4845 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4844);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4845);
// line 2397
frost$core$String* $tmp4846 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
frost$core$String* $tmp4847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
*(&local2) = $tmp4846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
// line 2398
frost$core$Int64 $tmp4848 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4849 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4848);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4849);
// line 2399
frost$core$String* $tmp4850 = *(&local2);
frost$core$Bit $tmp4851 = frost$core$Bit$init$builtin_bit($tmp4850 == NULL);
bool $tmp4852 = $tmp4851.value;
if ($tmp4852) goto block6; else goto block7;
block6:;
// line 2400
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4853 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2402
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2403
org$frostlang$frostc$parser$Token $tmp4854 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4855 = $tmp4854.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4856;
$tmp4856 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4856->value = $tmp4855;
frost$core$Int64 $tmp4857 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4858 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4857);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4859;
$tmp4859 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4859->value = $tmp4858;
ITable* $tmp4860 = ((frost$core$Equatable*) $tmp4856)->$class->itable;
while ($tmp4860->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4860 = $tmp4860->next;
}
$fn4862 $tmp4861 = $tmp4860->methods[0];
frost$core$Bit $tmp4863 = $tmp4861(((frost$core$Equatable*) $tmp4856), ((frost$core$Equatable*) $tmp4859));
bool $tmp4864 = $tmp4863.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4859)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4856)));
if ($tmp4864) goto block8; else goto block10;
block8:;
// line 2404
org$frostlang$frostc$FixedArray* $tmp4865 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
org$frostlang$frostc$FixedArray* $tmp4866 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
*(&local3) = $tmp4865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
goto block9;
block10:;
// line 1
// line 2407
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4867 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4867));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2409
org$frostlang$frostc$FixedArray* $tmp4868 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
org$frostlang$frostc$FixedArray* $tmp4869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
*(&local4) = $tmp4868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
// line 2410
org$frostlang$frostc$FixedArray* $tmp4870 = *(&local4);
frost$core$Bit $tmp4871 = frost$core$Bit$init$builtin_bit($tmp4870 == NULL);
bool $tmp4872 = $tmp4871.value;
if ($tmp4872) goto block11; else goto block12;
block11:;
// line 2411
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4873 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4874 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4875 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2413
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2414
org$frostlang$frostc$parser$Token $tmp4876 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4877 = $tmp4876.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4878;
$tmp4878 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4878->value = $tmp4877;
frost$core$Int64 $tmp4879 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4880 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4879);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4881;
$tmp4881 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4881->value = $tmp4880;
ITable* $tmp4882 = ((frost$core$Equatable*) $tmp4878)->$class->itable;
while ($tmp4882->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4882 = $tmp4882->next;
}
$fn4884 $tmp4883 = $tmp4882->methods[0];
frost$core$Bit $tmp4885 = $tmp4883(((frost$core$Equatable*) $tmp4878), ((frost$core$Equatable*) $tmp4881));
bool $tmp4886 = $tmp4885.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4881)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4878)));
if ($tmp4886) goto block13; else goto block15;
block13:;
// line 2415
org$frostlang$frostc$ASTNode* $tmp4887 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
org$frostlang$frostc$ASTNode* $tmp4888 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4888));
*(&local5) = $tmp4887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
// line 2416
org$frostlang$frostc$ASTNode* $tmp4889 = *(&local5);
frost$core$Bit $tmp4890 = frost$core$Bit$init$builtin_bit($tmp4889 == NULL);
bool $tmp4891 = $tmp4890.value;
if ($tmp4891) goto block16; else goto block17;
block16:;
// line 2417
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4892 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4893 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4894 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4895 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2421
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4896 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4896));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2423
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2424
org$frostlang$frostc$parser$Token $tmp4897 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4898 = $tmp4897.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4899;
$tmp4899 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4899->value = $tmp4898;
frost$core$Int64 $tmp4900 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp4901 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4900);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4902;
$tmp4902 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4902->value = $tmp4901;
ITable* $tmp4903 = ((frost$core$Equatable*) $tmp4899)->$class->itable;
while ($tmp4903->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4903 = $tmp4903->next;
}
$fn4905 $tmp4904 = $tmp4903->methods[0];
frost$core$Bit $tmp4906 = $tmp4904(((frost$core$Equatable*) $tmp4899), ((frost$core$Equatable*) $tmp4902));
bool $tmp4907 = $tmp4906.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4902)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4899)));
if ($tmp4907) goto block18; else goto block20;
block18:;
// line 2425
org$frostlang$frostc$FixedArray* $tmp4908 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
org$frostlang$frostc$FixedArray* $tmp4909 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
*(&local6) = $tmp4908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
// line 2426
org$frostlang$frostc$FixedArray* $tmp4910 = *(&local6);
frost$core$Bit $tmp4911 = frost$core$Bit$init$builtin_bit($tmp4910 == NULL);
bool $tmp4912 = $tmp4911.value;
if ($tmp4912) goto block21; else goto block22;
block21:;
// line 2427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4913 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4914 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4915 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4916 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2431
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4918 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2433
org$frostlang$frostc$ASTNode* $tmp4919 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4920 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4921 = *(&local1);
org$frostlang$frostc$Position $tmp4922 = ((org$frostlang$frostc$parser$Token) $tmp4921.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp4923 = *(&local0);
frost$core$String* $tmp4924 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4925 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp4926 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp4927 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp4928 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4919, $tmp4920, $tmp4922, param1, param2, $tmp4923, $tmp4924, $tmp4925, $tmp4926, $tmp4927, $tmp4928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
org$frostlang$frostc$FixedArray* $tmp4929 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4930 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4930));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4931 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4932 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
*(&local2) = ((frost$core$String*) NULL);
return $tmp4919;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2441
// line 2442
frost$core$Int64 $tmp4934 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4935 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4934);
org$frostlang$frostc$parser$Token$nullable $tmp4936 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4935);
*(&local1) = $tmp4936;
// line 2443
org$frostlang$frostc$parser$Token$nullable $tmp4937 = *(&local1);
frost$core$Bit $tmp4938 = frost$core$Bit$init$builtin_bit(!$tmp4937.nonnull);
bool $tmp4939 = $tmp4938.value;
if ($tmp4939) goto block1; else goto block3;
block1:;
// line 2444
frost$core$Int64 $tmp4940 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4941 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4940);
org$frostlang$frostc$parser$Token$nullable $tmp4942 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4941, &$s4943);
*(&local1) = $tmp4942;
// line 2445
org$frostlang$frostc$parser$Token$nullable $tmp4944 = *(&local1);
frost$core$Bit $tmp4945 = frost$core$Bit$init$builtin_bit(!$tmp4944.nonnull);
bool $tmp4946 = $tmp4945.value;
if ($tmp4946) goto block4; else goto block5;
block4:;
// line 2446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2448
frost$core$Int64 $tmp4947 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4948 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4947);
*(&local0) = $tmp4948;
goto block2;
block3:;
// line 1
// line 2451
frost$core$Int64 $tmp4949 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4950 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4949);
*(&local0) = $tmp4950;
goto block2;
block2:;
// line 2453
org$frostlang$frostc$FixedArray* $tmp4951 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
org$frostlang$frostc$FixedArray* $tmp4952 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
*(&local2) = $tmp4951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
// line 2454
org$frostlang$frostc$FixedArray* $tmp4953 = *(&local2);
frost$core$Bit $tmp4954 = frost$core$Bit$init$builtin_bit($tmp4953 == NULL);
bool $tmp4955 = $tmp4954.value;
if ($tmp4955) goto block6; else goto block7;
block6:;
// line 2455
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4956 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2457
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2458
org$frostlang$frostc$parser$Token $tmp4957 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4958 = $tmp4957.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4959;
$tmp4959 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4959->value = $tmp4958;
frost$core$Int64 $tmp4960 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4961 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4960);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4962;
$tmp4962 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4962->value = $tmp4961;
ITable* $tmp4963 = ((frost$core$Equatable*) $tmp4959)->$class->itable;
while ($tmp4963->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4963 = $tmp4963->next;
}
$fn4965 $tmp4964 = $tmp4963->methods[0];
frost$core$Bit $tmp4966 = $tmp4964(((frost$core$Equatable*) $tmp4959), ((frost$core$Equatable*) $tmp4962));
bool $tmp4967 = $tmp4966.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4962)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4959)));
if ($tmp4967) goto block8; else goto block10;
block8:;
// line 2459
org$frostlang$frostc$ASTNode* $tmp4968 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
org$frostlang$frostc$ASTNode* $tmp4969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
*(&local3) = $tmp4968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
// line 2460
org$frostlang$frostc$ASTNode* $tmp4970 = *(&local3);
frost$core$Bit $tmp4971 = frost$core$Bit$init$builtin_bit($tmp4970 == NULL);
bool $tmp4972 = $tmp4971.value;
if ($tmp4972) goto block11; else goto block12;
block11:;
// line 2461
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4973 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4974 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2465
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4975 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2467
org$frostlang$frostc$FixedArray* $tmp4976 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
org$frostlang$frostc$FixedArray* $tmp4977 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
*(&local4) = $tmp4976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
// line 2468
org$frostlang$frostc$FixedArray* $tmp4978 = *(&local4);
frost$core$Bit $tmp4979 = frost$core$Bit$init$builtin_bit($tmp4978 == NULL);
bool $tmp4980 = $tmp4979.value;
if ($tmp4980) goto block13; else goto block14;
block13:;
// line 2469
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4981 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4982 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2471
org$frostlang$frostc$ASTNode* $tmp4984 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4985 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4986 = *(&local1);
org$frostlang$frostc$Position $tmp4987 = ((org$frostlang$frostc$parser$Token) $tmp4986.value).position;
org$frostlang$frostc$FixedArray* $tmp4988 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4988);
org$frostlang$frostc$MethodDecl$Kind $tmp4989 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4990 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4991 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp4992 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4984, $tmp4985, $tmp4987, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4988, $tmp4989, &$s4993, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4990, $tmp4991, $tmp4992);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
org$frostlang$frostc$FixedArray* $tmp4994 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4984;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2479
frost$core$Int64 $tmp4997 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp4998 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4997);
org$frostlang$frostc$parser$Token$nullable $tmp4999 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4998, &$s5000);
*(&local0) = $tmp4999;
// line 2480
org$frostlang$frostc$parser$Token$nullable $tmp5001 = *(&local0);
frost$core$Bit $tmp5002 = frost$core$Bit$init$builtin_bit(!$tmp5001.nonnull);
bool $tmp5003 = $tmp5002.value;
if ($tmp5003) goto block1; else goto block2;
block1:;
// line 2481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2483
org$frostlang$frostc$FixedArray* $tmp5004 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5004));
org$frostlang$frostc$FixedArray* $tmp5005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
*(&local1) = $tmp5004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5004));
// line 2484
org$frostlang$frostc$FixedArray* $tmp5006 = *(&local1);
frost$core$Bit $tmp5007 = frost$core$Bit$init$builtin_bit($tmp5006 == NULL);
bool $tmp5008 = $tmp5007.value;
if ($tmp5008) goto block3; else goto block4;
block3:;
// line 2485
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2487
org$frostlang$frostc$FixedArray* $tmp5010 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
org$frostlang$frostc$FixedArray* $tmp5011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
*(&local2) = $tmp5010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
// line 2488
org$frostlang$frostc$FixedArray* $tmp5012 = *(&local2);
frost$core$Bit $tmp5013 = frost$core$Bit$init$builtin_bit($tmp5012 == NULL);
bool $tmp5014 = $tmp5013.value;
if ($tmp5014) goto block5; else goto block6;
block5:;
// line 2489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5015 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5016 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2491
org$frostlang$frostc$ASTNode* $tmp5017 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5018 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5019 = *(&local0);
org$frostlang$frostc$Position $tmp5020 = ((org$frostlang$frostc$parser$Token) $tmp5019.value).position;
frost$core$Int64 $tmp5021 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5022 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5021);
org$frostlang$frostc$FixedArray* $tmp5023 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5024 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5017, $tmp5018, $tmp5020, param1, param2, $tmp5022, &$s5025, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5023, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5024);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
org$frostlang$frostc$FixedArray* $tmp5026 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5017;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2499
org$frostlang$frostc$ASTNode* $tmp5028 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
org$frostlang$frostc$ASTNode* $tmp5029 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
*(&local0) = $tmp5028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
// line 2500
org$frostlang$frostc$ASTNode* $tmp5030 = *(&local0);
frost$core$Bit $tmp5031 = frost$core$Bit$init$builtin_bit($tmp5030 == NULL);
bool $tmp5032 = $tmp5031.value;
if ($tmp5032) goto block1; else goto block2;
block1:;
// line 2501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5033 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2503
org$frostlang$frostc$ASTNode* $tmp5034 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5035 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5036 = *(&local0);
$fn5038 $tmp5037 = ($fn5038) $tmp5036->$class->vtable[2];
org$frostlang$frostc$Position $tmp5039 = $tmp5037($tmp5036);
org$frostlang$frostc$ASTNode* $tmp5040 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5034, $tmp5035, $tmp5039, param1, param2, $tmp5040);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
org$frostlang$frostc$ASTNode* $tmp5041 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5034;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2510
frost$core$Int64 $tmp5042 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5043 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5042);
org$frostlang$frostc$parser$Token$nullable $tmp5044 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5043, &$s5045);
*(&local0) = $tmp5044;
// line 2511
org$frostlang$frostc$parser$Token$nullable $tmp5046 = *(&local0);
frost$core$Bit $tmp5047 = frost$core$Bit$init$builtin_bit(!$tmp5046.nonnull);
bool $tmp5048 = $tmp5047.value;
if ($tmp5048) goto block1; else goto block2;
block1:;
// line 2512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2514
frost$collections$Array* $tmp5049 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5049);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$collections$Array* $tmp5050 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
*(&local1) = $tmp5049;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
// line 2515
frost$core$Int64 $tmp5051 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5052 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5051);
org$frostlang$frostc$parser$Token$nullable $tmp5053 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5052);
frost$core$Bit $tmp5054 = frost$core$Bit$init$builtin_bit($tmp5053.nonnull);
bool $tmp5055 = $tmp5054.value;
if ($tmp5055) goto block3; else goto block4;
block3:;
// line 2516
org$frostlang$frostc$parser$Token $tmp5056 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5057 = $tmp5056.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5058;
$tmp5058 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5058->value = $tmp5057;
frost$core$Int64 $tmp5059 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5060 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5059);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5061;
$tmp5061 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5061->value = $tmp5060;
ITable* $tmp5062 = ((frost$core$Equatable*) $tmp5058)->$class->itable;
while ($tmp5062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5062 = $tmp5062->next;
}
$fn5064 $tmp5063 = $tmp5062->methods[1];
frost$core$Bit $tmp5065 = $tmp5063(((frost$core$Equatable*) $tmp5058), ((frost$core$Equatable*) $tmp5061));
bool $tmp5066 = $tmp5065.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5058)));
if ($tmp5066) goto block5; else goto block6;
block5:;
// line 2517
org$frostlang$frostc$ASTNode* $tmp5067 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
org$frostlang$frostc$ASTNode* $tmp5068 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
*(&local2) = $tmp5067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
// line 2518
org$frostlang$frostc$ASTNode* $tmp5069 = *(&local2);
frost$core$Bit $tmp5070 = frost$core$Bit$init$builtin_bit($tmp5069 == NULL);
bool $tmp5071 = $tmp5070.value;
if ($tmp5071) goto block7; else goto block8;
block7:;
// line 2519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5072 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5073 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2521
frost$collections$Array* $tmp5074 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5075 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5074, ((frost$core$Object*) $tmp5075));
// line 2522
goto block9;
block9:;
frost$core$Int64 $tmp5076 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5077 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5076);
org$frostlang$frostc$parser$Token$nullable $tmp5078 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5077);
frost$core$Bit $tmp5079 = frost$core$Bit$init$builtin_bit($tmp5078.nonnull);
bool $tmp5080 = $tmp5079.value;
if ($tmp5080) goto block10; else goto block11;
block10:;
// line 2523
org$frostlang$frostc$ASTNode* $tmp5081 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5081));
org$frostlang$frostc$ASTNode* $tmp5082 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
*(&local2) = $tmp5081;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5081));
// line 2524
org$frostlang$frostc$ASTNode* $tmp5083 = *(&local2);
frost$core$Bit $tmp5084 = frost$core$Bit$init$builtin_bit($tmp5083 == NULL);
bool $tmp5085 = $tmp5084.value;
if ($tmp5085) goto block12; else goto block13;
block12:;
// line 2525
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5086 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5087 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2527
frost$collections$Array* $tmp5088 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5089 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5088, ((frost$core$Object*) $tmp5089));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5090 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2530
frost$core$Int64 $tmp5091 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5092 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5091);
org$frostlang$frostc$parser$Token$nullable $tmp5093 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5092, &$s5094);
frost$core$Bit $tmp5095 = frost$core$Bit$init$builtin_bit(!$tmp5093.nonnull);
bool $tmp5096 = $tmp5095.value;
if ($tmp5096) goto block14; else goto block15;
block14:;
// line 2531
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2534
org$frostlang$frostc$ASTNode* $tmp5098 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5099 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5100 = *(&local0);
org$frostlang$frostc$Position $tmp5101 = ((org$frostlang$frostc$parser$Token) $tmp5100.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5102 = *(&local0);
frost$core$String* $tmp5103 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5102.value));
frost$collections$Array* $tmp5104 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5105 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5104);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5098, $tmp5099, $tmp5101, param1, $tmp5103, $tmp5105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
frost$collections$Array* $tmp5106 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5098;

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
// line 2544
frost$core$Int64 $tmp5107 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5108 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5107);
org$frostlang$frostc$parser$Token$nullable $tmp5109 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5108, &$s5110);
*(&local0) = $tmp5109;
// line 2545
org$frostlang$frostc$parser$Token$nullable $tmp5111 = *(&local0);
frost$core$Bit $tmp5112 = frost$core$Bit$init$builtin_bit(!$tmp5111.nonnull);
bool $tmp5113 = $tmp5112.value;
if ($tmp5113) goto block1; else goto block2;
block1:;
// line 2546
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2548
frost$core$Int64 $tmp5114 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5115 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5114);
org$frostlang$frostc$parser$Token$nullable $tmp5116 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5115, &$s5117);
*(&local1) = $tmp5116;
// line 2549
org$frostlang$frostc$parser$Token$nullable $tmp5118 = *(&local1);
frost$core$Bit $tmp5119 = frost$core$Bit$init$builtin_bit(!$tmp5118.nonnull);
bool $tmp5120 = $tmp5119.value;
if ($tmp5120) goto block3; else goto block4;
block3:;
// line 2550
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2552
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2553
org$frostlang$frostc$parser$Token $tmp5121 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5122 = $tmp5121.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5123;
$tmp5123 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5123->value = $tmp5122;
frost$core$Int64 $tmp5124 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5125 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5124);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5126;
$tmp5126 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5126->value = $tmp5125;
ITable* $tmp5127 = ((frost$core$Equatable*) $tmp5123)->$class->itable;
while ($tmp5127->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5127 = $tmp5127->next;
}
$fn5129 $tmp5128 = $tmp5127->methods[0];
frost$core$Bit $tmp5130 = $tmp5128(((frost$core$Equatable*) $tmp5123), ((frost$core$Equatable*) $tmp5126));
bool $tmp5131 = $tmp5130.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5126)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5123)));
if ($tmp5131) goto block5; else goto block7;
block5:;
// line 2554
org$frostlang$frostc$FixedArray* $tmp5132 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
org$frostlang$frostc$FixedArray* $tmp5133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5133));
*(&local2) = $tmp5132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
// line 2555
org$frostlang$frostc$FixedArray* $tmp5134 = *(&local2);
frost$core$Bit $tmp5135 = frost$core$Bit$init$builtin_bit($tmp5134 == NULL);
bool $tmp5136 = $tmp5135.value;
if ($tmp5136) goto block8; else goto block9;
block8:;
// line 2556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2562
frost$core$Int64 $tmp5139 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5140 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5139);
org$frostlang$frostc$parser$Token$nullable $tmp5141 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5140, &$s5142);
frost$core$Bit $tmp5143 = frost$core$Bit$init$builtin_bit(!$tmp5141.nonnull);
bool $tmp5144 = $tmp5143.value;
if ($tmp5144) goto block10; else goto block11;
block10:;
// line 2563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2565
frost$collections$Array* $tmp5146 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5146);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
frost$collections$Array* $tmp5147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local3) = $tmp5146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
// line 2566
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5148 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2567
goto block12;
block12:;
// line 2568
org$frostlang$frostc$parser$Token $tmp5149 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5149;
// line 2569
org$frostlang$frostc$parser$Token $tmp5150 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5151 = $tmp5150.kind;
frost$core$Int64 $tmp5152 = $tmp5151.$rawValue;
frost$core$Int64 $tmp5153 = (frost$core$Int64) {18};
frost$core$Bit $tmp5154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5153);
bool $tmp5155 = $tmp5154.value;
if ($tmp5155) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5156 = (frost$core$Int64) {19};
frost$core$Bit $tmp5157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5156);
bool $tmp5158 = $tmp5157.value;
if ($tmp5158) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5159 = (frost$core$Int64) {20};
frost$core$Bit $tmp5160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5159);
bool $tmp5161 = $tmp5160.value;
if ($tmp5161) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5162 = (frost$core$Int64) {22};
frost$core$Bit $tmp5163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5162);
bool $tmp5164 = $tmp5163.value;
if ($tmp5164) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5165 = (frost$core$Int64) {21};
frost$core$Bit $tmp5166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5165);
bool $tmp5167 = $tmp5166.value;
if ($tmp5167) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5168 = (frost$core$Int64) {14};
frost$core$Bit $tmp5169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5168);
bool $tmp5170 = $tmp5169.value;
if ($tmp5170) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5171 = (frost$core$Int64) {24};
frost$core$Bit $tmp5172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5171);
bool $tmp5173 = $tmp5172.value;
if ($tmp5173) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5174 = (frost$core$Int64) {25};
frost$core$Bit $tmp5175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5174);
bool $tmp5176 = $tmp5175.value;
if ($tmp5176) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5177 = (frost$core$Int64) {26};
frost$core$Bit $tmp5178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5177);
bool $tmp5179 = $tmp5178.value;
if ($tmp5179) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5180 = (frost$core$Int64) {27};
frost$core$Bit $tmp5181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5180);
bool $tmp5182 = $tmp5181.value;
if ($tmp5182) goto block15; else goto block25;
block15:;
// line 2573
goto block13;
block25:;
frost$core$Int64 $tmp5183 = (frost$core$Int64) {12};
frost$core$Bit $tmp5184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5183);
bool $tmp5185 = $tmp5184.value;
if ($tmp5185) goto block26; else goto block27;
block26:;
// line 2576
org$frostlang$frostc$ASTNode* $tmp5186 = *(&local4);
frost$core$Bit $tmp5187 = frost$core$Bit$init$builtin_bit($tmp5186 != NULL);
bool $tmp5188 = $tmp5187.value;
if ($tmp5188) goto block28; else goto block29;
block28:;
// line 2577
org$frostlang$frostc$parser$Token $tmp5189 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5190 = *(&local5);
frost$core$String* $tmp5191 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5190);
frost$core$String* $tmp5192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5193, $tmp5191);
frost$core$String* $tmp5194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5192, &$s5195);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5189, $tmp5194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
goto block29;
block29:;
// line 2579
org$frostlang$frostc$ASTNode* $tmp5196 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
org$frostlang$frostc$ASTNode* $tmp5197 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
*(&local4) = $tmp5196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
goto block14;
block27:;
frost$core$Int64 $tmp5198 = (frost$core$Int64) {52};
frost$core$Bit $tmp5199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5152, $tmp5198);
bool $tmp5200 = $tmp5199.value;
if ($tmp5200) goto block30; else goto block31;
block30:;
// line 2582
org$frostlang$frostc$ASTNode* $tmp5201 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5202 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5201);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
org$frostlang$frostc$ASTNode* $tmp5203 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
*(&local6) = $tmp5202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
// line 2583
org$frostlang$frostc$ASTNode* $tmp5204 = *(&local6);
frost$core$Bit $tmp5205 = frost$core$Bit$init$builtin_bit($tmp5204 == NULL);
bool $tmp5206 = $tmp5205.value;
if ($tmp5206) goto block32; else goto block33;
block32:;
// line 2584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5207 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5208 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5208));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5209 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5209));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2586
frost$collections$Array* $tmp5211 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5212 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5211, ((frost$core$Object*) $tmp5212));
// line 2587
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5213 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5214 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2590
goto block13;
block14:;
goto block12;
block13:;
// line 2594
org$frostlang$frostc$FixedArray* $tmp5215 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5215);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
org$frostlang$frostc$FixedArray* $tmp5216 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5216));
*(&local7) = $tmp5215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
// line 2595
goto block34;
block34:;
// line 2596
org$frostlang$frostc$parser$Token $tmp5217 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5217;
// line 2597
org$frostlang$frostc$parser$Token $tmp5218 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5219 = $tmp5218.kind;
frost$core$Int64 $tmp5220 = $tmp5219.$rawValue;
frost$core$Int64 $tmp5221 = (frost$core$Int64) {14};
frost$core$Bit $tmp5222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5221);
bool $tmp5223 = $tmp5222.value;
if ($tmp5223) goto block37; else goto block38;
block37:;
// line 2599
org$frostlang$frostc$FixedArray* $tmp5224 = *(&local7);
ITable* $tmp5225 = ((frost$collections$CollectionView*) $tmp5224)->$class->itable;
while ($tmp5225->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5225 = $tmp5225->next;
}
$fn5227 $tmp5226 = $tmp5225->methods[0];
frost$core$Int64 $tmp5228 = $tmp5226(((frost$collections$CollectionView*) $tmp5224));
frost$core$Int64 $tmp5229 = (frost$core$Int64) {0};
int64_t $tmp5230 = $tmp5228.value;
int64_t $tmp5231 = $tmp5229.value;
bool $tmp5232 = $tmp5230 > $tmp5231;
frost$core$Bit $tmp5233 = (frost$core$Bit) {$tmp5232};
bool $tmp5234 = $tmp5233.value;
if ($tmp5234) goto block39; else goto block40;
block39:;
// line 2600
org$frostlang$frostc$parser$Token $tmp5235 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5236 = *(&local8);
frost$core$String* $tmp5237 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5236);
frost$core$String* $tmp5238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5239, $tmp5237);
frost$core$String* $tmp5240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5238, &$s5241);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5235, $tmp5240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
// line 2601
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5242 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5243 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5244 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2603
org$frostlang$frostc$FixedArray* $tmp5246 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
org$frostlang$frostc$FixedArray* $tmp5247 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
*(&local7) = $tmp5246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
goto block36;
block38:;
frost$core$Int64 $tmp5248 = (frost$core$Int64) {12};
frost$core$Bit $tmp5249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5248);
bool $tmp5250 = $tmp5249.value;
if ($tmp5250) goto block41; else goto block42;
block41:;
// line 2606
org$frostlang$frostc$ASTNode* $tmp5251 = *(&local4);
frost$core$Bit $tmp5252 = frost$core$Bit$init$builtin_bit($tmp5251 != NULL);
bool $tmp5253 = $tmp5252.value;
if ($tmp5253) goto block43; else goto block45;
block45:;
org$frostlang$frostc$FixedArray* $tmp5254 = *(&local7);
ITable* $tmp5255 = ((frost$collections$CollectionView*) $tmp5254)->$class->itable;
while ($tmp5255->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5255 = $tmp5255->next;
}
$fn5257 $tmp5256 = $tmp5255->methods[0];
frost$core$Int64 $tmp5258 = $tmp5256(((frost$collections$CollectionView*) $tmp5254));
frost$core$Int64 $tmp5259 = (frost$core$Int64) {0};
int64_t $tmp5260 = $tmp5258.value;
int64_t $tmp5261 = $tmp5259.value;
bool $tmp5262 = $tmp5260 > $tmp5261;
frost$core$Bit $tmp5263 = (frost$core$Bit) {$tmp5262};
bool $tmp5264 = $tmp5263.value;
if ($tmp5264) goto block43; else goto block44;
block43:;
// line 2607
org$frostlang$frostc$parser$Token $tmp5265 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5266 = *(&local8);
frost$core$String* $tmp5267 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5266);
frost$core$String* $tmp5268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5269, $tmp5267);
frost$core$String* $tmp5270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5268, &$s5271);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5265, $tmp5270);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
// line 2608
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5272 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5275));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2610
org$frostlang$frostc$ASTNode* $tmp5276 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
org$frostlang$frostc$ASTNode* $tmp5277 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5277));
*(&local4) = $tmp5276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
goto block36;
block42:;
frost$core$Int64 $tmp5278 = (frost$core$Int64) {18};
frost$core$Bit $tmp5279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5278);
bool $tmp5280 = $tmp5279.value;
if ($tmp5280) goto block46; else goto block47;
block46:;
// line 2613
org$frostlang$frostc$ASTNode* $tmp5281 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5282 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5283 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5281, $tmp5282);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
org$frostlang$frostc$ASTNode* $tmp5284 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5284));
*(&local9) = $tmp5283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
// line 2614
org$frostlang$frostc$ASTNode* $tmp5285 = *(&local9);
frost$core$Bit $tmp5286 = frost$core$Bit$init$builtin_bit($tmp5285 == NULL);
bool $tmp5287 = $tmp5286.value;
if ($tmp5287) goto block48; else goto block49;
block48:;
// line 2615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5288 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5289 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 2617
frost$collections$Array* $tmp5293 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5294 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp5293, ((frost$core$Object*) $tmp5294));
// line 2618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5295 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2619
org$frostlang$frostc$FixedArray* $tmp5296 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
org$frostlang$frostc$FixedArray* $tmp5297 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5297));
*(&local7) = $tmp5296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
org$frostlang$frostc$ASTNode* $tmp5298 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block47:;
frost$core$Int64 $tmp5299 = (frost$core$Int64) {19};
frost$core$Bit $tmp5300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5299);
bool $tmp5301 = $tmp5300.value;
if ($tmp5301) goto block50; else goto block51;
block50:;
// line 2622
org$frostlang$frostc$ASTNode* $tmp5302 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5303 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5304 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5302, $tmp5303);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
org$frostlang$frostc$ASTNode* $tmp5305 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5305));
*(&local10) = $tmp5304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
// line 2623
org$frostlang$frostc$ASTNode* $tmp5306 = *(&local10);
frost$core$Bit $tmp5307 = frost$core$Bit$init$builtin_bit($tmp5306 == NULL);
bool $tmp5308 = $tmp5307.value;
if ($tmp5308) goto block52; else goto block53;
block52:;
// line 2624
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5309 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5310 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5312 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5313 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5313));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block53:;
// line 2626
frost$collections$Array* $tmp5314 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5315 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5314, ((frost$core$Object*) $tmp5315));
// line 2627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5316 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2628
org$frostlang$frostc$FixedArray* $tmp5317 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
org$frostlang$frostc$FixedArray* $tmp5318 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5318));
*(&local7) = $tmp5317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
org$frostlang$frostc$ASTNode* $tmp5319 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block51:;
frost$core$Int64 $tmp5320 = (frost$core$Int64) {20};
frost$core$Bit $tmp5321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5320);
bool $tmp5322 = $tmp5321.value;
if ($tmp5322) goto block54; else goto block55;
block54:;
// line 2631
org$frostlang$frostc$ASTNode* $tmp5323 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5324 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5325 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5323, $tmp5324);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
org$frostlang$frostc$ASTNode* $tmp5326 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5326));
*(&local11) = $tmp5325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
// line 2632
org$frostlang$frostc$ASTNode* $tmp5327 = *(&local11);
frost$core$Bit $tmp5328 = frost$core$Bit$init$builtin_bit($tmp5327 == NULL);
bool $tmp5329 = $tmp5328.value;
if ($tmp5329) goto block56; else goto block57;
block56:;
// line 2633
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5330 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5330));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5331 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5331));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5332 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5332));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5333 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5334 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5334));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 2635
frost$collections$Array* $tmp5335 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5336 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5335, ((frost$core$Object*) $tmp5336));
// line 2636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5337 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2637
org$frostlang$frostc$FixedArray* $tmp5338 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
org$frostlang$frostc$FixedArray* $tmp5339 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5339));
*(&local7) = $tmp5338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
org$frostlang$frostc$ASTNode* $tmp5340 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block55:;
frost$core$Int64 $tmp5341 = (frost$core$Int64) {22};
frost$core$Bit $tmp5342 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5341);
bool $tmp5343 = $tmp5342.value;
if ($tmp5343) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp5344 = (frost$core$Int64) {21};
frost$core$Bit $tmp5345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5344);
bool $tmp5346 = $tmp5345.value;
if ($tmp5346) goto block58; else goto block60;
block58:;
// line 2640
org$frostlang$frostc$ASTNode* $tmp5347 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5348 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5349 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5347, $tmp5348);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
org$frostlang$frostc$ASTNode* $tmp5350 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
*(&local12) = $tmp5349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
// line 2641
org$frostlang$frostc$ASTNode* $tmp5351 = *(&local12);
frost$core$Bit $tmp5352 = frost$core$Bit$init$builtin_bit($tmp5351 == NULL);
bool $tmp5353 = $tmp5352.value;
if ($tmp5353) goto block61; else goto block62;
block61:;
// line 2642
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5354 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5354));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5355 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5356 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block62:;
// line 2644
frost$collections$Array* $tmp5359 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5360 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5359, ((frost$core$Object*) $tmp5360));
// line 2645
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5361 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2646
org$frostlang$frostc$FixedArray* $tmp5362 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5362));
org$frostlang$frostc$FixedArray* $tmp5363 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
*(&local7) = $tmp5362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5362));
org$frostlang$frostc$ASTNode* $tmp5364 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block60:;
frost$core$Int64 $tmp5365 = (frost$core$Int64) {24};
frost$core$Bit $tmp5366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5365);
bool $tmp5367 = $tmp5366.value;
if ($tmp5367) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp5368 = (frost$core$Int64) {25};
frost$core$Bit $tmp5369 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5368);
bool $tmp5370 = $tmp5369.value;
if ($tmp5370) goto block63; else goto block65;
block65:;
frost$core$Int64 $tmp5371 = (frost$core$Int64) {26};
frost$core$Bit $tmp5372 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5371);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block63; else goto block66;
block66:;
frost$core$Int64 $tmp5374 = (frost$core$Int64) {27};
frost$core$Bit $tmp5375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5374);
bool $tmp5376 = $tmp5375.value;
if ($tmp5376) goto block63; else goto block67;
block63:;
// line 2649
org$frostlang$frostc$ASTNode* $tmp5377 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5378 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5379 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5377, $tmp5378);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5379));
org$frostlang$frostc$ASTNode* $tmp5380 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
*(&local13) = $tmp5379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5379));
// line 2650
org$frostlang$frostc$ASTNode* $tmp5381 = *(&local13);
frost$core$Bit $tmp5382 = frost$core$Bit$init$builtin_bit($tmp5381 == NULL);
bool $tmp5383 = $tmp5382.value;
if ($tmp5383) goto block68; else goto block69;
block68:;
// line 2651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5384 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5386 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5386));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5387 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block69:;
// line 2653
frost$collections$Array* $tmp5389 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5390 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5389, ((frost$core$Object*) $tmp5390));
// line 2654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5391 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2655
org$frostlang$frostc$FixedArray* $tmp5392 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
org$frostlang$frostc$FixedArray* $tmp5393 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
*(&local7) = $tmp5392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
org$frostlang$frostc$ASTNode* $tmp5394 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5394));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block67:;
frost$core$Int64 $tmp5395 = (frost$core$Int64) {104};
frost$core$Bit $tmp5396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5220, $tmp5395);
bool $tmp5397 = $tmp5396.value;
if ($tmp5397) goto block70; else goto block71;
block70:;
// line 2658
frost$core$Int64 $tmp5398 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5399 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5398);
org$frostlang$frostc$parser$Token$nullable $tmp5400 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5399, &$s5401);
// line 2659
goto block35;
block71:;
// line 2662
org$frostlang$frostc$parser$Token $tmp5402 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5403 = *(&local8);
frost$core$String* $tmp5404 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5403);
frost$core$String* $tmp5405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5406, $tmp5404);
frost$core$String* $tmp5407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5405, &$s5408);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5402, $tmp5407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
// line 2663
org$frostlang$frostc$parser$Token $tmp5409 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5410 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5411 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5412 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2668
org$frostlang$frostc$ASTNode* $tmp5414 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5415 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5416 = *(&local0);
org$frostlang$frostc$Position $tmp5417 = ((org$frostlang$frostc$parser$Token) $tmp5416.value).position;
frost$core$Int64 $tmp5418 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5419 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5418);
org$frostlang$frostc$parser$Token$nullable $tmp5420 = *(&local1);
frost$core$String* $tmp5421 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5420.value));
org$frostlang$frostc$FixedArray* $tmp5422 = *(&local2);
frost$collections$Array* $tmp5423 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5424 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5423);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5414, $tmp5415, $tmp5417, param1, param2, $tmp5419, $tmp5421, $tmp5422, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
org$frostlang$frostc$FixedArray* $tmp5425 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5426 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5427 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5427));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5428));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5414;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2678
org$frostlang$frostc$parser$Token $tmp5429 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5429;
// line 2679
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2680
org$frostlang$frostc$parser$Token $tmp5430 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5431 = $tmp5430.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5432;
$tmp5432 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5432->value = $tmp5431;
frost$core$Int64 $tmp5433 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5434 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5433);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5435;
$tmp5435 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5435->value = $tmp5434;
ITable* $tmp5436 = ((frost$core$Equatable*) $tmp5432)->$class->itable;
while ($tmp5436->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5436 = $tmp5436->next;
}
$fn5438 $tmp5437 = $tmp5436->methods[0];
frost$core$Bit $tmp5439 = $tmp5437(((frost$core$Equatable*) $tmp5432), ((frost$core$Equatable*) $tmp5435));
bool $tmp5440 = $tmp5439.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5435)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5432)));
if ($tmp5440) goto block1; else goto block3;
block1:;
// line 2681
org$frostlang$frostc$ASTNode* $tmp5441 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
org$frostlang$frostc$ASTNode* $tmp5442 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
*(&local1) = $tmp5441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
// line 2682
org$frostlang$frostc$ASTNode* $tmp5443 = *(&local1);
frost$core$Bit $tmp5444 = frost$core$Bit$init$builtin_bit($tmp5443 == NULL);
bool $tmp5445 = $tmp5444.value;
if ($tmp5445) goto block4; else goto block5;
block4:;
// line 2683
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5447 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2689
org$frostlang$frostc$FixedArray* $tmp5448 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
org$frostlang$frostc$FixedArray* $tmp5449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5449));
*(&local2) = $tmp5448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
// line 2690
org$frostlang$frostc$FixedArray* $tmp5450 = *(&local2);
frost$core$Bit $tmp5451 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5452 = $tmp5451.value;
if ($tmp5452) goto block6; else goto block7;
block6:;
// line 2691
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5453 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2693
org$frostlang$frostc$parser$Token $tmp5455 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5456 = $tmp5455.kind;
frost$core$Int64 $tmp5457 = $tmp5456.$rawValue;
frost$core$Int64 $tmp5458 = (frost$core$Int64) {18};
frost$core$Bit $tmp5459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5458);
bool $tmp5460 = $tmp5459.value;
if ($tmp5460) goto block9; else goto block10;
block9:;
// line 2695
org$frostlang$frostc$ASTNode* $tmp5461 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5462 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5463 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5461, $tmp5462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5463));
org$frostlang$frostc$FixedArray* $tmp5464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5463;
block10:;
frost$core$Int64 $tmp5466 = (frost$core$Int64) {19};
frost$core$Bit $tmp5467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5466);
bool $tmp5468 = $tmp5467.value;
if ($tmp5468) goto block11; else goto block12;
block11:;
// line 2698
org$frostlang$frostc$ASTNode* $tmp5469 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5470 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5471 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5469, $tmp5470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
org$frostlang$frostc$FixedArray* $tmp5472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5471;
block12:;
frost$core$Int64 $tmp5474 = (frost$core$Int64) {20};
frost$core$Bit $tmp5475 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5474);
bool $tmp5476 = $tmp5475.value;
if ($tmp5476) goto block13; else goto block14;
block13:;
// line 2701
org$frostlang$frostc$ASTNode* $tmp5477 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5478 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5479 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5477, $tmp5478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
org$frostlang$frostc$FixedArray* $tmp5480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5481));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5479;
block14:;
frost$core$Int64 $tmp5482 = (frost$core$Int64) {22};
frost$core$Bit $tmp5483 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5482);
bool $tmp5484 = $tmp5483.value;
if ($tmp5484) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5485 = (frost$core$Int64) {21};
frost$core$Bit $tmp5486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5485);
bool $tmp5487 = $tmp5486.value;
if ($tmp5487) goto block15; else goto block17;
block15:;
// line 2704
org$frostlang$frostc$ASTNode* $tmp5488 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5489 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5490 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5488, $tmp5489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
org$frostlang$frostc$FixedArray* $tmp5491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5491));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5490;
block17:;
frost$core$Int64 $tmp5493 = (frost$core$Int64) {23};
frost$core$Bit $tmp5494 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5493);
bool $tmp5495 = $tmp5494.value;
if ($tmp5495) goto block18; else goto block19;
block18:;
// line 2707
org$frostlang$frostc$ASTNode* $tmp5496 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5497 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5498 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5496, $tmp5497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
org$frostlang$frostc$FixedArray* $tmp5499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5499));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5500));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5498;
block19:;
frost$core$Int64 $tmp5501 = (frost$core$Int64) {24};
frost$core$Bit $tmp5502 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5501);
bool $tmp5503 = $tmp5502.value;
if ($tmp5503) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5504 = (frost$core$Int64) {25};
frost$core$Bit $tmp5505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5504);
bool $tmp5506 = $tmp5505.value;
if ($tmp5506) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5507 = (frost$core$Int64) {26};
frost$core$Bit $tmp5508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5507);
bool $tmp5509 = $tmp5508.value;
if ($tmp5509) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5510 = (frost$core$Int64) {27};
frost$core$Bit $tmp5511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5457, $tmp5510);
bool $tmp5512 = $tmp5511.value;
if ($tmp5512) goto block20; else goto block24;
block20:;
// line 2710
org$frostlang$frostc$ASTNode* $tmp5513 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5514 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5515 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5513, $tmp5514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5515));
org$frostlang$frostc$FixedArray* $tmp5516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5516));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5515;
block24:;
// line 2714
frost$core$Int64 $tmp5518 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5519 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5518);
org$frostlang$frostc$parser$Token$nullable $tmp5520 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5519, &$s5521);
// line 2715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5522));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5523));
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
// line 2724
frost$core$Int64 $tmp5524 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5525 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5524);
org$frostlang$frostc$parser$Token$nullable $tmp5526 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5525, &$s5527);
*(&local0) = $tmp5526;
// line 2725
org$frostlang$frostc$parser$Token$nullable $tmp5528 = *(&local0);
frost$core$Bit $tmp5529 = frost$core$Bit$init$builtin_bit(!$tmp5528.nonnull);
bool $tmp5530 = $tmp5529.value;
if ($tmp5530) goto block1; else goto block2;
block1:;
// line 2726
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2728
frost$core$Int64 $tmp5531 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5532 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5531);
org$frostlang$frostc$parser$Token$nullable $tmp5533 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5532, &$s5534);
*(&local1) = $tmp5533;
// line 2729
org$frostlang$frostc$parser$Token$nullable $tmp5535 = *(&local1);
frost$core$Bit $tmp5536 = frost$core$Bit$init$builtin_bit(!$tmp5535.nonnull);
bool $tmp5537 = $tmp5536.value;
if ($tmp5537) goto block3; else goto block4;
block3:;
// line 2730
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2732
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2733
org$frostlang$frostc$parser$Token $tmp5538 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5539 = $tmp5538.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5540;
$tmp5540 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5540->value = $tmp5539;
frost$core$Int64 $tmp5541 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5542 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5541);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5543;
$tmp5543 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5543->value = $tmp5542;
ITable* $tmp5544 = ((frost$core$Equatable*) $tmp5540)->$class->itable;
while ($tmp5544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5544 = $tmp5544->next;
}
$fn5546 $tmp5545 = $tmp5544->methods[0];
frost$core$Bit $tmp5547 = $tmp5545(((frost$core$Equatable*) $tmp5540), ((frost$core$Equatable*) $tmp5543));
bool $tmp5548 = $tmp5547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5540)));
if ($tmp5548) goto block5; else goto block7;
block5:;
// line 2734
org$frostlang$frostc$FixedArray* $tmp5549 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5549));
org$frostlang$frostc$FixedArray* $tmp5550 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5550));
*(&local2) = $tmp5549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5549));
// line 2735
org$frostlang$frostc$FixedArray* $tmp5551 = *(&local2);
frost$core$Bit $tmp5552 = frost$core$Bit$init$builtin_bit($tmp5551 == NULL);
bool $tmp5553 = $tmp5552.value;
if ($tmp5553) goto block8; else goto block9;
block8:;
// line 2736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5554 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5554));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5555 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5555));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2742
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2743
org$frostlang$frostc$parser$Token $tmp5556 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5557 = $tmp5556.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5558;
$tmp5558 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5558->value = $tmp5557;
frost$core$Int64 $tmp5559 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5560 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5559);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5561;
$tmp5561 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5561->value = $tmp5560;
ITable* $tmp5562 = ((frost$core$Equatable*) $tmp5558)->$class->itable;
while ($tmp5562->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5562 = $tmp5562->next;
}
$fn5564 $tmp5563 = $tmp5562->methods[0];
frost$core$Bit $tmp5565 = $tmp5563(((frost$core$Equatable*) $tmp5558), ((frost$core$Equatable*) $tmp5561));
bool $tmp5566 = $tmp5565.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5561)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5558)));
if ($tmp5566) goto block10; else goto block12;
block10:;
// line 2744
org$frostlang$frostc$FixedArray* $tmp5567 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5567));
org$frostlang$frostc$FixedArray* $tmp5568 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
*(&local3) = $tmp5567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5567));
// line 2745
org$frostlang$frostc$FixedArray* $tmp5569 = *(&local3);
frost$core$Bit $tmp5570 = frost$core$Bit$init$builtin_bit($tmp5569 == NULL);
bool $tmp5571 = $tmp5570.value;
if ($tmp5571) goto block13; else goto block14;
block13:;
// line 2746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5572 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5572));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5573 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5573));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5574 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5574));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2752
frost$core$Int64 $tmp5575 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5576 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5575);
org$frostlang$frostc$parser$Token$nullable $tmp5577 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5576, &$s5578);
frost$core$Bit $tmp5579 = frost$core$Bit$init$builtin_bit(!$tmp5577.nonnull);
bool $tmp5580 = $tmp5579.value;
if ($tmp5580) goto block15; else goto block16;
block15:;
// line 2753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5581 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5581));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5582 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2755
frost$collections$Array* $tmp5583 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5583);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
frost$collections$Array* $tmp5584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local4) = $tmp5583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
// line 2756
goto block17;
block17:;
frost$core$Int64 $tmp5585 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5586 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5585);
org$frostlang$frostc$parser$Token$nullable $tmp5587 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5586);
frost$core$Bit $tmp5588 = frost$core$Bit$init$builtin_bit(!$tmp5587.nonnull);
bool $tmp5589 = $tmp5588.value;
if ($tmp5589) goto block18; else goto block19;
block18:;
// line 2757
org$frostlang$frostc$ASTNode* $tmp5590 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
org$frostlang$frostc$ASTNode* $tmp5591 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
*(&local5) = $tmp5590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
// line 2758
org$frostlang$frostc$ASTNode* $tmp5592 = *(&local5);
frost$core$Bit $tmp5593 = frost$core$Bit$init$builtin_bit($tmp5592 == NULL);
bool $tmp5594 = $tmp5593.value;
if ($tmp5594) goto block20; else goto block21;
block20:;
// line 2759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5595 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5595));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5596));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5597 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2761
frost$collections$Array* $tmp5599 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5600 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5599, ((frost$core$Object*) $tmp5600));
org$frostlang$frostc$ASTNode* $tmp5601 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2763
org$frostlang$frostc$ASTNode* $tmp5602 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5603 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5604 = *(&local0);
org$frostlang$frostc$Position $tmp5605 = ((org$frostlang$frostc$parser$Token) $tmp5604.value).position;
frost$core$Int64 $tmp5606 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5607 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5606);
org$frostlang$frostc$parser$Token$nullable $tmp5608 = *(&local1);
frost$core$String* $tmp5609 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5608.value));
org$frostlang$frostc$FixedArray* $tmp5610 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5611 = *(&local3);
frost$collections$Array* $tmp5612 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5613 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5612);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5602, $tmp5603, $tmp5605, param1, param2, $tmp5607, $tmp5609, $tmp5610, $tmp5611, $tmp5613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
frost$collections$Array* $tmp5614 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5615 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5615));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5616 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5616));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5602;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 2772
frost$core$Int64 $tmp5617 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5618 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5617);
org$frostlang$frostc$parser$Token$nullable $tmp5619 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5618, &$s5620);
*(&local0) = $tmp5619;
// line 2773
org$frostlang$frostc$parser$Token$nullable $tmp5621 = *(&local0);
frost$core$Bit $tmp5622 = frost$core$Bit$init$builtin_bit(!$tmp5621.nonnull);
bool $tmp5623 = $tmp5622.value;
if ($tmp5623) goto block1; else goto block2;
block1:;
// line 2774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2776
frost$core$Int64 $tmp5624 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5625 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5624);
org$frostlang$frostc$parser$Token$nullable $tmp5626 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5625, &$s5627);
*(&local1) = $tmp5626;
// line 2777
org$frostlang$frostc$parser$Token$nullable $tmp5628 = *(&local1);
frost$core$Bit $tmp5629 = frost$core$Bit$init$builtin_bit(!$tmp5628.nonnull);
bool $tmp5630 = $tmp5629.value;
if ($tmp5630) goto block3; else goto block4;
block3:;
// line 2778
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2780
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2781
org$frostlang$frostc$parser$Token $tmp5631 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5632 = $tmp5631.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5633;
$tmp5633 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5633->value = $tmp5632;
frost$core$Int64 $tmp5634 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5635 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5634);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5636;
$tmp5636 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5636->value = $tmp5635;
ITable* $tmp5637 = ((frost$core$Equatable*) $tmp5633)->$class->itable;
while ($tmp5637->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5637 = $tmp5637->next;
}
$fn5639 $tmp5638 = $tmp5637->methods[0];
frost$core$Bit $tmp5640 = $tmp5638(((frost$core$Equatable*) $tmp5633), ((frost$core$Equatable*) $tmp5636));
bool $tmp5641 = $tmp5640.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5636)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5633)));
if ($tmp5641) goto block5; else goto block7;
block5:;
// line 2782
org$frostlang$frostc$FixedArray* $tmp5642 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5642));
org$frostlang$frostc$FixedArray* $tmp5643 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5643));
*(&local2) = $tmp5642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5642));
// line 2783
org$frostlang$frostc$FixedArray* $tmp5644 = *(&local2);
frost$core$Bit $tmp5645 = frost$core$Bit$init$builtin_bit($tmp5644 == NULL);
bool $tmp5646 = $tmp5645.value;
if ($tmp5646) goto block8; else goto block9;
block8:;
// line 2784
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2788
org$frostlang$frostc$FixedArray* $tmp5648 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
org$frostlang$frostc$FixedArray* $tmp5649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5649));
*(&local2) = $tmp5648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
goto block6;
block6:;
// line 2790
frost$collections$Array* $tmp5650 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5650);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5650));
frost$collections$Array* $tmp5651 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5651));
*(&local3) = $tmp5650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5650));
// line 2791
frost$core$Int64 $tmp5652 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5653 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5652);
org$frostlang$frostc$parser$Token$nullable $tmp5654 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5653);
frost$core$Bit $tmp5655 = frost$core$Bit$init$builtin_bit($tmp5654.nonnull);
bool $tmp5656 = $tmp5655.value;
if ($tmp5656) goto block10; else goto block11;
block10:;
// line 2792
org$frostlang$frostc$ASTNode* $tmp5657 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5657));
org$frostlang$frostc$ASTNode* $tmp5658 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
*(&local4) = $tmp5657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5657));
// line 2793
org$frostlang$frostc$ASTNode* $tmp5659 = *(&local4);
frost$core$Bit $tmp5660 = frost$core$Bit$init$builtin_bit($tmp5659 == NULL);
bool $tmp5661 = $tmp5660.value;
if ($tmp5661) goto block12; else goto block13;
block12:;
// line 2794
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5662 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5663));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5664));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2796
frost$collections$Array* $tmp5665 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5666 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5665, ((frost$core$Object*) $tmp5666));
// line 2797
goto block14;
block14:;
frost$core$Int64 $tmp5667 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5668 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5667);
org$frostlang$frostc$parser$Token$nullable $tmp5669 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5668);
frost$core$Bit $tmp5670 = frost$core$Bit$init$builtin_bit($tmp5669.nonnull);
bool $tmp5671 = $tmp5670.value;
if ($tmp5671) goto block15; else goto block16;
block15:;
// line 2798
org$frostlang$frostc$ASTNode* $tmp5672 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
org$frostlang$frostc$ASTNode* $tmp5673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local4) = $tmp5672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
// line 2799
org$frostlang$frostc$ASTNode* $tmp5674 = *(&local4);
frost$core$Bit $tmp5675 = frost$core$Bit$init$builtin_bit($tmp5674 == NULL);
bool $tmp5676 = $tmp5675.value;
if ($tmp5676) goto block17; else goto block18;
block17:;
// line 2800
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5678 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5679 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5679));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2802
frost$collections$Array* $tmp5680 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5681 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5680, ((frost$core$Object*) $tmp5681));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5682 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5682));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2805
frost$core$Int64 $tmp5683 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5684 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5683);
org$frostlang$frostc$parser$Token$nullable $tmp5685 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5684, &$s5686);
frost$core$Bit $tmp5687 = frost$core$Bit$init$builtin_bit(!$tmp5685.nonnull);
bool $tmp5688 = $tmp5687.value;
if ($tmp5688) goto block19; else goto block20;
block19:;
// line 2806
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5689));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5690));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2808
frost$collections$Array* $tmp5691 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5691);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
frost$collections$Array* $tmp5692 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
*(&local5) = $tmp5691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
// line 2809
goto block21;
block21:;
frost$core$Int64 $tmp5693 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5694 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5693);
org$frostlang$frostc$parser$Token$nullable $tmp5695 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5694);
frost$core$Bit $tmp5696 = frost$core$Bit$init$builtin_bit(!$tmp5695.nonnull);
bool $tmp5697 = $tmp5696.value;
if ($tmp5697) goto block22; else goto block23;
block22:;
// line 2810
org$frostlang$frostc$ASTNode* $tmp5698 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5698));
org$frostlang$frostc$ASTNode* $tmp5699 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5699));
*(&local6) = $tmp5698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5698));
// line 2811
org$frostlang$frostc$ASTNode* $tmp5700 = *(&local6);
frost$core$Bit $tmp5701 = frost$core$Bit$init$builtin_bit($tmp5700 == NULL);
bool $tmp5702 = $tmp5701.value;
if ($tmp5702) goto block24; else goto block25;
block24:;
// line 2812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5703 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5704 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5704));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5705 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5706));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2814
frost$collections$Array* $tmp5707 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5708 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5707, ((frost$core$Object*) $tmp5708));
org$frostlang$frostc$ASTNode* $tmp5709 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2816
org$frostlang$frostc$ASTNode* $tmp5710 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5711 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5712 = *(&local0);
org$frostlang$frostc$Position $tmp5713 = ((org$frostlang$frostc$parser$Token) $tmp5712.value).position;
frost$core$Int64 $tmp5714 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5715 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5714);
org$frostlang$frostc$parser$Token$nullable $tmp5716 = *(&local1);
frost$core$String* $tmp5717 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5716.value));
org$frostlang$frostc$FixedArray* $tmp5718 = *(&local2);
frost$collections$Array* $tmp5719 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5720 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5719);
frost$collections$Array* $tmp5721 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5722 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5721);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5710, $tmp5711, $tmp5713, param1, param2, $tmp5715, $tmp5717, $tmp5718, $tmp5720, $tmp5722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
frost$collections$Array* $tmp5723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5723));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5724 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5725 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5725));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5710;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2825
org$frostlang$frostc$parser$Token $tmp5726 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5727 = $tmp5726.kind;
frost$core$Int64 $tmp5728 = $tmp5727.$rawValue;
frost$core$Int64 $tmp5729 = (frost$core$Int64) {16};
frost$core$Bit $tmp5730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5728, $tmp5729);
bool $tmp5731 = $tmp5730.value;
if ($tmp5731) goto block2; else goto block3;
block2:;
// line 2827
org$frostlang$frostc$ASTNode* $tmp5732 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5732));
return $tmp5732;
block3:;
// line 2830
org$frostlang$frostc$ASTNode* $tmp5733 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5733));
return $tmp5733;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2839
frost$collections$Array* $tmp5734 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5734);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
frost$collections$Array* $tmp5735 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
*(&local0) = $tmp5734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
// line 2840
org$frostlang$frostc$parser$Token $tmp5736 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5737 = $tmp5736.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5738;
$tmp5738 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5738->value = $tmp5737;
frost$core$Int64 $tmp5739 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5740 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5739);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5741;
$tmp5741 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5741->value = $tmp5740;
ITable* $tmp5742 = ((frost$core$Equatable*) $tmp5738)->$class->itable;
while ($tmp5742->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5742 = $tmp5742->next;
}
$fn5744 $tmp5743 = $tmp5742->methods[0];
frost$core$Bit $tmp5745 = $tmp5743(((frost$core$Equatable*) $tmp5738), ((frost$core$Equatable*) $tmp5741));
bool $tmp5746 = $tmp5745.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5741)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5738)));
if ($tmp5746) goto block1; else goto block2;
block1:;
// line 2841
org$frostlang$frostc$ASTNode* $tmp5747 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5747));
org$frostlang$frostc$ASTNode* $tmp5748 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
*(&local1) = $tmp5747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5747));
// line 2842
org$frostlang$frostc$ASTNode* $tmp5749 = *(&local1);
frost$core$Bit $tmp5750 = frost$core$Bit$init$builtin_bit($tmp5749 != NULL);
bool $tmp5751 = $tmp5750.value;
if ($tmp5751) goto block3; else goto block4;
block3:;
// line 2843
frost$collections$Array* $tmp5752 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5753 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5752, ((frost$core$Object*) $tmp5753));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5754 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5754));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2846
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5755 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5756 = $tmp5755.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5757;
$tmp5757 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5757->value = $tmp5756;
frost$core$Int64 $tmp5758 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5759 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5758);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5760;
$tmp5760 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5760->value = $tmp5759;
ITable* $tmp5761 = ((frost$core$Equatable*) $tmp5757)->$class->itable;
while ($tmp5761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5761 = $tmp5761->next;
}
$fn5763 $tmp5762 = $tmp5761->methods[1];
frost$core$Bit $tmp5764 = $tmp5762(((frost$core$Equatable*) $tmp5757), ((frost$core$Equatable*) $tmp5760));
bool $tmp5765 = $tmp5764.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5760)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5757)));
if ($tmp5765) goto block6; else goto block7;
block6:;
// line 2847
org$frostlang$frostc$ASTNode* $tmp5766 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
org$frostlang$frostc$ASTNode* $tmp5767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local2) = $tmp5766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
// line 2848
org$frostlang$frostc$ASTNode* $tmp5768 = *(&local2);
frost$core$Bit $tmp5769 = frost$core$Bit$init$builtin_bit($tmp5768 == NULL);
bool $tmp5770 = $tmp5769.value;
if ($tmp5770) goto block8; else goto block9;
block8:;
// line 2849
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5771 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5771));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5772 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2851
frost$collections$Stack** $tmp5773 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5774 = *$tmp5773;
frost$core$Int64 $tmp5775 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5774);
frost$core$Int64 $tmp5776 = (frost$core$Int64) {0};
frost$core$Bit $tmp5777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5775, $tmp5776);
bool $tmp5778 = $tmp5777.value;
if ($tmp5778) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5779 = (frost$core$Int64) {2851};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5780, $tmp5779);
abort(); // unreachable
block10:;
// line 2852
frost$collections$Array* $tmp5781 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5782 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5781, ((frost$core$Object*) $tmp5782));
org$frostlang$frostc$ASTNode* $tmp5783 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5783));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2854
org$frostlang$frostc$ASTNode* $tmp5784 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5785 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5786 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5787 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5786);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5784, $tmp5785, $tmp5787);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
frost$collections$Array* $tmp5788 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5788));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5784;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5789 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5790 = *$tmp5789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
org$frostlang$regex$RegexParser** $tmp5791 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5792 = *$tmp5791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
frost$threads$MessageQueue** $tmp5793 = &param0->errors;
frost$threads$MessageQueue* $tmp5794 = *$tmp5793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5794));
frost$io$File** $tmp5795 = &param0->path;
frost$io$File* $tmp5796 = *$tmp5795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5796));
frost$core$String** $tmp5797 = &param0->source;
frost$core$String* $tmp5798 = *$tmp5797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5799 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5800 = *$tmp5799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
frost$collections$Stack** $tmp5801 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5802 = *$tmp5801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5802));
frost$collections$Stack** $tmp5803 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5804 = *$tmp5803;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5805 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5806 = *$tmp5805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
return;

}

