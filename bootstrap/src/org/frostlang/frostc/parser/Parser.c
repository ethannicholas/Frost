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
typedef frost$core$Bit (*$fn1436)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1744)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn1748)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef org$frostlang$frostc$Position (*$fn1764)(org$frostlang$frostc$ASTNode*);
typedef void (*$fn1768)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Bit (*$fn1790)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1800)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2107)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2253)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2262)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2356)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2448)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2639)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2793)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2935)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3036)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3047)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3058)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3096)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3260)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3313)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3821)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3846)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3882)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3899)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4219)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4376)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4384)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4712)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4745)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4756)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4881)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4903)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4924)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4984)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5057)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5083)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5246)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5276)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5457)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5565)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5583)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5658)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5763)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5782)(frost$core$Equatable*, frost$core$Equatable*);

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
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x31\x27", 5, 14631941951, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s3977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5012 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

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
// line 503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1271 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1
// line 506
frost$core$Int64 $tmp1273 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1274 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1273);
org$frostlang$frostc$parser$Token$nullable $tmp1275 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1274);
frost$core$Bit $tmp1276 = frost$core$Bit$init$builtin_bit(!$tmp1275.nonnull);
*(&local7) = $tmp1276;
goto block18;
block18:;
// line 508
frost$core$Int64 $tmp1277 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1278 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1277);
org$frostlang$frostc$parser$Token$nullable $tmp1279 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1278, &$s1280);
frost$core$Bit $tmp1281 = frost$core$Bit$init$builtin_bit(!$tmp1279.nonnull);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block20; else goto block21;
block20:;
// line 509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1283 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1284 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 511
org$frostlang$frostc$ASTNode* $tmp1285 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
org$frostlang$frostc$ASTNode* $tmp1286 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local8) = $tmp1285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// line 512
org$frostlang$frostc$ASTNode* $tmp1287 = *(&local8);
frost$core$Bit $tmp1288 = frost$core$Bit$init$builtin_bit($tmp1287 == NULL);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block22; else goto block23;
block22:;
// line 513
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1292 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block23:;
// line 515
frost$core$Bit $tmp1293 = *(&local7);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block24; else goto block25;
block24:;
// line 516
frost$core$Int64 $tmp1295 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1296 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1295);
org$frostlang$frostc$parser$Token$nullable $tmp1297 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1296, &$s1298);
goto block25;
block25:;
// line 518
org$frostlang$frostc$ASTNode* $tmp1299 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1300 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1301 = *(&local0);
org$frostlang$frostc$Position $tmp1302 = ((org$frostlang$frostc$parser$Token) $tmp1301.value).position;
frost$collections$Array* $tmp1303 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1304 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1303);
org$frostlang$frostc$ASTNode* $tmp1305 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1299, $tmp1300, $tmp1302, $tmp1304, $tmp1305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$ASTNode* $tmp1306 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local3) = ((frost$collections$Array*) NULL);
return $tmp1299;
block7:;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {109};
frost$core$Bit $tmp1310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1309);
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block26; else goto block27;
block26:;
// line 523
frost$collections$Array* $tmp1312 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1312);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$collections$Array* $tmp1313 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local9) = $tmp1312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// line 524
frost$collections$Array* $tmp1314 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp1315 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1316 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1317 = *(&local1);
org$frostlang$frostc$Position $tmp1318 = $tmp1317.position;
org$frostlang$frostc$parser$Token $tmp1319 = *(&local1);
frost$core$String* $tmp1320 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1319);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1315, $tmp1316, $tmp1318, $tmp1320);
frost$collections$Array$add$frost$collections$Array$T($tmp1314, ((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
// line 525
frost$core$Bit $tmp1321 = frost$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1321;
// line 526
goto block28;
block28:;
// line 527
org$frostlang$frostc$ASTNode* $tmp1322 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
org$frostlang$frostc$ASTNode* $tmp1323 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local11) = $tmp1322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// line 528
org$frostlang$frostc$ASTNode* $tmp1324 = *(&local11);
frost$core$Bit $tmp1325 = frost$core$Bit$init$builtin_bit($tmp1324 == NULL);
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block31; else goto block32;
block31:;
// line 529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1327 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1328 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block32:;
// line 531
org$frostlang$frostc$ASTNode* $tmp1329 = *(&local11);
frost$core$Int64* $tmp1330 = &$tmp1329->$rawValue;
frost$core$Int64 $tmp1331 = *$tmp1330;
frost$core$Int64 $tmp1332 = (frost$core$Int64) {22};
frost$core$Bit $tmp1333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1331, $tmp1332);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block34; else goto block35;
block34:;
goto block33;
block35:;
// line 536
frost$core$Bit $tmp1335 = frost$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1335;
goto block33;
block33:;
// line 539
frost$collections$Array* $tmp1336 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp1336, ((frost$core$Object*) $tmp1337));
org$frostlang$frostc$ASTNode* $tmp1338 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block29:;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1340 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1339);
org$frostlang$frostc$parser$Token$nullable $tmp1341 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1340);
frost$core$Bit $tmp1342 = frost$core$Bit$init$builtin_bit($tmp1341.nonnull);
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block28; else goto block30;
block30:;
// line 542
frost$core$Int64 $tmp1344 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1345 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1344);
org$frostlang$frostc$parser$Token$nullable $tmp1346 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1345, &$s1347);
frost$core$Bit $tmp1348 = frost$core$Bit$init$builtin_bit(!$tmp1346.nonnull);
bool $tmp1349 = $tmp1348.value;
if ($tmp1349) goto block36; else goto block37;
block36:;
// line 543
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1350 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block37:;
// line 545
frost$core$Bit $tmp1351 = *(&local10);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block40; else goto block39;
block40:;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1354 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1353);
org$frostlang$frostc$parser$Token$nullable $tmp1355 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1354);
frost$core$Bit $tmp1356 = frost$core$Bit$init$builtin_bit($tmp1355.nonnull);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block38; else goto block39;
block38:;
// line 546
org$frostlang$frostc$ASTNode* $tmp1358 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$ASTNode* $tmp1359 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local12) = $tmp1358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// line 547
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local12);
frost$core$Bit $tmp1361 = frost$core$Bit$init$builtin_bit($tmp1360 == NULL);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block41; else goto block42;
block41:;
// line 548
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1363 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1364 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local9) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block42:;
// line 550
org$frostlang$frostc$ASTNode* $tmp1365 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1366 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1367 = *(&local0);
org$frostlang$frostc$Position $tmp1368 = ((org$frostlang$frostc$parser$Token) $tmp1367.value).position;
frost$collections$Array* $tmp1369 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1370 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1369);
org$frostlang$frostc$ASTNode* $tmp1371 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1365, $tmp1366, $tmp1368, $tmp1370, $tmp1371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
org$frostlang$frostc$ASTNode* $tmp1372 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1373 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local9) = ((frost$collections$Array*) NULL);
return $tmp1365;
block39:;
// line 553
org$frostlang$frostc$ASTNode* $tmp1374 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1375 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1376 = *(&local0);
org$frostlang$frostc$Position $tmp1377 = ((org$frostlang$frostc$parser$Token) $tmp1376.value).position;
frost$collections$Array* $tmp1378 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1379 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1378);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1374, $tmp1375, $tmp1377, $tmp1379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$collections$Array* $tmp1380 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local9) = ((frost$collections$Array*) NULL);
return $tmp1374;
block27:;
frost$core$Int64 $tmp1381 = (frost$core$Int64) {108};
frost$core$Bit $tmp1382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1201, $tmp1381);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block43; else goto block44;
block43:;
// line 557
frost$core$Int64 $tmp1384 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1385 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1384);
org$frostlang$frostc$parser$Token$nullable $tmp1386 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1385);
frost$core$Bit $tmp1387 = frost$core$Bit$init$builtin_bit($tmp1386.nonnull);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block45; else goto block46;
block45:;
// line 558
frost$collections$Array* $tmp1389 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1389);
*(&local13) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$collections$Array* $tmp1390 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local13) = $tmp1389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
// line 559
frost$collections$Array* $tmp1391 = *(&local13);
org$frostlang$frostc$ASTNode* $tmp1392 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1394 = *(&local1);
org$frostlang$frostc$Position $tmp1395 = $tmp1394.position;
org$frostlang$frostc$parser$Token $tmp1396 = *(&local1);
frost$core$String* $tmp1397 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1396);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1392, $tmp1393, $tmp1395, $tmp1397);
frost$collections$Array$add$frost$collections$Array$T($tmp1391, ((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
// line 560
org$frostlang$frostc$ASTNode* $tmp1398 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
org$frostlang$frostc$ASTNode* $tmp1399 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local14) = $tmp1398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// line 561
org$frostlang$frostc$ASTNode* $tmp1400 = *(&local14);
frost$core$Bit $tmp1401 = frost$core$Bit$init$builtin_bit($tmp1400 == NULL);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block47; else goto block48;
block47:;
// line 562
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1404 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local13) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block48:;
// line 564
org$frostlang$frostc$ASTNode* $tmp1405 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1406 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1407 = *(&local0);
org$frostlang$frostc$Position $tmp1408 = ((org$frostlang$frostc$parser$Token) $tmp1407.value).position;
frost$collections$Array* $tmp1409 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp1410 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1409);
org$frostlang$frostc$ASTNode* $tmp1411 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1405, $tmp1406, $tmp1408, $tmp1410, $tmp1411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
org$frostlang$frostc$ASTNode* $tmp1412 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1413 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local13) = ((frost$collections$Array*) NULL);
return $tmp1405;
block46:;
// line 568
org$frostlang$frostc$ASTNode* $tmp1414 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1415 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1416 = *(&local1);
org$frostlang$frostc$Position $tmp1417 = $tmp1416.position;
org$frostlang$frostc$parser$Token $tmp1418 = *(&local1);
frost$core$String* $tmp1419 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1418);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1414, $tmp1415, $tmp1417, $tmp1419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
return $tmp1414;
block44:;
// line 571
org$frostlang$frostc$parser$Token $tmp1420 = *(&local2);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1420);
goto block5;
block5:;
goto block4;
block4:;
// line 575
org$frostlang$frostc$parser$Token $tmp1421 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1421);
// line 576
org$frostlang$frostc$ASTNode* $tmp1422 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
org$frostlang$frostc$ASTNode* $tmp1423 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local15) = $tmp1422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
// line 577
org$frostlang$frostc$ASTNode* $tmp1424 = *(&local15);
frost$core$Bit $tmp1425 = frost$core$Bit$init$builtin_bit($tmp1424 == NULL);
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block49; else goto block50;
block49:;
// line 578
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1427 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block50:;
// line 580
org$frostlang$frostc$parser$Token $tmp1428 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1429 = $tmp1428.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1430;
$tmp1430 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1430->value = $tmp1429;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1432 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1431);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1433;
$tmp1433 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1433->value = $tmp1432;
ITable* $tmp1434 = ((frost$core$Equatable*) $tmp1430)->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
frost$core$Bit $tmp1437 = $tmp1435(((frost$core$Equatable*) $tmp1430), ((frost$core$Equatable*) $tmp1433));
bool $tmp1438 = $tmp1437.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1433)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1430)));
if ($tmp1438) goto block51; else goto block52;
block51:;
// line 582
frost$collections$Array* $tmp1439 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1440 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1439, $tmp1440);
org$frostlang$frostc$ASTNode* $tmp1441 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1439, ((frost$core$Object*) $tmp1441));
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$collections$Array* $tmp1442 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local16) = $tmp1439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// line 583
goto block53;
block53:;
frost$core$Int64 $tmp1443 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1444 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1443);
org$frostlang$frostc$parser$Token$nullable $tmp1445 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1444);
frost$core$Bit $tmp1446 = frost$core$Bit$init$builtin_bit($tmp1445.nonnull);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block54; else goto block55;
block54:;
// line 584
org$frostlang$frostc$ASTNode* $tmp1448 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
org$frostlang$frostc$ASTNode* $tmp1449 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local17) = $tmp1448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// line 585
org$frostlang$frostc$ASTNode* $tmp1450 = *(&local17);
frost$core$Bit $tmp1451 = frost$core$Bit$init$builtin_bit($tmp1450 == NULL);
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block56; else goto block57;
block56:;
// line 586
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1454 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1455 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 588
frost$collections$Array* $tmp1456 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1457 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp1456, ((frost$core$Object*) $tmp1457));
org$frostlang$frostc$ASTNode* $tmp1458 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
// line 590
org$frostlang$frostc$ASTNode* $tmp1459 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1460 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1461 = *(&local0);
org$frostlang$frostc$Position $tmp1462 = ((org$frostlang$frostc$parser$Token) $tmp1461.value).position;
frost$collections$Array* $tmp1463 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1464 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1463);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1459, $tmp1460, $tmp1462, $tmp1464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
org$frostlang$frostc$ASTNode* $tmp1465 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local15) = $tmp1459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$collections$Array* $tmp1466 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local16) = ((frost$collections$Array*) NULL);
goto block52;
block52:;
// line 592
frost$core$Int64 $tmp1467 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1468 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1467);
org$frostlang$frostc$parser$Token$nullable $tmp1469 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1468, &$s1470);
// line 593
org$frostlang$frostc$ASTNode* $tmp1471 = *(&local15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
org$frostlang$frostc$ASTNode* $tmp1472 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1471;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 600
frost$core$Int64 $tmp1473 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp1474 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1473);
org$frostlang$frostc$parser$Token$nullable $tmp1475 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1474, &$s1476);
*(&local0) = $tmp1475;
// line 601
frost$collections$Array* $tmp1477 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1477);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$collections$Array* $tmp1478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local1) = $tmp1477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// line 602
frost$core$Int64 $tmp1479 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1480 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1479);
org$frostlang$frostc$parser$Token$nullable $tmp1481 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1480);
frost$core$Bit $tmp1482 = frost$core$Bit$init$builtin_bit(!$tmp1481.nonnull);
bool $tmp1483 = $tmp1482.value;
if ($tmp1483) goto block1; else goto block2;
block1:;
// line 603
frost$collections$Stack** $tmp1484 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1485 = *$tmp1484;
frost$core$Bit $tmp1486 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1487;
$tmp1487 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1487->value = $tmp1486;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1485, ((frost$core$Object*) $tmp1487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// line 604
frost$core$Int64 $tmp1488 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1489 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1488);
org$frostlang$frostc$parser$Token$nullable $tmp1490 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1489);
frost$core$Bit $tmp1491 = frost$core$Bit$init$builtin_bit(!$tmp1490.nonnull);
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block3; else goto block4;
block3:;
// line 605
org$frostlang$frostc$ASTNode* $tmp1493 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
org$frostlang$frostc$ASTNode* $tmp1494 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local2) = $tmp1493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// line 606
org$frostlang$frostc$ASTNode* $tmp1495 = *(&local2);
frost$core$Bit $tmp1496 = frost$core$Bit$init$builtin_bit($tmp1495 == NULL);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block5; else goto block6;
block5:;
// line 607
frost$collections$Stack** $tmp1498 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1499 = *$tmp1498;
frost$core$Object* $tmp1500 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1499);
frost$core$Frost$unref$frost$core$Object$Q($tmp1500);
// line 608
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 610
frost$collections$Array* $tmp1503 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1504 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1503, ((frost$core$Object*) $tmp1504));
// line 611
goto block7;
block7:;
frost$core$Int64 $tmp1505 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1506 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1505);
org$frostlang$frostc$parser$Token$nullable $tmp1507 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1506);
frost$core$Bit $tmp1508 = frost$core$Bit$init$builtin_bit($tmp1507.nonnull);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block8; else goto block9;
block8:;
// line 612
org$frostlang$frostc$ASTNode* $tmp1510 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
org$frostlang$frostc$ASTNode* $tmp1511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local2) = $tmp1510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// line 613
org$frostlang$frostc$ASTNode* $tmp1512 = *(&local2);
frost$core$Bit $tmp1513 = frost$core$Bit$init$builtin_bit($tmp1512 == NULL);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block10; else goto block11;
block10:;
// line 614
frost$collections$Stack** $tmp1515 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1516 = *$tmp1515;
frost$core$Object* $tmp1517 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1516);
frost$core$Frost$unref$frost$core$Object$Q($tmp1517);
// line 615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 617
frost$collections$Array* $tmp1520 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1521 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1520, ((frost$core$Object*) $tmp1521));
goto block7;
block9:;
// line 619
frost$core$Int64 $tmp1522 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1523 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1522);
org$frostlang$frostc$parser$Token$nullable $tmp1524 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1523, &$s1525);
frost$core$Bit $tmp1526 = frost$core$Bit$init$builtin_bit(!$tmp1524.nonnull);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block12; else goto block13;
block12:;
// line 620
frost$collections$Stack** $tmp1528 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1529 = *$tmp1528;
frost$core$Object* $tmp1530 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1529);
frost$core$Frost$unref$frost$core$Object$Q($tmp1530);
// line 621
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp1533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 624
frost$collections$Stack** $tmp1534 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1535 = *$tmp1534;
frost$core$Object* $tmp1536 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1535);
frost$core$Frost$unref$frost$core$Object$Q($tmp1536);
goto block2;
block2:;
// line 626
org$frostlang$frostc$ASTNode* $tmp1537 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1538 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$Token$nullable $tmp1539 = *(&local0);
org$frostlang$frostc$Position $tmp1540 = ((org$frostlang$frostc$parser$Token) $tmp1539.value).position;
frost$collections$Array* $tmp1541 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1542 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1541);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1537, $tmp1538, $tmp1540, $tmp1542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$collections$Array* $tmp1543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1537;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 633
frost$core$Int64 $tmp1544 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1545 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1544);
org$frostlang$frostc$parser$Token$nullable $tmp1546 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1545, &$s1547);
*(&local0) = $tmp1546;
// line 634
frost$core$Int64 $tmp1548 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1549 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1548);
org$frostlang$frostc$parser$Token$nullable $tmp1550 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1549);
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit($tmp1550.nonnull);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block1; else goto block2;
block1:;
// line 635
org$frostlang$frostc$ASTNode* $tmp1553 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
org$frostlang$frostc$ASTNode* $tmp1554 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local1) = $tmp1553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
// line 636
org$frostlang$frostc$ASTNode* $tmp1555 = *(&local1);
frost$core$Bit $tmp1556 = frost$core$Bit$init$builtin_bit($tmp1555 == NULL);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block3; else goto block4;
block3:;
// line 637
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 639
frost$collections$Array* $tmp1559 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1559);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$collections$Array* $tmp1560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local2) = $tmp1559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// line 640
frost$collections$Array* $tmp1561 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1562 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1563 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1564 = *(&local0);
org$frostlang$frostc$Position $tmp1565 = ((org$frostlang$frostc$parser$Token) $tmp1564.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1566 = *(&local0);
frost$core$String* $tmp1567 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1566.value));
org$frostlang$frostc$ASTNode* $tmp1568 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1562, $tmp1563, $tmp1565, $tmp1567, $tmp1568);
frost$collections$Array$add$frost$collections$Array$T($tmp1561, ((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
// line 641
frost$core$Int64 $tmp1569 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1570 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1569);
org$frostlang$frostc$parser$Token$nullable $tmp1571 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1570, &$s1572);
frost$core$Bit $tmp1573 = frost$core$Bit$init$builtin_bit(!$tmp1571.nonnull);
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block5; else goto block6;
block5:;
// line 642
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 644
org$frostlang$frostc$ASTNode* $tmp1577 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local3) = $tmp1577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// line 645
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local3);
frost$core$Bit $tmp1580 = frost$core$Bit$init$builtin_bit($tmp1579 == NULL);
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block7; else goto block8;
block7:;
// line 646
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1582 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 648
org$frostlang$frostc$ASTNode* $tmp1585 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1586 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1587 = *(&local0);
org$frostlang$frostc$Position $tmp1588 = ((org$frostlang$frostc$parser$Token) $tmp1587.value).position;
frost$collections$Array* $tmp1589 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp1590 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1589);
org$frostlang$frostc$ASTNode* $tmp1591 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1585, $tmp1586, $tmp1588, $tmp1590, $tmp1591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
org$frostlang$frostc$ASTNode* $tmp1592 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1594 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1585;
block2:;
// line 651
frost$collections$Array* $tmp1595 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1595);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$collections$Array* $tmp1596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local4) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
// line 652
frost$collections$Array* $tmp1597 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1598 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1599 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp1600 = *(&local0);
org$frostlang$frostc$Position $tmp1601 = ((org$frostlang$frostc$parser$Token) $tmp1600.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1602 = *(&local0);
frost$core$String* $tmp1603 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1602.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1598, $tmp1599, $tmp1601, $tmp1603);
frost$collections$Array$add$frost$collections$Array$T($tmp1597, ((frost$core$Object*) $tmp1598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// line 653
frost$core$Int64 $tmp1604 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1605 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1604);
org$frostlang$frostc$parser$Token$nullable $tmp1606 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1605, &$s1607);
frost$core$Bit $tmp1608 = frost$core$Bit$init$builtin_bit(!$tmp1606.nonnull);
bool $tmp1609 = $tmp1608.value;
if ($tmp1609) goto block9; else goto block10;
block9:;
// line 654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 656
org$frostlang$frostc$ASTNode* $tmp1611 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$ASTNode* $tmp1612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local5) = $tmp1611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// line 657
org$frostlang$frostc$ASTNode* $tmp1613 = *(&local5);
frost$core$Bit $tmp1614 = frost$core$Bit$init$builtin_bit($tmp1613 == NULL);
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block11; else goto block12;
block11:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1616 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 660
org$frostlang$frostc$ASTNode* $tmp1618 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1619 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1620 = *(&local0);
org$frostlang$frostc$Position $tmp1621 = ((org$frostlang$frostc$parser$Token) $tmp1620.value).position;
frost$collections$Array* $tmp1622 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp1623 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1622);
org$frostlang$frostc$ASTNode* $tmp1624 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1618, $tmp1619, $tmp1621, $tmp1623, $tmp1624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
org$frostlang$frostc$ASTNode* $tmp1625 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1618;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 668
frost$core$Int64 $tmp1627 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1628 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1627);
org$frostlang$frostc$parser$Token$nullable $tmp1629 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1628, &$s1630);
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(!$tmp1629.nonnull);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block1; else goto block2;
block1:;
// line 669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 672
org$frostlang$frostc$parser$Lexer** $tmp1633 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1634 = *$tmp1633;
org$frostlang$plex$runtime$DFA** $tmp1635 = &$tmp1634->dfa;
org$frostlang$plex$runtime$DFA* $tmp1636 = *$tmp1635;
frost$core$Int64* $tmp1637 = &$tmp1636->offset;
frost$core$Int64 $tmp1638 = *$tmp1637;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {1};
int64_t $tmp1640 = $tmp1638.value;
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640 - $tmp1641;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {$tmp1642};
*(&local0) = $tmp1643;
// line 673
org$frostlang$regex$RegexParser** $tmp1644 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1645 = *$tmp1644;
org$frostlang$regex$RegexLexer** $tmp1646 = &$tmp1645->lexer;
org$frostlang$regex$RegexLexer* $tmp1647 = *$tmp1646;
org$frostlang$plex$runtime$DFA** $tmp1648 = &$tmp1647->dfa;
org$frostlang$plex$runtime$DFA* $tmp1649 = *$tmp1648;
org$frostlang$frostc$parser$Lexer** $tmp1650 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1651 = *$tmp1650;
org$frostlang$plex$runtime$DFA** $tmp1652 = &$tmp1651->dfa;
org$frostlang$plex$runtime$DFA* $tmp1653 = *$tmp1652;
frost$core$Int64* $tmp1654 = &$tmp1653->offset;
frost$core$Int64 $tmp1655 = *$tmp1654;
frost$core$Int64* $tmp1656 = &$tmp1649->offset;
*$tmp1656 = $tmp1655;
// line 674
org$frostlang$regex$RegexParser** $tmp1657 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1658 = *$tmp1657;
org$frostlang$regex$RegexLexer** $tmp1659 = &$tmp1658->lexer;
org$frostlang$regex$RegexLexer* $tmp1660 = *$tmp1659;
org$frostlang$plex$runtime$DFA** $tmp1661 = &$tmp1660->dfa;
org$frostlang$plex$runtime$DFA* $tmp1662 = *$tmp1661;
org$frostlang$frostc$parser$Lexer** $tmp1663 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1664 = *$tmp1663;
org$frostlang$plex$runtime$DFA** $tmp1665 = &$tmp1664->dfa;
org$frostlang$plex$runtime$DFA* $tmp1666 = *$tmp1665;
frost$core$Int64* $tmp1667 = &$tmp1666->line;
frost$core$Int64 $tmp1668 = *$tmp1667;
frost$core$Int64* $tmp1669 = &$tmp1662->line;
*$tmp1669 = $tmp1668;
// line 675
org$frostlang$regex$RegexParser** $tmp1670 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1671 = *$tmp1670;
org$frostlang$regex$RegexLexer** $tmp1672 = &$tmp1671->lexer;
org$frostlang$regex$RegexLexer* $tmp1673 = *$tmp1672;
org$frostlang$plex$runtime$DFA** $tmp1674 = &$tmp1673->dfa;
org$frostlang$plex$runtime$DFA* $tmp1675 = *$tmp1674;
org$frostlang$frostc$parser$Lexer** $tmp1676 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1677 = *$tmp1676;
org$frostlang$plex$runtime$DFA** $tmp1678 = &$tmp1677->dfa;
org$frostlang$plex$runtime$DFA* $tmp1679 = *$tmp1678;
frost$core$Int64* $tmp1680 = &$tmp1679->column;
frost$core$Int64 $tmp1681 = *$tmp1680;
frost$core$Int64* $tmp1682 = &$tmp1675->column;
*$tmp1682 = $tmp1681;
// line 676
org$frostlang$regex$RegexParser** $tmp1683 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1684 = *$tmp1683;
org$frostlang$frostc$ASTNode* $tmp1685 = org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q($tmp1684);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
org$frostlang$frostc$ASTNode* $tmp1686 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local1) = $tmp1685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
// line 677
org$frostlang$frostc$parser$Lexer** $tmp1687 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1688 = *$tmp1687;
org$frostlang$plex$runtime$DFA** $tmp1689 = &$tmp1688->dfa;
org$frostlang$plex$runtime$DFA* $tmp1690 = *$tmp1689;
org$frostlang$regex$RegexParser** $tmp1691 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1692 = *$tmp1691;
org$frostlang$regex$RegexLexer** $tmp1693 = &$tmp1692->lexer;
org$frostlang$regex$RegexLexer* $tmp1694 = *$tmp1693;
org$frostlang$plex$runtime$DFA** $tmp1695 = &$tmp1694->dfa;
org$frostlang$plex$runtime$DFA* $tmp1696 = *$tmp1695;
frost$core$Int64* $tmp1697 = &$tmp1696->offset;
frost$core$Int64 $tmp1698 = *$tmp1697;
frost$core$Int64* $tmp1699 = &$tmp1690->offset;
*$tmp1699 = $tmp1698;
// line 678
org$frostlang$frostc$parser$Lexer** $tmp1700 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1701 = *$tmp1700;
org$frostlang$plex$runtime$DFA** $tmp1702 = &$tmp1701->dfa;
org$frostlang$plex$runtime$DFA* $tmp1703 = *$tmp1702;
org$frostlang$regex$RegexParser** $tmp1704 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1705 = *$tmp1704;
org$frostlang$regex$RegexLexer** $tmp1706 = &$tmp1705->lexer;
org$frostlang$regex$RegexLexer* $tmp1707 = *$tmp1706;
org$frostlang$plex$runtime$DFA** $tmp1708 = &$tmp1707->dfa;
org$frostlang$plex$runtime$DFA* $tmp1709 = *$tmp1708;
frost$core$Int64* $tmp1710 = &$tmp1709->line;
frost$core$Int64 $tmp1711 = *$tmp1710;
frost$core$Int64* $tmp1712 = &$tmp1703->line;
*$tmp1712 = $tmp1711;
// line 679
org$frostlang$frostc$parser$Lexer** $tmp1713 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1714 = *$tmp1713;
org$frostlang$plex$runtime$DFA** $tmp1715 = &$tmp1714->dfa;
org$frostlang$plex$runtime$DFA* $tmp1716 = *$tmp1715;
org$frostlang$regex$RegexParser** $tmp1717 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1718 = *$tmp1717;
org$frostlang$regex$RegexLexer** $tmp1719 = &$tmp1718->lexer;
org$frostlang$regex$RegexLexer* $tmp1720 = *$tmp1719;
org$frostlang$plex$runtime$DFA** $tmp1721 = &$tmp1720->dfa;
org$frostlang$plex$runtime$DFA* $tmp1722 = *$tmp1721;
frost$core$Int64* $tmp1723 = &$tmp1722->column;
frost$core$Int64 $tmp1724 = *$tmp1723;
frost$core$Int64* $tmp1725 = &$tmp1716->column;
*$tmp1725 = $tmp1724;
// line 680
org$frostlang$frostc$ASTNode* $tmp1726 = *(&local1);
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit($tmp1726 == NULL);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block3; else goto block4;
block3:;
// line 681
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 683
frost$core$Int64 $tmp1730 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1731 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1730);
org$frostlang$frostc$parser$Token$nullable $tmp1732 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1731, &$s1733);
frost$core$Bit $tmp1734 = frost$core$Bit$init$builtin_bit(!$tmp1732.nonnull);
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block5; else goto block6;
block5:;
// line 684
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 686
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1737 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1738 = *$tmp1737;
frost$core$Bit $tmp1739 = frost$core$Bit$init$builtin_bit($tmp1738 != NULL);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block7; else goto block8;
block7:;
// line 688
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1741 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1742 = *$tmp1741;
$fn1744 $tmp1743 = ($fn1744) $tmp1742->$class->vtable[7];
$tmp1743($tmp1742);
// line 689
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1745 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1746 = *$tmp1745;
$fn1748 $tmp1747 = ($fn1748) $tmp1746->$class->vtable[7];
$tmp1747($tmp1746);
// line 691
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1749 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1750 = *$tmp1749;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$Kind $tmp1752 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1751);
frost$core$Int64 $tmp1753 = *(&local0);
frost$core$String$Index $tmp1754 = frost$core$String$Index$init$frost$core$Int64($tmp1753);
org$frostlang$frostc$parser$Lexer** $tmp1755 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1756 = *$tmp1755;
org$frostlang$plex$runtime$DFA** $tmp1757 = &$tmp1756->dfa;
org$frostlang$plex$runtime$DFA* $tmp1758 = *$tmp1757;
frost$core$Int64* $tmp1759 = &$tmp1758->offset;
frost$core$Int64 $tmp1760 = *$tmp1759;
frost$core$String$Index $tmp1761 = frost$core$String$Index$init$frost$core$Int64($tmp1760);
org$frostlang$frostc$ASTNode* $tmp1762 = *(&local1);
$fn1764 $tmp1763 = ($fn1764) $tmp1762->$class->vtable[2];
org$frostlang$frostc$Position $tmp1765 = $tmp1763($tmp1762);
org$frostlang$frostc$parser$Token $tmp1766 = org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp1752, $tmp1754, $tmp1761, $tmp1765);
$fn1768 $tmp1767 = ($fn1768) $tmp1750->$class->vtable[6];
$tmp1767($tmp1750, $tmp1766);
goto block8;
block8:;
// line 694
org$frostlang$frostc$ASTNode* $tmp1769 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
org$frostlang$frostc$ASTNode* $tmp1770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1769;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$Kind local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 704
org$frostlang$frostc$parser$Token $tmp1771 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp1771;
// line 705
org$frostlang$frostc$parser$Token $tmp1772 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp1773 = $tmp1772.kind;
frost$core$Int64 $tmp1774 = $tmp1773.$rawValue;
frost$core$Int64 $tmp1775 = (frost$core$Int64) {52};
frost$core$Bit $tmp1776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1775);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block2; else goto block3;
block2:;
// line 707
org$frostlang$frostc$parser$Token $tmp1778 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1779 = $tmp1778.kind;
*(&local1) = $tmp1779;
// line 708
frost$core$Bit* $tmp1780 = &param0->allowLambdas;
frost$core$Bit $tmp1781 = *$tmp1780;
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$Token$Kind $tmp1783 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1784;
$tmp1784 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1784->value = $tmp1783;
frost$core$Int64 $tmp1785 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1786 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1785);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1787;
$tmp1787 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1787->value = $tmp1786;
ITable* $tmp1788 = ((frost$core$Equatable*) $tmp1784)->$class->itable;
while ($tmp1788->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1788 = $tmp1788->next;
}
$fn1790 $tmp1789 = $tmp1788->methods[0];
frost$core$Bit $tmp1791 = $tmp1789(((frost$core$Equatable*) $tmp1784), ((frost$core$Equatable*) $tmp1787));
bool $tmp1792 = $tmp1791.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1787)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1784)));
if ($tmp1792) goto block4; else goto block6;
block6:;
org$frostlang$frostc$parser$Token$Kind $tmp1793 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1794;
$tmp1794 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1794->value = $tmp1793;
frost$core$Int64 $tmp1795 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1796 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1795);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1797;
$tmp1797 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1797->value = $tmp1796;
ITable* $tmp1798 = ((frost$core$Equatable*) $tmp1794)->$class->itable;
while ($tmp1798->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1798 = $tmp1798->next;
}
$fn1800 $tmp1799 = $tmp1798->methods[0];
frost$core$Bit $tmp1801 = $tmp1799(((frost$core$Equatable*) $tmp1794), ((frost$core$Equatable*) $tmp1797));
bool $tmp1802 = $tmp1801.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1797)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1794)));
if ($tmp1802) goto block4; else goto block5;
block4:;
// line 709
org$frostlang$frostc$parser$Token $tmp1803 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1803);
// line 710
org$frostlang$frostc$ASTNode* $tmp1804 = org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
return $tmp1804;
block5:;
// line 712
org$frostlang$frostc$ASTNode* $tmp1805 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1807 = *(&local0);
org$frostlang$frostc$Position $tmp1808 = $tmp1807.position;
org$frostlang$frostc$parser$Token $tmp1809 = *(&local0);
frost$core$String* $tmp1810 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1809);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1805, $tmp1806, $tmp1808, $tmp1810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
return $tmp1805;
block3:;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {3};
frost$core$Bit $tmp1812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1811);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block8; else goto block9;
block8:;
// line 715
org$frostlang$frostc$ASTNode* $tmp1814 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1815 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1816 = *(&local0);
org$frostlang$frostc$Position $tmp1817 = $tmp1816.position;
org$frostlang$frostc$parser$Token $tmp1818 = *(&local0);
frost$core$String* $tmp1819 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1818);
frost$core$UInt64$nullable $tmp1820 = frost$core$String$get_asUInt64$R$frost$core$UInt64$Q($tmp1819);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1814, $tmp1815, $tmp1817, ((frost$core$UInt64) $tmp1820.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
return $tmp1814;
block9:;
frost$core$Int64 $tmp1821 = (frost$core$Int64) {4};
frost$core$Bit $tmp1822 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1821);
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block10; else goto block11;
block10:;
// line 718
org$frostlang$frostc$ASTNode* $tmp1824 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1825 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1826 = *(&local0);
org$frostlang$frostc$Position $tmp1827 = $tmp1826.position;
org$frostlang$frostc$parser$Token $tmp1828 = *(&local0);
frost$core$String* $tmp1829 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1828);
frost$core$Int64 $tmp1830 = (frost$core$Int64) {2};
frost$core$Bit $tmp1831 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1832 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1830, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1831);
frost$core$String* $tmp1833 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1829, $tmp1832);
frost$core$Int64 $tmp1834 = (frost$core$Int64) {2};
frost$core$UInt64$nullable $tmp1835 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1833, $tmp1834);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1824, $tmp1825, $tmp1827, ((frost$core$UInt64) $tmp1835.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
return $tmp1824;
block11:;
frost$core$Int64 $tmp1836 = (frost$core$Int64) {5};
frost$core$Bit $tmp1837 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1836);
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block12; else goto block13;
block12:;
// line 721
org$frostlang$frostc$ASTNode* $tmp1839 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1840 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1841 = *(&local0);
org$frostlang$frostc$Position $tmp1842 = $tmp1841.position;
org$frostlang$frostc$parser$Token $tmp1843 = *(&local0);
frost$core$String* $tmp1844 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1843);
frost$core$Int64 $tmp1845 = (frost$core$Int64) {2};
frost$core$Bit $tmp1846 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1847 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1845, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1846);
frost$core$String* $tmp1848 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1844, $tmp1847);
frost$core$Int64 $tmp1849 = (frost$core$Int64) {16};
frost$core$UInt64$nullable $tmp1850 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1848, $tmp1849);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1839, $tmp1840, $tmp1842, ((frost$core$UInt64) $tmp1850.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
return $tmp1839;
block13:;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {6};
frost$core$Bit $tmp1852 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1851);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block14; else goto block15;
block14:;
// line 724
org$frostlang$frostc$ASTNode* $tmp1854 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1855 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token $tmp1856 = *(&local0);
org$frostlang$frostc$Position $tmp1857 = $tmp1856.position;
org$frostlang$frostc$parser$Token $tmp1858 = *(&local0);
frost$core$String* $tmp1859 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1858);
frost$core$Real64$nullable $tmp1860 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp1859);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64($tmp1854, $tmp1855, $tmp1857, ((frost$core$Real64) $tmp1860.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
return $tmp1854;
block15:;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {49};
frost$core$Bit $tmp1862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1861);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block16; else goto block17;
block16:;
// line 727
org$frostlang$frostc$ASTNode* $tmp1864 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1865 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token $tmp1866 = *(&local0);
org$frostlang$frostc$Position $tmp1867 = $tmp1866.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1864, $tmp1865, $tmp1867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
return $tmp1864;
block17:;
frost$core$Int64 $tmp1868 = (frost$core$Int64) {50};
frost$core$Bit $tmp1869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1868);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block18; else goto block19;
block18:;
// line 730
org$frostlang$frostc$ASTNode* $tmp1871 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {41};
org$frostlang$frostc$parser$Token $tmp1873 = *(&local0);
org$frostlang$frostc$Position $tmp1874 = $tmp1873.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1871, $tmp1872, $tmp1874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
return $tmp1871;
block19:;
frost$core$Int64 $tmp1875 = (frost$core$Int64) {44};
frost$core$Bit $tmp1876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1875);
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block20; else goto block21;
block20:;
// line 733
org$frostlang$frostc$ASTNode* $tmp1878 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1879 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token $tmp1880 = *(&local0);
org$frostlang$frostc$Position $tmp1881 = $tmp1880.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1878, $tmp1879, $tmp1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
return $tmp1878;
block21:;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {42};
frost$core$Bit $tmp1883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1882);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block22; else goto block23;
block22:;
// line 736
org$frostlang$frostc$ASTNode* $tmp1885 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1886 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1887 = *(&local0);
org$frostlang$frostc$Position $tmp1888 = $tmp1887.position;
frost$core$Bit $tmp1889 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1885, $tmp1886, $tmp1888, $tmp1889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
return $tmp1885;
block23:;
frost$core$Int64 $tmp1890 = (frost$core$Int64) {43};
frost$core$Bit $tmp1891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1890);
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block24; else goto block25;
block24:;
// line 739
org$frostlang$frostc$ASTNode* $tmp1893 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1894 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1895 = *(&local0);
org$frostlang$frostc$Position $tmp1896 = $tmp1895.position;
frost$core$Bit $tmp1897 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1893, $tmp1894, $tmp1896, $tmp1897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
return $tmp1893;
block25:;
frost$core$Int64 $tmp1898 = (frost$core$Int64) {8};
frost$core$Bit $tmp1899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1898);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1901 = (frost$core$Int64) {7};
frost$core$Bit $tmp1902 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1901);
bool $tmp1903 = $tmp1902.value;
if ($tmp1903) goto block26; else goto block28;
block26:;
// line 742
org$frostlang$frostc$parser$Token $tmp1904 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1904);
// line 743
org$frostlang$frostc$ASTNode* $tmp1905 = org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
return $tmp1905;
block28:;
frost$core$Int64 $tmp1906 = (frost$core$Int64) {107};
frost$core$Bit $tmp1907 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1906);
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block29; else goto block30;
block29:;
// line 746
org$frostlang$frostc$parser$Token $tmp1909 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1909);
// line 747
org$frostlang$frostc$ASTNode* $tmp1910 = org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
return $tmp1910;
block30:;
frost$core$Int64 $tmp1911 = (frost$core$Int64) {105};
frost$core$Bit $tmp1912 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1911);
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block31; else goto block32;
block31:;
// line 750
org$frostlang$frostc$parser$Token $tmp1914 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1914);
// line 751
org$frostlang$frostc$ASTNode* $tmp1915 = org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
return $tmp1915;
block32:;
frost$core$Int64 $tmp1916 = (frost$core$Int64) {14};
frost$core$Bit $tmp1917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1916);
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block33; else goto block34;
block33:;
// line 754
org$frostlang$frostc$parser$Token $tmp1919 = *(&local0);
frost$core$String* $tmp1920 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1919);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
frost$core$String* $tmp1921 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local2) = $tmp1920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
// line 755
frost$core$String* $tmp1922 = *(&local2);
frost$core$Bit $tmp1923 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1922, &$s1924);
bool $tmp1925 = $tmp1923.value;
if ($tmp1925) goto block35; else goto block37;
block35:;
// line 756
frost$core$Int64 $tmp1926 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1927 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1926);
org$frostlang$frostc$parser$Token$nullable $tmp1928 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1927, &$s1929);
// line 757
org$frostlang$frostc$ASTNode* $tmp1930 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
org$frostlang$frostc$ASTNode* $tmp1931 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local3) = $tmp1930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
// line 758
org$frostlang$frostc$ASTNode* $tmp1932 = *(&local3);
frost$core$Bit $tmp1933 = frost$core$Bit$init$builtin_bit($tmp1932 == NULL);
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block38; else goto block39;
block38:;
// line 759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1935 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1936 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block39:;
// line 761
frost$core$Int64 $tmp1937 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1938 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1937);
org$frostlang$frostc$parser$Token$nullable $tmp1939 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1938, &$s1940);
// line 762
org$frostlang$frostc$ASTNode* $tmp1941 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1942 = (frost$core$Int64) {3};
org$frostlang$frostc$parser$Token $tmp1943 = *(&local0);
org$frostlang$frostc$Position $tmp1944 = $tmp1943.position;
org$frostlang$frostc$ASTNode* $tmp1945 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp1941, $tmp1942, $tmp1944, $tmp1945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
org$frostlang$frostc$ASTNode* $tmp1946 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1941;
block37:;
// line 764
frost$core$String* $tmp1948 = *(&local2);
frost$core$Bit $tmp1949 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1948, &$s1950);
bool $tmp1951 = $tmp1949.value;
if ($tmp1951) goto block40; else goto block41;
block40:;
// line 765
org$frostlang$frostc$ASTNode* $tmp1952 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1953 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$Token $tmp1954 = *(&local0);
org$frostlang$frostc$Position $tmp1955 = $tmp1954.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1952, $tmp1953, $tmp1955);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$String* $tmp1956 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local2) = ((frost$core$String*) NULL);
return $tmp1952;
block41:;
goto block36;
block36:;
// line 767
org$frostlang$frostc$parser$Token $tmp1957 = *(&local0);
frost$core$String* $tmp1958 = *(&local2);
frost$core$String* $tmp1959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1960, $tmp1958);
frost$core$String* $tmp1961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1959, &$s1962);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1957, $tmp1961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
// line 768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {21};
frost$core$Bit $tmp1965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1964);
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {22};
frost$core$Bit $tmp1968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1967);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block42; else goto block44;
block42:;
// line 771
org$frostlang$frostc$parser$Token $tmp1970 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1970);
// line 772
org$frostlang$frostc$ASTNode* $tmp1971 = org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
return $tmp1971;
block44:;
frost$core$Int64 $tmp1972 = (frost$core$Int64) {58};
frost$core$Bit $tmp1973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1972);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block45; else goto block46;
block45:;
// line 775
org$frostlang$frostc$parser$Token $tmp1975 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1975);
// line 776
org$frostlang$frostc$ASTNode* $tmp1976 = org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
return $tmp1976;
block46:;
// line 779
org$frostlang$frostc$parser$Token $tmp1977 = *(&local0);
org$frostlang$frostc$parser$Token $tmp1978 = *(&local0);
frost$core$String* $tmp1979 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1978);
frost$core$String* $tmp1980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1981, $tmp1979);
frost$core$String* $tmp1982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1980, &$s1983);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1977, $tmp1982);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// line 780
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
// line 787
frost$core$Int64* $tmp1984 = &param0->$rawValue;
frost$core$Int64 $tmp1985 = *$tmp1984;
frost$core$Int64 $tmp1986 = (frost$core$Int64) {22};
frost$core$Bit $tmp1987 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1985, $tmp1986);
bool $tmp1988 = $tmp1987.value;
if ($tmp1988) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1989 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1990 = *$tmp1989;
frost$core$String** $tmp1991 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1992 = *$tmp1991;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$String* $tmp1993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local0) = $tmp1992;
// line 789
frost$core$String* $tmp1994 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
frost$core$String* $tmp1995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1994;
block3:;
frost$core$Int64 $tmp1996 = (frost$core$Int64) {16};
frost$core$Bit $tmp1997 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1985, $tmp1996);
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1999 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2000 = *$tmp1999;
org$frostlang$frostc$ASTNode** $tmp2001 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2002 = *$tmp2001;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
org$frostlang$frostc$ASTNode* $tmp2003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local1) = $tmp2002;
frost$core$String** $tmp2004 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2005 = *$tmp2004;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$String* $tmp2006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local2) = $tmp2005;
// line 792
org$frostlang$frostc$ASTNode* $tmp2007 = *(&local1);
frost$core$String* $tmp2008 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2007);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
frost$core$String* $tmp2009 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local3) = $tmp2008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
// line 793
frost$core$String* $tmp2010 = *(&local3);
frost$core$Bit $tmp2011 = frost$core$Bit$init$builtin_bit($tmp2010 != NULL);
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block6; else goto block7;
block6:;
// line 794
frost$core$String* $tmp2013 = *(&local3);
frost$core$String* $tmp2014 = *(&local2);
frost$core$String* $tmp2015 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2016, $tmp2014);
frost$core$String* $tmp2017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2013, $tmp2015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
frost$core$String* $tmp2018 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
*(&local3) = $tmp2017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
goto block7;
block7:;
// line 796
frost$core$String* $tmp2019 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$String* $tmp2020 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2021 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2022 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2019;
block5:;
// line 799
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token local1;
// line 810
org$frostlang$frostc$parser$Token $tmp2023 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2023;
// line 811
org$frostlang$frostc$parser$Token $tmp2024 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2025 = $tmp2024.kind;
frost$core$Int64 $tmp2026 = $tmp2025.$rawValue;
frost$core$Int64 $tmp2027 = (frost$core$Int64) {52};
frost$core$Bit $tmp2028 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2027);
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2030 = (frost$core$Int64) {55};
frost$core$Bit $tmp2031 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2030);
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2033 = (frost$core$Int64) {56};
frost$core$Bit $tmp2034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2033);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp2036 = (frost$core$Int64) {57};
frost$core$Bit $tmp2037 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2036);
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp2039 = (frost$core$Int64) {58};
frost$core$Bit $tmp2040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2039);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp2042 = (frost$core$Int64) {59};
frost$core$Bit $tmp2043 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2042);
bool $tmp2044 = $tmp2043.value;
if ($tmp2044) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp2045 = (frost$core$Int64) {61};
frost$core$Bit $tmp2046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp2048 = (frost$core$Int64) {62};
frost$core$Bit $tmp2049 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2048);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp2051 = (frost$core$Int64) {63};
frost$core$Bit $tmp2052 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2051);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {66};
frost$core$Bit $tmp2055 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2054);
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp2057 = (frost$core$Int64) {69};
frost$core$Bit $tmp2058 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2057);
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp2060 = (frost$core$Int64) {68};
frost$core$Bit $tmp2061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2060);
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp2063 = (frost$core$Int64) {60};
frost$core$Bit $tmp2064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp2066 = (frost$core$Int64) {70};
frost$core$Bit $tmp2067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2066);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp2069 = (frost$core$Int64) {71};
frost$core$Bit $tmp2070 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2069);
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp2072 = (frost$core$Int64) {72};
frost$core$Bit $tmp2073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2072);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block2; else goto block18;
block18:;
frost$core$Int64 $tmp2075 = (frost$core$Int64) {73};
frost$core$Bit $tmp2076 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2075);
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp2078 = (frost$core$Int64) {74};
frost$core$Bit $tmp2079 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2078);
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block2; else goto block20;
block20:;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {75};
frost$core$Bit $tmp2082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2081);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block2; else goto block21;
block21:;
frost$core$Int64 $tmp2084 = (frost$core$Int64) {53};
frost$core$Bit $tmp2085 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2084);
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block2; else goto block22;
block22:;
frost$core$Int64 $tmp2087 = (frost$core$Int64) {54};
frost$core$Bit $tmp2088 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2087);
bool $tmp2089 = $tmp2088.value;
if ($tmp2089) goto block2; else goto block23;
block23:;
frost$core$Int64 $tmp2090 = (frost$core$Int64) {76};
frost$core$Bit $tmp2091 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2090);
bool $tmp2092 = $tmp2091.value;
if ($tmp2092) goto block2; else goto block24;
block2:;
// line 818
org$frostlang$frostc$parser$Token $tmp2093 = *(&local0);
frost$core$String* $tmp2094 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
return $tmp2094;
block24:;
frost$core$Int64 $tmp2095 = (frost$core$Int64) {67};
frost$core$Bit $tmp2096 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2095);
bool $tmp2097 = $tmp2096.value;
if ($tmp2097) goto block25; else goto block26;
block25:;
// line 821
org$frostlang$frostc$parser$Token $tmp2098 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2098;
// line 822
org$frostlang$frostc$parser$Token $tmp2099 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2100 = $tmp2099.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2101;
$tmp2101 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2101->value = $tmp2100;
frost$core$Int64 $tmp2102 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2103 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2102);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2104;
$tmp2104 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2104->value = $tmp2103;
ITable* $tmp2105 = ((frost$core$Equatable*) $tmp2101)->$class->itable;
while ($tmp2105->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2105 = $tmp2105->next;
}
$fn2107 $tmp2106 = $tmp2105->methods[0];
frost$core$Bit $tmp2108 = $tmp2106(((frost$core$Equatable*) $tmp2101), ((frost$core$Equatable*) $tmp2104));
bool $tmp2109 = $tmp2108.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2101)));
if ($tmp2109) goto block27; else goto block29;
block27:;
// line 823
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2110));
return &$s2110;
block29:;
// line 1
// line 826
org$frostlang$frostc$parser$Token $tmp2111 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2111);
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2112));
return &$s2112;
block28:;
goto block1;
block26:;
frost$core$Int64 $tmp2113 = (frost$core$Int64) {105};
frost$core$Bit $tmp2114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2026, $tmp2113);
bool $tmp2115 = $tmp2114.value;
if ($tmp2115) goto block30; else goto block31;
block30:;
// line 831
frost$core$Int64 $tmp2116 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2117 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2116);
org$frostlang$frostc$parser$Token$nullable $tmp2118 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2117, &$s2119);
frost$core$Bit $tmp2120 = frost$core$Bit$init$builtin_bit(!$tmp2118.nonnull);
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block32; else goto block33;
block32:;
// line 832
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block33:;
// line 834
frost$core$Int64 $tmp2122 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp2123 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2122);
org$frostlang$frostc$parser$Token$nullable $tmp2124 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2123);
frost$core$Bit $tmp2125 = frost$core$Bit$init$builtin_bit($tmp2124.nonnull);
bool $tmp2126 = $tmp2125.value;
if ($tmp2126) goto block34; else goto block35;
block34:;
// line 835
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2127));
return &$s2127;
block35:;
// line 837
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2128));
return &$s2128;
block31:;
// line 840
org$frostlang$frostc$parser$Token $tmp2129 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2130 = *(&local0);
frost$core$String* $tmp2131 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2130);
frost$core$String* $tmp2132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2133, $tmp2131);
frost$core$String* $tmp2134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2132, &$s2135);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp2129, $tmp2134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
// line 842
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block36;
block36:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 848
frost$core$Bit $tmp2136 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode* $tmp2137 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
return $tmp2137;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 856
frost$core$Int64 $tmp2138 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2139 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2138);
org$frostlang$frostc$parser$Token$nullable $tmp2140 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2139, &$s2141);
*(&local0) = $tmp2140;
// line 857
org$frostlang$frostc$parser$Token$nullable $tmp2142 = *(&local0);
frost$core$Bit $tmp2143 = frost$core$Bit$init$builtin_bit(!$tmp2142.nonnull);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block1; else goto block2;
block1:;
// line 858
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 860
frost$collections$Array* $tmp2145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2145);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$collections$Array* $tmp2146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
*(&local1) = $tmp2145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
// line 861
frost$core$Int64 $tmp2147 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2148 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2147);
org$frostlang$frostc$parser$Token$nullable $tmp2149 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2148);
frost$core$Bit $tmp2150 = frost$core$Bit$init$builtin_bit(!$tmp2149.nonnull);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block3; else goto block4;
block3:;
// line 862
org$frostlang$frostc$ASTNode* $tmp2152 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
org$frostlang$frostc$ASTNode* $tmp2153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local2) = $tmp2152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
// line 863
org$frostlang$frostc$ASTNode* $tmp2154 = *(&local2);
frost$core$Bit $tmp2155 = frost$core$Bit$init$builtin_bit($tmp2154 == NULL);
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block5; else goto block6;
block5:;
// line 864
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 866
frost$collections$Array* $tmp2159 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2160 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2159, ((frost$core$Object*) $tmp2160));
// line 867
goto block7;
block7:;
frost$core$Int64 $tmp2161 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2162 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2161);
org$frostlang$frostc$parser$Token$nullable $tmp2163 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2162);
frost$core$Bit $tmp2164 = frost$core$Bit$init$builtin_bit($tmp2163.nonnull);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block8; else goto block9;
block8:;
// line 868
org$frostlang$frostc$ASTNode* $tmp2166 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
org$frostlang$frostc$ASTNode* $tmp2167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local2) = $tmp2166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
// line 869
org$frostlang$frostc$ASTNode* $tmp2168 = *(&local2);
frost$core$Bit $tmp2169 = frost$core$Bit$init$builtin_bit($tmp2168 == NULL);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block10; else goto block11;
block10:;
// line 870
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 872
frost$collections$Array* $tmp2173 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2174 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2173, ((frost$core$Object*) $tmp2174));
goto block7;
block9:;
// line 874
frost$core$Int64 $tmp2175 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2176 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2175);
org$frostlang$frostc$parser$Token$nullable $tmp2177 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2176, &$s2178);
frost$core$Bit $tmp2179 = frost$core$Bit$init$builtin_bit(!$tmp2177.nonnull);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block12; else goto block13;
block12:;
// line 875
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp2183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 878
org$frostlang$frostc$parser$Token $tmp2184 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2184;
// line 879
org$frostlang$frostc$parser$Token $tmp2185 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2186 = $tmp2185.kind;
frost$core$Int64 $tmp2187 = $tmp2186.$rawValue;
frost$core$Int64 $tmp2188 = (frost$core$Int64) {94};
frost$core$Bit $tmp2189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2187, $tmp2188);
bool $tmp2190 = $tmp2189.value;
if ($tmp2190) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2191 = (frost$core$Int64) {95};
frost$core$Bit $tmp2192 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2187, $tmp2191);
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp2194 = (frost$core$Int64) {96};
frost$core$Bit $tmp2195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2187, $tmp2194);
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp2197 = (frost$core$Int64) {97};
frost$core$Bit $tmp2198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2187, $tmp2197);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block15; else goto block19;
block15:;
// line 882
org$frostlang$frostc$parser$Token $tmp2200 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 883
frost$core$Int64 $tmp2201 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2202 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2201);
org$frostlang$frostc$parser$Token$nullable $tmp2203 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2202, &$s2204);
frost$core$Bit $tmp2205 = frost$core$Bit$init$builtin_bit(!$tmp2203.nonnull);
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block20; else goto block21;
block20:;
// line 884
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 886
frost$collections$Array* $tmp2208 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2208);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
frost$collections$Array* $tmp2209 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local4) = $tmp2208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
// line 887
frost$core$Int64 $tmp2210 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2211 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2210);
org$frostlang$frostc$parser$Token$nullable $tmp2212 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2211);
frost$core$Bit $tmp2213 = frost$core$Bit$init$builtin_bit(!$tmp2212.nonnull);
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block22; else goto block23;
block22:;
// line 888
org$frostlang$frostc$ASTNode* $tmp2215 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
org$frostlang$frostc$ASTNode* $tmp2216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local5) = $tmp2215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
// line 889
org$frostlang$frostc$ASTNode* $tmp2217 = *(&local5);
frost$core$Bit $tmp2218 = frost$core$Bit$init$builtin_bit($tmp2217 == NULL);
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block24; else goto block25;
block24:;
// line 890
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2220 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 892
frost$collections$Array* $tmp2223 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2224 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2223, ((frost$core$Object*) $tmp2224));
// line 893
goto block26;
block26:;
frost$core$Int64 $tmp2225 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2226 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2225);
org$frostlang$frostc$parser$Token$nullable $tmp2227 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2226);
frost$core$Bit $tmp2228 = frost$core$Bit$init$builtin_bit($tmp2227.nonnull);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block27; else goto block28;
block27:;
// line 894
org$frostlang$frostc$ASTNode* $tmp2230 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
org$frostlang$frostc$ASTNode* $tmp2231 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local5) = $tmp2230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// line 895
org$frostlang$frostc$ASTNode* $tmp2232 = *(&local5);
frost$core$Bit $tmp2233 = frost$core$Bit$init$builtin_bit($tmp2232 == NULL);
bool $tmp2234 = $tmp2233.value;
if ($tmp2234) goto block29; else goto block30;
block29:;
// line 896
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block30:;
// line 898
frost$collections$Array* $tmp2238 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2239 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2238, ((frost$core$Object*) $tmp2239));
goto block26;
block28:;
// line 900
frost$core$Int64 $tmp2240 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2241 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2240);
org$frostlang$frostc$parser$Token$nullable $tmp2242 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2241, &$s2243);
frost$core$Bit $tmp2244 = frost$core$Bit$init$builtin_bit(!$tmp2242.nonnull);
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block31; else goto block32;
block31:;
// line 901
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2246 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2247 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block32:;
org$frostlang$frostc$ASTNode* $tmp2249 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 904
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 905
frost$collections$Array* $tmp2250 = *(&local4);
ITable* $tmp2251 = ((frost$collections$CollectionView*) $tmp2250)->$class->itable;
while ($tmp2251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[0];
frost$core$Int64 $tmp2254 = $tmp2252(((frost$collections$CollectionView*) $tmp2250));
frost$core$Int64 $tmp2255 = (frost$core$Int64) {0};
frost$core$Bit $tmp2256 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2254, $tmp2255);
bool $tmp2257 = $tmp2256.value;
if ($tmp2257) goto block33; else goto block35;
block33:;
// line 906
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2258 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block35:;
// line 908
frost$collections$Array* $tmp2259 = *(&local4);
ITable* $tmp2260 = ((frost$collections$CollectionView*) $tmp2259)->$class->itable;
while ($tmp2260->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2260 = $tmp2260->next;
}
$fn2262 $tmp2261 = $tmp2260->methods[0];
frost$core$Int64 $tmp2263 = $tmp2261(((frost$collections$CollectionView*) $tmp2259));
frost$core$Int64 $tmp2264 = (frost$core$Int64) {1};
frost$core$Bit $tmp2265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2263, $tmp2264);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block36; else goto block38;
block36:;
// line 909
frost$collections$Array* $tmp2267 = *(&local4);
frost$core$Int64 $tmp2268 = (frost$core$Int64) {0};
frost$core$Object* $tmp2269 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2267, $tmp2268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2269)));
org$frostlang$frostc$ASTNode* $tmp2270 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2269);
frost$core$Frost$unref$frost$core$Object$Q($tmp2269);
goto block37;
block38:;
// line 1
// line 913
org$frostlang$frostc$parser$Token$nullable $tmp2271 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2271.value), &$s2272);
// line 914
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2273 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2274 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 916
org$frostlang$frostc$ASTNode* $tmp2276 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2277 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$nullable $tmp2278 = *(&local0);
org$frostlang$frostc$Position $tmp2279 = ((org$frostlang$frostc$parser$Token) $tmp2278.value).position;
org$frostlang$frostc$parser$Token $tmp2280 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2281 = $tmp2280.kind;
frost$collections$Array* $tmp2282 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2283 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2282);
org$frostlang$frostc$ASTNode* $tmp2284 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp2276, $tmp2277, $tmp2279, $tmp2281, $tmp2283, $tmp2284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
org$frostlang$frostc$ASTNode* $tmp2285 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2286 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2276;
block19:;
// line 921
org$frostlang$frostc$parser$Token$nullable $tmp2288 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2288.value), &$s2289);
// line 922
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2290 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
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
// line 932
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 933
org$frostlang$frostc$parser$Token $tmp2291 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2292 = $tmp2291.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2293;
$tmp2293 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2293->value = $tmp2292;
frost$core$Int64 $tmp2294 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2295 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2294);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2296;
$tmp2296 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2296->value = $tmp2295;
ITable* $tmp2297 = ((frost$core$Equatable*) $tmp2293)->$class->itable;
while ($tmp2297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2297 = $tmp2297->next;
}
$fn2299 $tmp2298 = $tmp2297->methods[0];
frost$core$Bit $tmp2300 = $tmp2298(((frost$core$Equatable*) $tmp2293), ((frost$core$Equatable*) $tmp2296));
bool $tmp2301 = $tmp2300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2296)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2293)));
if ($tmp2301) goto block1; else goto block3;
block1:;
// line 934
org$frostlang$frostc$ASTNode* $tmp2302 = org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
org$frostlang$frostc$ASTNode* $tmp2303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local0) = $tmp2302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// line 935
org$frostlang$frostc$ASTNode* $tmp2304 = *(&local0);
frost$core$Bit $tmp2305 = frost$core$Bit$init$builtin_bit($tmp2304 == NULL);
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block4; else goto block5;
block4:;
// line 936
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 940
frost$core$Int64 $tmp2308 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2309 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2308);
org$frostlang$frostc$parser$Token$nullable $tmp2310 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2309, &$s2311);
*(&local1) = $tmp2310;
// line 941
org$frostlang$frostc$parser$Token$nullable $tmp2312 = *(&local1);
frost$core$Bit $tmp2313 = frost$core$Bit$init$builtin_bit(!$tmp2312.nonnull);
bool $tmp2314 = $tmp2313.value;
if ($tmp2314) goto block6; else goto block7;
block6:;
// line 942
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2315 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 944
frost$core$MutableString* $tmp2316 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp2317 = *(&local1);
frost$core$String* $tmp2318 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2317.value));
frost$core$MutableString$init$frost$core$String($tmp2316, $tmp2318);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$MutableString* $tmp2319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
*(&local2) = $tmp2316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
// line 945
goto block8;
block8:;
frost$core$Int64 $tmp2320 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp2321 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2320);
org$frostlang$frostc$parser$Token$nullable $tmp2322 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2321);
frost$core$Bit $tmp2323 = frost$core$Bit$init$builtin_bit($tmp2322.nonnull);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block9; else goto block10;
block9:;
// line 946
frost$core$Int64 $tmp2325 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2326 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2325);
org$frostlang$frostc$parser$Token$nullable $tmp2327 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2326, &$s2328);
*(&local3) = $tmp2327;
// line 947
org$frostlang$frostc$parser$Token$nullable $tmp2329 = *(&local3);
frost$core$Bit $tmp2330 = frost$core$Bit$init$builtin_bit(!$tmp2329.nonnull);
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block11; else goto block12;
block11:;
// line 948
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 950
frost$core$MutableString* $tmp2334 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2334, &$s2335);
// line 951
frost$core$MutableString* $tmp2336 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp2337 = *(&local3);
frost$core$String* $tmp2338 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2337.value));
frost$core$MutableString$append$frost$core$String($tmp2336, $tmp2338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
goto block8;
block10:;
// line 953
frost$core$MutableString* $tmp2339 = *(&local2);
frost$core$String* $tmp2340 = frost$core$MutableString$finish$R$frost$core$String($tmp2339);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$String* $tmp2341 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local4) = $tmp2340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
// line 954
org$frostlang$frostc$ASTNode* $tmp2342 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2343 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2344 = *(&local1);
org$frostlang$frostc$Position $tmp2345 = ((org$frostlang$frostc$parser$Token) $tmp2344.value).position;
frost$core$String* $tmp2346 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2342, $tmp2343, $tmp2345, $tmp2346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
org$frostlang$frostc$ASTNode* $tmp2347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
*(&local0) = $tmp2342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
// line 955
org$frostlang$frostc$parser$Token $tmp2348 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2349 = $tmp2348.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2350;
$tmp2350 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2350->value = $tmp2349;
frost$core$Int64 $tmp2351 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2352 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2351);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2353;
$tmp2353 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2353->value = $tmp2352;
ITable* $tmp2354 = ((frost$core$Equatable*) $tmp2350)->$class->itable;
while ($tmp2354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2354 = $tmp2354->next;
}
$fn2356 $tmp2355 = $tmp2354->methods[0];
frost$core$Bit $tmp2357 = $tmp2355(((frost$core$Equatable*) $tmp2350), ((frost$core$Equatable*) $tmp2353));
bool $tmp2358 = $tmp2357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2353)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2350)));
if ($tmp2358) goto block13; else goto block14;
block13:;
// line 958
bool $tmp2359 = param1.value;
if ($tmp2359) goto block15; else goto block16;
block15:;
// line 959
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 961
org$frostlang$frostc$parser$Token $tmp2360 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 962
frost$collections$Array* $tmp2361 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2361);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$collections$Array* $tmp2362 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
*(&local5) = $tmp2361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// line 963
frost$core$Bit $tmp2363 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2364 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2363);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local6) = $tmp2364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// line 964
org$frostlang$frostc$ASTNode* $tmp2366 = *(&local6);
frost$core$Bit $tmp2367 = frost$core$Bit$init$builtin_bit($tmp2366 == NULL);
bool $tmp2368 = $tmp2367.value;
if ($tmp2368) goto block17; else goto block18;
block17:;
// line 965
bool $tmp2369 = param1.value;
if ($tmp2369) goto block19; else goto block20;
block19:;
// line 966
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 967
org$frostlang$frostc$ASTNode* $tmp2370 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
org$frostlang$frostc$ASTNode* $tmp2371 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2372 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2373 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2370;
block20:;
// line 969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2376 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2377 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2378 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 971
frost$collections$Array* $tmp2381 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2382 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2381, ((frost$core$Object*) $tmp2382));
// line 972
goto block21;
block21:;
frost$core$Int64 $tmp2383 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2384 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2383);
org$frostlang$frostc$parser$Token$nullable $tmp2385 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2384);
frost$core$Bit $tmp2386 = frost$core$Bit$init$builtin_bit($tmp2385.nonnull);
bool $tmp2387 = $tmp2386.value;
if ($tmp2387) goto block22; else goto block23;
block22:;
// line 973
frost$core$Bit $tmp2388 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2389 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
org$frostlang$frostc$ASTNode* $tmp2390 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local6) = $tmp2389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
// line 974
org$frostlang$frostc$ASTNode* $tmp2391 = *(&local6);
frost$core$Bit $tmp2392 = frost$core$Bit$init$builtin_bit($tmp2391 == NULL);
bool $tmp2393 = $tmp2392.value;
if ($tmp2393) goto block24; else goto block25;
block24:;
// line 975
bool $tmp2394 = param1.value;
if ($tmp2394) goto block26; else goto block27;
block26:;
// line 976
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 977
org$frostlang$frostc$ASTNode* $tmp2395 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
org$frostlang$frostc$ASTNode* $tmp2396 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2397 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2398 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2400 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2395;
block27:;
// line 979
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2401 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2402 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2403 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2405 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 981
frost$collections$Array* $tmp2406 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2407 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2406, ((frost$core$Object*) $tmp2407));
goto block21;
block23:;
// line 983
frost$core$Int64 $tmp2408 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2409 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2408);
org$frostlang$frostc$parser$Token$nullable $tmp2410 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2409, &$s2411);
frost$core$Bit $tmp2412 = frost$core$Bit$init$builtin_bit(!$tmp2410.nonnull);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block28; else goto block29;
block28:;
// line 984
bool $tmp2414 = param1.value;
if ($tmp2414) goto block30; else goto block31;
block30:;
// line 985
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 986
org$frostlang$frostc$ASTNode* $tmp2415 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$ASTNode* $tmp2416 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2417 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2418 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2415;
block31:;
// line 988
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2421 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2422 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2423 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 990
org$frostlang$frostc$ASTNode* $tmp2426 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2427 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$nullable $tmp2428 = *(&local1);
org$frostlang$frostc$Position $tmp2429 = ((org$frostlang$frostc$parser$Token) $tmp2428.value).position;
frost$core$String* $tmp2430 = *(&local4);
frost$collections$Array* $tmp2431 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2432 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2431);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2426, $tmp2427, $tmp2429, $tmp2430, $tmp2432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local0) = $tmp2426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// line 992
bool $tmp2434 = param1.value;
if ($tmp2434) goto block32; else goto block33;
block32:;
// line 993
org$frostlang$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2435 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2436 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2437 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 997
frost$core$Int64 $tmp2439 = (frost$core$Int64) {98};
org$frostlang$frostc$parser$Token$Kind $tmp2440 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2439);
org$frostlang$frostc$parser$Token$nullable $tmp2441 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2440);
frost$core$Bit $tmp2442 = frost$core$Bit$init$builtin_bit($tmp2441.nonnull);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block34; else goto block35;
block34:;
// line 998
org$frostlang$frostc$ASTNode* $tmp2444 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2445 = (frost$core$Int64) {32};
org$frostlang$frostc$ASTNode* $tmp2446 = *(&local0);
$fn2448 $tmp2447 = ($fn2448) $tmp2446->$class->vtable[2];
org$frostlang$frostc$Position $tmp2449 = $tmp2447($tmp2446);
org$frostlang$frostc$ASTNode* $tmp2450 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp2444, $tmp2445, $tmp2449, $tmp2450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
org$frostlang$frostc$ASTNode* $tmp2451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local0) = $tmp2444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
goto block35;
block35:;
// line 1000
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2452;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1007
frost$core$Int64 $tmp2454 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2455 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2454);
org$frostlang$frostc$parser$Token$nullable $tmp2456 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2455, &$s2457);
frost$core$Bit $tmp2458 = frost$core$Bit$init$builtin_bit(!$tmp2456.nonnull);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block1; else goto block2;
block1:;
// line 1008
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1010
frost$collections$Array* $tmp2460 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2460);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
frost$collections$Array* $tmp2461 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local0) = $tmp2460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
// line 1
// line 1012
org$frostlang$frostc$ASTNode* $tmp2462 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
org$frostlang$frostc$ASTNode* $tmp2463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local1) = $tmp2462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
// line 1013
org$frostlang$frostc$ASTNode* $tmp2464 = *(&local1);
frost$core$Bit $tmp2465 = frost$core$Bit$init$builtin_bit($tmp2464 == NULL);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block3; else goto block4;
block3:;
// line 1014
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 1016
frost$collections$Array* $tmp2469 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2470 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2469, ((frost$core$Object*) $tmp2470));
org$frostlang$frostc$ASTNode* $tmp2471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1018
goto block5;
block5:;
frost$core$Int64 $tmp2472 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2473 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2472);
org$frostlang$frostc$parser$Token$nullable $tmp2474 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2473);
frost$core$Bit $tmp2475 = frost$core$Bit$init$builtin_bit($tmp2474.nonnull);
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block6; else goto block7;
block6:;
// line 1019
org$frostlang$frostc$ASTNode* $tmp2477 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
org$frostlang$frostc$ASTNode* $tmp2478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local2) = $tmp2477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
// line 1020
org$frostlang$frostc$ASTNode* $tmp2479 = *(&local2);
frost$core$Bit $tmp2480 = frost$core$Bit$init$builtin_bit($tmp2479 == NULL);
bool $tmp2481 = $tmp2480.value;
if ($tmp2481) goto block8; else goto block9;
block8:;
// line 1021
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 1023
frost$collections$Array* $tmp2484 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2485 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2484, ((frost$core$Object*) $tmp2485));
org$frostlang$frostc$ASTNode* $tmp2486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1025
frost$core$Int64 $tmp2487 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2488 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2487);
org$frostlang$frostc$parser$Token$nullable $tmp2489 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2488, &$s2490);
frost$core$Bit $tmp2491 = frost$core$Bit$init$builtin_bit(!$tmp2489.nonnull);
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block10; else goto block11;
block10:;
// line 1026
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2493 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 1028
frost$collections$Array* $tmp2494 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp2495 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
frost$collections$Array* $tmp2496 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2495;

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
// line 1042
org$frostlang$frostc$ASTNode* $tmp2497 = org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
org$frostlang$frostc$ASTNode* $tmp2498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local0) = $tmp2497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
// line 1043
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local0);
frost$core$Bit $tmp2500 = frost$core$Bit$init$builtin_bit($tmp2499 == NULL);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block1; else goto block2;
block1:;
// line 1044
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2502 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1046
goto block3;
block3:;
// line 1047
org$frostlang$frostc$parser$Token $tmp2503 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2503;
// line 1048
org$frostlang$frostc$parser$Token $tmp2504 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2505 = $tmp2504.kind;
frost$core$Int64 $tmp2506 = $tmp2505.$rawValue;
frost$core$Int64 $tmp2507 = (frost$core$Int64) {107};
frost$core$Bit $tmp2508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2507);
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block6; else goto block7;
block6:;
// line 1050
frost$collections$Stack** $tmp2510 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2511 = *$tmp2510;
frost$core$Bit $tmp2512 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2513;
$tmp2513 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2513->value = $tmp2512;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2511, ((frost$core$Object*) $tmp2513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
// line 1051
frost$collections$Array* $tmp2514 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2514);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$collections$Array* $tmp2515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local2) = $tmp2514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// line 1052
frost$core$Int64 $tmp2516 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2517 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2516);
org$frostlang$frostc$parser$Token$nullable $tmp2518 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2517);
frost$core$Bit $tmp2519 = frost$core$Bit$init$builtin_bit(!$tmp2518.nonnull);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block8; else goto block9;
block8:;
// line 1053
org$frostlang$frostc$ASTNode* $tmp2521 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
org$frostlang$frostc$ASTNode* $tmp2522 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
*(&local3) = $tmp2521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
// line 1054
org$frostlang$frostc$ASTNode* $tmp2523 = *(&local3);
frost$core$Bit $tmp2524 = frost$core$Bit$init$builtin_bit($tmp2523 == NULL);
bool $tmp2525 = $tmp2524.value;
if ($tmp2525) goto block10; else goto block11;
block10:;
// line 1055
frost$collections$Stack** $tmp2526 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2527 = *$tmp2526;
frost$core$Object* $tmp2528 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2527);
frost$core$Frost$unref$frost$core$Object$Q($tmp2528);
// line 1056
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2529 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1058
frost$collections$Array* $tmp2532 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2533 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2532, ((frost$core$Object*) $tmp2533));
// line 1059
goto block12;
block12:;
frost$core$Int64 $tmp2534 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2535 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2534);
org$frostlang$frostc$parser$Token$nullable $tmp2536 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2535);
frost$core$Bit $tmp2537 = frost$core$Bit$init$builtin_bit($tmp2536.nonnull);
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block13; else goto block14;
block13:;
// line 1060
org$frostlang$frostc$ASTNode* $tmp2539 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
org$frostlang$frostc$ASTNode* $tmp2540 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local3) = $tmp2539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
// line 1061
org$frostlang$frostc$ASTNode* $tmp2541 = *(&local3);
frost$core$Bit $tmp2542 = frost$core$Bit$init$builtin_bit($tmp2541 == NULL);
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block15; else goto block16;
block15:;
// line 1062
frost$collections$Stack** $tmp2544 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2545 = *$tmp2544;
frost$core$Object* $tmp2546 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2545);
frost$core$Frost$unref$frost$core$Object$Q($tmp2546);
// line 1063
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2549 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1065
frost$collections$Array* $tmp2550 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2551 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2550, ((frost$core$Object*) $tmp2551));
goto block12;
block14:;
// line 1067
frost$core$Int64 $tmp2552 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2553 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2552);
org$frostlang$frostc$parser$Token$nullable $tmp2554 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2553, &$s2555);
frost$core$Bit $tmp2556 = frost$core$Bit$init$builtin_bit(!$tmp2554.nonnull);
bool $tmp2557 = $tmp2556.value;
if ($tmp2557) goto block17; else goto block18;
block17:;
// line 1068
frost$collections$Stack** $tmp2558 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2559 = *$tmp2558;
frost$core$Object* $tmp2560 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2559);
frost$core$Frost$unref$frost$core$Object$Q($tmp2560);
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2561 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2562 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2563 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
org$frostlang$frostc$ASTNode* $tmp2564 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1072
frost$collections$Stack** $tmp2565 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2566 = *$tmp2565;
frost$core$Object* $tmp2567 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2566);
frost$core$Frost$unref$frost$core$Object$Q($tmp2567);
// line 1073
org$frostlang$frostc$ASTNode* $tmp2568 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2569 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token $tmp2570 = *(&local1);
org$frostlang$frostc$Position $tmp2571 = $tmp2570.position;
org$frostlang$frostc$ASTNode* $tmp2572 = *(&local0);
frost$collections$Array* $tmp2573 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2574 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2573);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2568, $tmp2569, $tmp2571, $tmp2572, $tmp2574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
org$frostlang$frostc$ASTNode* $tmp2575 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local0) = $tmp2568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
frost$collections$Array* $tmp2576 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {105};
frost$core$Bit $tmp2578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2577);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block19; else goto block20;
block19:;
// line 1077
org$frostlang$frostc$ASTNode* $tmp2580 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
org$frostlang$frostc$ASTNode* $tmp2581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local4) = $tmp2580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// line 1078
org$frostlang$frostc$ASTNode* $tmp2582 = *(&local4);
frost$core$Bit $tmp2583 = frost$core$Bit$init$builtin_bit($tmp2582 == NULL);
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block21; else goto block22;
block21:;
// line 1079
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2585 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2586 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1081
frost$core$Int64 $tmp2587 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2588 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2587);
org$frostlang$frostc$parser$Token$nullable $tmp2589 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2588, &$s2590);
frost$core$Bit $tmp2591 = frost$core$Bit$init$builtin_bit(!$tmp2589.nonnull);
bool $tmp2592 = $tmp2591.value;
if ($tmp2592) goto block23; else goto block24;
block23:;
// line 1082
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block24:;
// line 1084
org$frostlang$frostc$ASTNode* $tmp2595 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2596 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2597 = *(&local1);
org$frostlang$frostc$Position $tmp2598 = $tmp2597.position;
org$frostlang$frostc$ASTNode* $tmp2599 = *(&local0);
frost$core$Int64 $tmp2600 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp2601 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2600);
org$frostlang$frostc$ASTNode* $tmp2602 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2595, $tmp2596, $tmp2598, $tmp2599, $tmp2601, $tmp2602);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$ASTNode* $tmp2603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local0) = $tmp2595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$ASTNode* $tmp2604 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2605 = (frost$core$Int64) {102};
frost$core$Bit $tmp2606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block25; else goto block26;
block25:;
// line 1087
*(&local5) = ((frost$core$String*) NULL);
// line 1088
frost$core$Int64 $tmp2608 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp2609 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2608);
org$frostlang$frostc$parser$Token$nullable $tmp2610 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2609);
frost$core$Bit $tmp2611 = frost$core$Bit$init$builtin_bit($tmp2610.nonnull);
bool $tmp2612 = $tmp2611.value;
if ($tmp2612) goto block27; else goto block29;
block27:;
// line 1089
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2613));
frost$core$String* $tmp2614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local5) = &$s2613;
goto block28;
block29:;
// line 1
// line 1092
frost$core$String* $tmp2615 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
frost$core$String* $tmp2616 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local5) = $tmp2615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// line 1093
frost$core$String* $tmp2617 = *(&local5);
frost$core$Bit $tmp2618 = frost$core$Bit$init$builtin_bit($tmp2617 == NULL);
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block30; else goto block31;
block30:;
// line 1094
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2620 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2621 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1097
org$frostlang$frostc$ASTNode* $tmp2622 = *(&local0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
org$frostlang$frostc$ASTNode* $tmp2623 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
*(&local6) = $tmp2622;
// line 1098
org$frostlang$frostc$ASTNode* $tmp2624 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2625 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token $tmp2626 = *(&local1);
org$frostlang$frostc$Position $tmp2627 = $tmp2626.position;
org$frostlang$frostc$ASTNode* $tmp2628 = *(&local6);
frost$core$String* $tmp2629 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2624, $tmp2625, $tmp2627, $tmp2628, $tmp2629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
org$frostlang$frostc$ASTNode* $tmp2630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local0) = $tmp2624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
// line 1099
org$frostlang$frostc$parser$Token $tmp2631 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2632 = $tmp2631.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2633;
$tmp2633 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2633->value = $tmp2632;
frost$core$Int64 $tmp2634 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2635 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2634);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2636;
$tmp2636 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2636->value = $tmp2635;
ITable* $tmp2637 = ((frost$core$Equatable*) $tmp2633)->$class->itable;
while ($tmp2637->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2637 = $tmp2637->next;
}
$fn2639 $tmp2638 = $tmp2637->methods[0];
frost$core$Bit $tmp2640 = $tmp2638(((frost$core$Equatable*) $tmp2633), ((frost$core$Equatable*) $tmp2636));
bool $tmp2641 = $tmp2640.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2636)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2633)));
if ($tmp2641) goto block32; else goto block33;
block32:;
// line 1100
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1101
org$frostlang$frostc$FixedArray* $tmp2642 = org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
org$frostlang$frostc$FixedArray* $tmp2643 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local7) = $tmp2642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
// line 1102
org$frostlang$frostc$FixedArray* $tmp2644 = *(&local7);
frost$core$Bit $tmp2645 = frost$core$Bit$init$builtin_bit($tmp2644 != NULL);
bool $tmp2646 = $tmp2645.value;
if ($tmp2646) goto block34; else goto block36;
block34:;
// line 1103
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1104
org$frostlang$frostc$ASTNode* $tmp2647 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2648 = (frost$core$Int64) {17};
org$frostlang$frostc$parser$Token $tmp2649 = *(&local1);
org$frostlang$frostc$Position $tmp2650 = $tmp2649.position;
org$frostlang$frostc$ASTNode* $tmp2651 = *(&local6);
frost$core$String* $tmp2652 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2653 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2647, $tmp2648, $tmp2650, $tmp2651, $tmp2652, $tmp2653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
org$frostlang$frostc$ASTNode* $tmp2654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local0) = $tmp2647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
goto block35;
block36:;
// line 1
// line 1107
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1108
org$frostlang$frostc$ASTNode* $tmp2655 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
org$frostlang$frostc$FixedArray* $tmp2656 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2657 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2659 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2655;
block35:;
org$frostlang$frostc$FixedArray* $tmp2660 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2662 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2663 = (frost$core$Int64) {93};
frost$core$Bit $tmp2664 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2663);
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block37; else goto block38;
block37:;
// line 1113
org$frostlang$frostc$ASTNode* $tmp2666 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local8) = $tmp2666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
// line 1114
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local8);
frost$core$Bit $tmp2669 = frost$core$Bit$init$builtin_bit($tmp2668 == NULL);
bool $tmp2670 = $tmp2669.value;
if ($tmp2670) goto block39; else goto block40;
block39:;
// line 1115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2671 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 1117
org$frostlang$frostc$ASTNode* $tmp2673 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2674 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2675 = *(&local1);
org$frostlang$frostc$Position $tmp2676 = $tmp2675.position;
org$frostlang$frostc$ASTNode* $tmp2677 = *(&local0);
frost$core$Int64 $tmp2678 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp2679 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2678);
org$frostlang$frostc$ASTNode* $tmp2680 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2673, $tmp2674, $tmp2676, $tmp2677, $tmp2679, $tmp2680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
org$frostlang$frostc$ASTNode* $tmp2681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local0) = $tmp2673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
org$frostlang$frostc$ASTNode* $tmp2682 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2683 = (frost$core$Int64) {66};
frost$core$Bit $tmp2684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2683);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block41; else goto block42;
block41:;
// line 1122
org$frostlang$frostc$parser$Token $tmp2686 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2686);
// line 1123
org$frostlang$frostc$ASTNode* $tmp2687 = *(&local0);
frost$core$String* $tmp2688 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2687);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
frost$core$String* $tmp2689 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local9) = $tmp2688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
// line 1124
frost$core$String* $tmp2690 = *(&local9);
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit($tmp2690 != NULL);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block43; else goto block44;
block43:;
// line 1125
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1126
org$frostlang$frostc$parser$Token $tmp2693 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1129
frost$collections$Array* $tmp2694 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2694);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$collections$Array* $tmp2695 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local10) = $tmp2694;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// line 1130
frost$core$Bit $tmp2696 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2697 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2696);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
org$frostlang$frostc$ASTNode* $tmp2698 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local11) = $tmp2697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
// line 1131
org$frostlang$frostc$ASTNode* $tmp2699 = *(&local11);
frost$core$Bit $tmp2700 = frost$core$Bit$init$builtin_bit($tmp2699 == NULL);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block45; else goto block46;
block45:;
// line 1132
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1133
org$frostlang$frostc$ASTNode* $tmp2702 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
org$frostlang$frostc$ASTNode* $tmp2703 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2704 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2705 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2706 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2702;
block46:;
// line 1135
frost$collections$Array* $tmp2707 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2708 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2707, ((frost$core$Object*) $tmp2708));
// line 1136
goto block47;
block47:;
frost$core$Int64 $tmp2709 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2710 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2709);
org$frostlang$frostc$parser$Token$nullable $tmp2711 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2710);
frost$core$Bit $tmp2712 = frost$core$Bit$init$builtin_bit($tmp2711.nonnull);
bool $tmp2713 = $tmp2712.value;
if ($tmp2713) goto block48; else goto block49;
block48:;
// line 1137
frost$core$Bit $tmp2714 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2715 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
org$frostlang$frostc$ASTNode* $tmp2716 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local11) = $tmp2715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// line 1138
org$frostlang$frostc$ASTNode* $tmp2717 = *(&local11);
frost$core$Bit $tmp2718 = frost$core$Bit$init$builtin_bit($tmp2717 == NULL);
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block50; else goto block51;
block50:;
// line 1139
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1140
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
org$frostlang$frostc$ASTNode* $tmp2721 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2722 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2723 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2724 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2720;
block51:;
// line 1142
frost$collections$Array* $tmp2725 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2726 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2725, ((frost$core$Object*) $tmp2726));
goto block47;
block49:;
// line 1144
frost$core$Int64 $tmp2727 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2728 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2727);
org$frostlang$frostc$parser$Token$nullable $tmp2729 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2728, &$s2730);
*(&local12) = $tmp2729;
// line 1145
org$frostlang$frostc$parser$Token$nullable $tmp2731 = *(&local12);
frost$core$Bit $tmp2732 = frost$core$Bit$init$builtin_bit(!$tmp2731.nonnull);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block52; else goto block53;
block52:;
// line 1146
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1147
org$frostlang$frostc$ASTNode* $tmp2734 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
org$frostlang$frostc$ASTNode* $tmp2735 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2736 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2737 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2734;
block53:;
// line 1176
// line 1177
frost$collections$Stack** $tmp2739 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2740 = *$tmp2739;
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0};
frost$core$Object* $tmp2742 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2740, $tmp2741);
bool $tmp2743 = ((frost$core$Bit$wrapper*) $tmp2742)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2742);
if ($tmp2743) goto block54; else goto block56;
block54:;
// line 1178
org$frostlang$frostc$parser$Token $tmp2744 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local14) = $tmp2744;
// line 1179
org$frostlang$frostc$parser$Token $tmp2745 = *(&local14);
org$frostlang$frostc$parser$Token$Kind $tmp2746 = $tmp2745.kind;
frost$core$Int64 $tmp2747 = $tmp2746.$rawValue;
frost$core$Int64 $tmp2748 = (frost$core$Int64) {102};
frost$core$Bit $tmp2749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2747, $tmp2748);
bool $tmp2750 = $tmp2749.value;
if ($tmp2750) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2751 = (frost$core$Int64) {109};
frost$core$Bit $tmp2752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2747, $tmp2751);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2754 = (frost$core$Int64) {93};
frost$core$Bit $tmp2755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2747, $tmp2754);
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block58; else goto block61;
block58:;
// line 1181
frost$core$Bit $tmp2757 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2757;
goto block57;
block61:;
frost$core$Int64 $tmp2758 = (frost$core$Int64) {107};
frost$core$Bit $tmp2759 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2747, $tmp2758);
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block62; else goto block63;
block62:;
// line 1184
org$frostlang$frostc$parser$Token $tmp2761 = *(&local14);
org$frostlang$frostc$Position $tmp2762 = $tmp2761.position;
frost$core$Int64 $tmp2763 = $tmp2762.line;
org$frostlang$frostc$parser$Token$nullable $tmp2764 = *(&local12);
org$frostlang$frostc$Position $tmp2765 = ((org$frostlang$frostc$parser$Token) $tmp2764.value).position;
frost$core$Int64 $tmp2766 = $tmp2765.line;
frost$core$Bit $tmp2767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2763, $tmp2766);
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block64; else goto block65;
block64:;
org$frostlang$frostc$parser$Token $tmp2769 = *(&local14);
org$frostlang$frostc$Position $tmp2770 = $tmp2769.position;
frost$core$Int64 $tmp2771 = $tmp2770.column;
org$frostlang$frostc$parser$Token$nullable $tmp2772 = *(&local12);
org$frostlang$frostc$Position $tmp2773 = ((org$frostlang$frostc$parser$Token) $tmp2772.value).position;
frost$core$Int64 $tmp2774 = $tmp2773.column;
frost$core$Int64 $tmp2775 = (frost$core$Int64) {1};
int64_t $tmp2776 = $tmp2774.value;
int64_t $tmp2777 = $tmp2775.value;
int64_t $tmp2778 = $tmp2776 + $tmp2777;
frost$core$Int64 $tmp2779 = (frost$core$Int64) {$tmp2778};
frost$core$Bit $tmp2780 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2771, $tmp2779);
*(&local15) = $tmp2780;
goto block66;
block65:;
*(&local15) = $tmp2767;
goto block66;
block66:;
frost$core$Bit $tmp2781 = *(&local15);
*(&local13) = $tmp2781;
goto block57;
block63:;
// line 1188
frost$core$Bit $tmp2782 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2782;
goto block57;
block57:;
// line 1191
frost$core$Bit $tmp2783 = *(&local13);
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block67; else goto block68;
block67:;
// line 1192
org$frostlang$frostc$parser$Token $tmp2785 = *(&local14);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2785);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1196
frost$core$Bit $tmp2786 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2786;
goto block55;
block55:;
// line 1198
frost$core$Bit $tmp2787 = *(&local13);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block69; else goto block71;
block69:;
// line 1199
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1200
org$frostlang$frostc$ASTNode* $tmp2789 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2790 = (frost$core$Int64) {21};
org$frostlang$frostc$ASTNode* $tmp2791 = *(&local0);
$fn2793 $tmp2792 = ($fn2793) $tmp2791->$class->vtable[2];
org$frostlang$frostc$Position $tmp2794 = $tmp2792($tmp2791);
frost$core$String* $tmp2795 = *(&local9);
frost$collections$Array* $tmp2796 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2797 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2796);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2789, $tmp2790, $tmp2794, $tmp2795, $tmp2797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
org$frostlang$frostc$ASTNode* $tmp2798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local0) = $tmp2789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
// line 1202
org$frostlang$frostc$ASTNode* $tmp2799 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2800 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2801 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1205
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1206
org$frostlang$frostc$ASTNode* $tmp2802 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
org$frostlang$frostc$ASTNode* $tmp2803 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2804 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2805 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2802;
block70:;
org$frostlang$frostc$ASTNode* $tmp2807 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2808 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1209
org$frostlang$frostc$ASTNode* $tmp2809 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
frost$core$String* $tmp2810 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2811 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2809;
block42:;
// line 1212
org$frostlang$frostc$parser$Token $tmp2812 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2812);
// line 1213
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
org$frostlang$frostc$ASTNode* $tmp2814 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2813;
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
// line 1223
org$frostlang$frostc$ASTNode* $tmp2815 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$ASTNode* $tmp2816 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local0) = $tmp2815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
// line 1224
org$frostlang$frostc$ASTNode* $tmp2817 = *(&local0);
frost$core$Bit $tmp2818 = frost$core$Bit$init$builtin_bit($tmp2817 == NULL);
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block1; else goto block2;
block1:;
// line 1225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1227
goto block3;
block3:;
// line 1228
frost$core$Int64 $tmp2821 = (frost$core$Int64) {61};
org$frostlang$frostc$parser$Token$Kind $tmp2822 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2821);
org$frostlang$frostc$parser$Token$nullable $tmp2823 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2822);
*(&local1) = $tmp2823;
// line 1229
org$frostlang$frostc$parser$Token$nullable $tmp2824 = *(&local1);
frost$core$Bit $tmp2825 = frost$core$Bit$init$builtin_bit(!$tmp2824.nonnull);
bool $tmp2826 = $tmp2825.value;
if ($tmp2826) goto block5; else goto block6;
block5:;
// line 1230
goto block4;
block6:;
// line 1232
org$frostlang$frostc$ASTNode* $tmp2827 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
org$frostlang$frostc$ASTNode* $tmp2828 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local2) = $tmp2827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// line 1233
org$frostlang$frostc$ASTNode* $tmp2829 = *(&local2);
frost$core$Bit $tmp2830 = frost$core$Bit$init$builtin_bit($tmp2829 == NULL);
bool $tmp2831 = $tmp2830.value;
if ($tmp2831) goto block7; else goto block8;
block7:;
// line 1234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2832 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1236
org$frostlang$frostc$ASTNode* $tmp2834 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2835 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp2836 = *(&local1);
org$frostlang$frostc$Position $tmp2837 = ((org$frostlang$frostc$parser$Token) $tmp2836.value).position;
org$frostlang$frostc$ASTNode* $tmp2838 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp2839 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2840 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp2839.value));
org$frostlang$frostc$ASTNode* $tmp2841 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2834, $tmp2835, $tmp2837, $tmp2838, $tmp2840, $tmp2841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
org$frostlang$frostc$ASTNode* $tmp2842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local0) = $tmp2834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
org$frostlang$frostc$ASTNode* $tmp2843 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1238
org$frostlang$frostc$ASTNode* $tmp2844 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
org$frostlang$frostc$ASTNode* $tmp2845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2844;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1245
org$frostlang$frostc$parser$Token $tmp2846 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2846;
// line 1246
org$frostlang$frostc$parser$Token $tmp2847 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2848 = $tmp2847.kind;
frost$core$Int64 $tmp2849 = $tmp2848.$rawValue;
frost$core$Int64 $tmp2850 = (frost$core$Int64) {56};
frost$core$Bit $tmp2851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2849, $tmp2850);
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2853 = (frost$core$Int64) {53};
frost$core$Bit $tmp2854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2849, $tmp2853);
bool $tmp2855 = $tmp2854.value;
if ($tmp2855) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2856 = (frost$core$Int64) {54};
frost$core$Bit $tmp2857 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2849, $tmp2856);
bool $tmp2858 = $tmp2857.value;
if ($tmp2858) goto block2; else goto block5;
block2:;
// line 1248
org$frostlang$frostc$ASTNode* $tmp2859 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
org$frostlang$frostc$ASTNode* $tmp2860 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local1) = $tmp2859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
// line 1249
org$frostlang$frostc$ASTNode* $tmp2861 = *(&local1);
frost$core$Bit $tmp2862 = frost$core$Bit$init$builtin_bit($tmp2861 == NULL);
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block6; else goto block7;
block6:;
// line 1250
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 1252
org$frostlang$frostc$ASTNode* $tmp2865 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2866 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token $tmp2867 = *(&local0);
org$frostlang$frostc$Position $tmp2868 = $tmp2867.position;
org$frostlang$frostc$parser$Token $tmp2869 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator $tmp2870 = org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator($tmp2869);
org$frostlang$frostc$ASTNode* $tmp2871 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode($tmp2865, $tmp2866, $tmp2868, $tmp2870, $tmp2871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
org$frostlang$frostc$ASTNode* $tmp2872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2865;
block5:;
// line 1255
org$frostlang$frostc$parser$Token $tmp2873 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2873);
// line 1256
org$frostlang$frostc$ASTNode* $tmp2874 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
return $tmp2874;
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
// line 1268
org$frostlang$frostc$ASTNode* $tmp2875 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
org$frostlang$frostc$ASTNode* $tmp2876 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local0) = $tmp2875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
// line 1269
org$frostlang$frostc$ASTNode* $tmp2877 = *(&local0);
frost$core$Bit $tmp2878 = frost$core$Bit$init$builtin_bit($tmp2877 == NULL);
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block1; else goto block2;
block1:;
// line 1270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2880 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1272
goto block3;
block3:;
// line 1273
org$frostlang$frostc$parser$Token $tmp2881 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2881;
// line 1274
org$frostlang$frostc$parser$Token $tmp2882 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2883 = $tmp2882.kind;
frost$core$Int64 $tmp2884 = $tmp2883.$rawValue;
frost$core$Int64 $tmp2885 = (frost$core$Int64) {57};
frost$core$Bit $tmp2886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2885);
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2888 = (frost$core$Int64) {58};
frost$core$Bit $tmp2889 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2888);
bool $tmp2890 = $tmp2889.value;
if ($tmp2890) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2891 = (frost$core$Int64) {59};
frost$core$Bit $tmp2892 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2891);
bool $tmp2893 = $tmp2892.value;
if ($tmp2893) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2894 = (frost$core$Int64) {60};
frost$core$Bit $tmp2895 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2894);
bool $tmp2896 = $tmp2895.value;
if ($tmp2896) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2897 = (frost$core$Int64) {76};
frost$core$Bit $tmp2898 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2897);
bool $tmp2899 = $tmp2898.value;
if ($tmp2899) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2900 = (frost$core$Int64) {71};
frost$core$Bit $tmp2901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2900);
bool $tmp2902 = $tmp2901.value;
if ($tmp2902) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp2903 = (frost$core$Int64) {73};
frost$core$Bit $tmp2904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2903);
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block6; else goto block13;
block6:;
// line 1277
org$frostlang$frostc$ASTNode* $tmp2906 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local2) = $tmp2906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
// line 1278
org$frostlang$frostc$ASTNode* $tmp2908 = *(&local2);
frost$core$Bit $tmp2909 = frost$core$Bit$init$builtin_bit($tmp2908 == NULL);
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block14; else goto block15;
block14:;
// line 1279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2911 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2912 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1281
org$frostlang$frostc$ASTNode* $tmp2913 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2914 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2915 = *(&local1);
org$frostlang$frostc$Position $tmp2916 = $tmp2915.position;
org$frostlang$frostc$ASTNode* $tmp2917 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2918 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2919 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2918);
org$frostlang$frostc$ASTNode* $tmp2920 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2913, $tmp2914, $tmp2916, $tmp2917, $tmp2919, $tmp2920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$ASTNode* $tmp2921 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
*(&local0) = $tmp2913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$ASTNode* $tmp2922 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2923 = (frost$core$Int64) {67};
frost$core$Bit $tmp2924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2884, $tmp2923);
bool $tmp2925 = $tmp2924.value;
if ($tmp2925) goto block16; else goto block17;
block16:;
// line 1285
org$frostlang$frostc$parser$Token $tmp2926 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2926;
// line 1286
org$frostlang$frostc$parser$Token $tmp2927 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2928 = $tmp2927.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2929;
$tmp2929 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2929->value = $tmp2928;
frost$core$Int64 $tmp2930 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2931 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2930);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2932;
$tmp2932 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2932->value = $tmp2931;
ITable* $tmp2933 = ((frost$core$Equatable*) $tmp2929)->$class->itable;
while ($tmp2933->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2933 = $tmp2933->next;
}
$fn2935 $tmp2934 = $tmp2933->methods[0];
frost$core$Bit $tmp2936 = $tmp2934(((frost$core$Equatable*) $tmp2929), ((frost$core$Equatable*) $tmp2932));
bool $tmp2937 = $tmp2936.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2932)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2929)));
if ($tmp2937) goto block18; else goto block20;
block18:;
// line 1288
org$frostlang$frostc$ASTNode* $tmp2938 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local4) = $tmp2938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// line 1289
org$frostlang$frostc$ASTNode* $tmp2940 = *(&local4);
frost$core$Bit $tmp2941 = frost$core$Bit$init$builtin_bit($tmp2940 == NULL);
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block21; else goto block22;
block21:;
// line 1290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2943 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1292
org$frostlang$frostc$ASTNode* $tmp2945 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2946 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2947 = *(&local1);
org$frostlang$frostc$Position $tmp2948 = $tmp2947.position;
org$frostlang$frostc$ASTNode* $tmp2949 = *(&local0);
frost$core$Int64 $tmp2950 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2951 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2950);
org$frostlang$frostc$ASTNode* $tmp2952 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2945, $tmp2946, $tmp2948, $tmp2949, $tmp2951, $tmp2952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
org$frostlang$frostc$ASTNode* $tmp2953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local0) = $tmp2945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1296
org$frostlang$frostc$parser$Token $tmp2955 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2955);
// line 1297
org$frostlang$frostc$parser$Token $tmp2956 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2956);
// line 1298
org$frostlang$frostc$ASTNode* $tmp2957 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
org$frostlang$frostc$ASTNode* $tmp2958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2957;
block19:;
goto block5;
block17:;
// line 1302
org$frostlang$frostc$parser$Token $tmp2959 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2959);
// line 1303
org$frostlang$frostc$ASTNode* $tmp2960 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
org$frostlang$frostc$ASTNode* $tmp2961 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2960;
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
// line 1314
org$frostlang$frostc$ASTNode* $tmp2962 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local0) = $tmp2962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
// line 1315
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local0);
frost$core$Bit $tmp2965 = frost$core$Bit$init$builtin_bit($tmp2964 == NULL);
bool $tmp2966 = $tmp2965.value;
if ($tmp2966) goto block1; else goto block2;
block1:;
// line 1316
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1318
goto block3;
block3:;
// line 1319
org$frostlang$frostc$parser$Token $tmp2968 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2968;
// line 1320
org$frostlang$frostc$parser$Token $tmp2969 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2970 = $tmp2969.kind;
frost$core$Int64 $tmp2971 = $tmp2970.$rawValue;
frost$core$Int64 $tmp2972 = (frost$core$Int64) {55};
frost$core$Bit $tmp2973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2971, $tmp2972);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2975 = (frost$core$Int64) {56};
frost$core$Bit $tmp2976 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2971, $tmp2975);
bool $tmp2977 = $tmp2976.value;
if ($tmp2977) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2978 = (frost$core$Int64) {75};
frost$core$Bit $tmp2979 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2971, $tmp2978);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block6; else goto block9;
block6:;
// line 1322
org$frostlang$frostc$ASTNode* $tmp2981 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local2) = $tmp2981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
// line 1323
org$frostlang$frostc$ASTNode* $tmp2983 = *(&local2);
frost$core$Bit $tmp2984 = frost$core$Bit$init$builtin_bit($tmp2983 == NULL);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block10; else goto block11;
block10:;
// line 1324
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2987 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1326
org$frostlang$frostc$ASTNode* $tmp2988 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2989 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2990 = *(&local1);
org$frostlang$frostc$Position $tmp2991 = $tmp2990.position;
org$frostlang$frostc$ASTNode* $tmp2992 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2993 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2994 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2993);
org$frostlang$frostc$ASTNode* $tmp2995 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2988, $tmp2989, $tmp2991, $tmp2992, $tmp2994, $tmp2995);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$ASTNode* $tmp2996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
*(&local0) = $tmp2988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1330
org$frostlang$frostc$parser$Token $tmp2998 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2998);
// line 1331
org$frostlang$frostc$ASTNode* $tmp2999 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
org$frostlang$frostc$ASTNode* $tmp3000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2999;
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
// line 1342
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1343
org$frostlang$frostc$parser$Token $tmp3001 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3002 = $tmp3001.kind;
frost$core$Int64 $tmp3003 = $tmp3002.$rawValue;
frost$core$Int64 $tmp3004 = (frost$core$Int64) {101};
frost$core$Bit $tmp3005 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3003, $tmp3004);
bool $tmp3006 = $tmp3005.value;
if ($tmp3006) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp3007 = (frost$core$Int64) {100};
frost$core$Bit $tmp3008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3003, $tmp3007);
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block2; else goto block4;
block2:;
// line 1345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3010 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1348
org$frostlang$frostc$ASTNode* $tmp3011 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
org$frostlang$frostc$ASTNode* $tmp3012 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local0) = $tmp3011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
// line 1349
org$frostlang$frostc$ASTNode* $tmp3013 = *(&local0);
frost$core$Bit $tmp3014 = frost$core$Bit$init$builtin_bit($tmp3013 == NULL);
bool $tmp3015 = $tmp3014.value;
if ($tmp3015) goto block5; else goto block6;
block5:;
// line 1350
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1354
org$frostlang$frostc$parser$Token $tmp3017 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3017;
// line 1355
org$frostlang$frostc$parser$Token $tmp3018 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3019 = $tmp3018.kind;
frost$core$Int64 $tmp3020 = $tmp3019.$rawValue;
frost$core$Int64 $tmp3021 = (frost$core$Int64) {101};
frost$core$Bit $tmp3022 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3020, $tmp3021);
bool $tmp3023 = $tmp3022.value;
if ($tmp3023) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3024 = (frost$core$Int64) {100};
frost$core$Bit $tmp3025 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3020, $tmp3024);
bool $tmp3026 = $tmp3025.value;
if ($tmp3026) goto block8; else goto block10;
block8:;
// line 1357
org$frostlang$frostc$parser$Token $tmp3027 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3027;
// line 1358
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1359
org$frostlang$frostc$parser$Token $tmp3028 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3029 = $tmp3028.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3030;
$tmp3030 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3030->value = $tmp3029;
frost$core$Int64 $tmp3031 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp3032 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3031);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3033;
$tmp3033 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3033->value = $tmp3032;
ITable* $tmp3034 = ((frost$core$Equatable*) $tmp3030)->$class->itable;
while ($tmp3034->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3034 = $tmp3034->next;
}
$fn3036 $tmp3035 = $tmp3034->methods[1];
frost$core$Bit $tmp3037 = $tmp3035(((frost$core$Equatable*) $tmp3030), ((frost$core$Equatable*) $tmp3033));
bool $tmp3038 = $tmp3037.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3033)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3030)));
if ($tmp3038) goto block15; else goto block13;
block15:;
org$frostlang$frostc$parser$Token $tmp3039 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3040 = $tmp3039.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3041;
$tmp3041 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3041->value = $tmp3040;
frost$core$Int64 $tmp3042 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3043 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3042);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3044;
$tmp3044 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3044->value = $tmp3043;
ITable* $tmp3045 = ((frost$core$Equatable*) $tmp3041)->$class->itable;
while ($tmp3045->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3045 = $tmp3045->next;
}
$fn3047 $tmp3046 = $tmp3045->methods[1];
frost$core$Bit $tmp3048 = $tmp3046(((frost$core$Equatable*) $tmp3041), ((frost$core$Equatable*) $tmp3044));
bool $tmp3049 = $tmp3048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3044)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3041)));
if ($tmp3049) goto block14; else goto block13;
block14:;
org$frostlang$frostc$parser$Token $tmp3050 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3051 = $tmp3050.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3052;
$tmp3052 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3052->value = $tmp3051;
frost$core$Int64 $tmp3053 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3054 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3053);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3055;
$tmp3055 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3055->value = $tmp3054;
ITable* $tmp3056 = ((frost$core$Equatable*) $tmp3052)->$class->itable;
while ($tmp3056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3056 = $tmp3056->next;
}
$fn3058 $tmp3057 = $tmp3056->methods[1];
frost$core$Bit $tmp3059 = $tmp3057(((frost$core$Equatable*) $tmp3052), ((frost$core$Equatable*) $tmp3055));
bool $tmp3060 = $tmp3059.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3052)));
if ($tmp3060) goto block11; else goto block13;
block11:;
// line 1361
org$frostlang$frostc$ASTNode* $tmp3061 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
org$frostlang$frostc$ASTNode* $tmp3062 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local3) = $tmp3061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
// line 1362
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local3);
frost$core$Bit $tmp3064 = frost$core$Bit$init$builtin_bit($tmp3063 == NULL);
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block16; else goto block17;
block16:;
// line 1363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3066 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3067 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block12;
block13:;
// line 1
// line 1367
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block12:;
// line 1369
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1370
frost$core$Int64 $tmp3069 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3070 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3069);
org$frostlang$frostc$parser$Token$nullable $tmp3071 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3070);
frost$core$Bit $tmp3072 = frost$core$Bit$init$builtin_bit($tmp3071.nonnull);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block18; else goto block20;
block18:;
// line 1371
org$frostlang$frostc$ASTNode* $tmp3074 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local4) = $tmp3074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
// line 1372
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local4);
frost$core$Bit $tmp3077 = frost$core$Bit$init$builtin_bit($tmp3076 == NULL);
bool $tmp3078 = $tmp3077.value;
if ($tmp3078) goto block21; else goto block22;
block21:;
// line 1373
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3079 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3080 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3081 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 1377
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3082 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block19:;
// line 1379
org$frostlang$frostc$ASTNode* $tmp3083 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3084 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3085 = *(&local1);
org$frostlang$frostc$Position $tmp3086 = $tmp3085.position;
org$frostlang$frostc$ASTNode* $tmp3087 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3088 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3089 = $tmp3088.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3090;
$tmp3090 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3090->value = $tmp3089;
frost$core$Int64 $tmp3091 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3092 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3091);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3093;
$tmp3093 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3093->value = $tmp3092;
ITable* $tmp3094 = ((frost$core$Equatable*) $tmp3090)->$class->itable;
while ($tmp3094->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3094 = $tmp3094->next;
}
$fn3096 $tmp3095 = $tmp3094->methods[0];
frost$core$Bit $tmp3097 = $tmp3095(((frost$core$Equatable*) $tmp3090), ((frost$core$Equatable*) $tmp3093));
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3099 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3083, $tmp3084, $tmp3086, $tmp3087, $tmp3097, $tmp3098, $tmp3099);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3093)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3090)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
org$frostlang$frostc$ASTNode* $tmp3100 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3101 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3083;
block10:;
// line 1383
org$frostlang$frostc$parser$Token $tmp3103 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3103);
// line 1384
org$frostlang$frostc$ASTNode* $tmp3104 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
org$frostlang$frostc$ASTNode* $tmp3105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3104;
block7:;
goto block23;
block23:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1394
org$frostlang$frostc$ASTNode* $tmp3106 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
org$frostlang$frostc$ASTNode* $tmp3107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local0) = $tmp3106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// line 1395
org$frostlang$frostc$ASTNode* $tmp3108 = *(&local0);
frost$core$Bit $tmp3109 = frost$core$Bit$init$builtin_bit($tmp3108 == NULL);
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block1; else goto block2;
block1:;
// line 1396
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1398
goto block3;
block3:;
// line 1399
org$frostlang$frostc$parser$Token $tmp3112 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3112;
// line 1400
org$frostlang$frostc$parser$Token $tmp3113 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3114 = $tmp3113.kind;
frost$core$Int64 $tmp3115 = $tmp3114.$rawValue;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {62};
frost$core$Bit $tmp3117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3116);
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3119 = (frost$core$Int64) {63};
frost$core$Bit $tmp3120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3119);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3122 = (frost$core$Int64) {64};
frost$core$Bit $tmp3123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3122);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3125 = (frost$core$Int64) {65};
frost$core$Bit $tmp3126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3125);
bool $tmp3127 = $tmp3126.value;
if ($tmp3127) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3128 = (frost$core$Int64) {66};
frost$core$Bit $tmp3129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3128);
bool $tmp3130 = $tmp3129.value;
if ($tmp3130) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3131 = (frost$core$Int64) {67};
frost$core$Bit $tmp3132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3131);
bool $tmp3133 = $tmp3132.value;
if ($tmp3133) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3134 = (frost$core$Int64) {68};
frost$core$Bit $tmp3135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3134);
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3137 = (frost$core$Int64) {69};
frost$core$Bit $tmp3138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3115, $tmp3137);
bool $tmp3139 = $tmp3138.value;
if ($tmp3139) goto block6; else goto block14;
block6:;
// line 1409
org$frostlang$frostc$ASTNode* $tmp3140 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
org$frostlang$frostc$ASTNode* $tmp3141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
*(&local2) = $tmp3140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
// line 1410
org$frostlang$frostc$ASTNode* $tmp3142 = *(&local2);
frost$core$Bit $tmp3143 = frost$core$Bit$init$builtin_bit($tmp3142 == NULL);
bool $tmp3144 = $tmp3143.value;
if ($tmp3144) goto block15; else goto block16;
block15:;
// line 1411
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1413
org$frostlang$frostc$ASTNode* $tmp3147 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3148 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3149 = *(&local1);
org$frostlang$frostc$Position $tmp3150 = $tmp3149.position;
org$frostlang$frostc$ASTNode* $tmp3151 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3152 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3153 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3152);
org$frostlang$frostc$ASTNode* $tmp3154 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3147, $tmp3148, $tmp3150, $tmp3151, $tmp3153, $tmp3154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
org$frostlang$frostc$ASTNode* $tmp3155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
*(&local0) = $tmp3147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
org$frostlang$frostc$ASTNode* $tmp3156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1417
org$frostlang$frostc$parser$Token $tmp3157 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3157);
// line 1418
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
org$frostlang$frostc$ASTNode* $tmp3159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3158;
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
// line 1428
org$frostlang$frostc$ASTNode* $tmp3160 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
org$frostlang$frostc$ASTNode* $tmp3161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local0) = $tmp3160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
// line 1429
org$frostlang$frostc$ASTNode* $tmp3162 = *(&local0);
frost$core$Bit $tmp3163 = frost$core$Bit$init$builtin_bit($tmp3162 == NULL);
bool $tmp3164 = $tmp3163.value;
if ($tmp3164) goto block1; else goto block2;
block1:;
// line 1430
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1432
goto block3;
block3:;
// line 1433
org$frostlang$frostc$parser$Token $tmp3166 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3166;
// line 1434
org$frostlang$frostc$parser$Token $tmp3167 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3168 = $tmp3167.kind;
frost$core$Int64 $tmp3169 = $tmp3168.$rawValue;
frost$core$Int64 $tmp3170 = (frost$core$Int64) {70};
frost$core$Bit $tmp3171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3169, $tmp3170);
bool $tmp3172 = $tmp3171.value;
if ($tmp3172) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3173 = (frost$core$Int64) {74};
frost$core$Bit $tmp3174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3169, $tmp3173);
bool $tmp3175 = $tmp3174.value;
if ($tmp3175) goto block6; else goto block8;
block6:;
// line 1436
org$frostlang$frostc$ASTNode* $tmp3176 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
org$frostlang$frostc$ASTNode* $tmp3177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
*(&local2) = $tmp3176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
// line 1437
org$frostlang$frostc$ASTNode* $tmp3178 = *(&local2);
frost$core$Bit $tmp3179 = frost$core$Bit$init$builtin_bit($tmp3178 == NULL);
bool $tmp3180 = $tmp3179.value;
if ($tmp3180) goto block9; else goto block10;
block9:;
// line 1438
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1440
org$frostlang$frostc$ASTNode* $tmp3183 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3184 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3185 = *(&local1);
org$frostlang$frostc$Position $tmp3186 = $tmp3185.position;
org$frostlang$frostc$ASTNode* $tmp3187 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3188 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3189 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3188);
org$frostlang$frostc$ASTNode* $tmp3190 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3183, $tmp3184, $tmp3186, $tmp3187, $tmp3189, $tmp3190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
org$frostlang$frostc$ASTNode* $tmp3191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local0) = $tmp3183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
org$frostlang$frostc$ASTNode* $tmp3192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1444
org$frostlang$frostc$parser$Token $tmp3193 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3193);
// line 1445
org$frostlang$frostc$ASTNode* $tmp3194 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
org$frostlang$frostc$ASTNode* $tmp3195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3194;
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
// line 1455
org$frostlang$frostc$ASTNode* $tmp3196 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
org$frostlang$frostc$ASTNode* $tmp3197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
*(&local0) = $tmp3196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
// line 1456
org$frostlang$frostc$ASTNode* $tmp3198 = *(&local0);
frost$core$Bit $tmp3199 = frost$core$Bit$init$builtin_bit($tmp3198 == NULL);
bool $tmp3200 = $tmp3199.value;
if ($tmp3200) goto block1; else goto block2;
block1:;
// line 1457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1459
goto block3;
block3:;
// line 1460
frost$core$Int64 $tmp3202 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3203 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3202);
org$frostlang$frostc$parser$Token$nullable $tmp3204 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3203);
*(&local1) = $tmp3204;
// line 1461
org$frostlang$frostc$parser$Token$nullable $tmp3205 = *(&local1);
frost$core$Bit $tmp3206 = frost$core$Bit$init$builtin_bit(!$tmp3205.nonnull);
bool $tmp3207 = $tmp3206.value;
if ($tmp3207) goto block5; else goto block6;
block5:;
// line 1462
goto block4;
block6:;
// line 1464
org$frostlang$frostc$ASTNode* $tmp3208 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
org$frostlang$frostc$ASTNode* $tmp3209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local2) = $tmp3208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
// line 1465
org$frostlang$frostc$ASTNode* $tmp3210 = *(&local2);
frost$core$Bit $tmp3211 = frost$core$Bit$init$builtin_bit($tmp3210 == NULL);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block7; else goto block8;
block7:;
// line 1466
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3214 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1468
org$frostlang$frostc$ASTNode* $tmp3215 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3216 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3217 = *(&local1);
org$frostlang$frostc$Position $tmp3218 = ((org$frostlang$frostc$parser$Token) $tmp3217.value).position;
org$frostlang$frostc$ASTNode* $tmp3219 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3220 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3221 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3220.value));
org$frostlang$frostc$ASTNode* $tmp3222 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3215, $tmp3216, $tmp3218, $tmp3219, $tmp3221, $tmp3222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
org$frostlang$frostc$ASTNode* $tmp3223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local0) = $tmp3215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
org$frostlang$frostc$ASTNode* $tmp3224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1470
org$frostlang$frostc$ASTNode* $tmp3225 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
org$frostlang$frostc$ASTNode* $tmp3226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3225;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1477
frost$core$Int64 $tmp3227 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3228 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3227);
org$frostlang$frostc$parser$Token$nullable $tmp3229 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3228, &$s3230);
*(&local0) = $tmp3229;
// line 1478
org$frostlang$frostc$parser$Token$nullable $tmp3231 = *(&local0);
frost$core$Bit $tmp3232 = frost$core$Bit$init$builtin_bit(!$tmp3231.nonnull);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block1; else goto block2;
block1:;
// line 1479
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1481
org$frostlang$frostc$ASTNode* $tmp3234 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local1) = $tmp3234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// line 1482
org$frostlang$frostc$ASTNode* $tmp3236 = *(&local1);
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit($tmp3236 == NULL);
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block3; else goto block4;
block3:;
// line 1483
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1485
org$frostlang$frostc$FixedArray* $tmp3240 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
org$frostlang$frostc$FixedArray* $tmp3241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
*(&local2) = $tmp3240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
// line 1486
org$frostlang$frostc$FixedArray* $tmp3242 = *(&local2);
frost$core$Bit $tmp3243 = frost$core$Bit$init$builtin_bit($tmp3242 == NULL);
bool $tmp3244 = $tmp3243.value;
if ($tmp3244) goto block5; else goto block6;
block5:;
// line 1487
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1489
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1490
frost$core$Int64 $tmp3247 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3248 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3247);
org$frostlang$frostc$parser$Token$nullable $tmp3249 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3248);
frost$core$Bit $tmp3250 = frost$core$Bit$init$builtin_bit($tmp3249.nonnull);
bool $tmp3251 = $tmp3250.value;
if ($tmp3251) goto block7; else goto block9;
block7:;
// line 1491
org$frostlang$frostc$parser$Token $tmp3252 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3253 = $tmp3252.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3254;
$tmp3254 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3254->value = $tmp3253;
frost$core$Int64 $tmp3255 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3256 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3255);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3257;
$tmp3257 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3257->value = $tmp3256;
ITable* $tmp3258 = ((frost$core$Equatable*) $tmp3254)->$class->itable;
while ($tmp3258->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3258 = $tmp3258->next;
}
$fn3260 $tmp3259 = $tmp3258->methods[0];
frost$core$Bit $tmp3261 = $tmp3259(((frost$core$Equatable*) $tmp3254), ((frost$core$Equatable*) $tmp3257));
bool $tmp3262 = $tmp3261.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3257)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3254)));
if ($tmp3262) goto block10; else goto block12;
block10:;
// line 1492
org$frostlang$frostc$ASTNode* $tmp3263 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
org$frostlang$frostc$ASTNode* $tmp3264 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local3) = $tmp3263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
// line 1493
org$frostlang$frostc$ASTNode* $tmp3265 = *(&local3);
frost$core$Bit $tmp3266 = frost$core$Bit$init$builtin_bit($tmp3265 == NULL);
bool $tmp3267 = $tmp3266.value;
if ($tmp3267) goto block13; else goto block14;
block13:;
// line 1494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3269 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3270 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1498
org$frostlang$frostc$ASTNode* $tmp3271 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
org$frostlang$frostc$ASTNode* $tmp3272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
*(&local3) = $tmp3271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
// line 1499
org$frostlang$frostc$ASTNode* $tmp3273 = *(&local3);
frost$core$Bit $tmp3274 = frost$core$Bit$init$builtin_bit($tmp3273 == NULL);
bool $tmp3275 = $tmp3274.value;
if ($tmp3275) goto block15; else goto block16;
block15:;
// line 1500
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3276 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3277 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3279 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1507
org$frostlang$frostc$ASTNode* $tmp3280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3281 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3282 = *(&local0);
org$frostlang$frostc$Position $tmp3283 = ((org$frostlang$frostc$parser$Token) $tmp3282.value).position;
org$frostlang$frostc$ASTNode* $tmp3284 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3285 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3286 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3280, $tmp3281, $tmp3283, $tmp3284, $tmp3285, $tmp3286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
org$frostlang$frostc$ASTNode* $tmp3287 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3288 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3280;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1514
frost$core$Int64 $tmp3290 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3291 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3290);
org$frostlang$frostc$parser$Token$nullable $tmp3292 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3291, &$s3293);
frost$core$Bit $tmp3294 = frost$core$Bit$init$builtin_bit(!$tmp3292.nonnull);
bool $tmp3295 = $tmp3294.value;
if ($tmp3295) goto block1; else goto block2;
block1:;
// line 1515
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1517
frost$core$Bit $tmp3296 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3297 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
return $tmp3297;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1524
frost$core$Int64 $tmp3298 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3299 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3298);
org$frostlang$frostc$parser$Token$nullable $tmp3300 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3299, &$s3301);
*(&local0) = $tmp3300;
// line 1525
org$frostlang$frostc$parser$Token$nullable $tmp3302 = *(&local0);
frost$core$Bit $tmp3303 = frost$core$Bit$init$builtin_bit(!$tmp3302.nonnull);
bool $tmp3304 = $tmp3303.value;
if ($tmp3304) goto block1; else goto block2;
block1:;
// line 1526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1528
org$frostlang$frostc$parser$Token $tmp3305 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3306 = $tmp3305.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3307;
$tmp3307 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3307->value = $tmp3306;
frost$core$Int64 $tmp3308 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3309 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3308);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3310;
$tmp3310 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3310->value = $tmp3309;
ITable* $tmp3311 = ((frost$core$Equatable*) $tmp3307)->$class->itable;
while ($tmp3311->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3311 = $tmp3311->next;
}
$fn3313 $tmp3312 = $tmp3311->methods[0];
frost$core$Bit $tmp3314 = $tmp3312(((frost$core$Equatable*) $tmp3307), ((frost$core$Equatable*) $tmp3310));
bool $tmp3315 = $tmp3314.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3310)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3307)));
if ($tmp3315) goto block3; else goto block4;
block3:;
// line 1529
org$frostlang$frostc$ASTNode* $tmp3316 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
org$frostlang$frostc$ASTNode* $tmp3317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local1) = $tmp3316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
// line 1530
org$frostlang$frostc$ASTNode* $tmp3318 = *(&local1);
frost$core$Bit $tmp3319 = frost$core$Bit$init$builtin_bit($tmp3318 == NULL);
bool $tmp3320 = $tmp3319.value;
if ($tmp3320) goto block5; else goto block6;
block5:;
// line 1531
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1533
org$frostlang$frostc$ASTNode* $tmp3322 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3323 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp3324 = *(&local0);
org$frostlang$frostc$Position $tmp3325 = ((org$frostlang$frostc$parser$Token) $tmp3324.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3326 = *(&local0);
frost$core$String* $tmp3327 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3326.value));
org$frostlang$frostc$ASTNode* $tmp3328 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3322, $tmp3323, $tmp3325, $tmp3327, $tmp3328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
org$frostlang$frostc$ASTNode* $tmp3329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3322;
block4:;
// line 1535
org$frostlang$frostc$ASTNode* $tmp3330 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3331 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3332 = *(&local0);
org$frostlang$frostc$Position $tmp3333 = ((org$frostlang$frostc$parser$Token) $tmp3332.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3334 = *(&local0);
frost$core$String* $tmp3335 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3334.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3330, $tmp3331, $tmp3333, $tmp3335);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
return $tmp3330;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1542
frost$core$Int64 $tmp3336 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3337 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3336);
org$frostlang$frostc$parser$Token$nullable $tmp3338 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3337, &$s3339);
*(&local0) = $tmp3338;
// line 1543
org$frostlang$frostc$parser$Token$nullable $tmp3340 = *(&local0);
frost$core$Bit $tmp3341 = frost$core$Bit$init$builtin_bit(!$tmp3340.nonnull);
bool $tmp3342 = $tmp3341.value;
if ($tmp3342) goto block1; else goto block2;
block1:;
// line 1544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1546
org$frostlang$frostc$ASTNode* $tmp3343 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
org$frostlang$frostc$ASTNode* $tmp3344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
*(&local1) = $tmp3343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
// line 1547
org$frostlang$frostc$ASTNode* $tmp3345 = *(&local1);
frost$core$Bit $tmp3346 = frost$core$Bit$init$builtin_bit($tmp3345 == NULL);
bool $tmp3347 = $tmp3346.value;
if ($tmp3347) goto block3; else goto block4;
block3:;
// line 1548
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1550
frost$core$Int64 $tmp3349 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3350 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3349);
org$frostlang$frostc$parser$Token$nullable $tmp3351 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3350, &$s3352);
frost$core$Bit $tmp3353 = frost$core$Bit$init$builtin_bit(!$tmp3351.nonnull);
bool $tmp3354 = $tmp3353.value;
if ($tmp3354) goto block5; else goto block6;
block5:;
// line 1551
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1553
org$frostlang$frostc$ASTNode* $tmp3356 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
org$frostlang$frostc$ASTNode* $tmp3357 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local2) = $tmp3356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
// line 1554
org$frostlang$frostc$ASTNode* $tmp3358 = *(&local2);
frost$core$Bit $tmp3359 = frost$core$Bit$init$builtin_bit($tmp3358 == NULL);
bool $tmp3360 = $tmp3359.value;
if ($tmp3360) goto block7; else goto block8;
block7:;
// line 1555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3361 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3361));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1557
org$frostlang$frostc$FixedArray* $tmp3363 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
org$frostlang$frostc$FixedArray* $tmp3364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local3) = $tmp3363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
// line 1558
org$frostlang$frostc$FixedArray* $tmp3365 = *(&local3);
frost$core$Bit $tmp3366 = frost$core$Bit$init$builtin_bit($tmp3365 == NULL);
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block9; else goto block10;
block9:;
// line 1559
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3368 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3369 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1561
org$frostlang$frostc$ASTNode* $tmp3371 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3372 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3373 = *(&local0);
org$frostlang$frostc$Position $tmp3374 = ((org$frostlang$frostc$parser$Token) $tmp3373.value).position;
org$frostlang$frostc$ASTNode* $tmp3375 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3376 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3377 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3371, $tmp3372, $tmp3374, param1, $tmp3375, $tmp3376, $tmp3377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
org$frostlang$frostc$FixedArray* $tmp3378 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3379));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3371;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1568
frost$core$Int64 $tmp3381 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3382 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3381);
org$frostlang$frostc$parser$Token$nullable $tmp3383 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3382, &$s3384);
*(&local0) = $tmp3383;
// line 1569
org$frostlang$frostc$parser$Token$nullable $tmp3385 = *(&local0);
frost$core$Bit $tmp3386 = frost$core$Bit$init$builtin_bit(!$tmp3385.nonnull);
bool $tmp3387 = $tmp3386.value;
if ($tmp3387) goto block1; else goto block2;
block1:;
// line 1570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1572
org$frostlang$frostc$ASTNode* $tmp3388 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
org$frostlang$frostc$ASTNode* $tmp3389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
*(&local1) = $tmp3388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
// line 1573
org$frostlang$frostc$ASTNode* $tmp3390 = *(&local1);
frost$core$Bit $tmp3391 = frost$core$Bit$init$builtin_bit($tmp3390 == NULL);
bool $tmp3392 = $tmp3391.value;
if ($tmp3392) goto block3; else goto block4;
block3:;
// line 1574
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1576
org$frostlang$frostc$FixedArray* $tmp3394 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
org$frostlang$frostc$FixedArray* $tmp3395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local2) = $tmp3394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
// line 1577
org$frostlang$frostc$FixedArray* $tmp3396 = *(&local2);
frost$core$Bit $tmp3397 = frost$core$Bit$init$builtin_bit($tmp3396 == NULL);
bool $tmp3398 = $tmp3397.value;
if ($tmp3398) goto block5; else goto block6;
block5:;
// line 1578
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3400 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1580
org$frostlang$frostc$ASTNode* $tmp3401 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3402 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3403 = *(&local0);
org$frostlang$frostc$Position $tmp3404 = ((org$frostlang$frostc$parser$Token) $tmp3403.value).position;
org$frostlang$frostc$ASTNode* $tmp3405 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3406 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3401, $tmp3402, $tmp3404, param1, $tmp3405, $tmp3406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
org$frostlang$frostc$FixedArray* $tmp3407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3401;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1587
frost$core$Int64 $tmp3409 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3410 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3409);
org$frostlang$frostc$parser$Token$nullable $tmp3411 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3410, &$s3412);
*(&local0) = $tmp3411;
// line 1588
org$frostlang$frostc$parser$Token$nullable $tmp3413 = *(&local0);
frost$core$Bit $tmp3414 = frost$core$Bit$init$builtin_bit(!$tmp3413.nonnull);
bool $tmp3415 = $tmp3414.value;
if ($tmp3415) goto block1; else goto block2;
block1:;
// line 1589
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1591
org$frostlang$frostc$FixedArray* $tmp3416 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
org$frostlang$frostc$FixedArray* $tmp3417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local1) = $tmp3416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
// line 1592
org$frostlang$frostc$FixedArray* $tmp3418 = *(&local1);
frost$core$Bit $tmp3419 = frost$core$Bit$init$builtin_bit($tmp3418 == NULL);
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block3; else goto block4;
block3:;
// line 1593
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1595
frost$core$Int64 $tmp3422 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3423 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3422);
org$frostlang$frostc$parser$Token$nullable $tmp3424 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3423, &$s3425);
frost$core$Bit $tmp3426 = frost$core$Bit$init$builtin_bit(!$tmp3424.nonnull);
bool $tmp3427 = $tmp3426.value;
if ($tmp3427) goto block5; else goto block6;
block5:;
// line 1596
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1598
org$frostlang$frostc$ASTNode* $tmp3429 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
org$frostlang$frostc$ASTNode* $tmp3430 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
*(&local2) = $tmp3429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
// line 1599
org$frostlang$frostc$ASTNode* $tmp3431 = *(&local2);
frost$core$Bit $tmp3432 = frost$core$Bit$init$builtin_bit($tmp3431 == NULL);
bool $tmp3433 = $tmp3432.value;
if ($tmp3433) goto block7; else goto block8;
block7:;
// line 1600
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1602
org$frostlang$frostc$ASTNode* $tmp3436 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3437 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3438 = *(&local0);
org$frostlang$frostc$Position $tmp3439 = ((org$frostlang$frostc$parser$Token) $tmp3438.value).position;
org$frostlang$frostc$FixedArray* $tmp3440 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3441 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3436, $tmp3437, $tmp3439, param1, $tmp3440, $tmp3441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
org$frostlang$frostc$ASTNode* $tmp3442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3443 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3436;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1609
frost$core$Int64 $tmp3444 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3445 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3444);
org$frostlang$frostc$parser$Token$nullable $tmp3446 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3445, &$s3447);
*(&local0) = $tmp3446;
// line 1610
org$frostlang$frostc$parser$Token$nullable $tmp3448 = *(&local0);
frost$core$Bit $tmp3449 = frost$core$Bit$init$builtin_bit(!$tmp3448.nonnull);
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block1; else goto block2;
block1:;
// line 1611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1613
org$frostlang$frostc$FixedArray* $tmp3451 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
org$frostlang$frostc$FixedArray* $tmp3452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
*(&local1) = $tmp3451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
// line 1614
org$frostlang$frostc$FixedArray* $tmp3453 = *(&local1);
frost$core$Bit $tmp3454 = frost$core$Bit$init$builtin_bit($tmp3453 == NULL);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block3; else goto block4;
block3:;
// line 1615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1617
org$frostlang$frostc$ASTNode* $tmp3457 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3458 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3459 = *(&local0);
org$frostlang$frostc$Position $tmp3460 = ((org$frostlang$frostc$parser$Token) $tmp3459.value).position;
org$frostlang$frostc$FixedArray* $tmp3461 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3457, $tmp3458, $tmp3460, param1, $tmp3461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
org$frostlang$frostc$FixedArray* $tmp3462 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3457;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1624
frost$core$Int64 $tmp3463 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3464 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3463);
org$frostlang$frostc$parser$Token$nullable $tmp3465 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3464, &$s3466);
*(&local0) = $tmp3465;
// line 1625
org$frostlang$frostc$parser$Token$nullable $tmp3467 = *(&local0);
frost$core$Bit $tmp3468 = frost$core$Bit$init$builtin_bit(!$tmp3467.nonnull);
bool $tmp3469 = $tmp3468.value;
if ($tmp3469) goto block1; else goto block2;
block1:;
// line 1626
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1628
org$frostlang$frostc$ASTNode* $tmp3470 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
org$frostlang$frostc$ASTNode* $tmp3471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
*(&local1) = $tmp3470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
// line 1629
org$frostlang$frostc$ASTNode* $tmp3472 = *(&local1);
frost$core$Bit $tmp3473 = frost$core$Bit$init$builtin_bit($tmp3472 == NULL);
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block3; else goto block4;
block3:;
// line 1630
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1632
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1633
frost$core$Int64 $tmp3476 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3477 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3476);
org$frostlang$frostc$parser$Token$nullable $tmp3478 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3477);
frost$core$Bit $tmp3479 = frost$core$Bit$init$builtin_bit($tmp3478.nonnull);
bool $tmp3480 = $tmp3479.value;
if ($tmp3480) goto block5; else goto block7;
block5:;
// line 1634
org$frostlang$frostc$ASTNode* $tmp3481 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
org$frostlang$frostc$ASTNode* $tmp3482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
*(&local2) = $tmp3481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
// line 1635
org$frostlang$frostc$ASTNode* $tmp3483 = *(&local2);
frost$core$Bit $tmp3484 = frost$core$Bit$init$builtin_bit($tmp3483 == NULL);
bool $tmp3485 = $tmp3484.value;
if ($tmp3485) goto block8; else goto block9;
block8:;
// line 1636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1640
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3488 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1642
org$frostlang$frostc$ASTNode* $tmp3489 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3490 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3491 = *(&local0);
org$frostlang$frostc$Position $tmp3492 = ((org$frostlang$frostc$parser$Token) $tmp3491.value).position;
org$frostlang$frostc$ASTNode* $tmp3493 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3494 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3489, $tmp3490, $tmp3492, $tmp3493, $tmp3494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
org$frostlang$frostc$ASTNode* $tmp3495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3489;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1649
frost$core$Int64 $tmp3497 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3498 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3497);
org$frostlang$frostc$parser$Token$nullable $tmp3499 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3498, &$s3500);
*(&local0) = $tmp3499;
// line 1650
org$frostlang$frostc$parser$Token$nullable $tmp3501 = *(&local0);
frost$core$Bit $tmp3502 = frost$core$Bit$init$builtin_bit(!$tmp3501.nonnull);
bool $tmp3503 = $tmp3502.value;
if ($tmp3503) goto block1; else goto block2;
block1:;
// line 1651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1653
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1654
frost$core$Int64 $tmp3504 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3505 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3504);
org$frostlang$frostc$parser$Token$nullable $tmp3506 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3505);
frost$core$Bit $tmp3507 = frost$core$Bit$init$builtin_bit($tmp3506.nonnull);
bool $tmp3508 = $tmp3507.value;
if ($tmp3508) goto block3; else goto block5;
block3:;
// line 1655
org$frostlang$frostc$ASTNode* $tmp3509 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
org$frostlang$frostc$ASTNode* $tmp3510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
*(&local1) = $tmp3509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
// line 1656
org$frostlang$frostc$ASTNode* $tmp3511 = *(&local1);
frost$core$Bit $tmp3512 = frost$core$Bit$init$builtin_bit($tmp3511 == NULL);
bool $tmp3513 = $tmp3512.value;
if ($tmp3513) goto block6; else goto block7;
block6:;
// line 1657
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3515 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1663
org$frostlang$frostc$ASTNode* $tmp3516 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3517 = (frost$core$Int64) {49};
org$frostlang$frostc$parser$Token$nullable $tmp3518 = *(&local0);
org$frostlang$frostc$Position $tmp3519 = ((org$frostlang$frostc$parser$Token) $tmp3518.value).position;
org$frostlang$frostc$ASTNode* $tmp3520 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3516, $tmp3517, $tmp3519, $tmp3520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
org$frostlang$frostc$ASTNode* $tmp3521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3516;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3522 = &param0->allowLambdas;
frost$core$Bit $tmp3523 = *$tmp3522;
bool $tmp3524 = $tmp3523.value;
if ($tmp3524) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3525 = (frost$core$Int64) {1671};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3526, $tmp3525, &$s3527);
abort(); // unreachable
block1:;
// line 1672
frost$core$Int64 $tmp3528 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3529 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3528);
org$frostlang$frostc$parser$Token$nullable $tmp3530 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3529, &$s3531);
*(&local1) = $tmp3530;
// line 1673
org$frostlang$frostc$parser$Token$nullable $tmp3532 = *(&local1);
frost$core$Bit $tmp3533 = frost$core$Bit$init$builtin_bit(!$tmp3532.nonnull);
bool $tmp3534 = $tmp3533.value;
if ($tmp3534) goto block6; else goto block7;
block6:;
// line 1674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1676
frost$collections$Array* $tmp3535 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3535);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
frost$collections$Array* $tmp3536 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
*(&local2) = $tmp3535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
// line 1677
org$frostlang$frostc$ASTNode* $tmp3537 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
org$frostlang$frostc$ASTNode* $tmp3538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
*(&local3) = $tmp3537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
// line 1678
org$frostlang$frostc$ASTNode* $tmp3539 = *(&local3);
frost$core$Bit $tmp3540 = frost$core$Bit$init$builtin_bit($tmp3539 == NULL);
bool $tmp3541 = $tmp3540.value;
if ($tmp3541) goto block8; else goto block9;
block8:;
// line 1679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3542 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3542));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3543 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3543));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1681
frost$collections$Array* $tmp3544 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3545 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3544, ((frost$core$Object*) $tmp3545));
// line 1682
goto block10;
block10:;
frost$core$Int64 $tmp3546 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3547 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3546);
org$frostlang$frostc$parser$Token$nullable $tmp3548 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3547);
frost$core$Bit $tmp3549 = frost$core$Bit$init$builtin_bit($tmp3548.nonnull);
bool $tmp3550 = $tmp3549.value;
if ($tmp3550) goto block11; else goto block12;
block11:;
// line 1683
org$frostlang$frostc$ASTNode* $tmp3551 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3551));
org$frostlang$frostc$ASTNode* $tmp3552 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
*(&local3) = $tmp3551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3551));
// line 1684
org$frostlang$frostc$ASTNode* $tmp3553 = *(&local3);
frost$core$Bit $tmp3554 = frost$core$Bit$init$builtin_bit($tmp3553 == NULL);
bool $tmp3555 = $tmp3554.value;
if ($tmp3555) goto block13; else goto block14;
block13:;
// line 1685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3556 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3557 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1687
frost$collections$Array* $tmp3558 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3559 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3558, ((frost$core$Object*) $tmp3559));
goto block10;
block12:;
// line 1689
org$frostlang$frostc$FixedArray* $tmp3560 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
org$frostlang$frostc$FixedArray* $tmp3561 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
*(&local4) = $tmp3560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
// line 1690
org$frostlang$frostc$FixedArray* $tmp3562 = *(&local4);
frost$core$Bit $tmp3563 = frost$core$Bit$init$builtin_bit($tmp3562 == NULL);
bool $tmp3564 = $tmp3563.value;
if ($tmp3564) goto block15; else goto block16;
block15:;
// line 1691
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3565 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3566 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1693
org$frostlang$frostc$ASTNode* $tmp3568 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3569 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token$nullable $tmp3570 = *(&local1);
org$frostlang$frostc$Position $tmp3571 = ((org$frostlang$frostc$parser$Token) $tmp3570.value).position;
frost$collections$Array* $tmp3572 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3573 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3572);
org$frostlang$frostc$FixedArray* $tmp3574 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3568, $tmp3569, $tmp3571, $tmp3573, $tmp3574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
org$frostlang$frostc$FixedArray* $tmp3575 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3568;
goto block3;
block3:;
frost$core$Bit* $tmp3578 = &param0->allowLambdas;
frost$core$Bit $tmp3579 = *$tmp3578;
bool $tmp3580 = $tmp3579.value;
if ($tmp3580) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3581 = *(&local0);
return $tmp3581;
block5:;
frost$core$Int64 $tmp3582 = (frost$core$Int64) {1671};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3583, $tmp3582, &$s3584);
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
// line 1700
frost$core$Int64 $tmp3585 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3586 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3585);
org$frostlang$frostc$parser$Token$nullable $tmp3587 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3586, &$s3588);
*(&local0) = $tmp3587;
// line 1701
org$frostlang$frostc$parser$Token$nullable $tmp3589 = *(&local0);
frost$core$Bit $tmp3590 = frost$core$Bit$init$builtin_bit(!$tmp3589.nonnull);
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block1; else goto block2;
block1:;
// line 1702
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1704
org$frostlang$frostc$ASTNode* $tmp3592 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
org$frostlang$frostc$ASTNode* $tmp3593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local1) = $tmp3592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
// line 1705
org$frostlang$frostc$ASTNode* $tmp3594 = *(&local1);
frost$core$Bit $tmp3595 = frost$core$Bit$init$builtin_bit($tmp3594 == NULL);
bool $tmp3596 = $tmp3595.value;
if ($tmp3596) goto block3; else goto block4;
block3:;
// line 1706
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1708
frost$core$Int64 $tmp3598 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3599 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3598);
org$frostlang$frostc$parser$Token$nullable $tmp3600 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3599, &$s3601);
frost$core$Bit $tmp3602 = frost$core$Bit$init$builtin_bit(!$tmp3600.nonnull);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block5; else goto block6;
block5:;
// line 1709
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3604 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1711
frost$collections$Array* $tmp3605 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3605);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$collections$Array* $tmp3606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
*(&local2) = $tmp3605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
// line 1712
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3607 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1713
goto block7;
block7:;
// line 1714
org$frostlang$frostc$parser$Token $tmp3608 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3608;
// line 1715
org$frostlang$frostc$parser$Token $tmp3609 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3610 = $tmp3609.kind;
frost$core$Int64 $tmp3611 = $tmp3610.$rawValue;
frost$core$Int64 $tmp3612 = (frost$core$Int64) {104};
frost$core$Bit $tmp3613 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3611, $tmp3612);
bool $tmp3614 = $tmp3613.value;
if ($tmp3614) goto block10; else goto block11;
block10:;
// line 1717
goto block8;
block11:;
frost$core$Int64 $tmp3615 = (frost$core$Int64) {40};
frost$core$Bit $tmp3616 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3611, $tmp3615);
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block12; else goto block13;
block12:;
// line 1720
org$frostlang$frostc$ASTNode* $tmp3618 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
org$frostlang$frostc$ASTNode* $tmp3619 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
*(&local5) = $tmp3618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
// line 1721
org$frostlang$frostc$ASTNode* $tmp3620 = *(&local5);
frost$core$Bit $tmp3621 = frost$core$Bit$init$builtin_bit($tmp3620 == NULL);
bool $tmp3622 = $tmp3621.value;
if ($tmp3622) goto block14; else goto block15;
block14:;
// line 1722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3623 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3624 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3625 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3626 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1724
frost$collections$Array* $tmp3627 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3628 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3627, ((frost$core$Object*) $tmp3628));
org$frostlang$frostc$ASTNode* $tmp3629 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3630 = (frost$core$Int64) {41};
frost$core$Bit $tmp3631 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3611, $tmp3630);
bool $tmp3632 = $tmp3631.value;
if ($tmp3632) goto block16; else goto block17;
block16:;
// line 1727
org$frostlang$frostc$parser$Token $tmp3633 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3633;
// line 1728
org$frostlang$frostc$FixedArray* $tmp3634 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
org$frostlang$frostc$FixedArray* $tmp3635 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
*(&local3) = $tmp3634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
// line 1729
org$frostlang$frostc$FixedArray* $tmp3636 = *(&local3);
frost$core$Bit $tmp3637 = frost$core$Bit$init$builtin_bit($tmp3636 == NULL);
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block18; else goto block19;
block18:;
// line 1730
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
block19:;
// line 1732
goto block8;
block17:;
// line 1735
org$frostlang$frostc$parser$Token $tmp3642 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1736
org$frostlang$frostc$parser$Token $tmp3643 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3644 = *(&local4);
frost$core$String* $tmp3645 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3644);
frost$core$String* $tmp3646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3647, $tmp3645);
frost$core$String* $tmp3648 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3646, &$s3649);
frost$core$String* $tmp3650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3651, $tmp3648);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3643, $tmp3650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
// line 1738
goto block8;
block9:;
goto block7;
block8:;
// line 1742
frost$core$Int64 $tmp3652 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3653 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3652);
org$frostlang$frostc$parser$Token$nullable $tmp3654 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3653, &$s3655);
frost$core$Bit $tmp3656 = frost$core$Bit$init$builtin_bit(!$tmp3654.nonnull);
bool $tmp3657 = $tmp3656.value;
if ($tmp3657) goto block20; else goto block21;
block20:;
// line 1743
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3658 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3659 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3660 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1745
org$frostlang$frostc$FixedArray* $tmp3661 = *(&local3);
frost$core$Bit $tmp3662 = frost$core$Bit$init$builtin_bit($tmp3661 != NULL);
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block22; else goto block23;
block22:;
// line 1746
org$frostlang$frostc$ASTNode* $tmp3664 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3665 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3666 = *(&local0);
org$frostlang$frostc$Position $tmp3667 = ((org$frostlang$frostc$parser$Token) $tmp3666.value).position;
org$frostlang$frostc$ASTNode* $tmp3668 = *(&local1);
frost$collections$Array* $tmp3669 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3670 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3669);
org$frostlang$frostc$FixedArray* $tmp3671 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3664, $tmp3665, $tmp3667, $tmp3668, $tmp3670, $tmp3671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
org$frostlang$frostc$FixedArray* $tmp3672 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3673 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3674 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3664;
block23:;
// line 1748
org$frostlang$frostc$ASTNode* $tmp3675 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3676 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3677 = *(&local0);
org$frostlang$frostc$Position $tmp3678 = ((org$frostlang$frostc$parser$Token) $tmp3677.value).position;
org$frostlang$frostc$ASTNode* $tmp3679 = *(&local1);
frost$collections$Array* $tmp3680 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3681 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3680);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3675, $tmp3676, $tmp3678, $tmp3679, $tmp3681, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
org$frostlang$frostc$FixedArray* $tmp3682 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3683 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3684 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3675;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1755
frost$core$Int64 $tmp3685 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3686 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3685);
org$frostlang$frostc$parser$Token$nullable $tmp3687 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3686, &$s3688);
*(&local0) = $tmp3687;
// line 1756
org$frostlang$frostc$parser$Token$nullable $tmp3689 = *(&local0);
frost$core$Bit $tmp3690 = frost$core$Bit$init$builtin_bit(!$tmp3689.nonnull);
bool $tmp3691 = $tmp3690.value;
if ($tmp3691) goto block1; else goto block2;
block1:;
// line 1757
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1759
frost$collections$Array* $tmp3692 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3692);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
frost$collections$Array* $tmp3693 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
*(&local1) = $tmp3692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
// line 1760
goto block3;
block3:;
// line 1761
org$frostlang$frostc$parser$Token $tmp3694 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3695 = $tmp3694.kind;
frost$core$Int64 $tmp3696 = $tmp3695.$rawValue;
frost$core$Int64 $tmp3697 = (frost$core$Int64) {104};
frost$core$Bit $tmp3698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3696, $tmp3697);
bool $tmp3699 = $tmp3698.value;
if ($tmp3699) goto block6; else goto block7;
block6:;
// line 1763
org$frostlang$frostc$parser$Token $tmp3700 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1764
goto block4;
block7:;
frost$core$Int64 $tmp3701 = (frost$core$Int64) {29};
frost$core$Bit $tmp3702 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3696, $tmp3701);
bool $tmp3703 = $tmp3702.value;
if ($tmp3703) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3704 = (frost$core$Int64) {30};
frost$core$Bit $tmp3705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3696, $tmp3704);
bool $tmp3706 = $tmp3705.value;
if ($tmp3706) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3707 = (frost$core$Int64) {28};
frost$core$Bit $tmp3708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3696, $tmp3707);
bool $tmp3709 = $tmp3708.value;
if ($tmp3709) goto block8; else goto block11;
block8:;
// line 1767
org$frostlang$frostc$ASTNode* $tmp3710 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
org$frostlang$frostc$ASTNode* $tmp3711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local2) = $tmp3710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
// line 1768
org$frostlang$frostc$ASTNode* $tmp3712 = *(&local2);
frost$core$Bit $tmp3713 = frost$core$Bit$init$builtin_bit($tmp3712 == NULL);
bool $tmp3714 = $tmp3713.value;
if ($tmp3714) goto block12; else goto block13;
block12:;
// line 1769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3715 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1771
frost$core$Int64 $tmp3717 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3718 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3717);
org$frostlang$frostc$parser$Token$nullable $tmp3719 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3718, &$s3720);
frost$core$Bit $tmp3721 = frost$core$Bit$init$builtin_bit(!$tmp3719.nonnull);
bool $tmp3722 = $tmp3721.value;
if ($tmp3722) goto block14; else goto block15;
block14:;
// line 1772
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3723 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1774
frost$collections$Array* $tmp3725 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3726 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3725, ((frost$core$Object*) $tmp3726));
// line 1775
org$frostlang$frostc$ASTNode* $tmp3727 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1778
org$frostlang$frostc$ASTNode* $tmp3728 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
org$frostlang$frostc$ASTNode* $tmp3729 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
*(&local3) = $tmp3728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
// line 1779
org$frostlang$frostc$ASTNode* $tmp3730 = *(&local3);
frost$core$Bit $tmp3731 = frost$core$Bit$init$builtin_bit($tmp3730 == NULL);
bool $tmp3732 = $tmp3731.value;
if ($tmp3732) goto block16; else goto block17;
block16:;
// line 1780
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3733 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1782
frost$collections$Array* $tmp3735 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3736 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3735, ((frost$core$Object*) $tmp3736));
org$frostlang$frostc$ASTNode* $tmp3737 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3737));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1786
frost$collections$Array* $tmp3738 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3739 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3738);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
frost$collections$Array* $tmp3740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3739;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1793
org$frostlang$frostc$FixedArray* $tmp3741 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
org$frostlang$frostc$FixedArray* $tmp3742 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
*(&local0) = $tmp3741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
// line 1794
org$frostlang$frostc$FixedArray* $tmp3743 = *(&local0);
frost$core$Bit $tmp3744 = frost$core$Bit$init$builtin_bit($tmp3743 == NULL);
bool $tmp3745 = $tmp3744.value;
if ($tmp3745) goto block1; else goto block2;
block1:;
// line 1795
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1797
org$frostlang$frostc$ASTNode* $tmp3747 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3748 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3749 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3750 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3747, $tmp3748, $tmp3749, $tmp3750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
org$frostlang$frostc$FixedArray* $tmp3751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3747;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1804
org$frostlang$frostc$ASTNode* $tmp3752 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
org$frostlang$frostc$ASTNode* $tmp3753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
*(&local0) = $tmp3752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
// line 1805
org$frostlang$frostc$ASTNode* $tmp3754 = *(&local0);
frost$core$Bit $tmp3755 = frost$core$Bit$init$builtin_bit($tmp3754 == NULL);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block1; else goto block2;
block1:;
// line 1806
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3757 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1808
org$frostlang$frostc$parser$Token $tmp3758 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3759 = $tmp3758.kind;
frost$core$Int64 $tmp3760 = $tmp3759.$rawValue;
frost$core$Int64 $tmp3761 = (frost$core$Int64) {77};
frost$core$Bit $tmp3762 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3761);
bool $tmp3763 = $tmp3762.value;
if ($tmp3763) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3764 = (frost$core$Int64) {78};
frost$core$Bit $tmp3765 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3764);
bool $tmp3766 = $tmp3765.value;
if ($tmp3766) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3767 = (frost$core$Int64) {79};
frost$core$Bit $tmp3768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3767);
bool $tmp3769 = $tmp3768.value;
if ($tmp3769) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3770 = (frost$core$Int64) {80};
frost$core$Bit $tmp3771 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3770);
bool $tmp3772 = $tmp3771.value;
if ($tmp3772) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3773 = (frost$core$Int64) {81};
frost$core$Bit $tmp3774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3773);
bool $tmp3775 = $tmp3774.value;
if ($tmp3775) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3776 = (frost$core$Int64) {82};
frost$core$Bit $tmp3777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3776);
bool $tmp3778 = $tmp3777.value;
if ($tmp3778) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3779 = (frost$core$Int64) {83};
frost$core$Bit $tmp3780 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3779);
bool $tmp3781 = $tmp3780.value;
if ($tmp3781) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3782 = (frost$core$Int64) {84};
frost$core$Bit $tmp3783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3782);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3785 = (frost$core$Int64) {85};
frost$core$Bit $tmp3786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3785);
bool $tmp3787 = $tmp3786.value;
if ($tmp3787) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3788 = (frost$core$Int64) {86};
frost$core$Bit $tmp3789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3788);
bool $tmp3790 = $tmp3789.value;
if ($tmp3790) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3791 = (frost$core$Int64) {87};
frost$core$Bit $tmp3792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3791);
bool $tmp3793 = $tmp3792.value;
if ($tmp3793) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3794 = (frost$core$Int64) {88};
frost$core$Bit $tmp3795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3794);
bool $tmp3796 = $tmp3795.value;
if ($tmp3796) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3797 = (frost$core$Int64) {89};
frost$core$Bit $tmp3798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3797);
bool $tmp3799 = $tmp3798.value;
if ($tmp3799) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3800 = (frost$core$Int64) {90};
frost$core$Bit $tmp3801 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3800);
bool $tmp3802 = $tmp3801.value;
if ($tmp3802) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3803 = (frost$core$Int64) {91};
frost$core$Bit $tmp3804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3803);
bool $tmp3805 = $tmp3804.value;
if ($tmp3805) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3806 = (frost$core$Int64) {92};
frost$core$Bit $tmp3807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3806);
bool $tmp3808 = $tmp3807.value;
if ($tmp3808) goto block4; else goto block20;
block4:;
// line 1814
org$frostlang$frostc$parser$Token $tmp3809 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3809;
// line 1815
org$frostlang$frostc$ASTNode* $tmp3810 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
org$frostlang$frostc$ASTNode* $tmp3811 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local2) = $tmp3810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
// line 1816
org$frostlang$frostc$ASTNode* $tmp3812 = *(&local2);
frost$core$Bit $tmp3813 = frost$core$Bit$init$builtin_bit($tmp3812 == NULL);
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block21; else goto block22;
block21:;
// line 1817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3815 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3816 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1819
org$frostlang$frostc$ASTNode* $tmp3817 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3818 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3819 = *(&local0);
$fn3821 $tmp3820 = ($fn3821) $tmp3819->$class->vtable[2];
org$frostlang$frostc$Position $tmp3822 = $tmp3820($tmp3819);
org$frostlang$frostc$ASTNode* $tmp3823 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3824 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3825 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3824);
org$frostlang$frostc$ASTNode* $tmp3826 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3817, $tmp3818, $tmp3822, $tmp3823, $tmp3825, $tmp3826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
org$frostlang$frostc$ASTNode* $tmp3827 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3817;
block20:;
frost$core$Int64 $tmp3829 = (frost$core$Int64) {62};
frost$core$Bit $tmp3830 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3760, $tmp3829);
bool $tmp3831 = $tmp3830.value;
if ($tmp3831) goto block23; else goto block24;
block23:;
// line 1823
org$frostlang$frostc$parser$Token $tmp3832 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3832, &$s3833);
// line 1824
org$frostlang$frostc$parser$Token $tmp3834 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3834;
// line 1825
org$frostlang$frostc$ASTNode* $tmp3835 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
org$frostlang$frostc$ASTNode* $tmp3836 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
*(&local4) = $tmp3835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
// line 1826
org$frostlang$frostc$ASTNode* $tmp3837 = *(&local4);
frost$core$Bit $tmp3838 = frost$core$Bit$init$builtin_bit($tmp3837 == NULL);
bool $tmp3839 = $tmp3838.value;
if ($tmp3839) goto block25; else goto block26;
block25:;
// line 1827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3840 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1829
org$frostlang$frostc$ASTNode* $tmp3842 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3843 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3844 = *(&local0);
$fn3846 $tmp3845 = ($fn3846) $tmp3844->$class->vtable[2];
org$frostlang$frostc$Position $tmp3847 = $tmp3845($tmp3844);
org$frostlang$frostc$ASTNode* $tmp3848 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3849 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3850 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3849);
org$frostlang$frostc$ASTNode* $tmp3851 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3842, $tmp3843, $tmp3847, $tmp3848, $tmp3850, $tmp3851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
org$frostlang$frostc$ASTNode* $tmp3852 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3853 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3842;
block24:;
// line 1833
org$frostlang$frostc$ASTNode* $tmp3854 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
org$frostlang$frostc$ASTNode* $tmp3855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3855));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3854;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1842
org$frostlang$frostc$ASTNode* $tmp3856 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
org$frostlang$frostc$ASTNode* $tmp3857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3857));
*(&local0) = $tmp3856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
// line 1843
org$frostlang$frostc$ASTNode* $tmp3858 = *(&local0);
frost$core$Bit $tmp3859 = frost$core$Bit$init$builtin_bit($tmp3858 == NULL);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block1; else goto block2;
block1:;
// line 1844
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3861 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3861));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1846
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1847
frost$core$Int64 $tmp3862 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp3863 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3862);
org$frostlang$frostc$parser$Token$nullable $tmp3864 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3863);
frost$core$Bit $tmp3865 = frost$core$Bit$init$builtin_bit($tmp3864.nonnull);
bool $tmp3866 = $tmp3865.value;
if ($tmp3866) goto block3; else goto block5;
block3:;
// line 1848
org$frostlang$frostc$ASTNode* $tmp3867 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3867));
org$frostlang$frostc$ASTNode* $tmp3868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
*(&local1) = $tmp3867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3867));
// line 1849
org$frostlang$frostc$ASTNode* $tmp3869 = *(&local1);
frost$core$Bit $tmp3870 = frost$core$Bit$init$builtin_bit($tmp3869 == NULL);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block6; else goto block7;
block6:;
// line 1850
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3872));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3873 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1853
org$frostlang$frostc$parser$Token $tmp3874 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3875 = $tmp3874.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3876;
$tmp3876 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3876->value = $tmp3875;
frost$core$Int64 $tmp3877 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp3878 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3877);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3879;
$tmp3879 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3879->value = $tmp3878;
ITable* $tmp3880 = ((frost$core$Equatable*) $tmp3876)->$class->itable;
while ($tmp3880->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3880 = $tmp3880->next;
}
$fn3882 $tmp3881 = $tmp3880->methods[0];
frost$core$Bit $tmp3883 = $tmp3881(((frost$core$Equatable*) $tmp3876), ((frost$core$Equatable*) $tmp3879));
bool $tmp3884 = $tmp3883.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3879)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3876)));
if ($tmp3884) goto block8; else goto block10;
block8:;
// line 1854
org$frostlang$frostc$parser$Token $tmp3885 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3885, &$s3886);
// line 1855
org$frostlang$frostc$ASTNode* $tmp3887 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
org$frostlang$frostc$ASTNode* $tmp3888 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
*(&local1) = $tmp3887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
// line 1856
org$frostlang$frostc$ASTNode* $tmp3889 = *(&local1);
frost$core$Bit $tmp3890 = frost$core$Bit$init$builtin_bit($tmp3889 == NULL);
bool $tmp3891 = $tmp3890.value;
if ($tmp3891) goto block11; else goto block12;
block11:;
// line 1857
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3892 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1861
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1863
org$frostlang$frostc$ASTNode* $tmp3895 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3896 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp3897 = *(&local0);
$fn3899 $tmp3898 = ($fn3899) $tmp3897->$class->vtable[2];
org$frostlang$frostc$Position $tmp3900 = $tmp3898($tmp3897);
org$frostlang$frostc$ASTNode* $tmp3901 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp3902 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3895, $tmp3896, $tmp3900, $tmp3901, $tmp3902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
org$frostlang$frostc$ASTNode* $tmp3903 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3904 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3895;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1870
org$frostlang$frostc$parser$Token $tmp3905 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp3905;
// line 1871
// line 1872
org$frostlang$frostc$parser$Token $tmp3906 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp3907 = $tmp3906.kind;
frost$core$Int64 $tmp3908 = $tmp3907.$rawValue;
frost$core$Int64 $tmp3909 = (frost$core$Int64) {24};
frost$core$Bit $tmp3910 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3908, $tmp3909);
bool $tmp3911 = $tmp3910.value;
if ($tmp3911) goto block2; else goto block3;
block2:;
// line 1874
frost$core$Int64 $tmp3912 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp3913 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3912);
*(&local1) = $tmp3913;
goto block1;
block3:;
frost$core$Int64 $tmp3914 = (frost$core$Int64) {25};
frost$core$Bit $tmp3915 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3908, $tmp3914);
bool $tmp3916 = $tmp3915.value;
if ($tmp3916) goto block4; else goto block5;
block4:;
// line 1877
frost$core$Int64 $tmp3917 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp3918 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3917);
*(&local1) = $tmp3918;
goto block1;
block5:;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {26};
frost$core$Bit $tmp3920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3908, $tmp3919);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block6; else goto block7;
block6:;
// line 1880
frost$core$Int64 $tmp3922 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp3923 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3922);
*(&local1) = $tmp3923;
goto block1;
block7:;
frost$core$Int64 $tmp3924 = (frost$core$Int64) {27};
frost$core$Bit $tmp3925 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3908, $tmp3924);
bool $tmp3926 = $tmp3925.value;
if ($tmp3926) goto block8; else goto block9;
block8:;
// line 1883
frost$core$Int64 $tmp3927 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp3928 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3927);
*(&local1) = $tmp3928;
goto block1;
block9:;
// line 1886
org$frostlang$frostc$parser$Token $tmp3929 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3929, &$s3930);
goto block1;
block1:;
// line 1889
frost$collections$Array* $tmp3931 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3931);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
frost$collections$Array* $tmp3932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
*(&local2) = $tmp3931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
// line 1890
org$frostlang$frostc$ASTNode* $tmp3933 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
org$frostlang$frostc$ASTNode* $tmp3934 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3934));
*(&local3) = $tmp3933;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
// line 1891
org$frostlang$frostc$ASTNode* $tmp3935 = *(&local3);
frost$core$Bit $tmp3936 = frost$core$Bit$init$builtin_bit($tmp3935 == NULL);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block10; else goto block11;
block10:;
// line 1892
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3938 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1894
frost$collections$Array* $tmp3940 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3941 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3940, ((frost$core$Object*) $tmp3941));
// line 1895
goto block12;
block12:;
frost$core$Int64 $tmp3942 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3943 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3942);
org$frostlang$frostc$parser$Token$nullable $tmp3944 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3943);
frost$core$Bit $tmp3945 = frost$core$Bit$init$builtin_bit($tmp3944.nonnull);
bool $tmp3946 = $tmp3945.value;
if ($tmp3946) goto block13; else goto block14;
block13:;
// line 1896
org$frostlang$frostc$ASTNode* $tmp3947 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
org$frostlang$frostc$ASTNode* $tmp3948 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local4) = $tmp3947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// line 1897
org$frostlang$frostc$ASTNode* $tmp3949 = *(&local4);
frost$core$Bit $tmp3950 = frost$core$Bit$init$builtin_bit($tmp3949 == NULL);
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block15; else goto block16;
block15:;
// line 1898
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3952 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3953 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1900
frost$collections$Array* $tmp3955 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3956 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp3955, ((frost$core$Object*) $tmp3956));
org$frostlang$frostc$ASTNode* $tmp3957 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1902
org$frostlang$frostc$ASTNode* $tmp3958 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3959 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token $tmp3960 = *(&local0);
org$frostlang$frostc$Position $tmp3961 = $tmp3960.position;
org$frostlang$frostc$Variable$Kind $tmp3962 = *(&local1);
frost$collections$Array* $tmp3963 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3964 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3963);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3958, $tmp3959, $tmp3961, $tmp3962, $tmp3964);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
org$frostlang$frostc$ASTNode* $tmp3965 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3966 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp3958;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1909
frost$core$Int64 $tmp3967 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp3968 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3967);
org$frostlang$frostc$parser$Token$nullable $tmp3969 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3968, &$s3970);
*(&local0) = $tmp3969;
// line 1910
org$frostlang$frostc$parser$Token$nullable $tmp3971 = *(&local0);
frost$core$Bit $tmp3972 = frost$core$Bit$init$builtin_bit(!$tmp3971.nonnull);
bool $tmp3973 = $tmp3972.value;
if ($tmp3973) goto block1; else goto block2;
block1:;
// line 1911
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1913
frost$core$Int64 $tmp3974 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp3975 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3974);
org$frostlang$frostc$parser$Token$nullable $tmp3976 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3975, &$s3977);
frost$core$Bit $tmp3978 = frost$core$Bit$init$builtin_bit(!$tmp3976.nonnull);
bool $tmp3979 = $tmp3978.value;
if ($tmp3979) goto block3; else goto block4;
block3:;
// line 1914
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1916
frost$collections$Stack** $tmp3980 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp3981 = *$tmp3980;
frost$core$Bit $tmp3982 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp3983;
$tmp3983 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3983->value = $tmp3982;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3981, ((frost$core$Object*) $tmp3983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
// line 1917
org$frostlang$frostc$ASTNode* $tmp3984 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3985 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3986 = *(&local0);
org$frostlang$frostc$Position $tmp3987 = ((org$frostlang$frostc$parser$Token) $tmp3986.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3988 = *(&local0);
frost$core$String* $tmp3989 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3988.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3984, $tmp3985, $tmp3987, $tmp3989);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
org$frostlang$frostc$ASTNode* $tmp3990 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local1) = $tmp3984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
// line 1918
frost$collections$Array* $tmp3991 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3991);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
frost$collections$Array* $tmp3992 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
*(&local2) = $tmp3991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
// line 1919
frost$core$Int64 $tmp3993 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3994 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3993);
org$frostlang$frostc$parser$Token$nullable $tmp3995 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3994);
frost$core$Bit $tmp3996 = frost$core$Bit$init$builtin_bit(!$tmp3995.nonnull);
bool $tmp3997 = $tmp3996.value;
if ($tmp3997) goto block5; else goto block6;
block5:;
// line 1920
org$frostlang$frostc$ASTNode* $tmp3998 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
org$frostlang$frostc$ASTNode* $tmp3999 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3999));
*(&local3) = $tmp3998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
// line 1921
org$frostlang$frostc$ASTNode* $tmp4000 = *(&local3);
frost$core$Bit $tmp4001 = frost$core$Bit$init$builtin_bit($tmp4000 == NULL);
bool $tmp4002 = $tmp4001.value;
if ($tmp4002) goto block7; else goto block8;
block7:;
// line 1922
frost$collections$Stack** $tmp4003 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4004 = *$tmp4003;
frost$core$Object* $tmp4005 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4004);
frost$core$Frost$unref$frost$core$Object$Q($tmp4005);
// line 1923
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4006 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4007 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4008 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1925
frost$collections$Array* $tmp4009 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4010 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4009, ((frost$core$Object*) $tmp4010));
// line 1926
goto block9;
block9:;
frost$core$Int64 $tmp4011 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4012 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4011);
org$frostlang$frostc$parser$Token$nullable $tmp4013 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4012);
frost$core$Bit $tmp4014 = frost$core$Bit$init$builtin_bit($tmp4013.nonnull);
bool $tmp4015 = $tmp4014.value;
if ($tmp4015) goto block10; else goto block11;
block10:;
// line 1927
org$frostlang$frostc$ASTNode* $tmp4016 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
org$frostlang$frostc$ASTNode* $tmp4017 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4017));
*(&local3) = $tmp4016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
// line 1928
org$frostlang$frostc$ASTNode* $tmp4018 = *(&local3);
frost$core$Bit $tmp4019 = frost$core$Bit$init$builtin_bit($tmp4018 == NULL);
bool $tmp4020 = $tmp4019.value;
if ($tmp4020) goto block12; else goto block13;
block12:;
// line 1929
frost$collections$Stack** $tmp4021 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4022 = *$tmp4021;
frost$core$Object* $tmp4023 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4022);
frost$core$Frost$unref$frost$core$Object$Q($tmp4023);
// line 1930
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4024 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4026 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1932
frost$collections$Array* $tmp4027 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4028 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4027, ((frost$core$Object*) $tmp4028));
goto block9;
block11:;
// line 1934
frost$core$Int64 $tmp4029 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4030 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4029);
org$frostlang$frostc$parser$Token$nullable $tmp4031 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4030, &$s4032);
frost$core$Bit $tmp4033 = frost$core$Bit$init$builtin_bit(!$tmp4031.nonnull);
bool $tmp4034 = $tmp4033.value;
if ($tmp4034) goto block14; else goto block15;
block14:;
// line 1935
frost$collections$Stack** $tmp4035 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4036 = *$tmp4035;
frost$core$Object* $tmp4037 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4036);
frost$core$Frost$unref$frost$core$Object$Q($tmp4037);
// line 1936
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4038 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4039 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4040 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4041 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1939
frost$collections$Stack** $tmp4042 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4043 = *$tmp4042;
frost$core$Object* $tmp4044 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4043);
frost$core$Frost$unref$frost$core$Object$Q($tmp4044);
// line 1940
org$frostlang$frostc$ASTNode* $tmp4045 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4046 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4047 = *(&local0);
org$frostlang$frostc$Position $tmp4048 = ((org$frostlang$frostc$parser$Token) $tmp4047.value).position;
org$frostlang$frostc$ASTNode* $tmp4049 = *(&local1);
frost$collections$Array* $tmp4050 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4051 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4050);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4045, $tmp4046, $tmp4048, $tmp4049, $tmp4051);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$collections$Array* $tmp4052 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4053 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4045;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1947
frost$core$Int64 $tmp4054 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4055 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4054);
org$frostlang$frostc$parser$Token$nullable $tmp4056 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4055, &$s4057);
*(&local0) = $tmp4056;
// line 1948
org$frostlang$frostc$parser$Token$nullable $tmp4058 = *(&local0);
frost$core$Bit $tmp4059 = frost$core$Bit$init$builtin_bit(!$tmp4058.nonnull);
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block1; else goto block2;
block1:;
// line 1949
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1951
frost$core$Int64 $tmp4061 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4062 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4061);
org$frostlang$frostc$parser$Token$nullable $tmp4063 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4062);
*(&local1) = $tmp4063;
// line 1952
org$frostlang$frostc$parser$Token$nullable $tmp4064 = *(&local1);
frost$core$Bit $tmp4065 = frost$core$Bit$init$builtin_bit($tmp4064.nonnull);
bool $tmp4066 = $tmp4065.value;
if ($tmp4066) goto block3; else goto block4;
block3:;
// line 1953
org$frostlang$frostc$ASTNode* $tmp4067 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4068 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4069 = *(&local0);
org$frostlang$frostc$Position $tmp4070 = ((org$frostlang$frostc$parser$Token) $tmp4069.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4071 = *(&local1);
frost$core$String* $tmp4072 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4071.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4067, $tmp4068, $tmp4070, $tmp4072);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4067));
return $tmp4067;
block4:;
// line 1955
org$frostlang$frostc$ASTNode* $tmp4073 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4074 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4075 = *(&local0);
org$frostlang$frostc$Position $tmp4076 = ((org$frostlang$frostc$parser$Token) $tmp4075.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4073, $tmp4074, $tmp4076, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
return $tmp4073;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1962
frost$core$Int64 $tmp4077 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4078 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4077);
org$frostlang$frostc$parser$Token$nullable $tmp4079 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4078, &$s4080);
*(&local0) = $tmp4079;
// line 1963
org$frostlang$frostc$parser$Token$nullable $tmp4081 = *(&local0);
frost$core$Bit $tmp4082 = frost$core$Bit$init$builtin_bit(!$tmp4081.nonnull);
bool $tmp4083 = $tmp4082.value;
if ($tmp4083) goto block1; else goto block2;
block1:;
// line 1964
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1966
frost$core$Int64 $tmp4084 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4085 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4084);
org$frostlang$frostc$parser$Token$nullable $tmp4086 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4085);
*(&local1) = $tmp4086;
// line 1967
org$frostlang$frostc$parser$Token$nullable $tmp4087 = *(&local1);
frost$core$Bit $tmp4088 = frost$core$Bit$init$builtin_bit($tmp4087.nonnull);
bool $tmp4089 = $tmp4088.value;
if ($tmp4089) goto block3; else goto block4;
block3:;
// line 1968
org$frostlang$frostc$ASTNode* $tmp4090 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4091 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4092 = *(&local0);
org$frostlang$frostc$Position $tmp4093 = ((org$frostlang$frostc$parser$Token) $tmp4092.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4094 = *(&local1);
frost$core$String* $tmp4095 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4094.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4090, $tmp4091, $tmp4093, $tmp4095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
return $tmp4090;
block4:;
// line 1970
org$frostlang$frostc$ASTNode* $tmp4096 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4097 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4098 = *(&local0);
org$frostlang$frostc$Position $tmp4099 = ((org$frostlang$frostc$parser$Token) $tmp4098.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4096, $tmp4097, $tmp4099, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
return $tmp4096;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1977
frost$core$Int64 $tmp4100 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4101 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4100);
org$frostlang$frostc$parser$Token$nullable $tmp4102 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4101, &$s4103);
*(&local0) = $tmp4102;
// line 1978
org$frostlang$frostc$parser$Token$nullable $tmp4104 = *(&local0);
frost$core$Bit $tmp4105 = frost$core$Bit$init$builtin_bit(!$tmp4104.nonnull);
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block1; else goto block2;
block1:;
// line 1979
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1981
org$frostlang$frostc$parser$Token $tmp4107 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4108 = $tmp4107.kind;
frost$core$Int64 $tmp4109 = $tmp4108.$rawValue;
frost$core$Int64 $tmp4110 = (frost$core$Int64) {104};
frost$core$Bit $tmp4111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4109, $tmp4110);
bool $tmp4112 = $tmp4111.value;
if ($tmp4112) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4113 = (frost$core$Int64) {40};
frost$core$Bit $tmp4114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4109, $tmp4113);
bool $tmp4115 = $tmp4114.value;
if ($tmp4115) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4116 = (frost$core$Int64) {41};
frost$core$Bit $tmp4117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4109, $tmp4116);
bool $tmp4118 = $tmp4117.value;
if ($tmp4118) goto block4; else goto block7;
block4:;
// line 1983
org$frostlang$frostc$ASTNode* $tmp4119 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4120 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4121 = *(&local0);
org$frostlang$frostc$Position $tmp4122 = ((org$frostlang$frostc$parser$Token) $tmp4121.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4119, $tmp4120, $tmp4122, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
return $tmp4119;
block7:;
// line 1986
frost$collections$Array* $tmp4123 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4123);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
frost$collections$Array* $tmp4124 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
*(&local1) = $tmp4123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
// line 1987
org$frostlang$frostc$ASTNode* $tmp4125 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
org$frostlang$frostc$ASTNode* $tmp4126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local2) = $tmp4125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
// line 1988
org$frostlang$frostc$ASTNode* $tmp4127 = *(&local2);
frost$core$Bit $tmp4128 = frost$core$Bit$init$builtin_bit($tmp4127 == NULL);
bool $tmp4129 = $tmp4128.value;
if ($tmp4129) goto block8; else goto block9;
block8:;
// line 1989
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4131 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4131));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 1991
frost$collections$Array* $tmp4132 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4133 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4132, ((frost$core$Object*) $tmp4133));
// line 1992
org$frostlang$frostc$ASTNode* $tmp4134 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4135 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4136 = *(&local0);
org$frostlang$frostc$Position $tmp4137 = ((org$frostlang$frostc$parser$Token) $tmp4136.value).position;
org$frostlang$frostc$ASTNode* $tmp4138 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4134, $tmp4135, $tmp4137, $tmp4138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
org$frostlang$frostc$ASTNode* $tmp4139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4134;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2001
org$frostlang$frostc$parser$Token $tmp4141 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4142 = $tmp4141.kind;
frost$core$Int64 $tmp4143 = $tmp4142.$rawValue;
frost$core$Int64 $tmp4144 = (frost$core$Int64) {29};
frost$core$Bit $tmp4145 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4143, $tmp4144);
bool $tmp4146 = $tmp4145.value;
if ($tmp4146) goto block2; else goto block3;
block2:;
// line 2002
org$frostlang$frostc$ASTNode* $tmp4147 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
return $tmp4147;
block3:;
frost$core$Int64 $tmp4148 = (frost$core$Int64) {30};
frost$core$Bit $tmp4149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4143, $tmp4148);
bool $tmp4150 = $tmp4149.value;
if ($tmp4150) goto block4; else goto block5;
block4:;
// line 2003
org$frostlang$frostc$ASTNode* $tmp4151 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
return $tmp4151;
block5:;
frost$core$Int64 $tmp4152 = (frost$core$Int64) {28};
frost$core$Bit $tmp4153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4143, $tmp4152);
bool $tmp4154 = $tmp4153.value;
if ($tmp4154) goto block6; else goto block7;
block6:;
// line 2004
org$frostlang$frostc$ASTNode* $tmp4155 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4155));
return $tmp4155;
block7:;
// line 2005
frost$core$Int64 $tmp4156 = (frost$core$Int64) {2005};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4157, $tmp4156);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2013
org$frostlang$frostc$parser$Token $tmp4158 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4159 = $tmp4158.kind;
frost$core$Int64 $tmp4160 = $tmp4159.$rawValue;
frost$core$Int64 $tmp4161 = (frost$core$Int64) {31};
frost$core$Bit $tmp4162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4160, $tmp4161);
bool $tmp4163 = $tmp4162.value;
if ($tmp4163) goto block2; else goto block3;
block2:;
// line 2014
org$frostlang$frostc$ASTNode* $tmp4164 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
return $tmp4164;
block3:;
frost$core$Int64 $tmp4165 = (frost$core$Int64) {33};
frost$core$Bit $tmp4166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4160, $tmp4165);
bool $tmp4167 = $tmp4166.value;
if ($tmp4167) goto block4; else goto block5;
block4:;
// line 2015
org$frostlang$frostc$ASTNode* $tmp4168 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
return $tmp4168;
block5:;
frost$core$Int64 $tmp4169 = (frost$core$Int64) {36};
frost$core$Bit $tmp4170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4160, $tmp4169);
bool $tmp4171 = $tmp4170.value;
if ($tmp4171) goto block6; else goto block7;
block6:;
// line 2016
org$frostlang$frostc$ASTNode* $tmp4172 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
return $tmp4172;
block7:;
frost$core$Int64 $tmp4173 = (frost$core$Int64) {32};
frost$core$Bit $tmp4174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4160, $tmp4173);
bool $tmp4175 = $tmp4174.value;
if ($tmp4175) goto block8; else goto block9;
block8:;
// line 2017
org$frostlang$frostc$ASTNode* $tmp4176 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4176));
return $tmp4176;
block9:;
// line 2020
frost$core$Int64 $tmp4177 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4178 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4177);
org$frostlang$frostc$parser$Token$nullable $tmp4179 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4178, &$s4180);
// line 2021
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
// line 2030
// line 2031
frost$core$Int64 $tmp4181 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4182 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4181);
org$frostlang$frostc$parser$Token$nullable $tmp4183 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4182);
*(&local1) = $tmp4183;
// line 2032
org$frostlang$frostc$parser$Token$nullable $tmp4184 = *(&local1);
frost$core$Bit $tmp4185 = frost$core$Bit$init$builtin_bit(!$tmp4184.nonnull);
bool $tmp4186 = $tmp4185.value;
if ($tmp4186) goto block1; else goto block3;
block1:;
// line 2033
frost$core$Int64 $tmp4187 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4188 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4187);
org$frostlang$frostc$parser$Token$nullable $tmp4189 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4188, &$s4190);
*(&local1) = $tmp4189;
// line 2034
org$frostlang$frostc$parser$Token$nullable $tmp4191 = *(&local1);
frost$core$Bit $tmp4192 = frost$core$Bit$init$builtin_bit(!$tmp4191.nonnull);
bool $tmp4193 = $tmp4192.value;
if ($tmp4193) goto block4; else goto block5;
block4:;
// line 2035
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2037
frost$core$Int64 $tmp4194 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4195 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4194);
*(&local0) = $tmp4195;
goto block2;
block3:;
// line 1
// line 2040
frost$core$Int64 $tmp4196 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4197 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4196);
*(&local0) = $tmp4197;
goto block2;
block2:;
// line 2042
frost$core$Int64 $tmp4198 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4199 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4198);
org$frostlang$frostc$parser$Token$nullable $tmp4200 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4199, &$s4201);
*(&local2) = $tmp4200;
// line 2043
org$frostlang$frostc$parser$Token$nullable $tmp4202 = *(&local2);
frost$core$Bit $tmp4203 = frost$core$Bit$init$builtin_bit(!$tmp4202.nonnull);
bool $tmp4204 = $tmp4203.value;
if ($tmp4204) goto block6; else goto block7;
block6:;
// line 2044
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2046
org$frostlang$frostc$FixedArray* $tmp4205 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
org$frostlang$frostc$FixedArray* $tmp4206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
*(&local3) = $tmp4205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
// line 2047
org$frostlang$frostc$FixedArray* $tmp4207 = *(&local3);
frost$core$Bit $tmp4208 = frost$core$Bit$init$builtin_bit($tmp4207 == NULL);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block8; else goto block9;
block8:;
// line 2048
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2050
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2051
org$frostlang$frostc$parser$Token $tmp4211 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4212 = $tmp4211.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4213;
$tmp4213 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4213->value = $tmp4212;
frost$core$Int64 $tmp4214 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4215 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4214);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4216;
$tmp4216 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4216->value = $tmp4215;
ITable* $tmp4217 = ((frost$core$Equatable*) $tmp4213)->$class->itable;
while ($tmp4217->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4217 = $tmp4217->next;
}
$fn4219 $tmp4218 = $tmp4217->methods[0];
frost$core$Bit $tmp4220 = $tmp4218(((frost$core$Equatable*) $tmp4213), ((frost$core$Equatable*) $tmp4216));
bool $tmp4221 = $tmp4220.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4216)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4213)));
if ($tmp4221) goto block10; else goto block12;
block10:;
// line 2052
org$frostlang$frostc$ASTNode* $tmp4222 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
org$frostlang$frostc$ASTNode* $tmp4223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4223));
*(&local4) = $tmp4222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
// line 2053
org$frostlang$frostc$ASTNode* $tmp4224 = *(&local4);
frost$core$Bit $tmp4225 = frost$core$Bit$init$builtin_bit($tmp4224 == NULL);
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block13; else goto block14;
block13:;
// line 2054
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4227 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2058
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4229 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2060
org$frostlang$frostc$FixedArray* $tmp4230 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
org$frostlang$frostc$FixedArray* $tmp4231 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local5) = $tmp4230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
// line 2061
org$frostlang$frostc$FixedArray* $tmp4232 = *(&local5);
frost$core$Bit $tmp4233 = frost$core$Bit$init$builtin_bit($tmp4232 == NULL);
bool $tmp4234 = $tmp4233.value;
if ($tmp4234) goto block15; else goto block16;
block15:;
// line 2062
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4237 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4237));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2064
org$frostlang$frostc$ASTNode* $tmp4238 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4239 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4240 = *(&local1);
org$frostlang$frostc$Position $tmp4241 = ((org$frostlang$frostc$parser$Token) $tmp4240.value).position;
org$frostlang$frostc$FixedArray* $tmp4242 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4242);
org$frostlang$frostc$MethodDecl$Kind $tmp4243 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4244 = *(&local2);
frost$core$String* $tmp4245 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4244.value));
org$frostlang$frostc$FixedArray* $tmp4246 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4247 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4248 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4238, $tmp4239, $tmp4241, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4242, $tmp4243, $tmp4245, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4246, $tmp4247, $tmp4248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
org$frostlang$frostc$FixedArray* $tmp4249 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4250 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4251 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4238;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2072
frost$core$Int64 $tmp4252 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4253 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4252);
org$frostlang$frostc$parser$Token$nullable $tmp4254 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4253, &$s4255);
*(&local0) = $tmp4254;
// line 2073
org$frostlang$frostc$parser$Token$nullable $tmp4256 = *(&local0);
frost$core$Bit $tmp4257 = frost$core$Bit$init$builtin_bit(!$tmp4256.nonnull);
bool $tmp4258 = $tmp4257.value;
if ($tmp4258) goto block1; else goto block2;
block1:;
// line 2074
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2076
org$frostlang$frostc$FixedArray* $tmp4259 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
org$frostlang$frostc$FixedArray* $tmp4260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
*(&local1) = $tmp4259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
// line 2077
org$frostlang$frostc$FixedArray* $tmp4261 = *(&local1);
frost$core$Bit $tmp4262 = frost$core$Bit$init$builtin_bit($tmp4261 == NULL);
bool $tmp4263 = $tmp4262.value;
if ($tmp4263) goto block3; else goto block4;
block3:;
// line 2078
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4264));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2080
frost$core$Int64 $tmp4265 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4266 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4265);
org$frostlang$frostc$parser$Token$nullable $tmp4267 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4266, &$s4268);
frost$core$Bit $tmp4269 = frost$core$Bit$init$builtin_bit(!$tmp4267.nonnull);
bool $tmp4270 = $tmp4269.value;
if ($tmp4270) goto block5; else goto block6;
block5:;
// line 2081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2083
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2084
frost$core$Int64 $tmp4272 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4273 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4272);
org$frostlang$frostc$parser$Token$nullable $tmp4274 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4273);
frost$core$Bit $tmp4275 = frost$core$Bit$init$builtin_bit($tmp4274.nonnull);
bool $tmp4276 = $tmp4275.value;
if ($tmp4276) goto block7; else goto block9;
block7:;
// line 2085
frost$core$Int64 $tmp4277 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4278 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4277);
org$frostlang$frostc$parser$Token$nullable $tmp4279 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4278, &$s4280);
*(&local3) = $tmp4279;
// line 2086
org$frostlang$frostc$parser$Token$nullable $tmp4281 = *(&local3);
frost$core$Bit $tmp4282 = frost$core$Bit$init$builtin_bit(!$tmp4281.nonnull);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block10; else goto block11;
block10:;
// line 2087
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2089
org$frostlang$frostc$ASTNode* $tmp4286 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4287 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4288 = *(&local3);
org$frostlang$frostc$Position $tmp4289 = ((org$frostlang$frostc$parser$Token) $tmp4288.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4290 = *(&local3);
frost$core$String* $tmp4291 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4290.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4286, $tmp4287, $tmp4289, $tmp4291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
org$frostlang$frostc$ASTNode* $tmp4292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
*(&local2) = $tmp4286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
// line 2090
frost$core$Int64 $tmp4293 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4294 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4293);
org$frostlang$frostc$parser$Token$nullable $tmp4295 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4294, &$s4296);
frost$core$Bit $tmp4297 = frost$core$Bit$init$builtin_bit(!$tmp4295.nonnull);
bool $tmp4298 = $tmp4297.value;
if ($tmp4298) goto block12; else goto block13;
block12:;
// line 2091
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2095
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2097
org$frostlang$frostc$FixedArray* $tmp4302 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
org$frostlang$frostc$FixedArray* $tmp4303 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local4) = $tmp4302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
// line 2098
org$frostlang$frostc$FixedArray* $tmp4304 = *(&local4);
frost$core$Bit $tmp4305 = frost$core$Bit$init$builtin_bit($tmp4304 == NULL);
bool $tmp4306 = $tmp4305.value;
if ($tmp4306) goto block14; else goto block15;
block14:;
// line 2099
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4308 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2101
org$frostlang$frostc$ASTNode* $tmp4310 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4311 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4312 = *(&local0);
org$frostlang$frostc$Position $tmp4313 = ((org$frostlang$frostc$parser$Token) $tmp4312.value).position;
org$frostlang$frostc$FixedArray* $tmp4314 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4315 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4316 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4310, $tmp4311, $tmp4313, $tmp4314, $tmp4315, $tmp4316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
org$frostlang$frostc$FixedArray* $tmp4317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4310;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2109
org$frostlang$frostc$parser$Token $tmp4320 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4321 = $tmp4320.kind;
frost$core$Int64 $tmp4322 = $tmp4321.$rawValue;
frost$core$Int64 $tmp4323 = (frost$core$Int64) {37};
frost$core$Bit $tmp4324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4323);
bool $tmp4325 = $tmp4324.value;
if ($tmp4325) goto block2; else goto block3;
block2:;
// line 2110
org$frostlang$frostc$ASTNode* $tmp4326 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
return $tmp4326;
block3:;
frost$core$Int64 $tmp4327 = (frost$core$Int64) {33};
frost$core$Bit $tmp4328 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4327);
bool $tmp4329 = $tmp4328.value;
if ($tmp4329) goto block4; else goto block5;
block4:;
// line 2111
org$frostlang$frostc$ASTNode* $tmp4330 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
return $tmp4330;
block5:;
frost$core$Int64 $tmp4331 = (frost$core$Int64) {32};
frost$core$Bit $tmp4332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4331);
bool $tmp4333 = $tmp4332.value;
if ($tmp4333) goto block6; else goto block7;
block6:;
// line 2112
org$frostlang$frostc$ASTNode* $tmp4334 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
return $tmp4334;
block7:;
frost$core$Int64 $tmp4335 = (frost$core$Int64) {31};
frost$core$Bit $tmp4336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4335);
bool $tmp4337 = $tmp4336.value;
if ($tmp4337) goto block8; else goto block9;
block8:;
// line 2113
org$frostlang$frostc$ASTNode* $tmp4338 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
return $tmp4338;
block9:;
frost$core$Int64 $tmp4339 = (frost$core$Int64) {36};
frost$core$Bit $tmp4340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4339);
bool $tmp4341 = $tmp4340.value;
if ($tmp4341) goto block10; else goto block11;
block10:;
// line 2114
org$frostlang$frostc$ASTNode* $tmp4342 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
return $tmp4342;
block11:;
frost$core$Int64 $tmp4343 = (frost$core$Int64) {45};
frost$core$Bit $tmp4344 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4343);
bool $tmp4345 = $tmp4344.value;
if ($tmp4345) goto block12; else goto block13;
block12:;
// line 2115
org$frostlang$frostc$ASTNode* $tmp4346 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
return $tmp4346;
block13:;
frost$core$Int64 $tmp4347 = (frost$core$Int64) {39};
frost$core$Bit $tmp4348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4347);
bool $tmp4349 = $tmp4348.value;
if ($tmp4349) goto block14; else goto block15;
block14:;
// line 2116
org$frostlang$frostc$ASTNode* $tmp4350 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4350));
return $tmp4350;
block15:;
frost$core$Int64 $tmp4351 = (frost$core$Int64) {103};
frost$core$Bit $tmp4352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4351);
bool $tmp4353 = $tmp4352.value;
if ($tmp4353) goto block16; else goto block17;
block16:;
// line 2117
org$frostlang$frostc$ASTNode* $tmp4354 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
return $tmp4354;
block17:;
frost$core$Int64 $tmp4355 = (frost$core$Int64) {52};
frost$core$Bit $tmp4356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4355);
bool $tmp4357 = $tmp4356.value;
if ($tmp4357) goto block18; else goto block19;
block18:;
// line 2119
org$frostlang$frostc$parser$Token $tmp4358 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4358;
// line 2120
frost$core$Int64 $tmp4359 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4360 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4359);
org$frostlang$frostc$parser$Token$nullable $tmp4361 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4360);
*(&local1) = $tmp4361;
// line 2121
org$frostlang$frostc$parser$Token$nullable $tmp4362 = *(&local1);
frost$core$Bit $tmp4363 = frost$core$Bit$init$builtin_bit($tmp4362.nonnull);
bool $tmp4364 = $tmp4363.value;
if ($tmp4364) goto block20; else goto block21;
block20:;
// line 2122
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4365 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4366 = *$tmp4365;
frost$core$Bit $tmp4367 = frost$core$Bit$init$builtin_bit($tmp4366 != NULL);
bool $tmp4368 = $tmp4367.value;
if ($tmp4368) goto block22; else goto block23;
block22:;
// line 2123
org$frostlang$frostc$parser$Token$nullable $tmp4369 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4369.value));
// line 2124
org$frostlang$frostc$parser$Token $tmp4370 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4370);
// line 2125
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4371 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4372 = *$tmp4371;
frost$core$Int64 $tmp4373 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4374 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4373);
$fn4376 $tmp4375 = ($fn4376) $tmp4372->$class->vtable[3];
$tmp4375($tmp4372, $tmp4374);
// line 2126
org$frostlang$frostc$parser$Token $tmp4377 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2127
org$frostlang$frostc$parser$Token $tmp4378 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2128
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4379 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4380 = *$tmp4379;
frost$core$Int64 $tmp4381 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4382 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4381);
$fn4384 $tmp4383 = ($fn4384) $tmp4380->$class->vtable[4];
$tmp4383($tmp4380, $tmp4382);
goto block23;
block23:;
// line 2130
org$frostlang$frostc$parser$Token $tmp4385 = *(&local0);
frost$core$String* $tmp4386 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4385);
org$frostlang$frostc$ASTNode* $tmp4387 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4386));
return $tmp4387;
block21:;
// line 2132
org$frostlang$frostc$parser$Token $tmp4388 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4388);
// line 2133
org$frostlang$frostc$ASTNode* $tmp4389 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
return $tmp4389;
block19:;
frost$core$Int64 $tmp4390 = (frost$core$Int64) {49};
frost$core$Bit $tmp4391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4390);
bool $tmp4392 = $tmp4391.value;
if ($tmp4392) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4393 = (frost$core$Int64) {50};
frost$core$Bit $tmp4394 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4393);
bool $tmp4395 = $tmp4394.value;
if ($tmp4395) goto block24; else goto block26;
block24:;
// line 2136
org$frostlang$frostc$ASTNode* $tmp4396 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
return $tmp4396;
block26:;
frost$core$Int64 $tmp4397 = (frost$core$Int64) {24};
frost$core$Bit $tmp4398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4397);
bool $tmp4399 = $tmp4398.value;
if ($tmp4399) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4400 = (frost$core$Int64) {25};
frost$core$Bit $tmp4401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4400);
bool $tmp4402 = $tmp4401.value;
if ($tmp4402) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4403 = (frost$core$Int64) {26};
frost$core$Bit $tmp4404 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4403);
bool $tmp4405 = $tmp4404.value;
if ($tmp4405) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4406 = (frost$core$Int64) {27};
frost$core$Bit $tmp4407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4406);
bool $tmp4408 = $tmp4407.value;
if ($tmp4408) goto block27; else goto block31;
block27:;
// line 2139
org$frostlang$frostc$ASTNode* $tmp4409 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
return $tmp4409;
block31:;
frost$core$Int64 $tmp4410 = (frost$core$Int64) {23};
frost$core$Bit $tmp4411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4410);
bool $tmp4412 = $tmp4411.value;
if ($tmp4412) goto block32; else goto block33;
block32:;
// line 2142
org$frostlang$frostc$ASTNode* $tmp4413 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4413));
return $tmp4413;
block33:;
frost$core$Int64 $tmp4414 = (frost$core$Int64) {22};
frost$core$Bit $tmp4415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4414);
bool $tmp4416 = $tmp4415.value;
if ($tmp4416) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4417 = (frost$core$Int64) {21};
frost$core$Bit $tmp4418 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4417);
bool $tmp4419 = $tmp4418.value;
if ($tmp4419) goto block34; else goto block36;
block34:;
// line 2145
org$frostlang$frostc$ASTNode* $tmp4420 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
return $tmp4420;
block36:;
frost$core$Int64 $tmp4421 = (frost$core$Int64) {47};
frost$core$Bit $tmp4422 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4421);
bool $tmp4423 = $tmp4422.value;
if ($tmp4423) goto block37; else goto block38;
block37:;
// line 2148
org$frostlang$frostc$ASTNode* $tmp4424 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
return $tmp4424;
block38:;
frost$core$Int64 $tmp4425 = (frost$core$Int64) {46};
frost$core$Bit $tmp4426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4322, $tmp4425);
bool $tmp4427 = $tmp4426.value;
if ($tmp4427) goto block39; else goto block40;
block39:;
// line 2151
org$frostlang$frostc$ASTNode* $tmp4428 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
return $tmp4428;
block40:;
// line 2155
frost$core$Int64 $tmp4429 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4430 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4429);
org$frostlang$frostc$parser$Token$nullable $tmp4431 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4430, &$s4432);
// line 2156
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
// line 2165
frost$core$Int64 $tmp4433 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4434 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4433);
org$frostlang$frostc$parser$Token$nullable $tmp4435 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4434, &$s4436);
*(&local0) = $tmp4435;
// line 2166
org$frostlang$frostc$parser$Token$nullable $tmp4437 = *(&local0);
frost$core$Bit $tmp4438 = frost$core$Bit$init$builtin_bit(!$tmp4437.nonnull);
bool $tmp4439 = $tmp4438.value;
if ($tmp4439) goto block1; else goto block2;
block1:;
// line 2167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2169
frost$core$Int64 $tmp4440 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4441 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4440);
org$frostlang$frostc$parser$Token$nullable $tmp4442 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4441, &$s4443);
*(&local1) = $tmp4442;
// line 2170
org$frostlang$frostc$parser$Token$nullable $tmp4444 = *(&local1);
frost$core$Bit $tmp4445 = frost$core$Bit$init$builtin_bit(!$tmp4444.nonnull);
bool $tmp4446 = $tmp4445.value;
if ($tmp4446) goto block3; else goto block4;
block3:;
// line 2171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2173
frost$core$MutableString* $tmp4447 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4448 = *(&local1);
frost$core$String* $tmp4449 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4448.value));
frost$core$MutableString$init$frost$core$String($tmp4447, $tmp4449);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$MutableString* $tmp4450 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
*(&local2) = $tmp4447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
// line 2174
goto block5;
block5:;
// line 2175
frost$core$Int64 $tmp4451 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4452 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4451);
org$frostlang$frostc$parser$Token$nullable $tmp4453 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4452);
*(&local1) = $tmp4453;
// line 2176
org$frostlang$frostc$parser$Token$nullable $tmp4454 = *(&local1);
frost$core$Bit $tmp4455 = frost$core$Bit$init$builtin_bit(!$tmp4454.nonnull);
bool $tmp4456 = $tmp4455.value;
if ($tmp4456) goto block7; else goto block8;
block7:;
// line 2177
goto block6;
block8:;
// line 2179
frost$core$MutableString* $tmp4457 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4457, &$s4458);
// line 2180
frost$core$Int64 $tmp4459 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4460 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4459);
org$frostlang$frostc$parser$Token$nullable $tmp4461 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4460, &$s4462);
*(&local1) = $tmp4461;
// line 2181
org$frostlang$frostc$parser$Token$nullable $tmp4463 = *(&local1);
frost$core$Bit $tmp4464 = frost$core$Bit$init$builtin_bit(!$tmp4463.nonnull);
bool $tmp4465 = $tmp4464.value;
if ($tmp4465) goto block9; else goto block10;
block9:;
// line 2182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4466 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2184
frost$core$MutableString* $tmp4467 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4468 = *(&local1);
frost$core$String* $tmp4469 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4468.value));
frost$core$MutableString$append$frost$core$String($tmp4467, $tmp4469);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
goto block5;
block6:;
// line 2186
org$frostlang$frostc$ASTNode* $tmp4470 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4471 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4472 = *(&local0);
org$frostlang$frostc$Position $tmp4473 = ((org$frostlang$frostc$parser$Token) $tmp4472.value).position;
frost$core$MutableString* $tmp4474 = *(&local2);
frost$core$String* $tmp4475 = frost$core$MutableString$finish$R$frost$core$String($tmp4474);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4470, $tmp4471, $tmp4473, $tmp4475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$MutableString* $tmp4476 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4476));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4470;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2193
frost$core$Int64 $tmp4477 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4478 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4477);
org$frostlang$frostc$parser$Token$nullable $tmp4479 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4478, &$s4480);
*(&local0) = $tmp4479;
// line 2194
org$frostlang$frostc$parser$Token$nullable $tmp4481 = *(&local0);
frost$core$Bit $tmp4482 = frost$core$Bit$init$builtin_bit(!$tmp4481.nonnull);
bool $tmp4483 = $tmp4482.value;
if ($tmp4483) goto block1; else goto block2;
block1:;
// line 2195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2197
frost$core$Int64 $tmp4484 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4485 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4484);
org$frostlang$frostc$parser$Token$nullable $tmp4486 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4485, &$s4487);
*(&local1) = $tmp4486;
// line 2198
org$frostlang$frostc$parser$Token$nullable $tmp4488 = *(&local1);
frost$core$Bit $tmp4489 = frost$core$Bit$init$builtin_bit(!$tmp4488.nonnull);
bool $tmp4490 = $tmp4489.value;
if ($tmp4490) goto block3; else goto block4;
block3:;
// line 2199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2201
frost$core$MutableString* $tmp4491 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4492 = *(&local1);
frost$core$String* $tmp4493 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4492.value));
frost$core$MutableString$init$frost$core$String($tmp4491, $tmp4493);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$MutableString* $tmp4494 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
*(&local2) = $tmp4491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
// line 2202
goto block5;
block5:;
// line 2203
frost$core$Int64 $tmp4495 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4496 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4495);
org$frostlang$frostc$parser$Token$nullable $tmp4497 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4496);
*(&local1) = $tmp4497;
// line 2204
org$frostlang$frostc$parser$Token$nullable $tmp4498 = *(&local1);
frost$core$Bit $tmp4499 = frost$core$Bit$init$builtin_bit(!$tmp4498.nonnull);
bool $tmp4500 = $tmp4499.value;
if ($tmp4500) goto block7; else goto block8;
block7:;
// line 2205
goto block6;
block8:;
// line 2207
frost$core$MutableString* $tmp4501 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4501, &$s4502);
// line 2208
frost$core$Int64 $tmp4503 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4504 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4503);
org$frostlang$frostc$parser$Token$nullable $tmp4505 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4504, &$s4506);
*(&local1) = $tmp4505;
// line 2209
org$frostlang$frostc$parser$Token$nullable $tmp4507 = *(&local1);
frost$core$Bit $tmp4508 = frost$core$Bit$init$builtin_bit(!$tmp4507.nonnull);
bool $tmp4509 = $tmp4508.value;
if ($tmp4509) goto block9; else goto block10;
block9:;
// line 2210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2212
frost$core$MutableString* $tmp4511 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4512 = *(&local1);
frost$core$String* $tmp4513 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4512.value));
frost$core$MutableString$append$frost$core$String($tmp4511, $tmp4513);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
goto block5;
block6:;
// line 2214
org$frostlang$frostc$ASTNode* $tmp4514 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4515 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp4516 = *(&local0);
org$frostlang$frostc$Position $tmp4517 = ((org$frostlang$frostc$parser$Token) $tmp4516.value).position;
frost$core$MutableString* $tmp4518 = *(&local2);
frost$core$String* $tmp4519 = frost$core$MutableString$finish$R$frost$core$String($tmp4518);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4514, $tmp4515, $tmp4517, $tmp4519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$MutableString* $tmp4520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4520));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4514;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2221
frost$core$Int64 $tmp4521 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4522 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4521);
org$frostlang$frostc$parser$Token$nullable $tmp4523 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4522, &$s4524);
*(&local0) = $tmp4523;
// line 2222
org$frostlang$frostc$parser$Token$nullable $tmp4525 = *(&local0);
frost$core$Bit $tmp4526 = frost$core$Bit$init$builtin_bit(!$tmp4525.nonnull);
bool $tmp4527 = $tmp4526.value;
if ($tmp4527) goto block1; else goto block2;
block1:;
// line 2223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2225
frost$core$Int64 $tmp4528 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4529 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4528);
org$frostlang$frostc$parser$Token$nullable $tmp4530 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4529, &$s4531);
*(&local1) = $tmp4530;
// line 2226
org$frostlang$frostc$parser$Token$nullable $tmp4532 = *(&local1);
frost$core$Bit $tmp4533 = frost$core$Bit$init$builtin_bit(!$tmp4532.nonnull);
bool $tmp4534 = $tmp4533.value;
if ($tmp4534) goto block3; else goto block4;
block3:;
// line 2227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2229
frost$collections$Array* $tmp4535 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4535);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
frost$collections$Array* $tmp4536 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4536));
*(&local2) = $tmp4535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
// line 2230
frost$core$Int64 $tmp4537 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4538 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4537);
org$frostlang$frostc$parser$Token$nullable $tmp4539 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4538);
frost$core$Bit $tmp4540 = frost$core$Bit$init$builtin_bit($tmp4539.nonnull);
bool $tmp4541 = $tmp4540.value;
if ($tmp4541) goto block5; else goto block7;
block5:;
// line 2231
org$frostlang$frostc$ASTNode* $tmp4542 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
org$frostlang$frostc$ASTNode* $tmp4543 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
*(&local3) = $tmp4542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
// line 2232
org$frostlang$frostc$ASTNode* $tmp4544 = *(&local3);
frost$core$Bit $tmp4545 = frost$core$Bit$init$builtin_bit($tmp4544 == NULL);
bool $tmp4546 = $tmp4545.value;
if ($tmp4546) goto block8; else goto block9;
block8:;
// line 2233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4547));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2235
frost$collections$Array* $tmp4549 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4550 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4551 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4552 = *(&local1);
org$frostlang$frostc$Position $tmp4553 = ((org$frostlang$frostc$parser$Token) $tmp4552.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4554 = *(&local1);
frost$core$String* $tmp4555 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4554.value));
org$frostlang$frostc$ASTNode* $tmp4556 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4550, $tmp4551, $tmp4553, $tmp4555, $tmp4556);
frost$collections$Array$add$frost$collections$Array$T($tmp4549, ((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
org$frostlang$frostc$ASTNode* $tmp4557 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4557));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2238
frost$collections$Array* $tmp4558 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4559 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4560 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4561 = *(&local1);
org$frostlang$frostc$Position $tmp4562 = ((org$frostlang$frostc$parser$Token) $tmp4561.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4563 = *(&local1);
frost$core$String* $tmp4564 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4563.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4559, $tmp4560, $tmp4562, $tmp4564);
frost$collections$Array$add$frost$collections$Array$T($tmp4558, ((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4559));
goto block6;
block6:;
// line 2240
goto block10;
block10:;
frost$core$Int64 $tmp4565 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4566 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4565);
org$frostlang$frostc$parser$Token$nullable $tmp4567 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4566);
frost$core$Bit $tmp4568 = frost$core$Bit$init$builtin_bit($tmp4567.nonnull);
bool $tmp4569 = $tmp4568.value;
if ($tmp4569) goto block11; else goto block12;
block11:;
// line 2241
frost$core$Int64 $tmp4570 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4571 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4570);
org$frostlang$frostc$parser$Token$nullable $tmp4572 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4571, &$s4573);
*(&local1) = $tmp4572;
// line 2242
org$frostlang$frostc$parser$Token$nullable $tmp4574 = *(&local1);
frost$core$Bit $tmp4575 = frost$core$Bit$init$builtin_bit(!$tmp4574.nonnull);
bool $tmp4576 = $tmp4575.value;
if ($tmp4576) goto block13; else goto block14;
block13:;
// line 2243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2245
frost$core$Int64 $tmp4578 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4579 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4578);
org$frostlang$frostc$parser$Token$nullable $tmp4580 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4579);
frost$core$Bit $tmp4581 = frost$core$Bit$init$builtin_bit($tmp4580.nonnull);
bool $tmp4582 = $tmp4581.value;
if ($tmp4582) goto block15; else goto block17;
block15:;
// line 2246
org$frostlang$frostc$ASTNode* $tmp4583 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
org$frostlang$frostc$ASTNode* $tmp4584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
*(&local4) = $tmp4583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
// line 2247
org$frostlang$frostc$ASTNode* $tmp4585 = *(&local4);
frost$core$Bit $tmp4586 = frost$core$Bit$init$builtin_bit($tmp4585 == NULL);
bool $tmp4587 = $tmp4586.value;
if ($tmp4587) goto block18; else goto block19;
block18:;
// line 2248
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4588 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4589 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2250
frost$collections$Array* $tmp4590 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4591 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4592 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4593 = *(&local1);
org$frostlang$frostc$Position $tmp4594 = ((org$frostlang$frostc$parser$Token) $tmp4593.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4595 = *(&local1);
frost$core$String* $tmp4596 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4595.value));
org$frostlang$frostc$ASTNode* $tmp4597 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4591, $tmp4592, $tmp4594, $tmp4596, $tmp4597);
frost$collections$Array$add$frost$collections$Array$T($tmp4590, ((frost$core$Object*) $tmp4591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
org$frostlang$frostc$ASTNode* $tmp4598 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2253
frost$collections$Array* $tmp4599 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4600 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4601 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4602 = *(&local1);
org$frostlang$frostc$Position $tmp4603 = ((org$frostlang$frostc$parser$Token) $tmp4602.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4604 = *(&local1);
frost$core$String* $tmp4605 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4604.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4600, $tmp4601, $tmp4603, $tmp4605);
frost$collections$Array$add$frost$collections$Array$T($tmp4599, ((frost$core$Object*) $tmp4600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4600));
goto block16;
block16:;
goto block10;
block12:;
// line 2256
frost$core$Int64 $tmp4606 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4607 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4606);
org$frostlang$frostc$parser$Token$nullable $tmp4608 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4607, &$s4609);
frost$core$Bit $tmp4610 = frost$core$Bit$init$builtin_bit(!$tmp4608.nonnull);
bool $tmp4611 = $tmp4610.value;
if ($tmp4611) goto block20; else goto block21;
block20:;
// line 2257
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4612 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2259
frost$collections$Array* $tmp4613 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4614 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
frost$collections$Array* $tmp4615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4614;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2266
frost$core$Int64 $tmp4616 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4617 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4616);
org$frostlang$frostc$parser$Token$nullable $tmp4618 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4617, &$s4619);
*(&local0) = $tmp4618;
// line 2267
org$frostlang$frostc$parser$Token$nullable $tmp4620 = *(&local0);
frost$core$Bit $tmp4621 = frost$core$Bit$init$builtin_bit(!$tmp4620.nonnull);
bool $tmp4622 = $tmp4621.value;
if ($tmp4622) goto block1; else goto block2;
block1:;
// line 2268
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2270
frost$collections$Array* $tmp4623 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4623);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4623));
frost$collections$Array* $tmp4624 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4624));
*(&local1) = $tmp4623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4623));
// line 2271
org$frostlang$frostc$ASTNode* $tmp4625 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
org$frostlang$frostc$ASTNode* $tmp4626 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
*(&local2) = $tmp4625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
// line 2272
org$frostlang$frostc$ASTNode* $tmp4627 = *(&local2);
frost$core$Bit $tmp4628 = frost$core$Bit$init$builtin_bit($tmp4627 == NULL);
bool $tmp4629 = $tmp4628.value;
if ($tmp4629) goto block3; else goto block4;
block3:;
// line 2273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2275
frost$collections$Array* $tmp4632 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4633 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4632, ((frost$core$Object*) $tmp4633));
// line 2276
goto block5;
block5:;
frost$core$Int64 $tmp4634 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4635 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4634);
org$frostlang$frostc$parser$Token$nullable $tmp4636 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4635);
frost$core$Bit $tmp4637 = frost$core$Bit$init$builtin_bit($tmp4636.nonnull);
bool $tmp4638 = $tmp4637.value;
if ($tmp4638) goto block6; else goto block7;
block6:;
// line 2277
org$frostlang$frostc$ASTNode* $tmp4639 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
org$frostlang$frostc$ASTNode* $tmp4640 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
*(&local2) = $tmp4639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
// line 2278
org$frostlang$frostc$ASTNode* $tmp4641 = *(&local2);
frost$core$Bit $tmp4642 = frost$core$Bit$init$builtin_bit($tmp4641 == NULL);
bool $tmp4643 = $tmp4642.value;
if ($tmp4643) goto block8; else goto block9;
block8:;
// line 2279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4644 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4645 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4645));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2281
frost$collections$Array* $tmp4646 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4647 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4646, ((frost$core$Object*) $tmp4647));
goto block5;
block7:;
// line 2283
frost$collections$Array* $tmp4648 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4649 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
org$frostlang$frostc$ASTNode* $tmp4650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4649;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2290
frost$core$Int64 $tmp4652 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4653 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4652);
org$frostlang$frostc$parser$Token$nullable $tmp4654 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4653, &$s4655);
*(&local0) = $tmp4654;
// line 2291
*(&local1) = ((frost$core$String*) NULL);
// line 2292
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2293
frost$core$Int64 $tmp4657 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4658 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4657);
org$frostlang$frostc$parser$Token$nullable $tmp4659 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4658);
*(&local3) = $tmp4659;
// line 2294
org$frostlang$frostc$parser$Token$nullable $tmp4660 = *(&local3);
frost$core$Bit $tmp4661 = frost$core$Bit$init$builtin_bit($tmp4660.nonnull);
bool $tmp4662 = $tmp4661.value;
if ($tmp4662) goto block1; else goto block2;
block1:;
// line 2295
org$frostlang$frostc$ASTNode* $tmp4663 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
org$frostlang$frostc$ASTNode* $tmp4664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
*(&local2) = $tmp4663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
// line 2296
org$frostlang$frostc$ASTNode* $tmp4665 = *(&local2);
frost$core$Bit $tmp4666 = frost$core$Bit$init$builtin_bit($tmp4665 == NULL);
bool $tmp4667 = $tmp4666.value;
if ($tmp4667) goto block3; else goto block4;
block3:;
// line 2297
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4668));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2299
frost$core$Int64 $tmp4670 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4671 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4670);
org$frostlang$frostc$parser$Token$nullable $tmp4672 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4671, &$s4673);
*(&local4) = $tmp4672;
// line 2300
org$frostlang$frostc$parser$Token$nullable $tmp4674 = *(&local4);
frost$core$Bit $tmp4675 = frost$core$Bit$init$builtin_bit(!$tmp4674.nonnull);
bool $tmp4676 = $tmp4675.value;
if ($tmp4676) goto block5; else goto block6;
block5:;
// line 2301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4677 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2303
frost$core$String** $tmp4679 = &param0->source;
frost$core$String* $tmp4680 = *$tmp4679;
frost$core$String** $tmp4681 = &param0->source;
frost$core$String* $tmp4682 = *$tmp4681;
org$frostlang$frostc$parser$Token$nullable $tmp4683 = *(&local3);
frost$core$String$Index $tmp4684 = ((org$frostlang$frostc$parser$Token) $tmp4683.value).start;
frost$core$String$Index $tmp4685 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4682, $tmp4684);
org$frostlang$frostc$parser$Token$nullable $tmp4686 = *(&local4);
frost$core$String$Index $tmp4687 = ((org$frostlang$frostc$parser$Token) $tmp4686.value).start;
frost$core$Bit $tmp4688 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4689 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4685, $tmp4687, $tmp4688);
frost$core$String* $tmp4690 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4680, $tmp4689);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4690));
frost$core$String* $tmp4691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
*(&local1) = $tmp4690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4690));
goto block2;
block2:;
// line 2305
org$frostlang$frostc$ASTNode* $tmp4692 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4693 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4694 = *(&local0);
org$frostlang$frostc$Position $tmp4695 = ((org$frostlang$frostc$parser$Token) $tmp4694.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4696 = *(&local0);
frost$core$String* $tmp4697 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4696.value));
frost$core$String* $tmp4698 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4699 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4692, $tmp4693, $tmp4695, $tmp4697, $tmp4698, $tmp4699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
org$frostlang$frostc$ASTNode* $tmp4700 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4700));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4701 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4692;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2312
frost$collections$Array* $tmp4702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4702);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
frost$collections$Array* $tmp4703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
*(&local0) = $tmp4702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
// line 2313
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4704 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4705 = $tmp4704.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4706;
$tmp4706 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4706->value = $tmp4705;
frost$core$Int64 $tmp4707 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4708 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4707);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4709;
$tmp4709 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4709->value = $tmp4708;
ITable* $tmp4710 = ((frost$core$Equatable*) $tmp4706)->$class->itable;
while ($tmp4710->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4710 = $tmp4710->next;
}
$fn4712 $tmp4711 = $tmp4710->methods[0];
frost$core$Bit $tmp4713 = $tmp4711(((frost$core$Equatable*) $tmp4706), ((frost$core$Equatable*) $tmp4709));
bool $tmp4714 = $tmp4713.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4709)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4706)));
if ($tmp4714) goto block2; else goto block3;
block2:;
// line 2314
org$frostlang$frostc$ASTNode* $tmp4715 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
org$frostlang$frostc$ASTNode* $tmp4716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local1) = $tmp4715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
// line 2315
org$frostlang$frostc$ASTNode* $tmp4717 = *(&local1);
frost$core$Bit $tmp4718 = frost$core$Bit$init$builtin_bit($tmp4717 == NULL);
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block4; else goto block5;
block4:;
// line 2316
org$frostlang$frostc$ASTNode* $tmp4720 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2318
frost$collections$Array* $tmp4721 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4722 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4721, ((frost$core$Object*) $tmp4722));
org$frostlang$frostc$ASTNode* $tmp4723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2320
frost$collections$Array* $tmp4724 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4725 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4724);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$collections$Array* $tmp4726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4725;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2324
frost$core$Int64 $tmp4727 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4728 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4727);
org$frostlang$frostc$parser$Token$nullable $tmp4729 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4728, &$s4730);
*(&local0) = $tmp4729;
// line 2325
org$frostlang$frostc$parser$Token$nullable $tmp4731 = *(&local0);
frost$core$Bit $tmp4732 = frost$core$Bit$init$builtin_bit(!$tmp4731.nonnull);
bool $tmp4733 = $tmp4732.value;
if ($tmp4733) goto block1; else goto block2;
block1:;
// line 2326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2328
frost$core$MutableString* $tmp4734 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4734);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4734));
frost$core$MutableString* $tmp4735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
*(&local1) = $tmp4734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4734));
// line 2329
goto block3;
block3:;
// line 2330
org$frostlang$frostc$parser$Token $tmp4736 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4736;
// line 2331
org$frostlang$frostc$parser$Token $tmp4737 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4738 = $tmp4737.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4739;
$tmp4739 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4739->value = $tmp4738;
frost$core$Int64 $tmp4740 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4741 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4740);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4742;
$tmp4742 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4742->value = $tmp4741;
ITable* $tmp4743 = ((frost$core$Equatable*) $tmp4739)->$class->itable;
while ($tmp4743->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4743 = $tmp4743->next;
}
$fn4745 $tmp4744 = $tmp4743->methods[0];
frost$core$Bit $tmp4746 = $tmp4744(((frost$core$Equatable*) $tmp4739), ((frost$core$Equatable*) $tmp4742));
bool $tmp4747 = $tmp4746.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4742)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4739)));
if ($tmp4747) goto block5; else goto block6;
block5:;
// line 2332
goto block4;
block6:;
// line 2334
org$frostlang$frostc$parser$Token $tmp4748 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4749 = $tmp4748.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4750;
$tmp4750 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4750->value = $tmp4749;
frost$core$Int64 $tmp4751 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4752 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4751);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4753;
$tmp4753 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4753->value = $tmp4752;
ITable* $tmp4754 = ((frost$core$Equatable*) $tmp4750)->$class->itable;
while ($tmp4754->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4754 = $tmp4754->next;
}
$fn4756 $tmp4755 = $tmp4754->methods[0];
frost$core$Bit $tmp4757 = $tmp4755(((frost$core$Equatable*) $tmp4750), ((frost$core$Equatable*) $tmp4753));
bool $tmp4758 = $tmp4757.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4753)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4750)));
if ($tmp4758) goto block7; else goto block8;
block7:;
// line 2335
org$frostlang$frostc$parser$Token$nullable $tmp4759 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4759.value), &$s4760);
// line 2336
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2338
frost$core$MutableString* $tmp4762 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4763 = *(&local2);
frost$core$String* $tmp4764 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4763);
frost$core$MutableString$append$frost$core$String($tmp4762, $tmp4764);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
goto block3;
block4:;
// line 2340
org$frostlang$frostc$ASTNode* $tmp4765 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4766 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4767 = *(&local0);
org$frostlang$frostc$Position $tmp4768 = ((org$frostlang$frostc$parser$Token) $tmp4767.value).position;
frost$core$MutableString* $tmp4769 = *(&local1);
frost$core$String* $tmp4770 = frost$core$MutableString$finish$R$frost$core$String($tmp4769);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4765, $tmp4766, $tmp4768, $tmp4770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$MutableString* $tmp4771 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4765;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2347
frost$core$Int64 $tmp4772 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4773 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4772);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4773);
// line 2348
frost$core$Int64 $tmp4774 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4775 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4774);
org$frostlang$frostc$parser$Token$nullable $tmp4776 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4775, &$s4777);
*(&local0) = $tmp4776;
// line 2349
frost$core$Int64 $tmp4778 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4779 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4778);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4779);
// line 2350
org$frostlang$frostc$parser$Token$nullable $tmp4780 = *(&local0);
frost$core$Bit $tmp4781 = frost$core$Bit$init$builtin_bit(!$tmp4780.nonnull);
bool $tmp4782 = $tmp4781.value;
if ($tmp4782) goto block1; else goto block2;
block1:;
// line 2351
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2353
org$frostlang$frostc$ASTNode* $tmp4783 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
org$frostlang$frostc$ASTNode* $tmp4784 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
*(&local1) = $tmp4783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
// line 2354
org$frostlang$frostc$ASTNode* $tmp4785 = *(&local1);
frost$core$Bit $tmp4786 = frost$core$Bit$init$builtin_bit($tmp4785 == NULL);
bool $tmp4787 = $tmp4786.value;
if ($tmp4787) goto block3; else goto block4;
block3:;
// line 2355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2357
org$frostlang$frostc$ASTNode* $tmp4789 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4790 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4791 = *(&local0);
org$frostlang$frostc$Position $tmp4792 = ((org$frostlang$frostc$parser$Token) $tmp4791.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4793 = *(&local0);
frost$core$String* $tmp4794 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4793.value));
org$frostlang$frostc$ASTNode* $tmp4795 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4789, $tmp4790, $tmp4792, $tmp4794, $tmp4795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
org$frostlang$frostc$ASTNode* $tmp4796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4789;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2364
frost$core$Int64 $tmp4797 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4798 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4797);
org$frostlang$frostc$parser$Token$nullable $tmp4799 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4798, &$s4800);
*(&local0) = $tmp4799;
// line 2365
org$frostlang$frostc$parser$Token$nullable $tmp4801 = *(&local0);
frost$core$Bit $tmp4802 = frost$core$Bit$init$builtin_bit(!$tmp4801.nonnull);
bool $tmp4803 = $tmp4802.value;
if ($tmp4803) goto block1; else goto block2;
block1:;
// line 2366
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2368
frost$collections$Array* $tmp4804 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4804);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
frost$collections$Array* $tmp4805 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
*(&local1) = $tmp4804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
// line 2369
frost$core$Int64 $tmp4806 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4807 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4806);
org$frostlang$frostc$parser$Token$nullable $tmp4808 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4807);
frost$core$Bit $tmp4809 = frost$core$Bit$init$builtin_bit(!$tmp4808.nonnull);
bool $tmp4810 = $tmp4809.value;
if ($tmp4810) goto block3; else goto block4;
block3:;
// line 2370
org$frostlang$frostc$ASTNode* $tmp4811 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
org$frostlang$frostc$ASTNode* $tmp4812 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
*(&local2) = $tmp4811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
// line 2371
org$frostlang$frostc$ASTNode* $tmp4813 = *(&local2);
frost$core$Bit $tmp4814 = frost$core$Bit$init$builtin_bit($tmp4813 == NULL);
bool $tmp4815 = $tmp4814.value;
if ($tmp4815) goto block5; else goto block6;
block5:;
// line 2372
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2374
frost$collections$Array* $tmp4818 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4819 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4818, ((frost$core$Object*) $tmp4819));
// line 2375
goto block7;
block7:;
frost$core$Int64 $tmp4820 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4821 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4820);
org$frostlang$frostc$parser$Token$nullable $tmp4822 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4821);
frost$core$Bit $tmp4823 = frost$core$Bit$init$builtin_bit($tmp4822.nonnull);
bool $tmp4824 = $tmp4823.value;
if ($tmp4824) goto block8; else goto block9;
block8:;
// line 2376
org$frostlang$frostc$ASTNode* $tmp4825 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
org$frostlang$frostc$ASTNode* $tmp4826 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
*(&local2) = $tmp4825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
// line 2377
org$frostlang$frostc$ASTNode* $tmp4827 = *(&local2);
frost$core$Bit $tmp4828 = frost$core$Bit$init$builtin_bit($tmp4827 == NULL);
bool $tmp4829 = $tmp4828.value;
if ($tmp4829) goto block10; else goto block11;
block10:;
// line 2378
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4830 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4831 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2380
frost$collections$Array* $tmp4832 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4833 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4832, ((frost$core$Object*) $tmp4833));
goto block7;
block9:;
// line 2382
frost$core$Int64 $tmp4834 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4835 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4834);
org$frostlang$frostc$parser$Token$nullable $tmp4836 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4835, &$s4837);
frost$core$Bit $tmp4838 = frost$core$Bit$init$builtin_bit(!$tmp4836.nonnull);
bool $tmp4839 = $tmp4838.value;
if ($tmp4839) goto block12; else goto block13;
block12:;
// line 2383
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4840 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4841 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2386
frost$collections$Array* $tmp4843 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4844 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$collections$Array* $tmp4845 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4845));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4844;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
// line 2394
// line 2395
frost$core$Int64 $tmp4846 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4847 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4846);
org$frostlang$frostc$parser$Token$nullable $tmp4848 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4847);
*(&local1) = $tmp4848;
// line 2396
org$frostlang$frostc$parser$Token$nullable $tmp4849 = *(&local1);
frost$core$Bit $tmp4850 = frost$core$Bit$init$builtin_bit(!$tmp4849.nonnull);
bool $tmp4851 = $tmp4850.value;
if ($tmp4851) goto block1; else goto block3;
block1:;
// line 2397
frost$core$Int64 $tmp4852 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4853 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4852);
org$frostlang$frostc$parser$Token$nullable $tmp4854 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4853, &$s4855);
*(&local1) = $tmp4854;
// line 2398
org$frostlang$frostc$parser$Token$nullable $tmp4856 = *(&local1);
frost$core$Bit $tmp4857 = frost$core$Bit$init$builtin_bit(!$tmp4856.nonnull);
bool $tmp4858 = $tmp4857.value;
if ($tmp4858) goto block4; else goto block5;
block4:;
// line 2399
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2401
frost$core$Int64 $tmp4859 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4860 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4859);
*(&local0) = $tmp4860;
goto block2;
block3:;
// line 1
// line 2404
frost$core$Int64 $tmp4861 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4862 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4861);
*(&local0) = $tmp4862;
goto block2;
block2:;
// line 2406
frost$core$Int64 $tmp4863 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4864 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4863);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4864);
// line 2407
frost$core$String* $tmp4865 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$String* $tmp4866 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
*(&local2) = $tmp4865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
// line 2408
frost$core$Int64 $tmp4867 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4868 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4867);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4868);
// line 2409
frost$core$String* $tmp4869 = *(&local2);
frost$core$Bit $tmp4870 = frost$core$Bit$init$builtin_bit($tmp4869 == NULL);
bool $tmp4871 = $tmp4870.value;
if ($tmp4871) goto block6; else goto block7;
block6:;
// line 2410
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4872 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2412
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2413
org$frostlang$frostc$parser$Token $tmp4873 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4874 = $tmp4873.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4875;
$tmp4875 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4875->value = $tmp4874;
frost$core$Int64 $tmp4876 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4877 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4876);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4878;
$tmp4878 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4878->value = $tmp4877;
ITable* $tmp4879 = ((frost$core$Equatable*) $tmp4875)->$class->itable;
while ($tmp4879->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4879 = $tmp4879->next;
}
$fn4881 $tmp4880 = $tmp4879->methods[0];
frost$core$Bit $tmp4882 = $tmp4880(((frost$core$Equatable*) $tmp4875), ((frost$core$Equatable*) $tmp4878));
bool $tmp4883 = $tmp4882.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4878)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4875)));
if ($tmp4883) goto block8; else goto block10;
block8:;
// line 2414
org$frostlang$frostc$FixedArray* $tmp4884 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
org$frostlang$frostc$FixedArray* $tmp4885 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
*(&local3) = $tmp4884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
goto block9;
block10:;
// line 1
// line 2417
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4886 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2419
org$frostlang$frostc$FixedArray* $tmp4887 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
org$frostlang$frostc$FixedArray* $tmp4888 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4888));
*(&local4) = $tmp4887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
// line 2420
org$frostlang$frostc$FixedArray* $tmp4889 = *(&local4);
frost$core$Bit $tmp4890 = frost$core$Bit$init$builtin_bit($tmp4889 == NULL);
bool $tmp4891 = $tmp4890.value;
if ($tmp4891) goto block11; else goto block12;
block11:;
// line 2421
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4892 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4893 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4894 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2423
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2424
org$frostlang$frostc$parser$Token $tmp4895 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4896 = $tmp4895.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4897;
$tmp4897 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4897->value = $tmp4896;
frost$core$Int64 $tmp4898 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4899 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4898);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4900;
$tmp4900 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4900->value = $tmp4899;
ITable* $tmp4901 = ((frost$core$Equatable*) $tmp4897)->$class->itable;
while ($tmp4901->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4901 = $tmp4901->next;
}
$fn4903 $tmp4902 = $tmp4901->methods[0];
frost$core$Bit $tmp4904 = $tmp4902(((frost$core$Equatable*) $tmp4897), ((frost$core$Equatable*) $tmp4900));
bool $tmp4905 = $tmp4904.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4900)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4897)));
if ($tmp4905) goto block13; else goto block15;
block13:;
// line 2425
org$frostlang$frostc$ASTNode* $tmp4906 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
org$frostlang$frostc$ASTNode* $tmp4907 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
*(&local5) = $tmp4906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
// line 2426
org$frostlang$frostc$ASTNode* $tmp4908 = *(&local5);
frost$core$Bit $tmp4909 = frost$core$Bit$init$builtin_bit($tmp4908 == NULL);
bool $tmp4910 = $tmp4909.value;
if ($tmp4910) goto block16; else goto block17;
block16:;
// line 2427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4911 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4911));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4912 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4913 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4914 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2431
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4915 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2433
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2434
org$frostlang$frostc$parser$Token $tmp4916 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4917 = $tmp4916.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4918;
$tmp4918 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4918->value = $tmp4917;
frost$core$Int64 $tmp4919 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp4920 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4919);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4921;
$tmp4921 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4921->value = $tmp4920;
ITable* $tmp4922 = ((frost$core$Equatable*) $tmp4918)->$class->itable;
while ($tmp4922->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4922 = $tmp4922->next;
}
$fn4924 $tmp4923 = $tmp4922->methods[0];
frost$core$Bit $tmp4925 = $tmp4923(((frost$core$Equatable*) $tmp4918), ((frost$core$Equatable*) $tmp4921));
bool $tmp4926 = $tmp4925.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4921)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4918)));
if ($tmp4926) goto block18; else goto block20;
block18:;
// line 2435
org$frostlang$frostc$FixedArray* $tmp4927 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
org$frostlang$frostc$FixedArray* $tmp4928 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
*(&local6) = $tmp4927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
// line 2436
org$frostlang$frostc$FixedArray* $tmp4929 = *(&local6);
frost$core$Bit $tmp4930 = frost$core$Bit$init$builtin_bit($tmp4929 == NULL);
bool $tmp4931 = $tmp4930.value;
if ($tmp4931) goto block21; else goto block22;
block21:;
// line 2437
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4932 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4933 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4934 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4935 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4936 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4936));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2441
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4937 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2443
org$frostlang$frostc$ASTNode* $tmp4938 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4939 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4940 = *(&local1);
org$frostlang$frostc$Position $tmp4941 = ((org$frostlang$frostc$parser$Token) $tmp4940.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp4942 = *(&local0);
frost$core$String* $tmp4943 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4944 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp4945 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp4946 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp4947 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4938, $tmp4939, $tmp4941, param1, param2, $tmp4942, $tmp4943, $tmp4944, $tmp4945, $tmp4946, $tmp4947);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
org$frostlang$frostc$FixedArray* $tmp4948 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
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
return $tmp4938;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2451
// line 2452
frost$core$Int64 $tmp4953 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4954 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4953);
org$frostlang$frostc$parser$Token$nullable $tmp4955 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4954);
*(&local1) = $tmp4955;
// line 2453
org$frostlang$frostc$parser$Token$nullable $tmp4956 = *(&local1);
frost$core$Bit $tmp4957 = frost$core$Bit$init$builtin_bit(!$tmp4956.nonnull);
bool $tmp4958 = $tmp4957.value;
if ($tmp4958) goto block1; else goto block3;
block1:;
// line 2454
frost$core$Int64 $tmp4959 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4960 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4959);
org$frostlang$frostc$parser$Token$nullable $tmp4961 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4960, &$s4962);
*(&local1) = $tmp4961;
// line 2455
org$frostlang$frostc$parser$Token$nullable $tmp4963 = *(&local1);
frost$core$Bit $tmp4964 = frost$core$Bit$init$builtin_bit(!$tmp4963.nonnull);
bool $tmp4965 = $tmp4964.value;
if ($tmp4965) goto block4; else goto block5;
block4:;
// line 2456
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2458
frost$core$Int64 $tmp4966 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4967 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4966);
*(&local0) = $tmp4967;
goto block2;
block3:;
// line 1
// line 2461
frost$core$Int64 $tmp4968 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4969 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4968);
*(&local0) = $tmp4969;
goto block2;
block2:;
// line 2463
org$frostlang$frostc$FixedArray* $tmp4970 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
org$frostlang$frostc$FixedArray* $tmp4971 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4971));
*(&local2) = $tmp4970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
// line 2464
org$frostlang$frostc$FixedArray* $tmp4972 = *(&local2);
frost$core$Bit $tmp4973 = frost$core$Bit$init$builtin_bit($tmp4972 == NULL);
bool $tmp4974 = $tmp4973.value;
if ($tmp4974) goto block6; else goto block7;
block6:;
// line 2465
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4975 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2467
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2468
org$frostlang$frostc$parser$Token $tmp4976 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4977 = $tmp4976.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4978;
$tmp4978 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4978->value = $tmp4977;
frost$core$Int64 $tmp4979 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4980 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4979);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4981;
$tmp4981 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4981->value = $tmp4980;
ITable* $tmp4982 = ((frost$core$Equatable*) $tmp4978)->$class->itable;
while ($tmp4982->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4982 = $tmp4982->next;
}
$fn4984 $tmp4983 = $tmp4982->methods[0];
frost$core$Bit $tmp4985 = $tmp4983(((frost$core$Equatable*) $tmp4978), ((frost$core$Equatable*) $tmp4981));
bool $tmp4986 = $tmp4985.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4981)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4978)));
if ($tmp4986) goto block8; else goto block10;
block8:;
// line 2469
org$frostlang$frostc$ASTNode* $tmp4987 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
org$frostlang$frostc$ASTNode* $tmp4988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
*(&local3) = $tmp4987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
// line 2470
org$frostlang$frostc$ASTNode* $tmp4989 = *(&local3);
frost$core$Bit $tmp4990 = frost$core$Bit$init$builtin_bit($tmp4989 == NULL);
bool $tmp4991 = $tmp4990.value;
if ($tmp4991) goto block11; else goto block12;
block11:;
// line 2471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4992 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4993 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2475
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4994 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2477
org$frostlang$frostc$FixedArray* $tmp4995 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
org$frostlang$frostc$FixedArray* $tmp4996 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
*(&local4) = $tmp4995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
// line 2478
org$frostlang$frostc$FixedArray* $tmp4997 = *(&local4);
frost$core$Bit $tmp4998 = frost$core$Bit$init$builtin_bit($tmp4997 == NULL);
bool $tmp4999 = $tmp4998.value;
if ($tmp4999) goto block13; else goto block14;
block13:;
// line 2479
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5000 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5000));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5001 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5001));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5002));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2481
org$frostlang$frostc$ASTNode* $tmp5003 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5004 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5005 = *(&local1);
org$frostlang$frostc$Position $tmp5006 = ((org$frostlang$frostc$parser$Token) $tmp5005.value).position;
org$frostlang$frostc$FixedArray* $tmp5007 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5007);
org$frostlang$frostc$MethodDecl$Kind $tmp5008 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5009 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5010 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5011 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5003, $tmp5004, $tmp5006, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5007, $tmp5008, &$s5012, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5009, $tmp5010, $tmp5011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
org$frostlang$frostc$FixedArray* $tmp5013 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5014 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5015 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5003;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2489
frost$core$Int64 $tmp5016 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp5017 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5016);
org$frostlang$frostc$parser$Token$nullable $tmp5018 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5017, &$s5019);
*(&local0) = $tmp5018;
// line 2490
org$frostlang$frostc$parser$Token$nullable $tmp5020 = *(&local0);
frost$core$Bit $tmp5021 = frost$core$Bit$init$builtin_bit(!$tmp5020.nonnull);
bool $tmp5022 = $tmp5021.value;
if ($tmp5022) goto block1; else goto block2;
block1:;
// line 2491
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2493
org$frostlang$frostc$FixedArray* $tmp5023 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
org$frostlang$frostc$FixedArray* $tmp5024 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
*(&local1) = $tmp5023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
// line 2494
org$frostlang$frostc$FixedArray* $tmp5025 = *(&local1);
frost$core$Bit $tmp5026 = frost$core$Bit$init$builtin_bit($tmp5025 == NULL);
bool $tmp5027 = $tmp5026.value;
if ($tmp5027) goto block3; else goto block4;
block3:;
// line 2495
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5028 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2497
org$frostlang$frostc$FixedArray* $tmp5029 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
org$frostlang$frostc$FixedArray* $tmp5030 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
*(&local2) = $tmp5029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
// line 2498
org$frostlang$frostc$FixedArray* $tmp5031 = *(&local2);
frost$core$Bit $tmp5032 = frost$core$Bit$init$builtin_bit($tmp5031 == NULL);
bool $tmp5033 = $tmp5032.value;
if ($tmp5033) goto block5; else goto block6;
block5:;
// line 2499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2501
org$frostlang$frostc$ASTNode* $tmp5036 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5037 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5038 = *(&local0);
org$frostlang$frostc$Position $tmp5039 = ((org$frostlang$frostc$parser$Token) $tmp5038.value).position;
frost$core$Int64 $tmp5040 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5041 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5040);
org$frostlang$frostc$FixedArray* $tmp5042 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5043 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5036, $tmp5037, $tmp5039, param1, param2, $tmp5041, &$s5044, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5042, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5043);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
org$frostlang$frostc$FixedArray* $tmp5045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5046 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5036;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2509
org$frostlang$frostc$ASTNode* $tmp5047 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5047));
org$frostlang$frostc$ASTNode* $tmp5048 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5048));
*(&local0) = $tmp5047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5047));
// line 2510
org$frostlang$frostc$ASTNode* $tmp5049 = *(&local0);
frost$core$Bit $tmp5050 = frost$core$Bit$init$builtin_bit($tmp5049 == NULL);
bool $tmp5051 = $tmp5050.value;
if ($tmp5051) goto block1; else goto block2;
block1:;
// line 2511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5052));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2513
org$frostlang$frostc$ASTNode* $tmp5053 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5054 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5055 = *(&local0);
$fn5057 $tmp5056 = ($fn5057) $tmp5055->$class->vtable[2];
org$frostlang$frostc$Position $tmp5058 = $tmp5056($tmp5055);
org$frostlang$frostc$ASTNode* $tmp5059 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5053, $tmp5054, $tmp5058, param1, param2, $tmp5059);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
org$frostlang$frostc$ASTNode* $tmp5060 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5053;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2520
frost$core$Int64 $tmp5061 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5062 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5061);
org$frostlang$frostc$parser$Token$nullable $tmp5063 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5062, &$s5064);
*(&local0) = $tmp5063;
// line 2521
org$frostlang$frostc$parser$Token$nullable $tmp5065 = *(&local0);
frost$core$Bit $tmp5066 = frost$core$Bit$init$builtin_bit(!$tmp5065.nonnull);
bool $tmp5067 = $tmp5066.value;
if ($tmp5067) goto block1; else goto block2;
block1:;
// line 2522
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2524
frost$collections$Array* $tmp5068 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5068);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$collections$Array* $tmp5069 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
*(&local1) = $tmp5068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
// line 2525
frost$core$Int64 $tmp5070 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5071 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5070);
org$frostlang$frostc$parser$Token$nullable $tmp5072 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5071);
frost$core$Bit $tmp5073 = frost$core$Bit$init$builtin_bit($tmp5072.nonnull);
bool $tmp5074 = $tmp5073.value;
if ($tmp5074) goto block3; else goto block4;
block3:;
// line 2526
org$frostlang$frostc$parser$Token $tmp5075 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5076 = $tmp5075.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5077;
$tmp5077 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5077->value = $tmp5076;
frost$core$Int64 $tmp5078 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5079 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5078);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5080;
$tmp5080 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5080->value = $tmp5079;
ITable* $tmp5081 = ((frost$core$Equatable*) $tmp5077)->$class->itable;
while ($tmp5081->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5081 = $tmp5081->next;
}
$fn5083 $tmp5082 = $tmp5081->methods[1];
frost$core$Bit $tmp5084 = $tmp5082(((frost$core$Equatable*) $tmp5077), ((frost$core$Equatable*) $tmp5080));
bool $tmp5085 = $tmp5084.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5080)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5077)));
if ($tmp5085) goto block5; else goto block6;
block5:;
// line 2527
org$frostlang$frostc$ASTNode* $tmp5086 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
org$frostlang$frostc$ASTNode* $tmp5087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
*(&local2) = $tmp5086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
// line 2528
org$frostlang$frostc$ASTNode* $tmp5088 = *(&local2);
frost$core$Bit $tmp5089 = frost$core$Bit$init$builtin_bit($tmp5088 == NULL);
bool $tmp5090 = $tmp5089.value;
if ($tmp5090) goto block7; else goto block8;
block7:;
// line 2529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5092 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2531
frost$collections$Array* $tmp5093 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5094 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5093, ((frost$core$Object*) $tmp5094));
// line 2532
goto block9;
block9:;
frost$core$Int64 $tmp5095 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5096 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5095);
org$frostlang$frostc$parser$Token$nullable $tmp5097 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5096);
frost$core$Bit $tmp5098 = frost$core$Bit$init$builtin_bit($tmp5097.nonnull);
bool $tmp5099 = $tmp5098.value;
if ($tmp5099) goto block10; else goto block11;
block10:;
// line 2533
org$frostlang$frostc$ASTNode* $tmp5100 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
org$frostlang$frostc$ASTNode* $tmp5101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
*(&local2) = $tmp5100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
// line 2534
org$frostlang$frostc$ASTNode* $tmp5102 = *(&local2);
frost$core$Bit $tmp5103 = frost$core$Bit$init$builtin_bit($tmp5102 == NULL);
bool $tmp5104 = $tmp5103.value;
if ($tmp5104) goto block12; else goto block13;
block12:;
// line 2535
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5105 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5105));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5106 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2537
frost$collections$Array* $tmp5107 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5108 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5107, ((frost$core$Object*) $tmp5108));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5109 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5109));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2540
frost$core$Int64 $tmp5110 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5111 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5110);
org$frostlang$frostc$parser$Token$nullable $tmp5112 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5111, &$s5113);
frost$core$Bit $tmp5114 = frost$core$Bit$init$builtin_bit(!$tmp5112.nonnull);
bool $tmp5115 = $tmp5114.value;
if ($tmp5115) goto block14; else goto block15;
block14:;
// line 2541
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2544
org$frostlang$frostc$ASTNode* $tmp5117 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5118 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5119 = *(&local0);
org$frostlang$frostc$Position $tmp5120 = ((org$frostlang$frostc$parser$Token) $tmp5119.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5121 = *(&local0);
frost$core$String* $tmp5122 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5121.value));
frost$collections$Array* $tmp5123 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5124 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5123);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5117, $tmp5118, $tmp5120, param1, $tmp5122, $tmp5124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$collections$Array* $tmp5125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5125));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5117;

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
// line 2554
frost$core$Int64 $tmp5126 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5127 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5126);
org$frostlang$frostc$parser$Token$nullable $tmp5128 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5127, &$s5129);
*(&local0) = $tmp5128;
// line 2555
org$frostlang$frostc$parser$Token$nullable $tmp5130 = *(&local0);
frost$core$Bit $tmp5131 = frost$core$Bit$init$builtin_bit(!$tmp5130.nonnull);
bool $tmp5132 = $tmp5131.value;
if ($tmp5132) goto block1; else goto block2;
block1:;
// line 2556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2558
frost$core$Int64 $tmp5133 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5134 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5133);
org$frostlang$frostc$parser$Token$nullable $tmp5135 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5134, &$s5136);
*(&local1) = $tmp5135;
// line 2559
org$frostlang$frostc$parser$Token$nullable $tmp5137 = *(&local1);
frost$core$Bit $tmp5138 = frost$core$Bit$init$builtin_bit(!$tmp5137.nonnull);
bool $tmp5139 = $tmp5138.value;
if ($tmp5139) goto block3; else goto block4;
block3:;
// line 2560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2562
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2563
org$frostlang$frostc$parser$Token $tmp5140 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5141 = $tmp5140.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5142;
$tmp5142 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5142->value = $tmp5141;
frost$core$Int64 $tmp5143 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5144 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5143);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5145;
$tmp5145 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5145->value = $tmp5144;
ITable* $tmp5146 = ((frost$core$Equatable*) $tmp5142)->$class->itable;
while ($tmp5146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5146 = $tmp5146->next;
}
$fn5148 $tmp5147 = $tmp5146->methods[0];
frost$core$Bit $tmp5149 = $tmp5147(((frost$core$Equatable*) $tmp5142), ((frost$core$Equatable*) $tmp5145));
bool $tmp5150 = $tmp5149.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5142)));
if ($tmp5150) goto block5; else goto block7;
block5:;
// line 2564
org$frostlang$frostc$FixedArray* $tmp5151 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
org$frostlang$frostc$FixedArray* $tmp5152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
*(&local2) = $tmp5151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
// line 2565
org$frostlang$frostc$FixedArray* $tmp5153 = *(&local2);
frost$core$Bit $tmp5154 = frost$core$Bit$init$builtin_bit($tmp5153 == NULL);
bool $tmp5155 = $tmp5154.value;
if ($tmp5155) goto block8; else goto block9;
block8:;
// line 2566
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2572
frost$core$Int64 $tmp5158 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5159 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5158);
org$frostlang$frostc$parser$Token$nullable $tmp5160 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5159, &$s5161);
frost$core$Bit $tmp5162 = frost$core$Bit$init$builtin_bit(!$tmp5160.nonnull);
bool $tmp5163 = $tmp5162.value;
if ($tmp5163) goto block10; else goto block11;
block10:;
// line 2573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5164));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2575
frost$collections$Array* $tmp5165 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5165);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
frost$collections$Array* $tmp5166 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
*(&local3) = $tmp5165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
// line 2576
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5167 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2577
goto block12;
block12:;
// line 2578
org$frostlang$frostc$parser$Token $tmp5168 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5168;
// line 2579
org$frostlang$frostc$parser$Token $tmp5169 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5170 = $tmp5169.kind;
frost$core$Int64 $tmp5171 = $tmp5170.$rawValue;
frost$core$Int64 $tmp5172 = (frost$core$Int64) {18};
frost$core$Bit $tmp5173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5172);
bool $tmp5174 = $tmp5173.value;
if ($tmp5174) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5175 = (frost$core$Int64) {19};
frost$core$Bit $tmp5176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5175);
bool $tmp5177 = $tmp5176.value;
if ($tmp5177) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5178 = (frost$core$Int64) {20};
frost$core$Bit $tmp5179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5178);
bool $tmp5180 = $tmp5179.value;
if ($tmp5180) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5181 = (frost$core$Int64) {22};
frost$core$Bit $tmp5182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5181);
bool $tmp5183 = $tmp5182.value;
if ($tmp5183) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5184 = (frost$core$Int64) {21};
frost$core$Bit $tmp5185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5184);
bool $tmp5186 = $tmp5185.value;
if ($tmp5186) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5187 = (frost$core$Int64) {14};
frost$core$Bit $tmp5188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5187);
bool $tmp5189 = $tmp5188.value;
if ($tmp5189) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5190 = (frost$core$Int64) {24};
frost$core$Bit $tmp5191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5190);
bool $tmp5192 = $tmp5191.value;
if ($tmp5192) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5193 = (frost$core$Int64) {25};
frost$core$Bit $tmp5194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5193);
bool $tmp5195 = $tmp5194.value;
if ($tmp5195) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5196 = (frost$core$Int64) {26};
frost$core$Bit $tmp5197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5196);
bool $tmp5198 = $tmp5197.value;
if ($tmp5198) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5199 = (frost$core$Int64) {27};
frost$core$Bit $tmp5200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5199);
bool $tmp5201 = $tmp5200.value;
if ($tmp5201) goto block15; else goto block25;
block15:;
// line 2583
goto block13;
block25:;
frost$core$Int64 $tmp5202 = (frost$core$Int64) {12};
frost$core$Bit $tmp5203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5202);
bool $tmp5204 = $tmp5203.value;
if ($tmp5204) goto block26; else goto block27;
block26:;
// line 2586
org$frostlang$frostc$ASTNode* $tmp5205 = *(&local4);
frost$core$Bit $tmp5206 = frost$core$Bit$init$builtin_bit($tmp5205 != NULL);
bool $tmp5207 = $tmp5206.value;
if ($tmp5207) goto block28; else goto block29;
block28:;
// line 2587
org$frostlang$frostc$parser$Token $tmp5208 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5209 = *(&local5);
frost$core$String* $tmp5210 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5209);
frost$core$String* $tmp5211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5212, $tmp5210);
frost$core$String* $tmp5213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5211, &$s5214);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5208, $tmp5213);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
goto block29;
block29:;
// line 2589
org$frostlang$frostc$ASTNode* $tmp5215 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
org$frostlang$frostc$ASTNode* $tmp5216 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5216));
*(&local4) = $tmp5215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
goto block14;
block27:;
frost$core$Int64 $tmp5217 = (frost$core$Int64) {52};
frost$core$Bit $tmp5218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5171, $tmp5217);
bool $tmp5219 = $tmp5218.value;
if ($tmp5219) goto block30; else goto block31;
block30:;
// line 2592
org$frostlang$frostc$ASTNode* $tmp5220 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5221 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5220);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
org$frostlang$frostc$ASTNode* $tmp5222 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
*(&local6) = $tmp5221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
// line 2593
org$frostlang$frostc$ASTNode* $tmp5223 = *(&local6);
frost$core$Bit $tmp5224 = frost$core$Bit$init$builtin_bit($tmp5223 == NULL);
bool $tmp5225 = $tmp5224.value;
if ($tmp5225) goto block32; else goto block33;
block32:;
// line 2594
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5226 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5227 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5229 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2596
frost$collections$Array* $tmp5230 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5231 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5230, ((frost$core$Object*) $tmp5231));
// line 2597
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5232 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5232));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5233 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2600
goto block13;
block14:;
goto block12;
block13:;
// line 2604
org$frostlang$frostc$FixedArray* $tmp5234 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5234);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
org$frostlang$frostc$FixedArray* $tmp5235 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
*(&local7) = $tmp5234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
// line 2605
goto block34;
block34:;
// line 2606
org$frostlang$frostc$parser$Token $tmp5236 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5236;
// line 2607
org$frostlang$frostc$parser$Token $tmp5237 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5238 = $tmp5237.kind;
frost$core$Int64 $tmp5239 = $tmp5238.$rawValue;
frost$core$Int64 $tmp5240 = (frost$core$Int64) {14};
frost$core$Bit $tmp5241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5240);
bool $tmp5242 = $tmp5241.value;
if ($tmp5242) goto block37; else goto block38;
block37:;
// line 2609
org$frostlang$frostc$FixedArray* $tmp5243 = *(&local7);
ITable* $tmp5244 = ((frost$collections$CollectionView*) $tmp5243)->$class->itable;
while ($tmp5244->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5244 = $tmp5244->next;
}
$fn5246 $tmp5245 = $tmp5244->methods[0];
frost$core$Int64 $tmp5247 = $tmp5245(((frost$collections$CollectionView*) $tmp5243));
frost$core$Int64 $tmp5248 = (frost$core$Int64) {0};
int64_t $tmp5249 = $tmp5247.value;
int64_t $tmp5250 = $tmp5248.value;
bool $tmp5251 = $tmp5249 > $tmp5250;
frost$core$Bit $tmp5252 = (frost$core$Bit) {$tmp5251};
bool $tmp5253 = $tmp5252.value;
if ($tmp5253) goto block39; else goto block40;
block39:;
// line 2610
org$frostlang$frostc$parser$Token $tmp5254 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5255 = *(&local8);
frost$core$String* $tmp5256 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5255);
frost$core$String* $tmp5257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5258, $tmp5256);
frost$core$String* $tmp5259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5257, &$s5260);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5254, $tmp5259);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
// line 2611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5261 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5261));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5262 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5264 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2613
org$frostlang$frostc$FixedArray* $tmp5265 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
org$frostlang$frostc$FixedArray* $tmp5266 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
*(&local7) = $tmp5265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
goto block36;
block38:;
frost$core$Int64 $tmp5267 = (frost$core$Int64) {12};
frost$core$Bit $tmp5268 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5267);
bool $tmp5269 = $tmp5268.value;
if ($tmp5269) goto block41; else goto block42;
block41:;
// line 2616
org$frostlang$frostc$ASTNode* $tmp5270 = *(&local4);
frost$core$Bit $tmp5271 = frost$core$Bit$init$builtin_bit($tmp5270 != NULL);
bool $tmp5272 = $tmp5271.value;
if ($tmp5272) goto block43; else goto block45;
block45:;
org$frostlang$frostc$FixedArray* $tmp5273 = *(&local7);
ITable* $tmp5274 = ((frost$collections$CollectionView*) $tmp5273)->$class->itable;
while ($tmp5274->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5274 = $tmp5274->next;
}
$fn5276 $tmp5275 = $tmp5274->methods[0];
frost$core$Int64 $tmp5277 = $tmp5275(((frost$collections$CollectionView*) $tmp5273));
frost$core$Int64 $tmp5278 = (frost$core$Int64) {0};
int64_t $tmp5279 = $tmp5277.value;
int64_t $tmp5280 = $tmp5278.value;
bool $tmp5281 = $tmp5279 > $tmp5280;
frost$core$Bit $tmp5282 = (frost$core$Bit) {$tmp5281};
bool $tmp5283 = $tmp5282.value;
if ($tmp5283) goto block43; else goto block44;
block43:;
// line 2617
org$frostlang$frostc$parser$Token $tmp5284 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5285 = *(&local8);
frost$core$String* $tmp5286 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5285);
frost$core$String* $tmp5287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5288, $tmp5286);
frost$core$String* $tmp5289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5287, &$s5290);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5284, $tmp5289);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
// line 2618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5291 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5292 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5293 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5293));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2620
org$frostlang$frostc$ASTNode* $tmp5295 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
org$frostlang$frostc$ASTNode* $tmp5296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
*(&local4) = $tmp5295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
goto block36;
block42:;
frost$core$Int64 $tmp5297 = (frost$core$Int64) {18};
frost$core$Bit $tmp5298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5297);
bool $tmp5299 = $tmp5298.value;
if ($tmp5299) goto block46; else goto block47;
block46:;
// line 2623
org$frostlang$frostc$ASTNode* $tmp5300 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5301 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5302 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5300, $tmp5301);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
org$frostlang$frostc$ASTNode* $tmp5303 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local9) = $tmp5302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
// line 2624
org$frostlang$frostc$ASTNode* $tmp5304 = *(&local9);
frost$core$Bit $tmp5305 = frost$core$Bit$init$builtin_bit($tmp5304 == NULL);
bool $tmp5306 = $tmp5305.value;
if ($tmp5306) goto block48; else goto block49;
block48:;
// line 2625
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5307 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5308 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5308));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5309 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5310 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5311 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 2627
frost$collections$Array* $tmp5312 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5313 = *(&local9);
frost$collections$Array$add$frost$collections$Array$T($tmp5312, ((frost$core$Object*) $tmp5313));
// line 2628
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5314 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2629
org$frostlang$frostc$FixedArray* $tmp5315 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
org$frostlang$frostc$FixedArray* $tmp5316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
*(&local7) = $tmp5315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
org$frostlang$frostc$ASTNode* $tmp5317 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block47:;
frost$core$Int64 $tmp5318 = (frost$core$Int64) {19};
frost$core$Bit $tmp5319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5318);
bool $tmp5320 = $tmp5319.value;
if ($tmp5320) goto block50; else goto block51;
block50:;
// line 2632
org$frostlang$frostc$ASTNode* $tmp5321 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5322 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5323 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5321, $tmp5322);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
org$frostlang$frostc$ASTNode* $tmp5324 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
*(&local10) = $tmp5323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
// line 2633
org$frostlang$frostc$ASTNode* $tmp5325 = *(&local10);
frost$core$Bit $tmp5326 = frost$core$Bit$init$builtin_bit($tmp5325 == NULL);
bool $tmp5327 = $tmp5326.value;
if ($tmp5327) goto block52; else goto block53;
block52:;
// line 2634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5328 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5328));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
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
block53:;
// line 2636
frost$collections$Array* $tmp5333 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5334 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5333, ((frost$core$Object*) $tmp5334));
// line 2637
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5335 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5335));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2638
org$frostlang$frostc$FixedArray* $tmp5336 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
org$frostlang$frostc$FixedArray* $tmp5337 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
*(&local7) = $tmp5336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
org$frostlang$frostc$ASTNode* $tmp5338 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block51:;
frost$core$Int64 $tmp5339 = (frost$core$Int64) {20};
frost$core$Bit $tmp5340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5339);
bool $tmp5341 = $tmp5340.value;
if ($tmp5341) goto block54; else goto block55;
block54:;
// line 2641
org$frostlang$frostc$ASTNode* $tmp5342 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5343 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5344 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5342, $tmp5343);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
org$frostlang$frostc$ASTNode* $tmp5345 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5345));
*(&local11) = $tmp5344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
// line 2642
org$frostlang$frostc$ASTNode* $tmp5346 = *(&local11);
frost$core$Bit $tmp5347 = frost$core$Bit$init$builtin_bit($tmp5346 == NULL);
bool $tmp5348 = $tmp5347.value;
if ($tmp5348) goto block56; else goto block57;
block56:;
// line 2643
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5349 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5350 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5351 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5351));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5352 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5353 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block57:;
// line 2645
frost$collections$Array* $tmp5354 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5355 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5354, ((frost$core$Object*) $tmp5355));
// line 2646
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5356 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2647
org$frostlang$frostc$FixedArray* $tmp5357 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
org$frostlang$frostc$FixedArray* $tmp5358 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
*(&local7) = $tmp5357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
org$frostlang$frostc$ASTNode* $tmp5359 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block55:;
frost$core$Int64 $tmp5360 = (frost$core$Int64) {22};
frost$core$Bit $tmp5361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5360);
bool $tmp5362 = $tmp5361.value;
if ($tmp5362) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp5363 = (frost$core$Int64) {21};
frost$core$Bit $tmp5364 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5363);
bool $tmp5365 = $tmp5364.value;
if ($tmp5365) goto block58; else goto block60;
block58:;
// line 2650
org$frostlang$frostc$ASTNode* $tmp5366 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5367 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5368 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5366, $tmp5367);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
org$frostlang$frostc$ASTNode* $tmp5369 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local12) = $tmp5368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
// line 2651
org$frostlang$frostc$ASTNode* $tmp5370 = *(&local12);
frost$core$Bit $tmp5371 = frost$core$Bit$init$builtin_bit($tmp5370 == NULL);
bool $tmp5372 = $tmp5371.value;
if ($tmp5372) goto block61; else goto block62;
block61:;
// line 2652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5373 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5374 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5375));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5376 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5377));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block62:;
// line 2654
frost$collections$Array* $tmp5378 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5379 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5378, ((frost$core$Object*) $tmp5379));
// line 2655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5380 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2656
org$frostlang$frostc$FixedArray* $tmp5381 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5381));
org$frostlang$frostc$FixedArray* $tmp5382 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5382));
*(&local7) = $tmp5381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5381));
org$frostlang$frostc$ASTNode* $tmp5383 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5383));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block60:;
frost$core$Int64 $tmp5384 = (frost$core$Int64) {24};
frost$core$Bit $tmp5385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5384);
bool $tmp5386 = $tmp5385.value;
if ($tmp5386) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp5387 = (frost$core$Int64) {25};
frost$core$Bit $tmp5388 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5387);
bool $tmp5389 = $tmp5388.value;
if ($tmp5389) goto block63; else goto block65;
block65:;
frost$core$Int64 $tmp5390 = (frost$core$Int64) {26};
frost$core$Bit $tmp5391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5390);
bool $tmp5392 = $tmp5391.value;
if ($tmp5392) goto block63; else goto block66;
block66:;
frost$core$Int64 $tmp5393 = (frost$core$Int64) {27};
frost$core$Bit $tmp5394 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5393);
bool $tmp5395 = $tmp5394.value;
if ($tmp5395) goto block63; else goto block67;
block63:;
// line 2659
org$frostlang$frostc$ASTNode* $tmp5396 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5397 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5398 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5396, $tmp5397);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
org$frostlang$frostc$ASTNode* $tmp5399 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local13) = $tmp5398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
// line 2660
org$frostlang$frostc$ASTNode* $tmp5400 = *(&local13);
frost$core$Bit $tmp5401 = frost$core$Bit$init$builtin_bit($tmp5400 == NULL);
bool $tmp5402 = $tmp5401.value;
if ($tmp5402) goto block68; else goto block69;
block68:;
// line 2661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5403 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5404 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5405));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5406));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5407));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block69:;
// line 2663
frost$collections$Array* $tmp5408 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5409 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5408, ((frost$core$Object*) $tmp5409));
// line 2664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2665
org$frostlang$frostc$FixedArray* $tmp5411 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
org$frostlang$frostc$FixedArray* $tmp5412 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
*(&local7) = $tmp5411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
org$frostlang$frostc$ASTNode* $tmp5413 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block67:;
frost$core$Int64 $tmp5414 = (frost$core$Int64) {104};
frost$core$Bit $tmp5415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5239, $tmp5414);
bool $tmp5416 = $tmp5415.value;
if ($tmp5416) goto block70; else goto block71;
block70:;
// line 2668
frost$core$Int64 $tmp5417 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5418 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5417);
org$frostlang$frostc$parser$Token$nullable $tmp5419 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5418, &$s5420);
// line 2669
goto block35;
block71:;
// line 2672
org$frostlang$frostc$parser$Token $tmp5421 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5422 = *(&local8);
frost$core$String* $tmp5423 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5422);
frost$core$String* $tmp5424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5425, $tmp5423);
frost$core$String* $tmp5426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5424, &$s5427);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5421, $tmp5426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
// line 2673
org$frostlang$frostc$parser$Token $tmp5428 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5429 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5430 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5430));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2678
org$frostlang$frostc$ASTNode* $tmp5433 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5434 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5435 = *(&local0);
org$frostlang$frostc$Position $tmp5436 = ((org$frostlang$frostc$parser$Token) $tmp5435.value).position;
frost$core$Int64 $tmp5437 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5438 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5437);
org$frostlang$frostc$parser$Token$nullable $tmp5439 = *(&local1);
frost$core$String* $tmp5440 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5439.value));
org$frostlang$frostc$FixedArray* $tmp5441 = *(&local2);
frost$collections$Array* $tmp5442 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5443 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5442);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5433, $tmp5434, $tmp5436, param1, param2, $tmp5438, $tmp5440, $tmp5441, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
org$frostlang$frostc$FixedArray* $tmp5444 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5444));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5445 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5446 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5447 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5433;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2688
org$frostlang$frostc$parser$Token $tmp5448 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5448;
// line 2689
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2690
org$frostlang$frostc$parser$Token $tmp5449 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5450 = $tmp5449.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5451;
$tmp5451 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5451->value = $tmp5450;
frost$core$Int64 $tmp5452 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5453 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5452);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5454;
$tmp5454 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5454->value = $tmp5453;
ITable* $tmp5455 = ((frost$core$Equatable*) $tmp5451)->$class->itable;
while ($tmp5455->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5455 = $tmp5455->next;
}
$fn5457 $tmp5456 = $tmp5455->methods[0];
frost$core$Bit $tmp5458 = $tmp5456(((frost$core$Equatable*) $tmp5451), ((frost$core$Equatable*) $tmp5454));
bool $tmp5459 = $tmp5458.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5454)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5451)));
if ($tmp5459) goto block1; else goto block3;
block1:;
// line 2691
org$frostlang$frostc$ASTNode* $tmp5460 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
org$frostlang$frostc$ASTNode* $tmp5461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
*(&local1) = $tmp5460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
// line 2692
org$frostlang$frostc$ASTNode* $tmp5462 = *(&local1);
frost$core$Bit $tmp5463 = frost$core$Bit$init$builtin_bit($tmp5462 == NULL);
bool $tmp5464 = $tmp5463.value;
if ($tmp5464) goto block4; else goto block5;
block4:;
// line 2693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5466 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5466));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2699
org$frostlang$frostc$FixedArray* $tmp5467 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5467));
org$frostlang$frostc$FixedArray* $tmp5468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5468));
*(&local2) = $tmp5467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5467));
// line 2700
org$frostlang$frostc$FixedArray* $tmp5469 = *(&local2);
frost$core$Bit $tmp5470 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5471 = $tmp5470.value;
if ($tmp5471) goto block6; else goto block7;
block6:;
// line 2701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2703
org$frostlang$frostc$parser$Token $tmp5474 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5475 = $tmp5474.kind;
frost$core$Int64 $tmp5476 = $tmp5475.$rawValue;
frost$core$Int64 $tmp5477 = (frost$core$Int64) {18};
frost$core$Bit $tmp5478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5477);
bool $tmp5479 = $tmp5478.value;
if ($tmp5479) goto block9; else goto block10;
block9:;
// line 2705
org$frostlang$frostc$ASTNode* $tmp5480 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5481 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5482 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5480, $tmp5481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$FixedArray* $tmp5483 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5482;
block10:;
frost$core$Int64 $tmp5485 = (frost$core$Int64) {19};
frost$core$Bit $tmp5486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5485);
bool $tmp5487 = $tmp5486.value;
if ($tmp5487) goto block11; else goto block12;
block11:;
// line 2708
org$frostlang$frostc$ASTNode* $tmp5488 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5489 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5490 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5488, $tmp5489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
org$frostlang$frostc$FixedArray* $tmp5491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5491));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5490;
block12:;
frost$core$Int64 $tmp5493 = (frost$core$Int64) {20};
frost$core$Bit $tmp5494 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5493);
bool $tmp5495 = $tmp5494.value;
if ($tmp5495) goto block13; else goto block14;
block13:;
// line 2711
org$frostlang$frostc$ASTNode* $tmp5496 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5497 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5498 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5496, $tmp5497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
org$frostlang$frostc$FixedArray* $tmp5499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5499));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5500));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5498;
block14:;
frost$core$Int64 $tmp5501 = (frost$core$Int64) {22};
frost$core$Bit $tmp5502 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5501);
bool $tmp5503 = $tmp5502.value;
if ($tmp5503) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5504 = (frost$core$Int64) {21};
frost$core$Bit $tmp5505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5504);
bool $tmp5506 = $tmp5505.value;
if ($tmp5506) goto block15; else goto block17;
block15:;
// line 2714
org$frostlang$frostc$ASTNode* $tmp5507 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5508 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5509 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5507, $tmp5508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
org$frostlang$frostc$FixedArray* $tmp5510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5509;
block17:;
frost$core$Int64 $tmp5512 = (frost$core$Int64) {23};
frost$core$Bit $tmp5513 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5512);
bool $tmp5514 = $tmp5513.value;
if ($tmp5514) goto block18; else goto block19;
block18:;
// line 2717
org$frostlang$frostc$ASTNode* $tmp5515 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5516 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5517 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5515, $tmp5516);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
org$frostlang$frostc$FixedArray* $tmp5518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5519));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5517;
block19:;
frost$core$Int64 $tmp5520 = (frost$core$Int64) {24};
frost$core$Bit $tmp5521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5520);
bool $tmp5522 = $tmp5521.value;
if ($tmp5522) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5523 = (frost$core$Int64) {25};
frost$core$Bit $tmp5524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5523);
bool $tmp5525 = $tmp5524.value;
if ($tmp5525) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5526 = (frost$core$Int64) {26};
frost$core$Bit $tmp5527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5526);
bool $tmp5528 = $tmp5527.value;
if ($tmp5528) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5529 = (frost$core$Int64) {27};
frost$core$Bit $tmp5530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5476, $tmp5529);
bool $tmp5531 = $tmp5530.value;
if ($tmp5531) goto block20; else goto block24;
block20:;
// line 2720
org$frostlang$frostc$ASTNode* $tmp5532 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5533 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5534 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5532, $tmp5533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
org$frostlang$frostc$FixedArray* $tmp5535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5535));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5534;
block24:;
// line 2724
frost$core$Int64 $tmp5537 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5538 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5537);
org$frostlang$frostc$parser$Token$nullable $tmp5539 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5538, &$s5540);
// line 2725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5541));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5542));
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
// line 2734
frost$core$Int64 $tmp5543 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5544 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5543);
org$frostlang$frostc$parser$Token$nullable $tmp5545 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5544, &$s5546);
*(&local0) = $tmp5545;
// line 2735
org$frostlang$frostc$parser$Token$nullable $tmp5547 = *(&local0);
frost$core$Bit $tmp5548 = frost$core$Bit$init$builtin_bit(!$tmp5547.nonnull);
bool $tmp5549 = $tmp5548.value;
if ($tmp5549) goto block1; else goto block2;
block1:;
// line 2736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2738
frost$core$Int64 $tmp5550 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5551 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5550);
org$frostlang$frostc$parser$Token$nullable $tmp5552 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5551, &$s5553);
*(&local1) = $tmp5552;
// line 2739
org$frostlang$frostc$parser$Token$nullable $tmp5554 = *(&local1);
frost$core$Bit $tmp5555 = frost$core$Bit$init$builtin_bit(!$tmp5554.nonnull);
bool $tmp5556 = $tmp5555.value;
if ($tmp5556) goto block3; else goto block4;
block3:;
// line 2740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2742
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2743
org$frostlang$frostc$parser$Token $tmp5557 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5558 = $tmp5557.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5559;
$tmp5559 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5559->value = $tmp5558;
frost$core$Int64 $tmp5560 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5561 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5560);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5562;
$tmp5562 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5562->value = $tmp5561;
ITable* $tmp5563 = ((frost$core$Equatable*) $tmp5559)->$class->itable;
while ($tmp5563->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5563 = $tmp5563->next;
}
$fn5565 $tmp5564 = $tmp5563->methods[0];
frost$core$Bit $tmp5566 = $tmp5564(((frost$core$Equatable*) $tmp5559), ((frost$core$Equatable*) $tmp5562));
bool $tmp5567 = $tmp5566.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5562)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5559)));
if ($tmp5567) goto block5; else goto block7;
block5:;
// line 2744
org$frostlang$frostc$FixedArray* $tmp5568 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
org$frostlang$frostc$FixedArray* $tmp5569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5569));
*(&local2) = $tmp5568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
// line 2745
org$frostlang$frostc$FixedArray* $tmp5570 = *(&local2);
frost$core$Bit $tmp5571 = frost$core$Bit$init$builtin_bit($tmp5570 == NULL);
bool $tmp5572 = $tmp5571.value;
if ($tmp5572) goto block8; else goto block9;
block8:;
// line 2746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5573 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5573));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5574));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2752
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2753
org$frostlang$frostc$parser$Token $tmp5575 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5576 = $tmp5575.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5577;
$tmp5577 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5577->value = $tmp5576;
frost$core$Int64 $tmp5578 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5579 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5578);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5580;
$tmp5580 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5580->value = $tmp5579;
ITable* $tmp5581 = ((frost$core$Equatable*) $tmp5577)->$class->itable;
while ($tmp5581->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5581 = $tmp5581->next;
}
$fn5583 $tmp5582 = $tmp5581->methods[0];
frost$core$Bit $tmp5584 = $tmp5582(((frost$core$Equatable*) $tmp5577), ((frost$core$Equatable*) $tmp5580));
bool $tmp5585 = $tmp5584.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5580)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5577)));
if ($tmp5585) goto block10; else goto block12;
block10:;
// line 2754
org$frostlang$frostc$FixedArray* $tmp5586 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
org$frostlang$frostc$FixedArray* $tmp5587 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5587));
*(&local3) = $tmp5586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
// line 2755
org$frostlang$frostc$FixedArray* $tmp5588 = *(&local3);
frost$core$Bit $tmp5589 = frost$core$Bit$init$builtin_bit($tmp5588 == NULL);
bool $tmp5590 = $tmp5589.value;
if ($tmp5590) goto block13; else goto block14;
block13:;
// line 2756
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5591 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5592 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5592));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2760
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5593 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2762
frost$core$Int64 $tmp5594 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5595 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5594);
org$frostlang$frostc$parser$Token$nullable $tmp5596 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5595, &$s5597);
frost$core$Bit $tmp5598 = frost$core$Bit$init$builtin_bit(!$tmp5596.nonnull);
bool $tmp5599 = $tmp5598.value;
if ($tmp5599) goto block15; else goto block16;
block15:;
// line 2763
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5600 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5600));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2765
frost$collections$Array* $tmp5602 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5602);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
frost$collections$Array* $tmp5603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5603));
*(&local4) = $tmp5602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
// line 2766
goto block17;
block17:;
frost$core$Int64 $tmp5604 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5605 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5604);
org$frostlang$frostc$parser$Token$nullable $tmp5606 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5605);
frost$core$Bit $tmp5607 = frost$core$Bit$init$builtin_bit(!$tmp5606.nonnull);
bool $tmp5608 = $tmp5607.value;
if ($tmp5608) goto block18; else goto block19;
block18:;
// line 2767
org$frostlang$frostc$ASTNode* $tmp5609 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
org$frostlang$frostc$ASTNode* $tmp5610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5610));
*(&local5) = $tmp5609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
// line 2768
org$frostlang$frostc$ASTNode* $tmp5611 = *(&local5);
frost$core$Bit $tmp5612 = frost$core$Bit$init$builtin_bit($tmp5611 == NULL);
bool $tmp5613 = $tmp5612.value;
if ($tmp5613) goto block20; else goto block21;
block20:;
// line 2769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5614 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5615));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5616 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5616));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5617 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5617));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2771
frost$collections$Array* $tmp5618 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5619 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5618, ((frost$core$Object*) $tmp5619));
org$frostlang$frostc$ASTNode* $tmp5620 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2773
org$frostlang$frostc$ASTNode* $tmp5621 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5622 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5623 = *(&local0);
org$frostlang$frostc$Position $tmp5624 = ((org$frostlang$frostc$parser$Token) $tmp5623.value).position;
frost$core$Int64 $tmp5625 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5626 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5625);
org$frostlang$frostc$parser$Token$nullable $tmp5627 = *(&local1);
frost$core$String* $tmp5628 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5627.value));
org$frostlang$frostc$FixedArray* $tmp5629 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5630 = *(&local3);
frost$collections$Array* $tmp5631 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5632 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5631);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5621, $tmp5622, $tmp5624, param1, param2, $tmp5626, $tmp5628, $tmp5629, $tmp5630, $tmp5632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5621));
frost$collections$Array* $tmp5633 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5634 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5634));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5621;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 2782
frost$core$Int64 $tmp5636 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5637 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5636);
org$frostlang$frostc$parser$Token$nullable $tmp5638 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5637, &$s5639);
*(&local0) = $tmp5638;
// line 2783
org$frostlang$frostc$parser$Token$nullable $tmp5640 = *(&local0);
frost$core$Bit $tmp5641 = frost$core$Bit$init$builtin_bit(!$tmp5640.nonnull);
bool $tmp5642 = $tmp5641.value;
if ($tmp5642) goto block1; else goto block2;
block1:;
// line 2784
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2786
frost$core$Int64 $tmp5643 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5644 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5643);
org$frostlang$frostc$parser$Token$nullable $tmp5645 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5644, &$s5646);
*(&local1) = $tmp5645;
// line 2787
org$frostlang$frostc$parser$Token$nullable $tmp5647 = *(&local1);
frost$core$Bit $tmp5648 = frost$core$Bit$init$builtin_bit(!$tmp5647.nonnull);
bool $tmp5649 = $tmp5648.value;
if ($tmp5649) goto block3; else goto block4;
block3:;
// line 2788
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2790
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2791
org$frostlang$frostc$parser$Token $tmp5650 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5651 = $tmp5650.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5652;
$tmp5652 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5652->value = $tmp5651;
frost$core$Int64 $tmp5653 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5654 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5653);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5655;
$tmp5655 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5655->value = $tmp5654;
ITable* $tmp5656 = ((frost$core$Equatable*) $tmp5652)->$class->itable;
while ($tmp5656->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5656 = $tmp5656->next;
}
$fn5658 $tmp5657 = $tmp5656->methods[0];
frost$core$Bit $tmp5659 = $tmp5657(((frost$core$Equatable*) $tmp5652), ((frost$core$Equatable*) $tmp5655));
bool $tmp5660 = $tmp5659.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5655)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5652)));
if ($tmp5660) goto block5; else goto block7;
block5:;
// line 2792
org$frostlang$frostc$FixedArray* $tmp5661 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
org$frostlang$frostc$FixedArray* $tmp5662 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local2) = $tmp5661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
// line 2793
org$frostlang$frostc$FixedArray* $tmp5663 = *(&local2);
frost$core$Bit $tmp5664 = frost$core$Bit$init$builtin_bit($tmp5663 == NULL);
bool $tmp5665 = $tmp5664.value;
if ($tmp5665) goto block8; else goto block9;
block8:;
// line 2794
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5666 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5666));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2798
org$frostlang$frostc$FixedArray* $tmp5667 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5667));
org$frostlang$frostc$FixedArray* $tmp5668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
*(&local2) = $tmp5667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5667));
goto block6;
block6:;
// line 2800
frost$collections$Array* $tmp5669 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5669);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
frost$collections$Array* $tmp5670 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
*(&local3) = $tmp5669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
// line 2801
frost$core$Int64 $tmp5671 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5672 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5671);
org$frostlang$frostc$parser$Token$nullable $tmp5673 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5672);
frost$core$Bit $tmp5674 = frost$core$Bit$init$builtin_bit($tmp5673.nonnull);
bool $tmp5675 = $tmp5674.value;
if ($tmp5675) goto block10; else goto block11;
block10:;
// line 2802
org$frostlang$frostc$ASTNode* $tmp5676 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5676));
org$frostlang$frostc$ASTNode* $tmp5677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
*(&local4) = $tmp5676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5676));
// line 2803
org$frostlang$frostc$ASTNode* $tmp5678 = *(&local4);
frost$core$Bit $tmp5679 = frost$core$Bit$init$builtin_bit($tmp5678 == NULL);
bool $tmp5680 = $tmp5679.value;
if ($tmp5680) goto block12; else goto block13;
block12:;
// line 2804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5681 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5681));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5682 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5682));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5683 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2806
frost$collections$Array* $tmp5684 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5685 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5684, ((frost$core$Object*) $tmp5685));
// line 2807
goto block14;
block14:;
frost$core$Int64 $tmp5686 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5687 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5686);
org$frostlang$frostc$parser$Token$nullable $tmp5688 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5687);
frost$core$Bit $tmp5689 = frost$core$Bit$init$builtin_bit($tmp5688.nonnull);
bool $tmp5690 = $tmp5689.value;
if ($tmp5690) goto block15; else goto block16;
block15:;
// line 2808
org$frostlang$frostc$ASTNode* $tmp5691 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
org$frostlang$frostc$ASTNode* $tmp5692 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
*(&local4) = $tmp5691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
// line 2809
org$frostlang$frostc$ASTNode* $tmp5693 = *(&local4);
frost$core$Bit $tmp5694 = frost$core$Bit$init$builtin_bit($tmp5693 == NULL);
bool $tmp5695 = $tmp5694.value;
if ($tmp5695) goto block17; else goto block18;
block17:;
// line 2810
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5696 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5696));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5697 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5697));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5698 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5698));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2812
frost$collections$Array* $tmp5699 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5700 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5699, ((frost$core$Object*) $tmp5700));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5701 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2815
frost$core$Int64 $tmp5702 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5703 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5702);
org$frostlang$frostc$parser$Token$nullable $tmp5704 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5703, &$s5705);
frost$core$Bit $tmp5706 = frost$core$Bit$init$builtin_bit(!$tmp5704.nonnull);
bool $tmp5707 = $tmp5706.value;
if ($tmp5707) goto block19; else goto block20;
block19:;
// line 2816
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5708));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5709 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2818
frost$collections$Array* $tmp5710 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5710);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
frost$collections$Array* $tmp5711 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5711));
*(&local5) = $tmp5710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
// line 2819
goto block21;
block21:;
frost$core$Int64 $tmp5712 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5713 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5712);
org$frostlang$frostc$parser$Token$nullable $tmp5714 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5713);
frost$core$Bit $tmp5715 = frost$core$Bit$init$builtin_bit(!$tmp5714.nonnull);
bool $tmp5716 = $tmp5715.value;
if ($tmp5716) goto block22; else goto block23;
block22:;
// line 2820
org$frostlang$frostc$ASTNode* $tmp5717 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
org$frostlang$frostc$ASTNode* $tmp5718 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5718));
*(&local6) = $tmp5717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
// line 2821
org$frostlang$frostc$ASTNode* $tmp5719 = *(&local6);
frost$core$Bit $tmp5720 = frost$core$Bit$init$builtin_bit($tmp5719 == NULL);
bool $tmp5721 = $tmp5720.value;
if ($tmp5721) goto block24; else goto block25;
block24:;
// line 2822
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5722 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5723));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5724 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5725 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5725));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2824
frost$collections$Array* $tmp5726 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5727 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5726, ((frost$core$Object*) $tmp5727));
org$frostlang$frostc$ASTNode* $tmp5728 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2826
org$frostlang$frostc$ASTNode* $tmp5729 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5730 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5731 = *(&local0);
org$frostlang$frostc$Position $tmp5732 = ((org$frostlang$frostc$parser$Token) $tmp5731.value).position;
frost$core$Int64 $tmp5733 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5734 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5733);
org$frostlang$frostc$parser$Token$nullable $tmp5735 = *(&local1);
frost$core$String* $tmp5736 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5735.value));
org$frostlang$frostc$FixedArray* $tmp5737 = *(&local2);
frost$collections$Array* $tmp5738 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5739 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5738);
frost$collections$Array* $tmp5740 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5741 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5740);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5729, $tmp5730, $tmp5732, param1, param2, $tmp5734, $tmp5736, $tmp5737, $tmp5739, $tmp5741);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
frost$collections$Array* $tmp5742 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5742));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5743 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5744 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5729;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2835
org$frostlang$frostc$parser$Token $tmp5745 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5746 = $tmp5745.kind;
frost$core$Int64 $tmp5747 = $tmp5746.$rawValue;
frost$core$Int64 $tmp5748 = (frost$core$Int64) {16};
frost$core$Bit $tmp5749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5747, $tmp5748);
bool $tmp5750 = $tmp5749.value;
if ($tmp5750) goto block2; else goto block3;
block2:;
// line 2837
org$frostlang$frostc$ASTNode* $tmp5751 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
return $tmp5751;
block3:;
// line 2840
org$frostlang$frostc$ASTNode* $tmp5752 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
return $tmp5752;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2849
frost$collections$Array* $tmp5753 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5753);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5753));
frost$collections$Array* $tmp5754 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5754));
*(&local0) = $tmp5753;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5753));
// line 2850
org$frostlang$frostc$parser$Token $tmp5755 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5756 = $tmp5755.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5757;
$tmp5757 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5757->value = $tmp5756;
frost$core$Int64 $tmp5758 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5759 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5758);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5760;
$tmp5760 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5760->value = $tmp5759;
ITable* $tmp5761 = ((frost$core$Equatable*) $tmp5757)->$class->itable;
while ($tmp5761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5761 = $tmp5761->next;
}
$fn5763 $tmp5762 = $tmp5761->methods[0];
frost$core$Bit $tmp5764 = $tmp5762(((frost$core$Equatable*) $tmp5757), ((frost$core$Equatable*) $tmp5760));
bool $tmp5765 = $tmp5764.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5760)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5757)));
if ($tmp5765) goto block1; else goto block2;
block1:;
// line 2851
org$frostlang$frostc$ASTNode* $tmp5766 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
org$frostlang$frostc$ASTNode* $tmp5767 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local1) = $tmp5766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
// line 2852
org$frostlang$frostc$ASTNode* $tmp5768 = *(&local1);
frost$core$Bit $tmp5769 = frost$core$Bit$init$builtin_bit($tmp5768 != NULL);
bool $tmp5770 = $tmp5769.value;
if ($tmp5770) goto block3; else goto block4;
block3:;
// line 2853
frost$collections$Array* $tmp5771 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5772 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5771, ((frost$core$Object*) $tmp5772));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5773));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2856
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5774 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5775 = $tmp5774.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5776;
$tmp5776 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5776->value = $tmp5775;
frost$core$Int64 $tmp5777 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5778 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5777);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5779;
$tmp5779 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5779->value = $tmp5778;
ITable* $tmp5780 = ((frost$core$Equatable*) $tmp5776)->$class->itable;
while ($tmp5780->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5780 = $tmp5780->next;
}
$fn5782 $tmp5781 = $tmp5780->methods[1];
frost$core$Bit $tmp5783 = $tmp5781(((frost$core$Equatable*) $tmp5776), ((frost$core$Equatable*) $tmp5779));
bool $tmp5784 = $tmp5783.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5779)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5776)));
if ($tmp5784) goto block6; else goto block7;
block6:;
// line 2857
org$frostlang$frostc$ASTNode* $tmp5785 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5785));
org$frostlang$frostc$ASTNode* $tmp5786 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5786));
*(&local2) = $tmp5785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5785));
// line 2858
org$frostlang$frostc$ASTNode* $tmp5787 = *(&local2);
frost$core$Bit $tmp5788 = frost$core$Bit$init$builtin_bit($tmp5787 == NULL);
bool $tmp5789 = $tmp5788.value;
if ($tmp5789) goto block8; else goto block9;
block8:;
// line 2859
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5790 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5791 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2861
frost$collections$Stack** $tmp5792 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5793 = *$tmp5792;
frost$core$Int64 $tmp5794 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5793);
frost$core$Int64 $tmp5795 = (frost$core$Int64) {0};
frost$core$Bit $tmp5796 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5794, $tmp5795);
bool $tmp5797 = $tmp5796.value;
if ($tmp5797) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5798 = (frost$core$Int64) {2861};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5799, $tmp5798);
abort(); // unreachable
block10:;
// line 2862
frost$collections$Array* $tmp5800 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5801 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5800, ((frost$core$Object*) $tmp5801));
org$frostlang$frostc$ASTNode* $tmp5802 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5802));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2864
org$frostlang$frostc$ASTNode* $tmp5803 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5804 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5805 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5806 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5805);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5803, $tmp5804, $tmp5806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
frost$collections$Array* $tmp5807 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5803;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5808 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5809 = *$tmp5808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
org$frostlang$regex$RegexParser** $tmp5810 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5811 = *$tmp5810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5811));
frost$threads$MessageQueue** $tmp5812 = &param0->errors;
frost$threads$MessageQueue* $tmp5813 = *$tmp5812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5813));
frost$io$File** $tmp5814 = &param0->path;
frost$io$File* $tmp5815 = *$tmp5814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5815));
frost$core$String** $tmp5816 = &param0->source;
frost$core$String* $tmp5817 = *$tmp5816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5817));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5818 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5819 = *$tmp5818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5819));
frost$collections$Stack** $tmp5820 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5821 = *$tmp5820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5821));
frost$collections$Stack** $tmp5822 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5823 = *$tmp5822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5823));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5824 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5825 = *$tmp5824;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5825));
return;

}

