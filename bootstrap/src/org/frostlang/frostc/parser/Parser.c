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
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
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
typedef void (*$fn143)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn149)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn154)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Int64 (*$fn241)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn270)(frost$collections$CollectionView*);
typedef void (*$fn283)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn287)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef frost$core$Int64 (*$fn294)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn306)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn333)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn370)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn378)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int64 (*$fn397)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn500)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn545)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn559)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn669)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn683)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Position (*$fn768)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn775)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn783)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn790)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn814)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn825)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn849)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn894)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn910)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Position (*$fn1001)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1009)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1020)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1037)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1073)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1081)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1100)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1118)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1198)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1421)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1729)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn1733)(org$frostlang$frostc$parser$SyntaxHighlighter*);
typedef org$frostlang$frostc$Position (*$fn1749)(org$frostlang$frostc$ASTNode*);
typedef void (*$fn1753)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token);
typedef frost$core$Bit (*$fn1775)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1786)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2094)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2240)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2249)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2343)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2435)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2626)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2780)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2922)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3023)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3034)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3046)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3085)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3302)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3810)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn3835)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3871)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3888)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4210)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4367)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4375)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4703)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4736)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4747)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4872)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4894)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4915)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4975)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn5048)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5139)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5237)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5267)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5449)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5557)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5650)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5755)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5774)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 34, 1088483445082520168, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67", 12, -673795321792812913, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 4872307991516742361, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 106, 2225543338790490809, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s1262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x31\x27", 5, 14631941951, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s2322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s2542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s3219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x27", 13, -5077882839958516911, NULL };
static frost$core$String $s3515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 109, -6474302754716454502, NULL };
static frost$core$String $s3520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 110, 8055250686587731713, NULL };
static frost$core$String $s3577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s3959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s3966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x74\x72\x79\x27", 5, 14689146230, NULL };
static frost$core$String $s4259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x61\x69\x6c\x27", 6, 1482129252291, NULL };
static frost$core$String $s4271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s5003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

void org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT(org$frostlang$frostc$parser$Parser* param0, frost$threads$MessageQueue* param1) {

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
org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT($tmp29, param1);
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
frost$core$Bit local3;
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
if ($tmp121) goto block11; else goto block12;
block11:;
*(&local3) = $tmp120;
goto block13;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
*(&local3) = $tmp135;
goto block13;
block13:;
frost$core$Bit $tmp136 = *(&local3);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block9; else goto block14;
block9:;
// line 92
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp138 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp139 = *$tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp141 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp140);
$fn143 $tmp142 = ($fn143) $tmp139->$class->vtable[3];
$tmp142($tmp139, $tmp141);
goto block10;
block14:;
// line 1
// line 95
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp144 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp147 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp146);
$fn149 $tmp148 = ($fn149) $tmp145->$class->vtable[4];
$tmp148($tmp145, $tmp147);
goto block10;
block10:;
goto block8;
block8:;
// line 98
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp150 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp151 = *$tmp150;
org$frostlang$frostc$parser$Token $tmp152 = *(&local2);
$fn154 $tmp153 = ($fn154) $tmp151->$class->vtable[6];
$tmp153($tmp151, $tmp152);
goto block6;
block6:;
// line 100
frost$collections$Stack** $tmp155 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp156 = *$tmp155;
frost$core$Int64 $tmp157 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp156);
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 > $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block15; else goto block16;
block15:;
// line 101
frost$collections$Stack** $tmp164 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp165 = *$tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {0};
frost$core$Object* $tmp167 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp165, $tmp166);
org$frostlang$frostc$parser$Token $tmp168 = *(&local2);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp167), $tmp168);
frost$core$Frost$unref$frost$core$Object$Q($tmp167);
goto block16;
block16:;
// line 103
org$frostlang$frostc$parser$Token $tmp169 = *(&local2);
return $tmp169;

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
org$frostlang$frostc$parser$Token $tmp170 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp170;
// line 109
org$frostlang$frostc$parser$Token $tmp171 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp172 = $tmp171.kind;
frost$core$Int64 $tmp173 = $tmp172.$rawValue;
frost$core$Int64 $tmp174 = (frost$core$Int64) {13};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block4; else goto block5;
block4:;
// line 111
goto block1;
block5:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {9};
frost$core$Bit $tmp178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block6; else goto block7;
block6:;
// line 114
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp180 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp181 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp182 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp181);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp180, param0, $tmp182);
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local1) = $tmp180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// line 115
goto block8;
block8:;
// line 116
org$frostlang$frostc$parser$Token $tmp184 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp184;
// line 117
org$frostlang$frostc$parser$Token $tmp185 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp186 = $tmp185.kind;
frost$core$Int64 $tmp187 = $tmp186.$rawValue;
frost$core$Int64 $tmp188 = (frost$core$Int64) {13};
frost$core$Bit $tmp189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp187, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block11; else goto block12;
block11:;
// line 119
org$frostlang$frostc$parser$Token $tmp191 = *(&local2);
frost$core$String* $tmp192 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp191);
frost$core$Bit $tmp193 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp192, &$s194);
bool $tmp195 = $tmp193.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
if ($tmp195) goto block13; else goto block14;
block13:;
// line 120
goto block9;
block14:;
goto block10;
block12:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {0};
frost$core$Bit $tmp197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp187, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block15; else goto block10;
block15:;
// line 124
org$frostlang$frostc$parser$Token $tmp199 = *(&local2);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp199;
block10:;
goto block8;
block9:;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {10};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block16; else goto block17;
block16:;
// line 130
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp205 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp206 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp207 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp206);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp205, param0, $tmp207);
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp208 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local3) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// line 131
goto block18;
block18:;
// line 132
org$frostlang$frostc$parser$Token $tmp209 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp209;
// line 133
org$frostlang$frostc$parser$Token $tmp210 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp211 = $tmp210.kind;
frost$core$Int64 $tmp212 = $tmp211.$rawValue;
frost$core$Int64 $tmp213 = (frost$core$Int64) {11};
frost$core$Bit $tmp214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp212, $tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block21; else goto block22;
block21:;
// line 135
goto block19;
block22:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
frost$core$Bit $tmp217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp212, $tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block23; else goto block20;
block23:;
// line 138
org$frostlang$frostc$parser$Token $tmp219 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp219, &$s220);
// line 139
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp222 = &param0->reportErrors;
*$tmp222 = $tmp221;
// line 140
org$frostlang$frostc$parser$Token $tmp223 = *(&local4);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp223;
block20:;
goto block18;
block19:;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local3) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 146
org$frostlang$frostc$parser$Token $tmp226 = *(&local0);
return $tmp226;
block3:;
goto block1;
block2:;
goto block24;
block24:;

}
void org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

// line 153
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp227 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp228 = *$tmp227;
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block1; else goto block2;
block1:;
// line 154
goto block3;
block3:;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp231 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp232 = *$tmp231;
frost$collections$Array** $tmp233 = &$tmp232->tokens;
frost$collections$Array* $tmp234 = *$tmp233;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp235 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp236 = *$tmp235;
frost$collections$Array** $tmp237 = &$tmp236->tokens;
frost$collections$Array* $tmp238 = *$tmp237;
ITable* $tmp239 = ((frost$collections$CollectionView*) $tmp238)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$core$Int64 $tmp242 = $tmp240(((frost$collections$CollectionView*) $tmp238));
frost$core$Int64 $tmp243 = (frost$core$Int64) {1};
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243.value;
int64_t $tmp246 = $tmp244 - $tmp245;
frost$core$Int64 $tmp247 = (frost$core$Int64) {$tmp246};
frost$core$Object* $tmp248 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp234, $tmp247);
frost$core$Object** $tmp249 = &((org$frostlang$frostc$Pair*) $tmp248)->first;
frost$core$Object* $tmp250 = *$tmp249;
frost$core$String* $tmp251 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp250)->value);
frost$core$String* $tmp252 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, param1);
ITable* $tmp253 = ((frost$core$Equatable*) $tmp251)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[1];
frost$core$Bit $tmp256 = $tmp254(((frost$core$Equatable*) $tmp251), ((frost$core$Equatable*) $tmp252));
bool $tmp257 = $tmp256.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
if ($tmp257) goto block4; else goto block5;
block4:;
// line 156
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp258 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp259 = *$tmp258;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp260 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp261 = *$tmp260;
frost$collections$Array** $tmp262 = &$tmp261->tokens;
frost$collections$Array* $tmp263 = *$tmp262;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp264 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp265 = *$tmp264;
frost$collections$Array** $tmp266 = &$tmp265->tokens;
frost$collections$Array* $tmp267 = *$tmp266;
ITable* $tmp268 = ((frost$collections$CollectionView*) $tmp267)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Int64 $tmp271 = $tmp269(((frost$collections$CollectionView*) $tmp267));
frost$core$Int64 $tmp272 = (frost$core$Int64) {1};
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273 - $tmp274;
frost$core$Int64 $tmp276 = (frost$core$Int64) {$tmp275};
frost$core$Object* $tmp277 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp263, $tmp276);
frost$core$Object** $tmp278 = &((org$frostlang$frostc$Pair*) $tmp277)->first;
frost$core$Object* $tmp279 = *$tmp278;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp259, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp279)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp277);
// line 158
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp280 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp281 = *$tmp280;
$fn283 $tmp282 = ($fn283) $tmp281->$class->vtable[7];
$tmp282($tmp281);
goto block3;
block5:;
// line 160
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp284 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp285 = *$tmp284;
$fn287 $tmp286 = ($fn287) $tmp285->$class->vtable[7];
$tmp286($tmp285);
goto block2;
block2:;
// line 162
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp288 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp289 = *$tmp288;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp289, param1);
return;

}
org$frostlang$frostc$parser$Token org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$Parser* param0) {

// line 166
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp290 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp291 = *$tmp290;
ITable* $tmp292 = ((frost$collections$CollectionView*) $tmp291)->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[0];
frost$core$Int64 $tmp295 = $tmp293(((frost$collections$CollectionView*) $tmp291));
frost$core$Int64 $tmp296 = (frost$core$Int64) {0};
frost$core$Bit $tmp297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp295, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// line 167
org$frostlang$frostc$parser$Token $tmp299 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp299);
goto block2;
block2:;
// line 169
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp300 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp301 = *$tmp300;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp302 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp303 = *$tmp302;
ITable* $tmp304 = ((frost$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Int64 $tmp307 = $tmp305(((frost$collections$CollectionView*) $tmp303));
frost$core$Int64 $tmp308 = (frost$core$Int64) {1};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 - $tmp310;
frost$core$Int64 $tmp312 = (frost$core$Int64) {$tmp311};
org$frostlang$frostc$parser$Token $tmp313 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token($tmp301, $tmp312);
return $tmp313;

}
org$frostlang$frostc$parser$Token$nullable org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token$Kind param1) {

org$frostlang$frostc$parser$Token local0;
// line 173
org$frostlang$frostc$parser$Token $tmp314 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp314;
// line 174
org$frostlang$frostc$parser$Token $tmp315 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp316 = $tmp315.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp317->value = $tmp316;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp318;
$tmp318 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp318->value = param1;
ITable* $tmp319 = ((frost$core$Equatable*) $tmp317)->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Bit $tmp322 = $tmp320(((frost$core$Equatable*) $tmp317), ((frost$core$Equatable*) $tmp318));
bool $tmp323 = $tmp322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp317)));
if ($tmp323) goto block1; else goto block2;
block1:;
// line 175
org$frostlang$frostc$parser$Token $tmp324 = *(&local0);
return ((org$frostlang$frostc$parser$Token$nullable) { $tmp324, true });
block2:;
// line 177
org$frostlang$frostc$parser$Token $tmp325 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp325);
// line 178
return ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });

}
org$frostlang$frostc$parser$Token$nullable org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token$Kind param1, frost$core$String* param2) {

org$frostlang$frostc$parser$Token local0;
// line 182
org$frostlang$frostc$parser$Token $tmp326 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp326;
// line 183
org$frostlang$frostc$parser$Token $tmp327 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp328 = $tmp327.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp329;
$tmp329 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp329->value = $tmp328;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp330;
$tmp330 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp330->value = param1;
ITable* $tmp331 = ((frost$core$Equatable*) $tmp329)->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp331 = $tmp331->next;
}
$fn333 $tmp332 = $tmp331->methods[0];
frost$core$Bit $tmp334 = $tmp332(((frost$core$Equatable*) $tmp329), ((frost$core$Equatable*) $tmp330));
bool $tmp335 = $tmp334.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp330)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp329)));
if ($tmp335) goto block1; else goto block2;
block1:;
// line 184
org$frostlang$frostc$parser$Token $tmp336 = *(&local0);
return ((org$frostlang$frostc$parser$Token$nullable) { $tmp336, true });
block2:;
// line 186
org$frostlang$frostc$parser$Token $tmp337 = *(&local0);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, param2);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
org$frostlang$frostc$parser$Token $tmp342 = *(&local0);
frost$core$String* $tmp343 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp342);
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, $tmp343);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp344, &$s346);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp337, $tmp345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// line 187
return ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });

}
void org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1, frost$core$String* param2) {

frost$core$Bit local0;
// line 191
frost$collections$Stack** $tmp347 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp348 = *$tmp347;
frost$core$Int64 $tmp349 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp348);
frost$core$Int64 $tmp350 = (frost$core$Int64) {0};
frost$core$Bit $tmp351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block3; else goto block4;
block3:;
frost$core$Bit* $tmp353 = &param0->reportErrors;
frost$core$Bit $tmp354 = *$tmp353;
*(&local0) = $tmp354;
goto block5;
block4:;
*(&local0) = $tmp351;
goto block5;
block5:;
frost$core$Bit $tmp355 = *(&local0);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block1; else goto block2;
block1:;
// line 192
frost$threads$MessageQueue** $tmp357 = &param0->errors;
frost$threads$MessageQueue* $tmp358 = *$tmp357;
org$frostlang$frostc$Compiler$ErrorMsg* $tmp359 = (org$frostlang$frostc$Compiler$ErrorMsg*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$ErrorMsg$class);
frost$io$File** $tmp360 = &param0->path;
frost$io$File* $tmp361 = *$tmp360;
org$frostlang$frostc$Position $tmp362 = param1.position;
org$frostlang$frostc$Compiler$ErrorMsg$init$frost$io$File$org$frostlang$frostc$Position$frost$core$String($tmp359, $tmp361, $tmp362, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp358, ((frost$core$Immutable*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 197
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp363 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp364 = *$tmp363;
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364 != NULL);
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block1; else goto block2;
block1:;
// line 198
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp367 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp368 = *$tmp367;
$fn370 $tmp369 = ($fn370) $tmp368->$class->vtable[3];
$tmp369($tmp368, param1);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 203
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp371 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp372 = *$tmp371;
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block1; else goto block2;
block1:;
// line 204
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp375 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp376 = *$tmp375;
$fn378 $tmp377 = ($fn378) $tmp376->$class->vtable[4];
$tmp377($tmp376, param1);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$startSpeculative(org$frostlang$frostc$parser$Parser* param0) {

// line 209
frost$collections$Stack** $tmp379 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp380 = *$tmp379;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp381 = (frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$class);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$init($tmp381);
frost$collections$Stack$push$frost$collections$Stack$T($tmp380, ((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// line 210
frost$collections$Stack** $tmp382 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp383 = *$tmp382;
frost$core$Int64 $tmp384 = (frost$core$Int64) {0};
frost$core$Object* $tmp385 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp383, $tmp384);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp386 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp387 = *$tmp386;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlang$frostc$parser$Token$GT(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp385), ((frost$collections$CollectionView*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q($tmp385);
return;

}
void org$frostlang$frostc$parser$Parser$accept(org$frostlang$frostc$parser$Parser* param0) {

// line 214
frost$collections$Stack** $tmp388 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp389 = *$tmp388;
frost$core$Object* $tmp390 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp389);
frost$core$Frost$unref$frost$core$Object$Q($tmp390);
return;

}
void org$frostlang$frostc$parser$Parser$rewind(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
// line 218
frost$collections$Stack** $tmp391 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp392 = *$tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {0};
frost$core$Object* $tmp394 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp392, $tmp393);
ITable* $tmp395 = ((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp394))->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
frost$core$Int64 $tmp398 = $tmp396(((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp394)));
frost$core$Int64 $tmp399 = (frost$core$Int64) {1};
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400 - $tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {$tmp402};
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
frost$core$Int64 $tmp405 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp407 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp403, $tmp404, $tmp405, $tmp406);
frost$core$Int64 $tmp408 = $tmp407.start;
*(&local0) = $tmp408;
frost$core$Int64 $tmp409 = $tmp407.end;
frost$core$Int64 $tmp410 = $tmp407.step;
frost$core$UInt64 $tmp411 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp410);
frost$core$Int64 $tmp412 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp410);
frost$core$UInt64 $tmp413 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp412);
frost$core$Bit $tmp414 = $tmp407.inclusive;
bool $tmp415 = $tmp414.value;
frost$core$Int64 $tmp416 = (frost$core$Int64) {0};
int64_t $tmp417 = $tmp410.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 >= $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block4; else goto block5;
block4:;
if ($tmp415) goto block6; else goto block7;
block6:;
int64_t $tmp422 = $tmp408.value;
int64_t $tmp423 = $tmp409.value;
bool $tmp424 = $tmp422 <= $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block1; else goto block2;
block7:;
int64_t $tmp427 = $tmp408.value;
int64_t $tmp428 = $tmp409.value;
bool $tmp429 = $tmp427 < $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block1; else goto block2;
block5:;
if ($tmp415) goto block8; else goto block9;
block8:;
int64_t $tmp432 = $tmp408.value;
int64_t $tmp433 = $tmp409.value;
bool $tmp434 = $tmp432 >= $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block1; else goto block2;
block9:;
int64_t $tmp437 = $tmp408.value;
int64_t $tmp438 = $tmp409.value;
bool $tmp439 = $tmp437 > $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block1; else goto block2;
block1:;
// line 219
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp442 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp443 = *$tmp442;
frost$collections$Stack** $tmp444 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp445 = *$tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {0};
frost$core$Object* $tmp447 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp445, $tmp446);
frost$core$Int64 $tmp448 = *(&local0);
org$frostlang$frostc$parser$Token $tmp449 = frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlang$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT*) $tmp447), $tmp448);
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT$add$org$frostlang$frostc$parser$Token($tmp443, $tmp449);
frost$core$Frost$unref$frost$core$Object$Q($tmp447);
goto block3;
block3:;
frost$core$Int64 $tmp450 = *(&local0);
if ($tmp421) goto block11; else goto block12;
block11:;
int64_t $tmp451 = $tmp409.value;
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451 - $tmp452;
frost$core$Int64 $tmp454 = (frost$core$Int64) {$tmp453};
frost$core$UInt64 $tmp455 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp454);
if ($tmp415) goto block13; else goto block14;
block13:;
uint64_t $tmp456 = $tmp455.value;
uint64_t $tmp457 = $tmp411.value;
bool $tmp458 = $tmp456 >= $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block10; else goto block2;
block14:;
uint64_t $tmp461 = $tmp455.value;
uint64_t $tmp462 = $tmp411.value;
bool $tmp463 = $tmp461 > $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block10; else goto block2;
block12:;
int64_t $tmp466 = $tmp450.value;
int64_t $tmp467 = $tmp409.value;
int64_t $tmp468 = $tmp466 - $tmp467;
frost$core$Int64 $tmp469 = (frost$core$Int64) {$tmp468};
frost$core$UInt64 $tmp470 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp469);
if ($tmp415) goto block15; else goto block16;
block15:;
uint64_t $tmp471 = $tmp470.value;
uint64_t $tmp472 = $tmp413.value;
bool $tmp473 = $tmp471 >= $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block10; else goto block2;
block16:;
uint64_t $tmp476 = $tmp470.value;
uint64_t $tmp477 = $tmp413.value;
bool $tmp478 = $tmp476 > $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block2;
block10:;
int64_t $tmp481 = $tmp450.value;
int64_t $tmp482 = $tmp410.value;
int64_t $tmp483 = $tmp481 + $tmp482;
frost$core$Int64 $tmp484 = (frost$core$Int64) {$tmp483};
*(&local0) = $tmp484;
goto block1;
block2:;
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
// line 221
frost$collections$Stack** $tmp485 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp486 = *$tmp485;
frost$core$Object* $tmp487 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp486);
frost$core$Frost$unref$frost$core$Object$Q($tmp487);
return;

}
frost$core$String* org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

// line 225
frost$core$String** $tmp488 = &param0->source;
frost$core$String* $tmp489 = *$tmp488;
frost$core$String$Index $tmp490 = param1.start;
frost$core$String$Index $tmp491 = param1.end;
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp493 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp490, $tmp491, $tmp492);
frost$core$String* $tmp494 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp489, $tmp493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
return $tmp494;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$ASTNode* param2) {

// line 229
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block1; else goto block2;
block1:;
// line 230
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// line 232
org$frostlang$frostc$ASTNode* $tmp497 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp498 = (frost$core$Int64) {5};
$fn500 $tmp499 = ($fn500) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp501 = $tmp499(param1);
frost$core$Int64 $tmp502 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp503 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp502);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp497, $tmp498, $tmp501, param1, $tmp503, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
return $tmp497;

}
frost$core$String* org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$parser$Token param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
frost$core$String* local4 = NULL;
frost$core$Char8 local5;
// line 236
frost$core$MutableString* $tmp504 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp504);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$MutableString* $tmp505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local0) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// line 237
goto block1;
block1:;
// line 238
org$frostlang$frostc$parser$Token $tmp506 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp506;
// line 239
org$frostlang$frostc$parser$Token $tmp507 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp508 = $tmp507.kind;
frost$core$Int64 $tmp509 = $tmp508.$rawValue;
frost$core$Int64 $tmp510 = (frost$core$Int64) {13};
frost$core$Bit $tmp511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp509, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block4; else goto block5;
block4:;
// line 241
org$frostlang$frostc$parser$Token $tmp513 = *(&local1);
frost$core$String* $tmp514 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp513);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$String* $tmp515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local2) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// line 242
frost$core$String* $tmp516 = *(&local2);
frost$core$Bit $tmp517 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp516, &$s518);
bool $tmp519 = $tmp517.value;
if ($tmp519) goto block6; else goto block7;
block6:;
// line 243
org$frostlang$frostc$parser$Token $tmp520 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp520, &$s521);
// line 244
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp523 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 246
frost$core$MutableString* $tmp524 = *(&local0);
frost$core$String* $tmp525 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp524, $tmp525);
frost$core$String* $tmp526 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {0};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp509, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block8; else goto block9;
block8:;
// line 249
org$frostlang$frostc$parser$Token $tmp530 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp530, &$s531);
// line 250
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {110};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp509, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block10; else goto block11;
block10:;
// line 253
org$frostlang$frostc$parser$Token $tmp536 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp536;
// line 254
org$frostlang$frostc$parser$Token $tmp537 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp538 = $tmp537.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp539;
$tmp539 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp539->value = $tmp538;
frost$core$Int64 $tmp540 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp541 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp540);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp542;
$tmp542 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp542->value = $tmp541;
ITable* $tmp543 = ((frost$core$Equatable*) $tmp539)->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[0];
frost$core$Bit $tmp546 = $tmp544(((frost$core$Equatable*) $tmp539), ((frost$core$Equatable*) $tmp542));
bool $tmp547 = $tmp546.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp542)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp539)));
if ($tmp547) goto block12; else goto block13;
block12:;
// line 255
org$frostlang$frostc$parser$Token $tmp548 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp548, &$s549);
// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp550 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 258
org$frostlang$frostc$parser$Token $tmp551 = *(&local3);
frost$core$String* $tmp552 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp551);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$String* $tmp553 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local4) = $tmp552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// line 259
frost$core$String* $tmp554 = *(&local4);
frost$collections$ListView* $tmp555 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp554);
frost$core$Int64 $tmp556 = (frost$core$Int64) {0};
ITable* $tmp557 = $tmp555->$class->itable;
while ($tmp557->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp557 = $tmp557->next;
}
$fn559 $tmp558 = $tmp557->methods[0];
frost$core$Object* $tmp560 = $tmp558($tmp555, $tmp556);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp560)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp560);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// line 260
frost$core$Char8 $tmp561 = *(&local5);
frost$core$UInt8 $tmp562 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp563 = frost$core$Char8$init$frost$core$UInt8($tmp562);
frost$core$Bit $tmp564 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp563);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block15; else goto block16;
block15:;
// line 261
frost$core$MutableString* $tmp566 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp566, &$s567);
goto block14;
block16:;
frost$core$UInt8 $tmp568 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp569 = frost$core$Char8$init$frost$core$UInt8($tmp568);
frost$core$Bit $tmp570 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block17; else goto block18;
block17:;
// line 262
frost$core$MutableString* $tmp572 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp572, &$s573);
goto block14;
block18:;
frost$core$UInt8 $tmp574 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp575 = frost$core$Char8$init$frost$core$UInt8($tmp574);
frost$core$Bit $tmp576 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block19; else goto block20;
block19:;
// line 263
frost$core$MutableString* $tmp578 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp578, &$s579);
goto block14;
block20:;
frost$core$UInt8 $tmp580 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp581 = frost$core$Char8$init$frost$core$UInt8($tmp580);
frost$core$Bit $tmp582 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block21; else goto block22;
block21:;
// line 264
frost$core$MutableString* $tmp584 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp584, &$s585);
goto block14;
block22:;
frost$core$UInt8 $tmp586 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp587 = frost$core$Char8$init$frost$core$UInt8($tmp586);
frost$core$Bit $tmp588 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp587);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block23; else goto block24;
block23:;
// line 265
frost$core$MutableString* $tmp590 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp590, &$s591);
goto block14;
block24:;
frost$core$UInt8 $tmp592 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp593 = frost$core$Char8$init$frost$core$UInt8($tmp592);
frost$core$Bit $tmp594 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block25; else goto block26;
block25:;
// line 266
frost$core$MutableString* $tmp596 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp596, &$s597);
goto block14;
block26:;
frost$core$UInt8 $tmp598 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp599 = frost$core$Char8$init$frost$core$UInt8($tmp598);
frost$core$Bit $tmp600 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp561, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block27; else goto block28;
block27:;
// line 267
frost$core$MutableString* $tmp602 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp602, &$s603);
goto block14;
block28:;
// line 269
org$frostlang$frostc$parser$Token $tmp604 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp604, &$s605);
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp607 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 273
frost$core$MutableString* $tmp608 = *(&local0);
frost$core$String* $tmp609 = *(&local4);
frost$core$String* $tmp610 = *(&local4);
frost$core$String* $tmp611 = *(&local4);
frost$core$String$Index $tmp612 = frost$core$String$get_start$R$frost$core$String$Index($tmp611);
frost$core$String$Index $tmp613 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp610, $tmp612);
frost$core$Bit $tmp614 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp615 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp613, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp614);
frost$core$String* $tmp616 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp609, $tmp615);
frost$core$MutableString$append$frost$core$String($tmp608, $tmp616);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$String* $tmp617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp618 = (frost$core$Int64) {104};
frost$core$Bit $tmp619 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp509, $tmp618);
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block29; else goto block30;
block29:;
// line 276
org$frostlang$frostc$parser$Token $tmp621 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp621);
// line 277
frost$core$MutableString* $tmp622 = *(&local0);
frost$core$String* $tmp623 = frost$core$MutableString$finish$R$frost$core$String($tmp622);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$MutableString* $tmp624 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp623;
block30:;
// line 280
frost$core$MutableString* $tmp625 = *(&local0);
org$frostlang$frostc$parser$Token $tmp626 = *(&local1);
frost$core$String* $tmp627 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp626);
frost$core$MutableString$append$frost$core$String($tmp625, $tmp627);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
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
frost$core$MutableString* $tmp628 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp628);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$MutableString* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local0) = $tmp628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// line 288
goto block1;
block1:;
// line 289
org$frostlang$frostc$parser$Token $tmp630 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp630;
// line 290
org$frostlang$frostc$parser$Token $tmp631 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp632 = $tmp631.kind;
frost$core$Int64 $tmp633 = $tmp632.$rawValue;
frost$core$Int64 $tmp634 = (frost$core$Int64) {13};
frost$core$Bit $tmp635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp633, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block4; else goto block5;
block4:;
// line 292
org$frostlang$frostc$parser$Token $tmp637 = *(&local1);
frost$core$String* $tmp638 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp637);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$String* $tmp639 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local2) = $tmp638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// line 293
frost$core$String* $tmp640 = *(&local2);
frost$core$Bit $tmp641 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp640, &$s642);
bool $tmp643 = $tmp641.value;
if ($tmp643) goto block6; else goto block7;
block6:;
// line 294
org$frostlang$frostc$parser$Token $tmp644 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp644, &$s645);
// line 295
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp646 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp647 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 297
frost$core$MutableString* $tmp648 = *(&local0);
frost$core$String* $tmp649 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp648, $tmp649);
frost$core$String* $tmp650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp651 = (frost$core$Int64) {0};
frost$core$Bit $tmp652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp633, $tmp651);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block8; else goto block9;
block8:;
// line 300
org$frostlang$frostc$parser$Token $tmp654 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp654, &$s655);
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp656 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp657 = (frost$core$Int64) {110};
frost$core$Bit $tmp658 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp633, $tmp657);
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block10; else goto block11;
block10:;
// line 304
org$frostlang$frostc$parser$Token $tmp660 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp660;
// line 305
org$frostlang$frostc$parser$Token $tmp661 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp662 = $tmp661.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp663;
$tmp663 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp663->value = $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp665 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp664);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp666;
$tmp666 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp666->value = $tmp665;
ITable* $tmp667 = ((frost$core$Equatable*) $tmp663)->$class->itable;
while ($tmp667->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp667 = $tmp667->next;
}
$fn669 $tmp668 = $tmp667->methods[0];
frost$core$Bit $tmp670 = $tmp668(((frost$core$Equatable*) $tmp663), ((frost$core$Equatable*) $tmp666));
bool $tmp671 = $tmp670.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp666)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp663)));
if ($tmp671) goto block12; else goto block13;
block12:;
// line 306
org$frostlang$frostc$parser$Token $tmp672 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp672, &$s673);
// line 307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 309
org$frostlang$frostc$parser$Token $tmp675 = *(&local3);
frost$core$String* $tmp676 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp675);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$String* $tmp677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local4) = $tmp676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// line 310
frost$core$String* $tmp678 = *(&local4);
frost$collections$ListView* $tmp679 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp678);
frost$core$Int64 $tmp680 = (frost$core$Int64) {0};
ITable* $tmp681 = $tmp679->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[0];
frost$core$Object* $tmp684 = $tmp682($tmp679, $tmp680);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp684)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// line 311
frost$core$Char8 $tmp685 = *(&local5);
frost$core$UInt8 $tmp686 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp687 = frost$core$Char8$init$frost$core$UInt8($tmp686);
frost$core$Bit $tmp688 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp687);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block15; else goto block16;
block15:;
// line 312
frost$core$MutableString* $tmp690 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp690, &$s691);
goto block14;
block16:;
frost$core$UInt8 $tmp692 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp693 = frost$core$Char8$init$frost$core$UInt8($tmp692);
frost$core$Bit $tmp694 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp693);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block17; else goto block18;
block17:;
// line 313
frost$core$MutableString* $tmp696 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp696, &$s697);
goto block14;
block18:;
frost$core$UInt8 $tmp698 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp699 = frost$core$Char8$init$frost$core$UInt8($tmp698);
frost$core$Bit $tmp700 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp699);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block19; else goto block20;
block19:;
// line 314
frost$core$MutableString* $tmp702 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp702, &$s703);
goto block14;
block20:;
frost$core$UInt8 $tmp704 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp705 = frost$core$Char8$init$frost$core$UInt8($tmp704);
frost$core$Bit $tmp706 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block21; else goto block22;
block21:;
// line 315
frost$core$MutableString* $tmp708 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp708, &$s709);
goto block14;
block22:;
frost$core$UInt8 $tmp710 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp711 = frost$core$Char8$init$frost$core$UInt8($tmp710);
frost$core$Bit $tmp712 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp711);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block23; else goto block24;
block23:;
// line 316
frost$core$MutableString* $tmp714 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp714, &$s715);
goto block14;
block24:;
frost$core$UInt8 $tmp716 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp717 = frost$core$Char8$init$frost$core$UInt8($tmp716);
frost$core$Bit $tmp718 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block25; else goto block26;
block25:;
// line 317
frost$core$MutableString* $tmp720 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp720, &$s721);
goto block14;
block26:;
frost$core$UInt8 $tmp722 = (frost$core$UInt8) {58};
frost$core$Char8 $tmp723 = frost$core$Char8$init$frost$core$UInt8($tmp722);
frost$core$Bit $tmp724 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp723);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block27; else goto block28;
block27:;
// line 318
frost$core$MutableString* $tmp726 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp726, &$s727);
goto block14;
block28:;
frost$core$UInt8 $tmp728 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp729 = frost$core$Char8$init$frost$core$UInt8($tmp728);
frost$core$Bit $tmp730 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp685, $tmp729);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block29; else goto block30;
block29:;
// line 319
frost$core$MutableString* $tmp732 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp732, &$s733);
goto block14;
block30:;
// line 321
org$frostlang$frostc$parser$Token $tmp734 = *(&local1);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp734, &$s735);
// line 322
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp736 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 325
frost$core$MutableString* $tmp738 = *(&local0);
frost$core$String* $tmp739 = *(&local4);
frost$core$String* $tmp740 = *(&local4);
frost$core$String* $tmp741 = *(&local4);
frost$core$String$Index $tmp742 = frost$core$String$get_start$R$frost$core$String$Index($tmp741);
frost$core$String$Index $tmp743 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp740, $tmp742);
frost$core$Bit $tmp744 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp745 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp743, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp744);
frost$core$String* $tmp746 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp739, $tmp745);
frost$core$MutableString$append$frost$core$String($tmp738, $tmp746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$String* $tmp747 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {99};
frost$core$Bit $tmp749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp633, $tmp748);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block31; else goto block32;
block31:;
// line 328
org$frostlang$frostc$parser$Token $tmp751 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp751);
// line 329
frost$core$MutableString* $tmp752 = *(&local0);
frost$core$String* $tmp753 = frost$core$MutableString$finish$R$frost$core$String($tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$MutableString* $tmp754 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp753;
block32:;
frost$core$Int64 $tmp755 = (frost$core$Int64) {104};
frost$core$Bit $tmp756 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp633, $tmp755);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block33; else goto block34;
block33:;
// line 332
org$frostlang$frostc$parser$Token $tmp758 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp758);
// line 333
frost$core$MutableString* $tmp759 = *(&local0);
frost$core$String* $tmp760 = frost$core$MutableString$finish$R$frost$core$String($tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$MutableString* $tmp761 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp760;
block34:;
// line 336
frost$core$MutableString* $tmp762 = *(&local0);
org$frostlang$frostc$parser$Token $tmp763 = *(&local1);
frost$core$String* $tmp764 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp763);
frost$core$MutableString$append$frost$core$String($tmp762, $tmp764);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
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
org$frostlang$frostc$ASTNode* $tmp765 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp766 = (frost$core$Int64) {16};
$fn768 $tmp767 = ($fn768) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp769 = $tmp767(param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp765, $tmp766, $tmp769, param1, &$s770);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$ASTNode* $tmp771 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local0) = $tmp765;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// line 345
org$frostlang$frostc$ASTNode* $tmp772 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp773 = (frost$core$Int64) {9};
$fn775 $tmp774 = ($fn775) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp776 = $tmp774(param1);
org$frostlang$frostc$ASTNode* $tmp777 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp778 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp778);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp772, $tmp773, $tmp776, $tmp777, $tmp778);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$ASTNode* $tmp779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local1) = $tmp772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// line 346
org$frostlang$frostc$ASTNode* $tmp780 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp781 = (frost$core$Int64) {45};
$fn783 $tmp782 = ($fn783) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp784 = $tmp782(param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp780, $tmp781, $tmp784, &$s785);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
org$frostlang$frostc$ASTNode* $tmp786 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local2) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// line 347
org$frostlang$frostc$ASTNode* $tmp787 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp788 = (frost$core$Int64) {5};
$fn790 $tmp789 = ($fn790) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp791 = $tmp789(param1);
org$frostlang$frostc$ASTNode* $tmp792 = *(&local1);
frost$core$Int64 $tmp793 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp794 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp793);
org$frostlang$frostc$ASTNode* $tmp795 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp787, $tmp788, $tmp791, $tmp792, $tmp794, $tmp795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$ASTNode* $tmp796 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp787;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
frost$core$Bit local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$MutableString* local5 = NULL;
org$frostlang$frostc$parser$Token local6;
frost$core$String* local7 = NULL;
org$frostlang$frostc$parser$Token local8;
frost$core$String* local9 = NULL;
frost$core$Char8 local10;
frost$core$Bit local11;
org$frostlang$frostc$ASTNode* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$ASTNode* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
frost$collections$Array* local21 = NULL;
frost$core$String* local22 = NULL;
frost$core$Bit local23;
frost$core$Bit* $tmp799 = &param0->allowLambdas;
frost$core$Bit $tmp800 = *$tmp799;
// line 352
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp801 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp802 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp803 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp802);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind($tmp801, param0, $tmp803);
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp804 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local1) = $tmp801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// line 353
org$frostlang$frostc$parser$Token $tmp805 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp805;
// line 354
org$frostlang$frostc$parser$Token $tmp806 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp807 = $tmp806.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp808;
$tmp808 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp808->value = $tmp807;
frost$core$Int64 $tmp809 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$Kind $tmp810 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp809);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp811;
$tmp811 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp811->value = $tmp810;
ITable* $tmp812 = ((frost$core$Equatable*) $tmp808)->$class->itable;
while ($tmp812->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp812 = $tmp812->next;
}
$fn814 $tmp813 = $tmp812->methods[1];
frost$core$Bit $tmp815 = $tmp813(((frost$core$Equatable*) $tmp808), ((frost$core$Equatable*) $tmp811));
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block6; else goto block7;
block6:;
org$frostlang$frostc$parser$Token $tmp817 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp818 = $tmp817.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp819;
$tmp819 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp819->value = $tmp818;
frost$core$Int64 $tmp820 = (frost$core$Int64) {7};
org$frostlang$frostc$parser$Token$Kind $tmp821 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp820);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp822;
$tmp822 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp822->value = $tmp821;
ITable* $tmp823 = ((frost$core$Equatable*) $tmp819)->$class->itable;
while ($tmp823->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp823 = $tmp823->next;
}
$fn825 $tmp824 = $tmp823->methods[1];
frost$core$Bit $tmp826 = $tmp824(((frost$core$Equatable*) $tmp819), ((frost$core$Equatable*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp822)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp819)));
*(&local3) = $tmp826;
goto block8;
block7:;
*(&local3) = $tmp815;
goto block8;
block8:;
frost$core$Bit $tmp827 = *(&local3);
bool $tmp828 = $tmp827.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp811)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp808)));
if ($tmp828) goto block4; else goto block5;
block4:;
// line 355
org$frostlang$frostc$parser$Token $tmp829 = *(&local2);
org$frostlang$frostc$parser$Token $tmp830 = *(&local2);
frost$core$String* $tmp831 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp830);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s833, $tmp831);
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp832, &$s835);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp829, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// line 356
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
// line 358
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp837 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 359
frost$core$MutableString* $tmp838 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp838);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$MutableString* $tmp839 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local5) = $tmp838;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// line 360
goto block9;
block9:;
// line 361
org$frostlang$frostc$parser$Token $tmp840 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp840;
// line 362
org$frostlang$frostc$parser$Token $tmp841 = *(&local6);
org$frostlang$frostc$parser$Token$Kind $tmp842 = $tmp841.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp843;
$tmp843 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp843->value = $tmp842;
org$frostlang$frostc$parser$Token $tmp844 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp845 = $tmp844.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp846;
$tmp846 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp846->value = $tmp845;
ITable* $tmp847 = ((frost$core$Equatable*) $tmp843)->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
frost$core$Bit $tmp850 = $tmp848(((frost$core$Equatable*) $tmp843), ((frost$core$Equatable*) $tmp846));
bool $tmp851 = $tmp850.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp846)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp843)));
if ($tmp851) goto block11; else goto block12;
block11:;
// line 363
goto block10;
block12:;
// line 365
org$frostlang$frostc$parser$Token $tmp852 = *(&local6);
org$frostlang$frostc$parser$Token$Kind $tmp853 = $tmp852.kind;
frost$core$Int64 $tmp854 = $tmp853.$rawValue;
frost$core$Int64 $tmp855 = (frost$core$Int64) {13};
frost$core$Bit $tmp856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp854, $tmp855);
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block14; else goto block15;
block14:;
// line 367
org$frostlang$frostc$parser$Token $tmp858 = *(&local6);
frost$core$String* $tmp859 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp858);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$String* $tmp860 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local7) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// line 368
frost$core$String* $tmp861 = *(&local7);
frost$core$Bit $tmp862 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp861, &$s863);
bool $tmp864 = $tmp862.value;
if ($tmp864) goto block16; else goto block17;
block16:;
// line 369
org$frostlang$frostc$parser$Token $tmp865 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp865, &$s866);
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp867 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local7) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp868 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp870 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block17:;
// line 372
frost$core$MutableString* $tmp871 = *(&local5);
frost$core$String* $tmp872 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp871, $tmp872);
frost$core$String* $tmp873 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local7) = ((frost$core$String*) NULL);
goto block13;
block15:;
frost$core$Int64 $tmp874 = (frost$core$Int64) {0};
frost$core$Bit $tmp875 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp854, $tmp874);
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block18; else goto block19;
block18:;
// line 375
org$frostlang$frostc$parser$Token $tmp877 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp877, &$s878);
// line 376
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp879 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp880 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp882 = (frost$core$Int64) {110};
frost$core$Bit $tmp883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp854, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block20; else goto block21;
block20:;
// line 379
org$frostlang$frostc$parser$Token $tmp885 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp885;
// line 380
org$frostlang$frostc$parser$Token $tmp886 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp887 = $tmp886.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp888;
$tmp888 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp888->value = $tmp887;
frost$core$Int64 $tmp889 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp890 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp889);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp891;
$tmp891 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp891->value = $tmp890;
ITable* $tmp892 = ((frost$core$Equatable*) $tmp888)->$class->itable;
while ($tmp892->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp892 = $tmp892->next;
}
$fn894 $tmp893 = $tmp892->methods[0];
frost$core$Bit $tmp895 = $tmp893(((frost$core$Equatable*) $tmp888), ((frost$core$Equatable*) $tmp891));
bool $tmp896 = $tmp895.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp891)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp888)));
if ($tmp896) goto block22; else goto block23;
block22:;
// line 381
org$frostlang$frostc$parser$Token $tmp897 = *(&local2);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp897, &$s898);
// line 382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp899 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp900 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
// line 384
org$frostlang$frostc$parser$Token $tmp902 = *(&local8);
frost$core$String* $tmp903 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp902);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$String* $tmp904 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local9) = $tmp903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// line 385
frost$core$String* $tmp905 = *(&local9);
frost$collections$ListView* $tmp906 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp905);
frost$core$Int64 $tmp907 = (frost$core$Int64) {0};
ITable* $tmp908 = $tmp906->$class->itable;
while ($tmp908->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp908 = $tmp908->next;
}
$fn910 $tmp909 = $tmp908->methods[0];
frost$core$Object* $tmp911 = $tmp909($tmp906, $tmp907);
*(&local10) = ((frost$core$Char8$wrapper*) $tmp911)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// line 386
frost$core$Char8 $tmp912 = *(&local10);
frost$core$UInt8 $tmp913 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp914 = frost$core$Char8$init$frost$core$UInt8($tmp913);
frost$core$Bit $tmp915 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp914);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block25; else goto block26;
block25:;
// line 387
frost$core$MutableString* $tmp917 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp917, &$s918);
goto block24;
block26:;
frost$core$UInt8 $tmp919 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp920 = frost$core$Char8$init$frost$core$UInt8($tmp919);
frost$core$Bit $tmp921 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block27; else goto block28;
block27:;
// line 388
frost$core$MutableString* $tmp923 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp923, &$s924);
goto block24;
block28:;
frost$core$UInt8 $tmp925 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp926 = frost$core$Char8$init$frost$core$UInt8($tmp925);
frost$core$Bit $tmp927 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp926);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block29; else goto block30;
block29:;
// line 389
frost$core$MutableString* $tmp929 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp929, &$s930);
goto block24;
block30:;
frost$core$UInt8 $tmp931 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp932 = frost$core$Char8$init$frost$core$UInt8($tmp931);
frost$core$Bit $tmp933 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block31; else goto block32;
block31:;
// line 390
frost$core$MutableString* $tmp935 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp935, &$s936);
goto block24;
block32:;
frost$core$UInt8 $tmp937 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp938 = frost$core$Char8$init$frost$core$UInt8($tmp937);
frost$core$Bit $tmp939 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp938);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block33; else goto block34;
block33:;
// line 391
frost$core$MutableString* $tmp941 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp941, &$s942);
goto block24;
block34:;
frost$core$UInt8 $tmp943 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp944 = frost$core$Char8$init$frost$core$UInt8($tmp943);
frost$core$Bit $tmp945 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp944);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block35; else goto block36;
block35:;
// line 392
frost$core$MutableString* $tmp947 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp947, &$s948);
goto block24;
block36:;
frost$core$UInt8 $tmp949 = (frost$core$UInt8) {123};
frost$core$Char8 $tmp950 = frost$core$Char8$init$frost$core$UInt8($tmp949);
frost$core$Bit $tmp951 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp912, $tmp950);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block37; else goto block38;
block37:;
// line 395
frost$core$Bit* $tmp953 = &param0->allowLambdas;
frost$core$Bit $tmp954 = *$tmp953;
*(&local11) = $tmp954;
// line 396
frost$core$Bit $tmp955 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp956 = &param0->allowLambdas;
*$tmp956 = $tmp955;
// line 397
org$frostlang$frostc$ASTNode* $tmp957 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$ASTNode* $tmp958 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local12) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// line 398
frost$core$Bit $tmp959 = *(&local11);
frost$core$Bit* $tmp960 = &param0->allowLambdas;
*$tmp960 = $tmp959;
// line 399
org$frostlang$frostc$ASTNode* $tmp961 = *(&local12);
frost$core$Bit $tmp962 = frost$core$Bit$init$builtin_bit($tmp961 == NULL);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block39; else goto block40;
block39:;
// line 400
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp964 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp965 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp966 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp967 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block40:;
// line 402
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp969 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local13) = ((frost$core$String*) NULL);
// line 403
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp970 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local14) = ((frost$core$String*) NULL);
// line 404
frost$core$Int64 $tmp971 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp972 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp971);
org$frostlang$frostc$parser$Token$nullable $tmp973 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp972);
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit($tmp973.nonnull);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block41; else goto block42;
block41:;
// line 405
org$frostlang$frostc$parser$Token $tmp976 = *(&local2);
frost$core$String* $tmp977 = org$frostlang$frostc$parser$Parser$alignmentString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp976);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$String* $tmp978 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local13) = $tmp977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
goto block42;
block42:;
// line 407
frost$core$Int64 $tmp979 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp980 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp979);
org$frostlang$frostc$parser$Token$nullable $tmp981 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp980);
frost$core$Bit $tmp982 = frost$core$Bit$init$builtin_bit($tmp981.nonnull);
bool $tmp983 = $tmp982.value;
if ($tmp983) goto block43; else goto block44;
block43:;
// line 408
org$frostlang$frostc$parser$Token $tmp984 = *(&local2);
frost$core$String* $tmp985 = org$frostlang$frostc$parser$Parser$formatString$org$frostlang$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$String* $tmp986 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local14) = $tmp985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// line 409
frost$core$String* $tmp987 = *(&local14);
frost$core$Bit $tmp988 = frost$core$Bit$init$builtin_bit($tmp987 == NULL);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block45; else goto block46;
block45:;
// line 410
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp990 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local14) = ((frost$core$String*) NULL);
frost$core$String* $tmp991 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp992 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp993 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp994 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp995 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp996 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block46:;
// line 412
org$frostlang$frostc$ASTNode* $tmp997 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp998 = (frost$core$Int64) {45};
org$frostlang$frostc$ASTNode* $tmp999 = *(&local12);
$fn1001 $tmp1000 = ($fn1001) $tmp999->$class->vtable[2];
org$frostlang$frostc$Position $tmp1002 = $tmp1000($tmp999);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp997, $tmp998, $tmp1002, &$s1003);
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
org$frostlang$frostc$ASTNode* $tmp1004 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local15) = $tmp997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// line 414
org$frostlang$frostc$ASTNode* $tmp1005 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1006 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp1007 = *(&local12);
$fn1009 $tmp1008 = ($fn1009) $tmp1007->$class->vtable[2];
org$frostlang$frostc$Position $tmp1010 = $tmp1008($tmp1007);
org$frostlang$frostc$ASTNode* $tmp1011 = *(&local12);
frost$core$Int64 $tmp1012 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp1013 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp1012);
org$frostlang$frostc$ASTNode* $tmp1014 = *(&local15);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1005, $tmp1006, $tmp1010, $tmp1011, $tmp1013, $tmp1014);
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
org$frostlang$frostc$ASTNode* $tmp1015 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local16) = $tmp1005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// line 416
org$frostlang$frostc$ASTNode* $tmp1016 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1017 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1018 = *(&local12);
$fn1020 $tmp1019 = ($fn1020) $tmp1018->$class->vtable[2];
org$frostlang$frostc$Position $tmp1021 = $tmp1019($tmp1018);
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1016, $tmp1017, $tmp1021, $tmp1022, &$s1023);
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
org$frostlang$frostc$ASTNode* $tmp1024 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local17) = $tmp1016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// line 417
frost$collections$Array* $tmp1025 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1025);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$collections$Array* $tmp1026 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local18) = $tmp1025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// line 418
frost$collections$Array* $tmp1027 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp1028 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1029 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1030 = *(&local2);
org$frostlang$frostc$Position $tmp1031 = $tmp1030.position;
frost$core$String* $tmp1032 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1028, $tmp1029, $tmp1031, $tmp1032);
frost$collections$Array$add$frost$collections$Array$T($tmp1027, ((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// line 419
org$frostlang$frostc$ASTNode* $tmp1033 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1034 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp1035 = *(&local12);
$fn1037 $tmp1036 = ($fn1037) $tmp1035->$class->vtable[2];
org$frostlang$frostc$Position $tmp1038 = $tmp1036($tmp1035);
org$frostlang$frostc$ASTNode* $tmp1039 = *(&local17);
frost$collections$Array* $tmp1040 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp1041 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1040);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1033, $tmp1034, $tmp1038, $tmp1039, $tmp1041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local12) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$collections$Array* $tmp1043 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1045 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block44;
block44:;
// line 422
frost$core$Int64 $tmp1047 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp1048 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1047);
org$frostlang$frostc$parser$Token$nullable $tmp1049 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1048, &$s1050);
frost$core$Bit $tmp1051 = frost$core$Bit$init$builtin_bit(!$tmp1049.nonnull);
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block47; else goto block48;
block47:;
// line 423
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1053 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local14) = ((frost$core$String*) NULL);
frost$core$String* $tmp1054 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1056 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1057 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1058 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1059 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block48:;
// line 425
frost$core$String* $tmp1060 = *(&local13);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block49; else goto block50;
block49:;
// line 426
frost$core$String* $tmp1063 = *(&local14);
frost$core$Bit $tmp1064 = frost$core$Bit$init$builtin_bit($tmp1063 == NULL);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block51; else goto block52;
block51:;
// line 427
org$frostlang$frostc$ASTNode* $tmp1066 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp1067 = org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$ASTNode* $tmp1068 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local12) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
goto block52;
block52:;
// line 429
org$frostlang$frostc$ASTNode* $tmp1069 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1070 = (frost$core$Int64) {45};
org$frostlang$frostc$ASTNode* $tmp1071 = *(&local12);
$fn1073 $tmp1072 = ($fn1073) $tmp1071->$class->vtable[2];
org$frostlang$frostc$Position $tmp1074 = $tmp1072($tmp1071);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1069, $tmp1070, $tmp1074, &$s1075);
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local19) = $tmp1069;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// line 430
org$frostlang$frostc$ASTNode* $tmp1077 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1078 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp1079 = *(&local12);
$fn1081 $tmp1080 = ($fn1081) $tmp1079->$class->vtable[2];
org$frostlang$frostc$Position $tmp1082 = $tmp1080($tmp1079);
org$frostlang$frostc$ASTNode* $tmp1083 = *(&local19);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp1077, $tmp1078, $tmp1082, $tmp1083, &$s1084);
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
org$frostlang$frostc$ASTNode* $tmp1085 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local20) = $tmp1077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
// line 431
frost$collections$Array* $tmp1086 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1086);
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$collections$Array* $tmp1087 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local21) = $tmp1086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// line 432
frost$collections$Array* $tmp1088 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1089 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp1088, ((frost$core$Object*) $tmp1089));
// line 433
frost$collections$Array* $tmp1090 = *(&local21);
org$frostlang$frostc$ASTNode* $tmp1091 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1092 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1093 = *(&local2);
org$frostlang$frostc$Position $tmp1094 = $tmp1093.position;
frost$core$String* $tmp1095 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1091, $tmp1092, $tmp1094, $tmp1095);
frost$collections$Array$add$frost$collections$Array$T($tmp1090, ((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// line 434
org$frostlang$frostc$ASTNode* $tmp1096 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {9};
org$frostlang$frostc$ASTNode* $tmp1098 = *(&local12);
$fn1100 $tmp1099 = ($fn1100) $tmp1098->$class->vtable[2];
org$frostlang$frostc$Position $tmp1101 = $tmp1099($tmp1098);
org$frostlang$frostc$ASTNode* $tmp1102 = *(&local20);
frost$collections$Array* $tmp1103 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp1104 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1103);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1096, $tmp1097, $tmp1101, $tmp1102, $tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local12) = $tmp1096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$collections$Array* $tmp1106 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1108 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block50;
block50:;
// line 437
frost$core$MutableString* $tmp1109 = *(&local5);
frost$core$String* $tmp1110 = frost$core$MutableString$finish$R$frost$core$String($tmp1109);
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$String* $tmp1111 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local22) = $tmp1110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// line 438
frost$core$MutableString* $tmp1112 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$MutableString* $tmp1113 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local5) = $tmp1112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
// line 439
frost$core$String* $tmp1114 = *(&local22);
ITable* $tmp1116 = ((frost$core$Equatable*) $tmp1114)->$class->itable;
while ($tmp1116->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1116 = $tmp1116->next;
}
$fn1118 $tmp1117 = $tmp1116->methods[1];
frost$core$Bit $tmp1119 = $tmp1117(((frost$core$Equatable*) $tmp1114), ((frost$core$Equatable*) &$s1115));
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block55; else goto block56;
block55:;
*(&local23) = $tmp1119;
goto block57;
block56:;
org$frostlang$frostc$ASTNode* $tmp1121 = *(&local4);
frost$core$Bit $tmp1122 = frost$core$Bit$init$builtin_bit($tmp1121 != NULL);
*(&local23) = $tmp1122;
goto block57;
block57:;
frost$core$Bit $tmp1123 = *(&local23);
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block53; else goto block58;
block53:;
// line 440
org$frostlang$frostc$ASTNode* $tmp1125 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1126 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1127 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1128 = *(&local2);
org$frostlang$frostc$Position $tmp1129 = $tmp1128.position;
frost$core$String* $tmp1130 = *(&local22);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1126, $tmp1127, $tmp1129, $tmp1130);
org$frostlang$frostc$ASTNode* $tmp1131 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1125, $tmp1126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
org$frostlang$frostc$ASTNode* $tmp1132 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local4) = $tmp1131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// line 442
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp1135 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1133, $tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local4) = $tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
goto block54;
block58:;
// line 1
// line 445
org$frostlang$frostc$ASTNode* $tmp1137 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp1138 = org$frostlang$frostc$parser$Parser$convertToString$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$ASTNode* $tmp1139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local4) = $tmp1138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
goto block54;
block54:;
frost$core$String* $tmp1140 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local22) = ((frost$core$String*) NULL);
frost$core$String* $tmp1141 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local14) = ((frost$core$String*) NULL);
frost$core$String* $tmp1142 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block38:;
// line 449
org$frostlang$frostc$parser$Token $tmp1144 = *(&local6);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1144, &$s1145);
// line 450
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1146 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1148 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block24:;
// line 453
frost$core$MutableString* $tmp1150 = *(&local5);
frost$core$String* $tmp1151 = *(&local9);
frost$core$String* $tmp1152 = *(&local9);
frost$core$String* $tmp1153 = *(&local9);
frost$core$String$Index $tmp1154 = frost$core$String$get_start$R$frost$core$String$Index($tmp1153);
frost$core$String$Index $tmp1155 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp1152, $tmp1154);
frost$core$Bit $tmp1156 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1157 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1155, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1156);
frost$core$String* $tmp1158 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1151, $tmp1157);
frost$core$MutableString$append$frost$core$String($tmp1150, $tmp1158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$String* $tmp1159 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local9) = ((frost$core$String*) NULL);
goto block13;
block21:;
// line 456
frost$core$MutableString* $tmp1160 = *(&local5);
org$frostlang$frostc$parser$Token $tmp1161 = *(&local6);
frost$core$String* $tmp1162 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1161);
frost$core$MutableString$append$frost$core$String($tmp1160, $tmp1162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
goto block13;
block13:;
goto block9;
block10:;
// line 460
org$frostlang$frostc$ASTNode* $tmp1163 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1164 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1165 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token $tmp1166 = *(&local2);
org$frostlang$frostc$Position $tmp1167 = $tmp1166.position;
frost$core$MutableString* $tmp1168 = *(&local5);
frost$core$String* $tmp1169 = frost$core$MutableString$finish$R$frost$core$String($tmp1168);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1164, $tmp1165, $tmp1167, $tmp1169);
org$frostlang$frostc$ASTNode* $tmp1170 = org$frostlang$frostc$parser$Parser$addStringChunk$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode(param0, $tmp1163, $tmp1164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$MutableString* $tmp1171 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local5) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1172 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local1) = ((org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
*(&local0) = $tmp1170;
goto block1;
block1:;
frost$core$Bit* $tmp1174 = &param0->allowLambdas;
frost$core$Bit $tmp1175 = *$tmp1174;
frost$core$Bit $tmp1176 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp1175, $tmp800);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block2; else goto block3;
block2:;
org$frostlang$frostc$ASTNode* $tmp1178 = *(&local0);
return $tmp1178;
block3:;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {351};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1180, $tmp1179, &$s1181);
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
frost$core$Bit local11;
org$frostlang$frostc$ASTNode* local12 = NULL;
frost$collections$Array* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
// line 469
frost$core$Int64 $tmp1182 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1183 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1182);
org$frostlang$frostc$parser$Token$nullable $tmp1184 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1183, &$s1185);
*(&local0) = $tmp1184;
// line 470
org$frostlang$frostc$parser$Token$nullable $tmp1186 = *(&local0);
frost$core$Bit $tmp1187 = frost$core$Bit$init$builtin_bit(!$tmp1186.nonnull);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block1; else goto block2;
block1:;
// line 471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 473
org$frostlang$frostc$parser$Token $tmp1189 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp1189;
// line 474
org$frostlang$frostc$parser$Token $tmp1190 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp1191 = $tmp1190.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1192;
$tmp1192 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1192->value = $tmp1191;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1194 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1193);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1195;
$tmp1195 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1195->value = $tmp1194;
ITable* $tmp1196 = ((frost$core$Equatable*) $tmp1192)->$class->itable;
while ($tmp1196->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1196 = $tmp1196->next;
}
$fn1198 $tmp1197 = $tmp1196->methods[0];
frost$core$Bit $tmp1199 = $tmp1197(((frost$core$Equatable*) $tmp1192), ((frost$core$Equatable*) $tmp1195));
bool $tmp1200 = $tmp1199.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1195)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1192)));
if ($tmp1200) goto block3; else goto block4;
block3:;
// line 476
org$frostlang$frostc$parser$Token $tmp1201 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp1201;
// line 477
org$frostlang$frostc$parser$Token $tmp1202 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp1203 = $tmp1202.kind;
frost$core$Int64 $tmp1204 = $tmp1203.$rawValue;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {99};
frost$core$Bit $tmp1206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1204, $tmp1205);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block6; else goto block7;
block6:;
// line 480
frost$collections$Array* $tmp1208 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1208);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$collections$Array* $tmp1209 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local3) = $tmp1208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// line 481
org$frostlang$frostc$ASTNode* $tmp1210 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local4) = $tmp1210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// line 482
org$frostlang$frostc$ASTNode* $tmp1212 = *(&local4);
frost$core$Bit $tmp1213 = frost$core$Bit$init$builtin_bit($tmp1212 == NULL);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block8; else goto block9;
block8:;
// line 483
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1215 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1216 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 485
frost$collections$Array* $tmp1217 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp1218 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1219 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token $tmp1220 = *(&local1);
org$frostlang$frostc$Position $tmp1221 = $tmp1220.position;
org$frostlang$frostc$parser$Token $tmp1222 = *(&local1);
frost$core$String* $tmp1223 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1222);
org$frostlang$frostc$ASTNode* $tmp1224 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1218, $tmp1219, $tmp1221, $tmp1223, $tmp1224);
frost$collections$Array$add$frost$collections$Array$T($tmp1217, ((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// line 486
goto block10;
block10:;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1226 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1225);
org$frostlang$frostc$parser$Token$nullable $tmp1227 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1226);
frost$core$Bit $tmp1228 = frost$core$Bit$init$builtin_bit($tmp1227.nonnull);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block11; else goto block12;
block11:;
// line 487
frost$core$Int64 $tmp1230 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1231 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1230);
org$frostlang$frostc$parser$Token$nullable $tmp1232 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1231, &$s1233);
*(&local5) = $tmp1232;
// line 488
frost$core$Int64 $tmp1234 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1235 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1234);
org$frostlang$frostc$parser$Token$nullable $tmp1236 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1235, &$s1237);
frost$core$Bit $tmp1238 = frost$core$Bit$init$builtin_bit(!$tmp1236.nonnull);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block13; else goto block14;
block13:;
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1240 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1241 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 491
org$frostlang$frostc$ASTNode* $tmp1242 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
org$frostlang$frostc$ASTNode* $tmp1243 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local6) = $tmp1242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// line 492
org$frostlang$frostc$ASTNode* $tmp1244 = *(&local6);
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244 == NULL);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block15; else goto block16;
block15:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1247 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1248 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1249 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 495
frost$collections$Array* $tmp1250 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp1251 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1252 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1253 = *(&local5);
org$frostlang$frostc$Position $tmp1254 = ((org$frostlang$frostc$parser$Token) $tmp1253.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1255 = *(&local5);
frost$core$String* $tmp1256 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1255.value));
org$frostlang$frostc$ASTNode* $tmp1257 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1251, $tmp1252, $tmp1254, $tmp1256, $tmp1257);
frost$collections$Array$add$frost$collections$Array$T($tmp1250, ((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
org$frostlang$frostc$ASTNode* $tmp1258 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block10;
block12:;
// line 498
frost$core$Int64 $tmp1259 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1260 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1259);
org$frostlang$frostc$parser$Token$nullable $tmp1261 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1260, &$s1262);
frost$core$Bit $tmp1263 = frost$core$Bit$init$builtin_bit(!$tmp1261.nonnull);
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block17; else goto block18;
block17:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1266 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 501
frost$core$Int64 $tmp1267 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1268 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1267);
org$frostlang$frostc$parser$Token$nullable $tmp1269 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1268, &$s1270);
frost$core$Bit $tmp1271 = frost$core$Bit$init$builtin_bit(!$tmp1269.nonnull);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block19; else goto block20;
block19:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 504
org$frostlang$frostc$ASTNode* $tmp1275 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
org$frostlang$frostc$ASTNode* $tmp1276 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local7) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// line 505
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local7);
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit($tmp1277 == NULL);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block21; else goto block22;
block21:;
// line 506
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1280 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1281 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1282 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local3) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 508
org$frostlang$frostc$ASTNode* $tmp1283 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1285 = *(&local0);
org$frostlang$frostc$Position $tmp1286 = ((org$frostlang$frostc$parser$Token) $tmp1285.value).position;
frost$collections$Array* $tmp1287 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1288 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1287);
org$frostlang$frostc$ASTNode* $tmp1289 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1283, $tmp1284, $tmp1286, $tmp1288, $tmp1289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1292 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local3) = ((frost$collections$Array*) NULL);
return $tmp1283;
block7:;
frost$core$Int64 $tmp1293 = (frost$core$Int64) {109};
frost$core$Bit $tmp1294 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1204, $tmp1293);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block23; else goto block24;
block23:;
// line 513
frost$collections$Array* $tmp1296 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1296);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$collections$Array* $tmp1297 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local8) = $tmp1296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// line 514
frost$collections$Array* $tmp1298 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp1299 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1300 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1301 = *(&local1);
org$frostlang$frostc$Position $tmp1302 = $tmp1301.position;
org$frostlang$frostc$parser$Token $tmp1303 = *(&local1);
frost$core$String* $tmp1304 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1303);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1299, $tmp1300, $tmp1302, $tmp1304);
frost$collections$Array$add$frost$collections$Array$T($tmp1298, ((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// line 515
frost$core$Bit $tmp1305 = frost$core$Bit$init$builtin_bit(true);
*(&local9) = $tmp1305;
// line 516
goto block25;
block25:;
// line 517
org$frostlang$frostc$ASTNode* $tmp1306 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
org$frostlang$frostc$ASTNode* $tmp1307 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local10) = $tmp1306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// line 518
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local10);
frost$core$Bit $tmp1309 = frost$core$Bit$init$builtin_bit($tmp1308 == NULL);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block28; else goto block29;
block28:;
// line 519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1311 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1312 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 521
org$frostlang$frostc$ASTNode* $tmp1313 = *(&local10);
frost$core$Int64* $tmp1314 = &$tmp1313->$rawValue;
frost$core$Int64 $tmp1315 = *$tmp1314;
frost$core$Int64 $tmp1316 = (frost$core$Int64) {22};
frost$core$Bit $tmp1317 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1315, $tmp1316);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block31; else goto block32;
block31:;
goto block30;
block32:;
// line 526
frost$core$Bit $tmp1319 = frost$core$Bit$init$builtin_bit(false);
*(&local9) = $tmp1319;
goto block30;
block30:;
// line 529
frost$collections$Array* $tmp1320 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp1321 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp1320, ((frost$core$Object*) $tmp1321));
org$frostlang$frostc$ASTNode* $tmp1322 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block26:;
frost$core$Int64 $tmp1323 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1324 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1323);
org$frostlang$frostc$parser$Token$nullable $tmp1325 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1324);
frost$core$Bit $tmp1326 = frost$core$Bit$init$builtin_bit($tmp1325.nonnull);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block25; else goto block27;
block27:;
// line 532
frost$core$Int64 $tmp1328 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1329 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1328);
org$frostlang$frostc$parser$Token$nullable $tmp1330 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1329, &$s1331);
frost$core$Bit $tmp1332 = frost$core$Bit$init$builtin_bit(!$tmp1330.nonnull);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block33; else goto block34;
block33:;
// line 533
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1334 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// line 535
frost$core$Bit $tmp1335 = *(&local9);
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block37; else goto block38;
block37:;
frost$core$Int64 $tmp1337 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1338 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1337);
org$frostlang$frostc$parser$Token$nullable $tmp1339 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1338);
frost$core$Bit $tmp1340 = frost$core$Bit$init$builtin_bit($tmp1339.nonnull);
*(&local11) = $tmp1340;
goto block39;
block38:;
*(&local11) = $tmp1335;
goto block39;
block39:;
frost$core$Bit $tmp1341 = *(&local11);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block35; else goto block36;
block35:;
// line 536
org$frostlang$frostc$ASTNode* $tmp1343 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local12) = $tmp1343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
// line 537
org$frostlang$frostc$ASTNode* $tmp1345 = *(&local12);
frost$core$Bit $tmp1346 = frost$core$Bit$init$builtin_bit($tmp1345 == NULL);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block40; else goto block41;
block40:;
// line 538
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1348 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1349 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// line 540
org$frostlang$frostc$ASTNode* $tmp1350 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1351 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1352 = *(&local0);
org$frostlang$frostc$Position $tmp1353 = ((org$frostlang$frostc$parser$Token) $tmp1352.value).position;
frost$collections$Array* $tmp1354 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1355 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1354);
org$frostlang$frostc$ASTNode* $tmp1356 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1350, $tmp1351, $tmp1353, $tmp1355, $tmp1356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1358 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp1350;
block36:;
// line 543
org$frostlang$frostc$ASTNode* $tmp1359 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1360 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1361 = *(&local0);
org$frostlang$frostc$Position $tmp1362 = ((org$frostlang$frostc$parser$Token) $tmp1361.value).position;
frost$collections$Array* $tmp1363 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1364 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1363);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1359, $tmp1360, $tmp1362, $tmp1364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$collections$Array* $tmp1365 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp1359;
block24:;
frost$core$Int64 $tmp1366 = (frost$core$Int64) {108};
frost$core$Bit $tmp1367 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1204, $tmp1366);
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block42; else goto block43;
block42:;
// line 547
frost$core$Int64 $tmp1369 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1370 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1369);
org$frostlang$frostc$parser$Token$nullable $tmp1371 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1370);
frost$core$Bit $tmp1372 = frost$core$Bit$init$builtin_bit($tmp1371.nonnull);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block44; else goto block45;
block44:;
// line 548
frost$collections$Array* $tmp1374 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1374);
*(&local13) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$collections$Array* $tmp1375 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local13) = $tmp1374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// line 549
frost$collections$Array* $tmp1376 = *(&local13);
org$frostlang$frostc$ASTNode* $tmp1377 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1378 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1379 = *(&local1);
org$frostlang$frostc$Position $tmp1380 = $tmp1379.position;
org$frostlang$frostc$parser$Token $tmp1381 = *(&local1);
frost$core$String* $tmp1382 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1381);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1377, $tmp1378, $tmp1380, $tmp1382);
frost$collections$Array$add$frost$collections$Array$T($tmp1376, ((frost$core$Object*) $tmp1377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
// line 550
org$frostlang$frostc$ASTNode* $tmp1383 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
org$frostlang$frostc$ASTNode* $tmp1384 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local14) = $tmp1383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
// line 551
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local14);
frost$core$Bit $tmp1386 = frost$core$Bit$init$builtin_bit($tmp1385 == NULL);
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block46; else goto block47;
block46:;
// line 552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1388 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1389 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local13) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block47:;
// line 554
org$frostlang$frostc$ASTNode* $tmp1390 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1391 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1392 = *(&local0);
org$frostlang$frostc$Position $tmp1393 = ((org$frostlang$frostc$parser$Token) $tmp1392.value).position;
frost$collections$Array* $tmp1394 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp1395 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1394);
org$frostlang$frostc$ASTNode* $tmp1396 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1390, $tmp1391, $tmp1393, $tmp1395, $tmp1396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$ASTNode* $tmp1397 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1398 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local13) = ((frost$collections$Array*) NULL);
return $tmp1390;
block45:;
// line 558
org$frostlang$frostc$ASTNode* $tmp1399 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1400 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1401 = *(&local1);
org$frostlang$frostc$Position $tmp1402 = $tmp1401.position;
org$frostlang$frostc$parser$Token $tmp1403 = *(&local1);
frost$core$String* $tmp1404 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1403);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1399, $tmp1400, $tmp1402, $tmp1404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
return $tmp1399;
block43:;
// line 561
org$frostlang$frostc$parser$Token $tmp1405 = *(&local2);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1405);
goto block5;
block5:;
goto block4;
block4:;
// line 565
org$frostlang$frostc$parser$Token $tmp1406 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1406);
// line 566
org$frostlang$frostc$ASTNode* $tmp1407 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
org$frostlang$frostc$ASTNode* $tmp1408 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local15) = $tmp1407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// line 567
org$frostlang$frostc$ASTNode* $tmp1409 = *(&local15);
frost$core$Bit $tmp1410 = frost$core$Bit$init$builtin_bit($tmp1409 == NULL);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block48; else goto block49;
block48:;
// line 568
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1412 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block49:;
// line 570
org$frostlang$frostc$parser$Token $tmp1413 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1414 = $tmp1413.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1415;
$tmp1415 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1415->value = $tmp1414;
frost$core$Int64 $tmp1416 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1417 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1416);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1418;
$tmp1418 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1418->value = $tmp1417;
ITable* $tmp1419 = ((frost$core$Equatable*) $tmp1415)->$class->itable;
while ($tmp1419->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[0];
frost$core$Bit $tmp1422 = $tmp1420(((frost$core$Equatable*) $tmp1415), ((frost$core$Equatable*) $tmp1418));
bool $tmp1423 = $tmp1422.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1418)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1415)));
if ($tmp1423) goto block50; else goto block51;
block50:;
// line 572
frost$collections$Array* $tmp1424 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1425 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1424, $tmp1425);
org$frostlang$frostc$ASTNode* $tmp1426 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1424, ((frost$core$Object*) $tmp1426));
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
frost$collections$Array* $tmp1427 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local16) = $tmp1424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// line 573
goto block52;
block52:;
frost$core$Int64 $tmp1428 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1429 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1428);
org$frostlang$frostc$parser$Token$nullable $tmp1430 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1429);
frost$core$Bit $tmp1431 = frost$core$Bit$init$builtin_bit($tmp1430.nonnull);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block53; else goto block54;
block53:;
// line 574
org$frostlang$frostc$ASTNode* $tmp1433 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
org$frostlang$frostc$ASTNode* $tmp1434 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local17) = $tmp1433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// line 575
org$frostlang$frostc$ASTNode* $tmp1435 = *(&local17);
frost$core$Bit $tmp1436 = frost$core$Bit$init$builtin_bit($tmp1435 == NULL);
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block55; else goto block56;
block55:;
// line 576
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1439 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1440 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block56:;
// line 578
frost$collections$Array* $tmp1441 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1442 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp1441, ((frost$core$Object*) $tmp1442));
org$frostlang$frostc$ASTNode* $tmp1443 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
// line 580
org$frostlang$frostc$ASTNode* $tmp1444 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1445 = (frost$core$Int64) {43};
org$frostlang$frostc$parser$Token$nullable $tmp1446 = *(&local0);
org$frostlang$frostc$Position $tmp1447 = ((org$frostlang$frostc$parser$Token) $tmp1446.value).position;
frost$collections$Array* $tmp1448 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1449 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1448);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1444, $tmp1445, $tmp1447, $tmp1449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
org$frostlang$frostc$ASTNode* $tmp1450 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local15) = $tmp1444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$collections$Array* $tmp1451 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local16) = ((frost$collections$Array*) NULL);
goto block51;
block51:;
// line 582
frost$core$Int64 $tmp1452 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1453 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1452);
org$frostlang$frostc$parser$Token$nullable $tmp1454 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1453, &$s1455);
// line 583
org$frostlang$frostc$ASTNode* $tmp1456 = *(&local15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
org$frostlang$frostc$ASTNode* $tmp1457 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1456;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 590
frost$core$Int64 $tmp1458 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp1459 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1458);
org$frostlang$frostc$parser$Token$nullable $tmp1460 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1459, &$s1461);
*(&local0) = $tmp1460;
// line 591
frost$collections$Array* $tmp1462 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1462);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$collections$Array* $tmp1463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local1) = $tmp1462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
// line 592
frost$core$Int64 $tmp1464 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1465 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1464);
org$frostlang$frostc$parser$Token$nullable $tmp1466 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1465);
frost$core$Bit $tmp1467 = frost$core$Bit$init$builtin_bit(!$tmp1466.nonnull);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block1; else goto block2;
block1:;
// line 593
frost$collections$Stack** $tmp1469 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1470 = *$tmp1469;
frost$core$Bit $tmp1471 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1472;
$tmp1472 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1472->value = $tmp1471;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1470, ((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// line 594
frost$core$Int64 $tmp1473 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1474 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1473);
org$frostlang$frostc$parser$Token$nullable $tmp1475 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1474);
frost$core$Bit $tmp1476 = frost$core$Bit$init$builtin_bit(!$tmp1475.nonnull);
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block3; else goto block4;
block3:;
// line 595
org$frostlang$frostc$ASTNode* $tmp1478 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
org$frostlang$frostc$ASTNode* $tmp1479 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local2) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// line 596
org$frostlang$frostc$ASTNode* $tmp1480 = *(&local2);
frost$core$Bit $tmp1481 = frost$core$Bit$init$builtin_bit($tmp1480 == NULL);
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block5; else goto block6;
block5:;
// line 597
frost$collections$Stack** $tmp1483 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1484 = *$tmp1483;
frost$core$Object* $tmp1485 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1484);
frost$core$Frost$unref$frost$core$Object$Q($tmp1485);
// line 598
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 600
frost$collections$Array* $tmp1488 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1489 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1488, ((frost$core$Object*) $tmp1489));
// line 601
goto block7;
block7:;
frost$core$Int64 $tmp1490 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp1491 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1490);
org$frostlang$frostc$parser$Token$nullable $tmp1492 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1491);
frost$core$Bit $tmp1493 = frost$core$Bit$init$builtin_bit($tmp1492.nonnull);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block8; else goto block9;
block8:;
// line 602
org$frostlang$frostc$ASTNode* $tmp1495 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
org$frostlang$frostc$ASTNode* $tmp1496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local2) = $tmp1495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
// line 603
org$frostlang$frostc$ASTNode* $tmp1497 = *(&local2);
frost$core$Bit $tmp1498 = frost$core$Bit$init$builtin_bit($tmp1497 == NULL);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block10; else goto block11;
block10:;
// line 604
frost$collections$Stack** $tmp1500 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1501 = *$tmp1500;
frost$core$Object* $tmp1502 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1501);
frost$core$Frost$unref$frost$core$Object$Q($tmp1502);
// line 605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 607
frost$collections$Array* $tmp1505 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1506 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1505, ((frost$core$Object*) $tmp1506));
goto block7;
block9:;
// line 609
frost$core$Int64 $tmp1507 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp1508 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1507);
org$frostlang$frostc$parser$Token$nullable $tmp1509 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1508, &$s1510);
frost$core$Bit $tmp1511 = frost$core$Bit$init$builtin_bit(!$tmp1509.nonnull);
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block12; else goto block13;
block12:;
// line 610
frost$collections$Stack** $tmp1513 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1514 = *$tmp1513;
frost$core$Object* $tmp1515 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1514);
frost$core$Frost$unref$frost$core$Object$Q($tmp1515);
// line 611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 614
frost$collections$Stack** $tmp1519 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1520 = *$tmp1519;
frost$core$Object* $tmp1521 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1520);
frost$core$Frost$unref$frost$core$Object$Q($tmp1521);
goto block2;
block2:;
// line 616
org$frostlang$frostc$ASTNode* $tmp1522 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1523 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$Token$nullable $tmp1524 = *(&local0);
org$frostlang$frostc$Position $tmp1525 = ((org$frostlang$frostc$parser$Token) $tmp1524.value).position;
frost$collections$Array* $tmp1526 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1527 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1526);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp1522, $tmp1523, $tmp1525, $tmp1527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
frost$collections$Array* $tmp1528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1522;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 623
frost$core$Int64 $tmp1529 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp1530 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1529);
org$frostlang$frostc$parser$Token$nullable $tmp1531 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1530, &$s1532);
*(&local0) = $tmp1531;
// line 624
frost$core$Int64 $tmp1533 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1534 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1533);
org$frostlang$frostc$parser$Token$nullable $tmp1535 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1534);
frost$core$Bit $tmp1536 = frost$core$Bit$init$builtin_bit($tmp1535.nonnull);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block1; else goto block2;
block1:;
// line 625
org$frostlang$frostc$ASTNode* $tmp1538 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
org$frostlang$frostc$ASTNode* $tmp1539 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local1) = $tmp1538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
// line 626
org$frostlang$frostc$ASTNode* $tmp1540 = *(&local1);
frost$core$Bit $tmp1541 = frost$core$Bit$init$builtin_bit($tmp1540 == NULL);
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block3; else goto block4;
block3:;
// line 627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 629
frost$collections$Array* $tmp1544 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1544);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
frost$collections$Array* $tmp1545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local2) = $tmp1544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
// line 630
frost$collections$Array* $tmp1546 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1547 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1548 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp1549 = *(&local0);
org$frostlang$frostc$Position $tmp1550 = ((org$frostlang$frostc$parser$Token) $tmp1549.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1551 = *(&local0);
frost$core$String* $tmp1552 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1551.value));
org$frostlang$frostc$ASTNode* $tmp1553 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp1547, $tmp1548, $tmp1550, $tmp1552, $tmp1553);
frost$collections$Array$add$frost$collections$Array$T($tmp1546, ((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
// line 631
frost$core$Int64 $tmp1554 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1555 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1554);
org$frostlang$frostc$parser$Token$nullable $tmp1556 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1555, &$s1557);
frost$core$Bit $tmp1558 = frost$core$Bit$init$builtin_bit(!$tmp1556.nonnull);
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block5; else goto block6;
block5:;
// line 632
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1561 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 634
org$frostlang$frostc$ASTNode* $tmp1562 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local3) = $tmp1562;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
// line 635
org$frostlang$frostc$ASTNode* $tmp1564 = *(&local3);
frost$core$Bit $tmp1565 = frost$core$Bit$init$builtin_bit($tmp1564 == NULL);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block7; else goto block8;
block7:;
// line 636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1567 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1569 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 638
org$frostlang$frostc$ASTNode* $tmp1570 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1571 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$nullable $tmp1572 = *(&local0);
org$frostlang$frostc$Position $tmp1573 = ((org$frostlang$frostc$parser$Token) $tmp1572.value).position;
frost$collections$Array* $tmp1574 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp1575 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1574);
org$frostlang$frostc$ASTNode* $tmp1576 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1570, $tmp1571, $tmp1573, $tmp1575, $tmp1576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1570;
block2:;
// line 641
frost$collections$Array* $tmp1580 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1580);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$collections$Array* $tmp1581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local4) = $tmp1580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// line 642
frost$collections$Array* $tmp1582 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1583 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1584 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp1585 = *(&local0);
org$frostlang$frostc$Position $tmp1586 = ((org$frostlang$frostc$parser$Token) $tmp1585.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp1587 = *(&local0);
frost$core$String* $tmp1588 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp1587.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1583, $tmp1584, $tmp1586, $tmp1588);
frost$collections$Array$add$frost$collections$Array$T($tmp1582, ((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
// line 643
frost$core$Int64 $tmp1589 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1590 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1589);
org$frostlang$frostc$parser$Token$nullable $tmp1591 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1590, &$s1592);
frost$core$Bit $tmp1593 = frost$core$Bit$init$builtin_bit(!$tmp1591.nonnull);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1595 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 646
org$frostlang$frostc$ASTNode* $tmp1596 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local5) = $tmp1596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
// line 647
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local5);
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit($tmp1598 == NULL);
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block11; else goto block12;
block11:;
// line 648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1601 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1602 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 650
org$frostlang$frostc$ASTNode* $tmp1603 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1604 = (frost$core$Int64) {50};
org$frostlang$frostc$parser$Token$nullable $tmp1605 = *(&local0);
org$frostlang$frostc$Position $tmp1606 = ((org$frostlang$frostc$parser$Token) $tmp1605.value).position;
frost$collections$Array* $tmp1607 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp1608 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1607);
org$frostlang$frostc$ASTNode* $tmp1609 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp1603, $tmp1604, $tmp1606, $tmp1608, $tmp1609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$ASTNode* $tmp1610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1603;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 658
frost$core$Int64 $tmp1612 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1613 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1612);
org$frostlang$frostc$parser$Token$nullable $tmp1614 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1613, &$s1615);
frost$core$Bit $tmp1616 = frost$core$Bit$init$builtin_bit(!$tmp1614.nonnull);
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block1; else goto block2;
block1:;
// line 659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 662
org$frostlang$frostc$parser$Lexer** $tmp1618 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1619 = *$tmp1618;
org$frostlang$plex$runtime$DFA** $tmp1620 = &$tmp1619->dfa;
org$frostlang$plex$runtime$DFA* $tmp1621 = *$tmp1620;
frost$core$Int64* $tmp1622 = &$tmp1621->offset;
frost$core$Int64 $tmp1623 = *$tmp1622;
frost$core$Int64 $tmp1624 = (frost$core$Int64) {1};
int64_t $tmp1625 = $tmp1623.value;
int64_t $tmp1626 = $tmp1624.value;
int64_t $tmp1627 = $tmp1625 - $tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {$tmp1627};
*(&local0) = $tmp1628;
// line 663
org$frostlang$regex$RegexParser** $tmp1629 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1630 = *$tmp1629;
org$frostlang$regex$RegexLexer** $tmp1631 = &$tmp1630->lexer;
org$frostlang$regex$RegexLexer* $tmp1632 = *$tmp1631;
org$frostlang$plex$runtime$DFA** $tmp1633 = &$tmp1632->dfa;
org$frostlang$plex$runtime$DFA* $tmp1634 = *$tmp1633;
org$frostlang$frostc$parser$Lexer** $tmp1635 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1636 = *$tmp1635;
org$frostlang$plex$runtime$DFA** $tmp1637 = &$tmp1636->dfa;
org$frostlang$plex$runtime$DFA* $tmp1638 = *$tmp1637;
frost$core$Int64* $tmp1639 = &$tmp1638->offset;
frost$core$Int64 $tmp1640 = *$tmp1639;
frost$core$Int64* $tmp1641 = &$tmp1634->offset;
*$tmp1641 = $tmp1640;
// line 664
org$frostlang$regex$RegexParser** $tmp1642 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1643 = *$tmp1642;
org$frostlang$regex$RegexLexer** $tmp1644 = &$tmp1643->lexer;
org$frostlang$regex$RegexLexer* $tmp1645 = *$tmp1644;
org$frostlang$plex$runtime$DFA** $tmp1646 = &$tmp1645->dfa;
org$frostlang$plex$runtime$DFA* $tmp1647 = *$tmp1646;
org$frostlang$frostc$parser$Lexer** $tmp1648 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1649 = *$tmp1648;
org$frostlang$plex$runtime$DFA** $tmp1650 = &$tmp1649->dfa;
org$frostlang$plex$runtime$DFA* $tmp1651 = *$tmp1650;
frost$core$Int64* $tmp1652 = &$tmp1651->line;
frost$core$Int64 $tmp1653 = *$tmp1652;
frost$core$Int64* $tmp1654 = &$tmp1647->line;
*$tmp1654 = $tmp1653;
// line 665
org$frostlang$regex$RegexParser** $tmp1655 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1656 = *$tmp1655;
org$frostlang$regex$RegexLexer** $tmp1657 = &$tmp1656->lexer;
org$frostlang$regex$RegexLexer* $tmp1658 = *$tmp1657;
org$frostlang$plex$runtime$DFA** $tmp1659 = &$tmp1658->dfa;
org$frostlang$plex$runtime$DFA* $tmp1660 = *$tmp1659;
org$frostlang$frostc$parser$Lexer** $tmp1661 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1662 = *$tmp1661;
org$frostlang$plex$runtime$DFA** $tmp1663 = &$tmp1662->dfa;
org$frostlang$plex$runtime$DFA* $tmp1664 = *$tmp1663;
frost$core$Int64* $tmp1665 = &$tmp1664->column;
frost$core$Int64 $tmp1666 = *$tmp1665;
frost$core$Int64* $tmp1667 = &$tmp1660->column;
*$tmp1667 = $tmp1666;
// line 666
org$frostlang$regex$RegexParser** $tmp1668 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1669 = *$tmp1668;
org$frostlang$frostc$ASTNode* $tmp1670 = org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q($tmp1669);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
org$frostlang$frostc$ASTNode* $tmp1671 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local1) = $tmp1670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// line 667
org$frostlang$frostc$parser$Lexer** $tmp1672 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1673 = *$tmp1672;
org$frostlang$plex$runtime$DFA** $tmp1674 = &$tmp1673->dfa;
org$frostlang$plex$runtime$DFA* $tmp1675 = *$tmp1674;
org$frostlang$regex$RegexParser** $tmp1676 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1677 = *$tmp1676;
org$frostlang$regex$RegexLexer** $tmp1678 = &$tmp1677->lexer;
org$frostlang$regex$RegexLexer* $tmp1679 = *$tmp1678;
org$frostlang$plex$runtime$DFA** $tmp1680 = &$tmp1679->dfa;
org$frostlang$plex$runtime$DFA* $tmp1681 = *$tmp1680;
frost$core$Int64* $tmp1682 = &$tmp1681->offset;
frost$core$Int64 $tmp1683 = *$tmp1682;
frost$core$Int64* $tmp1684 = &$tmp1675->offset;
*$tmp1684 = $tmp1683;
// line 668
org$frostlang$frostc$parser$Lexer** $tmp1685 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1686 = *$tmp1685;
org$frostlang$plex$runtime$DFA** $tmp1687 = &$tmp1686->dfa;
org$frostlang$plex$runtime$DFA* $tmp1688 = *$tmp1687;
org$frostlang$regex$RegexParser** $tmp1689 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1690 = *$tmp1689;
org$frostlang$regex$RegexLexer** $tmp1691 = &$tmp1690->lexer;
org$frostlang$regex$RegexLexer* $tmp1692 = *$tmp1691;
org$frostlang$plex$runtime$DFA** $tmp1693 = &$tmp1692->dfa;
org$frostlang$plex$runtime$DFA* $tmp1694 = *$tmp1693;
frost$core$Int64* $tmp1695 = &$tmp1694->line;
frost$core$Int64 $tmp1696 = *$tmp1695;
frost$core$Int64* $tmp1697 = &$tmp1688->line;
*$tmp1697 = $tmp1696;
// line 669
org$frostlang$frostc$parser$Lexer** $tmp1698 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1699 = *$tmp1698;
org$frostlang$plex$runtime$DFA** $tmp1700 = &$tmp1699->dfa;
org$frostlang$plex$runtime$DFA* $tmp1701 = *$tmp1700;
org$frostlang$regex$RegexParser** $tmp1702 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp1703 = *$tmp1702;
org$frostlang$regex$RegexLexer** $tmp1704 = &$tmp1703->lexer;
org$frostlang$regex$RegexLexer* $tmp1705 = *$tmp1704;
org$frostlang$plex$runtime$DFA** $tmp1706 = &$tmp1705->dfa;
org$frostlang$plex$runtime$DFA* $tmp1707 = *$tmp1706;
frost$core$Int64* $tmp1708 = &$tmp1707->column;
frost$core$Int64 $tmp1709 = *$tmp1708;
frost$core$Int64* $tmp1710 = &$tmp1701->column;
*$tmp1710 = $tmp1709;
// line 670
org$frostlang$frostc$ASTNode* $tmp1711 = *(&local1);
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711 == NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block3; else goto block4;
block3:;
// line 671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 673
frost$core$Int64 $tmp1715 = (frost$core$Int64) {58};
org$frostlang$frostc$parser$Token$Kind $tmp1716 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1715);
org$frostlang$frostc$parser$Token$nullable $tmp1717 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1716, &$s1718);
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit(!$tmp1717.nonnull);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block5; else goto block6;
block5:;
// line 674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1721 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 676
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1722 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1723 = *$tmp1722;
frost$core$Bit $tmp1724 = frost$core$Bit$init$builtin_bit($tmp1723 != NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block7; else goto block8;
block7:;
// line 678
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1726 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1727 = *$tmp1726;
$fn1729 $tmp1728 = ($fn1729) $tmp1727->$class->vtable[7];
$tmp1728($tmp1727);
// line 679
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1730 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1731 = *$tmp1730;
$fn1733 $tmp1732 = ($fn1733) $tmp1731->$class->vtable[7];
$tmp1732($tmp1731);
// line 681
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp1734 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp1735 = *$tmp1734;
frost$core$Int64 $tmp1736 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$Kind $tmp1737 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1736);
frost$core$Int64 $tmp1738 = *(&local0);
frost$core$String$Index $tmp1739 = frost$core$String$Index$init$frost$core$Int64($tmp1738);
org$frostlang$frostc$parser$Lexer** $tmp1740 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp1741 = *$tmp1740;
org$frostlang$plex$runtime$DFA** $tmp1742 = &$tmp1741->dfa;
org$frostlang$plex$runtime$DFA* $tmp1743 = *$tmp1742;
frost$core$Int64* $tmp1744 = &$tmp1743->offset;
frost$core$Int64 $tmp1745 = *$tmp1744;
frost$core$String$Index $tmp1746 = frost$core$String$Index$init$frost$core$Int64($tmp1745);
org$frostlang$frostc$ASTNode* $tmp1747 = *(&local1);
$fn1749 $tmp1748 = ($fn1749) $tmp1747->$class->vtable[2];
org$frostlang$frostc$Position $tmp1750 = $tmp1748($tmp1747);
org$frostlang$frostc$parser$Token $tmp1751 = org$frostlang$frostc$parser$Token$init$org$frostlang$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp1737, $tmp1739, $tmp1746, $tmp1750);
$fn1753 $tmp1752 = ($fn1753) $tmp1735->$class->vtable[6];
$tmp1752($tmp1735, $tmp1751);
goto block8;
block8:;
// line 684
org$frostlang$frostc$ASTNode* $tmp1754 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
org$frostlang$frostc$ASTNode* $tmp1755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1754;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$Kind local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// line 694
org$frostlang$frostc$parser$Token $tmp1756 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp1756;
// line 695
org$frostlang$frostc$parser$Token $tmp1757 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp1758 = $tmp1757.kind;
frost$core$Int64 $tmp1759 = $tmp1758.$rawValue;
frost$core$Int64 $tmp1760 = (frost$core$Int64) {52};
frost$core$Bit $tmp1761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1760);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block2; else goto block3;
block2:;
// line 697
org$frostlang$frostc$parser$Token $tmp1763 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp1764 = $tmp1763.kind;
*(&local1) = $tmp1764;
// line 698
frost$core$Bit* $tmp1765 = &param0->allowLambdas;
frost$core$Bit $tmp1766 = *$tmp1765;
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block6; else goto block7;
block6:;
org$frostlang$frostc$parser$Token$Kind $tmp1768 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1769;
$tmp1769 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1769->value = $tmp1768;
frost$core$Int64 $tmp1770 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp1771 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1770);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1772;
$tmp1772 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1772->value = $tmp1771;
ITable* $tmp1773 = ((frost$core$Equatable*) $tmp1769)->$class->itable;
while ($tmp1773->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1773 = $tmp1773->next;
}
$fn1775 $tmp1774 = $tmp1773->methods[0];
frost$core$Bit $tmp1776 = $tmp1774(((frost$core$Equatable*) $tmp1769), ((frost$core$Equatable*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1772)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1769)));
*(&local3) = $tmp1776;
goto block8;
block7:;
*(&local3) = $tmp1766;
goto block8;
block8:;
frost$core$Bit $tmp1777 = *(&local3);
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block9; else goto block10;
block9:;
*(&local2) = $tmp1777;
goto block11;
block10:;
org$frostlang$frostc$parser$Token$Kind $tmp1779 = *(&local1);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1780;
$tmp1780 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1780->value = $tmp1779;
frost$core$Int64 $tmp1781 = (frost$core$Int64) {94};
org$frostlang$frostc$parser$Token$Kind $tmp1782 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1781);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp1783;
$tmp1783 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp1783->value = $tmp1782;
ITable* $tmp1784 = ((frost$core$Equatable*) $tmp1780)->$class->itable;
while ($tmp1784->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1784 = $tmp1784->next;
}
$fn1786 $tmp1785 = $tmp1784->methods[0];
frost$core$Bit $tmp1787 = $tmp1785(((frost$core$Equatable*) $tmp1780), ((frost$core$Equatable*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1780)));
*(&local2) = $tmp1787;
goto block11;
block11:;
frost$core$Bit $tmp1788 = *(&local2);
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block4; else goto block5;
block4:;
// line 699
org$frostlang$frostc$parser$Token $tmp1790 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1790);
// line 700
org$frostlang$frostc$ASTNode* $tmp1791 = org$frostlang$frostc$parser$Parser$lambda$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
return $tmp1791;
block5:;
// line 702
org$frostlang$frostc$ASTNode* $tmp1792 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1793 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token $tmp1794 = *(&local0);
org$frostlang$frostc$Position $tmp1795 = $tmp1794.position;
org$frostlang$frostc$parser$Token $tmp1796 = *(&local0);
frost$core$String* $tmp1797 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1796);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1792, $tmp1793, $tmp1795, $tmp1797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
return $tmp1792;
block3:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {3};
frost$core$Bit $tmp1799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block12; else goto block13;
block12:;
// line 705
org$frostlang$frostc$ASTNode* $tmp1801 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1802 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1803 = *(&local0);
org$frostlang$frostc$Position $tmp1804 = $tmp1803.position;
org$frostlang$frostc$parser$Token $tmp1805 = *(&local0);
frost$core$String* $tmp1806 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1805);
frost$core$UInt64$nullable $tmp1807 = frost$core$String$get_asUInt64$R$frost$core$UInt64$Q($tmp1806);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1801, $tmp1802, $tmp1804, ((frost$core$UInt64) $tmp1807.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
return $tmp1801;
block13:;
frost$core$Int64 $tmp1808 = (frost$core$Int64) {4};
frost$core$Bit $tmp1809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1808);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block14; else goto block15;
block14:;
// line 708
org$frostlang$frostc$ASTNode* $tmp1811 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1812 = (frost$core$Int64) {25};
org$frostlang$frostc$parser$Token $tmp1813 = *(&local0);
org$frostlang$frostc$Position $tmp1814 = $tmp1813.position;
org$frostlang$frostc$parser$Token $tmp1815 = *(&local0);
frost$core$String* $tmp1816 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1815);
frost$core$Int64 $tmp1817 = (frost$core$Int64) {2};
frost$core$Bit $tmp1818 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1819 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1817, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1818);
frost$core$String* $tmp1820 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1816, $tmp1819);
frost$core$Int64 $tmp1821 = (frost$core$Int64) {2};
frost$core$UInt64$nullable $tmp1822 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1820, $tmp1821);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1811, $tmp1812, $tmp1814, ((frost$core$UInt64) $tmp1822.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
return $tmp1811;
block15:;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {5};
frost$core$Bit $tmp1824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1823);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block16; else goto block17;
block16:;
// line 711
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
frost$core$Int64 $tmp1836 = (frost$core$Int64) {16};
frost$core$UInt64$nullable $tmp1837 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1835, $tmp1836);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1826, $tmp1827, $tmp1829, ((frost$core$UInt64) $tmp1837.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
return $tmp1826;
block17:;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {6};
frost$core$Bit $tmp1839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1838);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block18; else goto block19;
block18:;
// line 714
org$frostlang$frostc$ASTNode* $tmp1841 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1842 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token $tmp1843 = *(&local0);
org$frostlang$frostc$Position $tmp1844 = $tmp1843.position;
org$frostlang$frostc$parser$Token $tmp1845 = *(&local0);
frost$core$String* $tmp1846 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1845);
frost$core$Real64$nullable $tmp1847 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp1846);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64($tmp1841, $tmp1842, $tmp1844, ((frost$core$Real64) $tmp1847.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
return $tmp1841;
block19:;
frost$core$Int64 $tmp1848 = (frost$core$Int64) {49};
frost$core$Bit $tmp1849 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1848);
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block20; else goto block21;
block20:;
// line 717
org$frostlang$frostc$ASTNode* $tmp1851 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1852 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token $tmp1853 = *(&local0);
org$frostlang$frostc$Position $tmp1854 = $tmp1853.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1851, $tmp1852, $tmp1854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
return $tmp1851;
block21:;
frost$core$Int64 $tmp1855 = (frost$core$Int64) {50};
frost$core$Bit $tmp1856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1855);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block22; else goto block23;
block22:;
// line 720
org$frostlang$frostc$ASTNode* $tmp1858 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1859 = (frost$core$Int64) {41};
org$frostlang$frostc$parser$Token $tmp1860 = *(&local0);
org$frostlang$frostc$Position $tmp1861 = $tmp1860.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1858, $tmp1859, $tmp1861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
return $tmp1858;
block23:;
frost$core$Int64 $tmp1862 = (frost$core$Int64) {44};
frost$core$Bit $tmp1863 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1862);
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block24; else goto block25;
block24:;
// line 723
org$frostlang$frostc$ASTNode* $tmp1865 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1866 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token $tmp1867 = *(&local0);
org$frostlang$frostc$Position $tmp1868 = $tmp1867.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1865, $tmp1866, $tmp1868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
return $tmp1865;
block25:;
frost$core$Int64 $tmp1869 = (frost$core$Int64) {42};
frost$core$Bit $tmp1870 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1869);
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block26; else goto block27;
block26:;
// line 726
org$frostlang$frostc$ASTNode* $tmp1872 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1873 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1874 = *(&local0);
org$frostlang$frostc$Position $tmp1875 = $tmp1874.position;
frost$core$Bit $tmp1876 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1872, $tmp1873, $tmp1875, $tmp1876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
return $tmp1872;
block27:;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {43};
frost$core$Bit $tmp1878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1877);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block28; else goto block29;
block28:;
// line 729
org$frostlang$frostc$ASTNode* $tmp1880 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1881 = (frost$core$Int64) {6};
org$frostlang$frostc$parser$Token $tmp1882 = *(&local0);
org$frostlang$frostc$Position $tmp1883 = $tmp1882.position;
frost$core$Bit $tmp1884 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp1880, $tmp1881, $tmp1883, $tmp1884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
return $tmp1880;
block29:;
frost$core$Int64 $tmp1885 = (frost$core$Int64) {8};
frost$core$Bit $tmp1886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1885);
bool $tmp1887 = $tmp1886.value;
if ($tmp1887) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp1888 = (frost$core$Int64) {7};
frost$core$Bit $tmp1889 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1888);
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block30; else goto block32;
block30:;
// line 732
org$frostlang$frostc$parser$Token $tmp1891 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1891);
// line 733
org$frostlang$frostc$ASTNode* $tmp1892 = org$frostlang$frostc$parser$Parser$string$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
return $tmp1892;
block32:;
frost$core$Int64 $tmp1893 = (frost$core$Int64) {107};
frost$core$Bit $tmp1894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1893);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block33; else goto block34;
block33:;
// line 736
org$frostlang$frostc$parser$Token $tmp1896 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1896);
// line 737
org$frostlang$frostc$ASTNode* $tmp1897 = org$frostlang$frostc$parser$Parser$parenthesizedExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
return $tmp1897;
block34:;
frost$core$Int64 $tmp1898 = (frost$core$Int64) {105};
frost$core$Bit $tmp1899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1898);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block35; else goto block36;
block35:;
// line 740
org$frostlang$frostc$parser$Token $tmp1901 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1901);
// line 741
org$frostlang$frostc$ASTNode* $tmp1902 = org$frostlang$frostc$parser$Parser$arrayLiteral$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
return $tmp1902;
block36:;
frost$core$Int64 $tmp1903 = (frost$core$Int64) {14};
frost$core$Bit $tmp1904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block37; else goto block38;
block37:;
// line 744
org$frostlang$frostc$parser$Token $tmp1906 = *(&local0);
frost$core$String* $tmp1907 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1906);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$String* $tmp1908 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local4) = $tmp1907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
// line 745
frost$core$String* $tmp1909 = *(&local4);
frost$core$Bit $tmp1910 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1909, &$s1911);
bool $tmp1912 = $tmp1910.value;
if ($tmp1912) goto block39; else goto block41;
block39:;
// line 746
frost$core$Int64 $tmp1913 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp1914 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1913);
org$frostlang$frostc$parser$Token$nullable $tmp1915 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1914, &$s1916);
// line 747
org$frostlang$frostc$ASTNode* $tmp1917 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
org$frostlang$frostc$ASTNode* $tmp1918 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
*(&local5) = $tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// line 748
org$frostlang$frostc$ASTNode* $tmp1919 = *(&local5);
frost$core$Bit $tmp1920 = frost$core$Bit$init$builtin_bit($tmp1919 == NULL);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block42; else goto block43;
block42:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp1922 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1923 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local4) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block43:;
// line 751
frost$core$Int64 $tmp1924 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp1925 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1924);
org$frostlang$frostc$parser$Token$nullable $tmp1926 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp1925, &$s1927);
// line 752
org$frostlang$frostc$ASTNode* $tmp1928 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1929 = (frost$core$Int64) {3};
org$frostlang$frostc$parser$Token $tmp1930 = *(&local0);
org$frostlang$frostc$Position $tmp1931 = $tmp1930.position;
org$frostlang$frostc$ASTNode* $tmp1932 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp1928, $tmp1929, $tmp1931, $tmp1932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$ASTNode* $tmp1933 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1934 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local4) = ((frost$core$String*) NULL);
return $tmp1928;
block41:;
// line 754
frost$core$String* $tmp1935 = *(&local4);
frost$core$Bit $tmp1936 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1935, &$s1937);
bool $tmp1938 = $tmp1936.value;
if ($tmp1938) goto block44; else goto block45;
block44:;
// line 755
org$frostlang$frostc$ASTNode* $tmp1939 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1940 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$Token $tmp1941 = *(&local0);
org$frostlang$frostc$Position $tmp1942 = $tmp1941.position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1939, $tmp1940, $tmp1942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$String* $tmp1943 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local4) = ((frost$core$String*) NULL);
return $tmp1939;
block45:;
goto block40;
block40:;
// line 757
org$frostlang$frostc$parser$Token $tmp1944 = *(&local0);
frost$core$String* $tmp1945 = *(&local4);
frost$core$String* $tmp1946 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1947, $tmp1945);
frost$core$String* $tmp1948 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1946, &$s1949);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1944, $tmp1948);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1950 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
*(&local4) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block38:;
frost$core$Int64 $tmp1951 = (frost$core$Int64) {21};
frost$core$Bit $tmp1952 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1951);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {22};
frost$core$Bit $tmp1955 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1954);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block46; else goto block48;
block46:;
// line 761
org$frostlang$frostc$parser$Token $tmp1957 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1957);
// line 762
org$frostlang$frostc$ASTNode* $tmp1958 = org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
return $tmp1958;
block48:;
frost$core$Int64 $tmp1959 = (frost$core$Int64) {58};
frost$core$Bit $tmp1960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1759, $tmp1959);
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block49; else goto block50;
block49:;
// line 765
org$frostlang$frostc$parser$Token $tmp1962 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp1962);
// line 766
org$frostlang$frostc$ASTNode* $tmp1963 = org$frostlang$frostc$parser$Parser$regex$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
return $tmp1963;
block50:;
// line 769
org$frostlang$frostc$parser$Token $tmp1964 = *(&local0);
org$frostlang$frostc$parser$Token $tmp1965 = *(&local0);
frost$core$String* $tmp1966 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp1965);
frost$core$String* $tmp1967 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1968, $tmp1966);
frost$core$String* $tmp1969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1967, &$s1970);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp1964, $tmp1969);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// line 770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block51;
block51:;

}
frost$core$String* org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 777
frost$core$Int64* $tmp1971 = &param0->$rawValue;
frost$core$Int64 $tmp1972 = *$tmp1971;
frost$core$Int64 $tmp1973 = (frost$core$Int64) {22};
frost$core$Bit $tmp1974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1972, $tmp1973);
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1976 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1977 = *$tmp1976;
frost$core$String** $tmp1978 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1979 = *$tmp1978;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$core$String* $tmp1980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
*(&local0) = $tmp1979;
// line 779
frost$core$String* $tmp1981 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
frost$core$String* $tmp1982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1981;
block3:;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {16};
frost$core$Bit $tmp1984 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1972, $tmp1983);
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1987 = *$tmp1986;
org$frostlang$frostc$ASTNode** $tmp1988 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1989 = *$tmp1988;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
org$frostlang$frostc$ASTNode* $tmp1990 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local1) = $tmp1989;
frost$core$String** $tmp1991 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1992 = *$tmp1991;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$String* $tmp1993 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local2) = $tmp1992;
// line 782
org$frostlang$frostc$ASTNode* $tmp1994 = *(&local1);
frost$core$String* $tmp1995 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp1994);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
frost$core$String* $tmp1996 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local3) = $tmp1995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// line 783
frost$core$String* $tmp1997 = *(&local3);
frost$core$Bit $tmp1998 = frost$core$Bit$init$builtin_bit($tmp1997 != NULL);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block6; else goto block7;
block6:;
// line 784
frost$core$String* $tmp2000 = *(&local3);
frost$core$String* $tmp2001 = *(&local2);
frost$core$String* $tmp2002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2003, $tmp2001);
frost$core$String* $tmp2004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2000, $tmp2002);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
frost$core$String* $tmp2005 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local3) = $tmp2004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
goto block7;
block7:;
// line 786
frost$core$String* $tmp2006 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
frost$core$String* $tmp2007 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2008 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2006;
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
org$frostlang$frostc$parser$Token $tmp2010 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2010;
// line 801
org$frostlang$frostc$parser$Token $tmp2011 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2012 = $tmp2011.kind;
frost$core$Int64 $tmp2013 = $tmp2012.$rawValue;
frost$core$Int64 $tmp2014 = (frost$core$Int64) {52};
frost$core$Bit $tmp2015 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2014);
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2017 = (frost$core$Int64) {55};
frost$core$Bit $tmp2018 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2017);
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2020 = (frost$core$Int64) {56};
frost$core$Bit $tmp2021 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2020);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp2023 = (frost$core$Int64) {57};
frost$core$Bit $tmp2024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp2026 = (frost$core$Int64) {58};
frost$core$Bit $tmp2027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2026);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {59};
frost$core$Bit $tmp2030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2029);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {61};
frost$core$Bit $tmp2033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2032);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {62};
frost$core$Bit $tmp2036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {63};
frost$core$Bit $tmp2039 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2038);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {66};
frost$core$Bit $tmp2042 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {69};
frost$core$Bit $tmp2045 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2044);
bool $tmp2046 = $tmp2045.value;
if ($tmp2046) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp2047 = (frost$core$Int64) {68};
frost$core$Bit $tmp2048 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2047);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {60};
frost$core$Bit $tmp2051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2050);
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {70};
frost$core$Bit $tmp2054 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2053);
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp2056 = (frost$core$Int64) {71};
frost$core$Bit $tmp2057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2056);
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp2059 = (frost$core$Int64) {72};
frost$core$Bit $tmp2060 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2059);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block2; else goto block18;
block18:;
frost$core$Int64 $tmp2062 = (frost$core$Int64) {73};
frost$core$Bit $tmp2063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2062);
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {74};
frost$core$Bit $tmp2066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2065);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block2; else goto block20;
block20:;
frost$core$Int64 $tmp2068 = (frost$core$Int64) {75};
frost$core$Bit $tmp2069 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2068);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block2; else goto block21;
block21:;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {53};
frost$core$Bit $tmp2072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2071);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block2; else goto block22;
block22:;
frost$core$Int64 $tmp2074 = (frost$core$Int64) {54};
frost$core$Bit $tmp2075 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2074);
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block2; else goto block23;
block23:;
frost$core$Int64 $tmp2077 = (frost$core$Int64) {76};
frost$core$Bit $tmp2078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2077);
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block2; else goto block24;
block2:;
// line 808
org$frostlang$frostc$parser$Token $tmp2080 = *(&local0);
frost$core$String* $tmp2081 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
return $tmp2081;
block24:;
frost$core$Int64 $tmp2082 = (frost$core$Int64) {67};
frost$core$Bit $tmp2083 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2082);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block25; else goto block26;
block25:;
// line 811
org$frostlang$frostc$parser$Token $tmp2085 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2085;
// line 812
org$frostlang$frostc$parser$Token $tmp2086 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2087 = $tmp2086.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2088;
$tmp2088 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2088->value = $tmp2087;
frost$core$Int64 $tmp2089 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2090 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2089);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2091;
$tmp2091 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2091->value = $tmp2090;
ITable* $tmp2092 = ((frost$core$Equatable*) $tmp2088)->$class->itable;
while ($tmp2092->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2092 = $tmp2092->next;
}
$fn2094 $tmp2093 = $tmp2092->methods[0];
frost$core$Bit $tmp2095 = $tmp2093(((frost$core$Equatable*) $tmp2088), ((frost$core$Equatable*) $tmp2091));
bool $tmp2096 = $tmp2095.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2091)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2088)));
if ($tmp2096) goto block27; else goto block29;
block27:;
// line 813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2097));
return &$s2097;
block29:;
// line 1
// line 816
org$frostlang$frostc$parser$Token $tmp2098 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2098);
// line 817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2099));
return &$s2099;
block28:;
goto block1;
block26:;
frost$core$Int64 $tmp2100 = (frost$core$Int64) {105};
frost$core$Bit $tmp2101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2013, $tmp2100);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block30; else goto block31;
block30:;
// line 821
frost$core$Int64 $tmp2103 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2104 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2103);
org$frostlang$frostc$parser$Token$nullable $tmp2105 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2104, &$s2106);
frost$core$Bit $tmp2107 = frost$core$Bit$init$builtin_bit(!$tmp2105.nonnull);
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block32; else goto block33;
block32:;
// line 822
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block33:;
// line 824
frost$core$Int64 $tmp2109 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp2110 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2109);
org$frostlang$frostc$parser$Token$nullable $tmp2111 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2110);
frost$core$Bit $tmp2112 = frost$core$Bit$init$builtin_bit($tmp2111.nonnull);
bool $tmp2113 = $tmp2112.value;
if ($tmp2113) goto block34; else goto block35;
block34:;
// line 825
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2114));
return &$s2114;
block35:;
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2115));
return &$s2115;
block31:;
// line 830
org$frostlang$frostc$parser$Token $tmp2116 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2117 = *(&local0);
frost$core$String* $tmp2118 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp2117);
frost$core$String* $tmp2119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2120, $tmp2118);
frost$core$String* $tmp2121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2119, &$s2122);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp2116, $tmp2121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
// line 832
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block36;
block36:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 838
frost$core$Bit $tmp2123 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode* $tmp2124 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
return $tmp2124;

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
frost$core$Int64 $tmp2125 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2126 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2125);
org$frostlang$frostc$parser$Token$nullable $tmp2127 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2126, &$s2128);
*(&local0) = $tmp2127;
// line 847
org$frostlang$frostc$parser$Token$nullable $tmp2129 = *(&local0);
frost$core$Bit $tmp2130 = frost$core$Bit$init$builtin_bit(!$tmp2129.nonnull);
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block1; else goto block2;
block1:;
// line 848
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 850
frost$collections$Array* $tmp2132 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2132);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$collections$Array* $tmp2133 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local1) = $tmp2132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// line 851
frost$core$Int64 $tmp2134 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2135 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2134);
org$frostlang$frostc$parser$Token$nullable $tmp2136 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2135);
frost$core$Bit $tmp2137 = frost$core$Bit$init$builtin_bit(!$tmp2136.nonnull);
bool $tmp2138 = $tmp2137.value;
if ($tmp2138) goto block3; else goto block4;
block3:;
// line 852
org$frostlang$frostc$ASTNode* $tmp2139 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
org$frostlang$frostc$ASTNode* $tmp2140 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
*(&local2) = $tmp2139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// line 853
org$frostlang$frostc$ASTNode* $tmp2141 = *(&local2);
frost$core$Bit $tmp2142 = frost$core$Bit$init$builtin_bit($tmp2141 == NULL);
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block5; else goto block6;
block5:;
// line 854
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 856
frost$collections$Array* $tmp2146 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2147 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2146, ((frost$core$Object*) $tmp2147));
// line 857
goto block7;
block7:;
frost$core$Int64 $tmp2148 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2149 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2148);
org$frostlang$frostc$parser$Token$nullable $tmp2150 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2149);
frost$core$Bit $tmp2151 = frost$core$Bit$init$builtin_bit($tmp2150.nonnull);
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block8; else goto block9;
block8:;
// line 858
org$frostlang$frostc$ASTNode* $tmp2153 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
org$frostlang$frostc$ASTNode* $tmp2154 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local2) = $tmp2153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
// line 859
org$frostlang$frostc$ASTNode* $tmp2155 = *(&local2);
frost$core$Bit $tmp2156 = frost$core$Bit$init$builtin_bit($tmp2155 == NULL);
bool $tmp2157 = $tmp2156.value;
if ($tmp2157) goto block10; else goto block11;
block10:;
// line 860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 862
frost$collections$Array* $tmp2160 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp2161 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2160, ((frost$core$Object*) $tmp2161));
goto block7;
block9:;
// line 864
frost$core$Int64 $tmp2162 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2163 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2162);
org$frostlang$frostc$parser$Token$nullable $tmp2164 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2163, &$s2165);
frost$core$Bit $tmp2166 = frost$core$Bit$init$builtin_bit(!$tmp2164.nonnull);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block12; else goto block13;
block12:;
// line 865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp2170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 868
org$frostlang$frostc$parser$Token $tmp2171 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2171;
// line 869
org$frostlang$frostc$parser$Token $tmp2172 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2173 = $tmp2172.kind;
frost$core$Int64 $tmp2174 = $tmp2173.$rawValue;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {94};
frost$core$Bit $tmp2176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2174, $tmp2175);
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2178 = (frost$core$Int64) {95};
frost$core$Bit $tmp2179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2174, $tmp2178);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp2181 = (frost$core$Int64) {96};
frost$core$Bit $tmp2182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2174, $tmp2181);
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp2184 = (frost$core$Int64) {97};
frost$core$Bit $tmp2185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2174, $tmp2184);
bool $tmp2186 = $tmp2185.value;
if ($tmp2186) goto block15; else goto block19;
block15:;
// line 872
org$frostlang$frostc$parser$Token $tmp2187 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 873
frost$core$Int64 $tmp2188 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2189 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2188);
org$frostlang$frostc$parser$Token$nullable $tmp2190 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2189, &$s2191);
frost$core$Bit $tmp2192 = frost$core$Bit$init$builtin_bit(!$tmp2190.nonnull);
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block20; else goto block21;
block20:;
// line 874
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 876
frost$collections$Array* $tmp2195 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2195);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$collections$Array* $tmp2196 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local4) = $tmp2195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// line 877
frost$core$Int64 $tmp2197 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2198 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2197);
org$frostlang$frostc$parser$Token$nullable $tmp2199 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2198);
frost$core$Bit $tmp2200 = frost$core$Bit$init$builtin_bit(!$tmp2199.nonnull);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block22; else goto block23;
block22:;
// line 878
org$frostlang$frostc$ASTNode* $tmp2202 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
org$frostlang$frostc$ASTNode* $tmp2203 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local5) = $tmp2202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
// line 879
org$frostlang$frostc$ASTNode* $tmp2204 = *(&local5);
frost$core$Bit $tmp2205 = frost$core$Bit$init$builtin_bit($tmp2204 == NULL);
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block24; else goto block25;
block24:;
// line 880
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2208 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 882
frost$collections$Array* $tmp2210 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2211 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2210, ((frost$core$Object*) $tmp2211));
// line 883
goto block26;
block26:;
frost$core$Int64 $tmp2212 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2213 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2212);
org$frostlang$frostc$parser$Token$nullable $tmp2214 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2213);
frost$core$Bit $tmp2215 = frost$core$Bit$init$builtin_bit($tmp2214.nonnull);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block27; else goto block28;
block27:;
// line 884
org$frostlang$frostc$ASTNode* $tmp2217 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
org$frostlang$frostc$ASTNode* $tmp2218 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local5) = $tmp2217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// line 885
org$frostlang$frostc$ASTNode* $tmp2219 = *(&local5);
frost$core$Bit $tmp2220 = frost$core$Bit$init$builtin_bit($tmp2219 == NULL);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block29; else goto block30;
block29:;
// line 886
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
block30:;
// line 888
frost$collections$Array* $tmp2225 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2226 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2225, ((frost$core$Object*) $tmp2226));
goto block26;
block28:;
// line 890
frost$core$Int64 $tmp2227 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2228 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2227);
org$frostlang$frostc$parser$Token$nullable $tmp2229 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2228, &$s2230);
frost$core$Bit $tmp2231 = frost$core$Bit$init$builtin_bit(!$tmp2229.nonnull);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block31; else goto block32;
block31:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2233 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2234 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block32:;
org$frostlang$frostc$ASTNode* $tmp2236 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 894
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 895
frost$collections$Array* $tmp2237 = *(&local4);
ITable* $tmp2238 = ((frost$collections$CollectionView*) $tmp2237)->$class->itable;
while ($tmp2238->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2238 = $tmp2238->next;
}
$fn2240 $tmp2239 = $tmp2238->methods[0];
frost$core$Int64 $tmp2241 = $tmp2239(((frost$collections$CollectionView*) $tmp2237));
frost$core$Int64 $tmp2242 = (frost$core$Int64) {0};
frost$core$Bit $tmp2243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2241, $tmp2242);
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block33; else goto block35;
block33:;
// line 896
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2245 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block35:;
// line 898
frost$collections$Array* $tmp2246 = *(&local4);
ITable* $tmp2247 = ((frost$collections$CollectionView*) $tmp2246)->$class->itable;
while ($tmp2247->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2247 = $tmp2247->next;
}
$fn2249 $tmp2248 = $tmp2247->methods[0];
frost$core$Int64 $tmp2250 = $tmp2248(((frost$collections$CollectionView*) $tmp2246));
frost$core$Int64 $tmp2251 = (frost$core$Int64) {1};
frost$core$Bit $tmp2252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2250, $tmp2251);
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block36; else goto block38;
block36:;
// line 899
frost$collections$Array* $tmp2254 = *(&local4);
frost$core$Int64 $tmp2255 = (frost$core$Int64) {0};
frost$core$Object* $tmp2256 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2254, $tmp2255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2256)));
org$frostlang$frostc$ASTNode* $tmp2257 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2256);
frost$core$Frost$unref$frost$core$Object$Q($tmp2256);
goto block37;
block38:;
// line 1
// line 903
org$frostlang$frostc$parser$Token$nullable $tmp2258 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2258.value), &$s2259);
// line 904
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2260 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2261 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 906
org$frostlang$frostc$ASTNode* $tmp2263 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2264 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$nullable $tmp2265 = *(&local0);
org$frostlang$frostc$Position $tmp2266 = ((org$frostlang$frostc$parser$Token) $tmp2265.value).position;
org$frostlang$frostc$parser$Token $tmp2267 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2268 = $tmp2267.kind;
frost$collections$Array* $tmp2269 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2270 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2269);
org$frostlang$frostc$ASTNode* $tmp2271 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp2263, $tmp2264, $tmp2266, $tmp2268, $tmp2270, $tmp2271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
org$frostlang$frostc$ASTNode* $tmp2272 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2263;
block19:;
// line 911
org$frostlang$frostc$parser$Token$nullable $tmp2275 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2275.value), &$s2276);
// line 912
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
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
org$frostlang$frostc$parser$Token $tmp2278 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2279 = $tmp2278.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2280;
$tmp2280 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2280->value = $tmp2279;
frost$core$Int64 $tmp2281 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp2282 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2281);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2283;
$tmp2283 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2283->value = $tmp2282;
ITable* $tmp2284 = ((frost$core$Equatable*) $tmp2280)->$class->itable;
while ($tmp2284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2284 = $tmp2284->next;
}
$fn2286 $tmp2285 = $tmp2284->methods[0];
frost$core$Bit $tmp2287 = $tmp2285(((frost$core$Equatable*) $tmp2280), ((frost$core$Equatable*) $tmp2283));
bool $tmp2288 = $tmp2287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2283)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2280)));
if ($tmp2288) goto block1; else goto block3;
block1:;
// line 924
org$frostlang$frostc$ASTNode* $tmp2289 = org$frostlang$frostc$parser$Parser$functionOrTupleType$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
org$frostlang$frostc$ASTNode* $tmp2290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local0) = $tmp2289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
// line 925
org$frostlang$frostc$ASTNode* $tmp2291 = *(&local0);
frost$core$Bit $tmp2292 = frost$core$Bit$init$builtin_bit($tmp2291 == NULL);
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block4; else goto block5;
block4:;
// line 926
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 930
frost$core$Int64 $tmp2295 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2296 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2295);
org$frostlang$frostc$parser$Token$nullable $tmp2297 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2296, &$s2298);
*(&local1) = $tmp2297;
// line 931
org$frostlang$frostc$parser$Token$nullable $tmp2299 = *(&local1);
frost$core$Bit $tmp2300 = frost$core$Bit$init$builtin_bit(!$tmp2299.nonnull);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block6; else goto block7;
block6:;
// line 932
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 934
frost$core$MutableString* $tmp2303 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp2304 = *(&local1);
frost$core$String* $tmp2305 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2304.value));
frost$core$MutableString$init$frost$core$String($tmp2303, $tmp2305);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$MutableString* $tmp2306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local2) = $tmp2303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// line 935
goto block8;
block8:;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp2308 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2307);
org$frostlang$frostc$parser$Token$nullable $tmp2309 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2308);
frost$core$Bit $tmp2310 = frost$core$Bit$init$builtin_bit($tmp2309.nonnull);
bool $tmp2311 = $tmp2310.value;
if ($tmp2311) goto block9; else goto block10;
block9:;
// line 936
frost$core$Int64 $tmp2312 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp2313 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2312);
org$frostlang$frostc$parser$Token$nullable $tmp2314 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2313, &$s2315);
*(&local3) = $tmp2314;
// line 937
org$frostlang$frostc$parser$Token$nullable $tmp2316 = *(&local3);
frost$core$Bit $tmp2317 = frost$core$Bit$init$builtin_bit(!$tmp2316.nonnull);
bool $tmp2318 = $tmp2317.value;
if ($tmp2318) goto block11; else goto block12;
block11:;
// line 938
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2320 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 940
frost$core$MutableString* $tmp2321 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2321, &$s2322);
// line 941
frost$core$MutableString* $tmp2323 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp2324 = *(&local3);
frost$core$String* $tmp2325 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp2324.value));
frost$core$MutableString$append$frost$core$String($tmp2323, $tmp2325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
goto block8;
block10:;
// line 943
frost$core$MutableString* $tmp2326 = *(&local2);
frost$core$String* $tmp2327 = frost$core$MutableString$finish$R$frost$core$String($tmp2326);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
frost$core$String* $tmp2328 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local4) = $tmp2327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// line 944
org$frostlang$frostc$ASTNode* $tmp2329 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2330 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$nullable $tmp2331 = *(&local1);
org$frostlang$frostc$Position $tmp2332 = ((org$frostlang$frostc$parser$Token) $tmp2331.value).position;
frost$core$String* $tmp2333 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2329, $tmp2330, $tmp2332, $tmp2333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
org$frostlang$frostc$ASTNode* $tmp2334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local0) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// line 945
org$frostlang$frostc$parser$Token $tmp2335 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2336 = $tmp2335.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2337;
$tmp2337 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2337->value = $tmp2336;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2339 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2338);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2340;
$tmp2340 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2340->value = $tmp2339;
ITable* $tmp2341 = ((frost$core$Equatable*) $tmp2337)->$class->itable;
while ($tmp2341->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2341 = $tmp2341->next;
}
$fn2343 $tmp2342 = $tmp2341->methods[0];
frost$core$Bit $tmp2344 = $tmp2342(((frost$core$Equatable*) $tmp2337), ((frost$core$Equatable*) $tmp2340));
bool $tmp2345 = $tmp2344.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2340)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2337)));
if ($tmp2345) goto block13; else goto block14;
block13:;
// line 948
bool $tmp2346 = param1.value;
if ($tmp2346) goto block15; else goto block16;
block15:;
// line 949
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 951
org$frostlang$frostc$parser$Token $tmp2347 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 952
frost$collections$Array* $tmp2348 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2348);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$collections$Array* $tmp2349 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
*(&local5) = $tmp2348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
// line 953
frost$core$Bit $tmp2350 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2351 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2350);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
org$frostlang$frostc$ASTNode* $tmp2352 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
*(&local6) = $tmp2351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
// line 954
org$frostlang$frostc$ASTNode* $tmp2353 = *(&local6);
frost$core$Bit $tmp2354 = frost$core$Bit$init$builtin_bit($tmp2353 == NULL);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block17; else goto block18;
block17:;
// line 955
bool $tmp2356 = param1.value;
if ($tmp2356) goto block19; else goto block20;
block19:;
// line 956
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 957
org$frostlang$frostc$ASTNode* $tmp2357 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
org$frostlang$frostc$ASTNode* $tmp2358 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2359 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2360 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2361 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2357;
block20:;
// line 959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2365 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2366 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 961
frost$collections$Array* $tmp2368 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2369 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2368, ((frost$core$Object*) $tmp2369));
// line 962
goto block21;
block21:;
frost$core$Int64 $tmp2370 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2371 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2370);
org$frostlang$frostc$parser$Token$nullable $tmp2372 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2371);
frost$core$Bit $tmp2373 = frost$core$Bit$init$builtin_bit($tmp2372.nonnull);
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block22; else goto block23;
block22:;
// line 963
frost$core$Bit $tmp2375 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2376 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
org$frostlang$frostc$ASTNode* $tmp2377 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local6) = $tmp2376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
// line 964
org$frostlang$frostc$ASTNode* $tmp2378 = *(&local6);
frost$core$Bit $tmp2379 = frost$core$Bit$init$builtin_bit($tmp2378 == NULL);
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block24; else goto block25;
block24:;
// line 965
bool $tmp2381 = param1.value;
if ($tmp2381) goto block26; else goto block27;
block26:;
// line 966
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 967
org$frostlang$frostc$ASTNode* $tmp2382 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
org$frostlang$frostc$ASTNode* $tmp2383 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2384 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2385 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2382;
block27:;
// line 969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2388 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2389 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2390 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2392 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 971
frost$collections$Array* $tmp2393 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp2394 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2393, ((frost$core$Object*) $tmp2394));
goto block21;
block23:;
// line 973
frost$core$Int64 $tmp2395 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2396 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2395);
org$frostlang$frostc$parser$Token$nullable $tmp2397 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2396, &$s2398);
frost$core$Bit $tmp2399 = frost$core$Bit$init$builtin_bit(!$tmp2397.nonnull);
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block28; else goto block29;
block28:;
// line 974
bool $tmp2401 = param1.value;
if ($tmp2401) goto block30; else goto block31;
block30:;
// line 975
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 976
org$frostlang$frostc$ASTNode* $tmp2402 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
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
return $tmp2402;
block31:;
// line 978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2408 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2409 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2411 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp2412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block29:;
// line 980
org$frostlang$frostc$ASTNode* $tmp2413 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2414 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$nullable $tmp2415 = *(&local1);
org$frostlang$frostc$Position $tmp2416 = ((org$frostlang$frostc$parser$Token) $tmp2415.value).position;
frost$core$String* $tmp2417 = *(&local4);
frost$collections$Array* $tmp2418 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2419 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2418);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2413, $tmp2414, $tmp2416, $tmp2417, $tmp2419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
org$frostlang$frostc$ASTNode* $tmp2420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local0) = $tmp2413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
// line 982
bool $tmp2421 = param1.value;
if ($tmp2421) goto block32; else goto block33;
block32:;
// line 983
org$frostlang$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2423 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2424 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2425 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 987
frost$core$Int64 $tmp2426 = (frost$core$Int64) {98};
org$frostlang$frostc$parser$Token$Kind $tmp2427 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2426);
org$frostlang$frostc$parser$Token$nullable $tmp2428 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2427);
frost$core$Bit $tmp2429 = frost$core$Bit$init$builtin_bit($tmp2428.nonnull);
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block34; else goto block35;
block34:;
// line 988
org$frostlang$frostc$ASTNode* $tmp2431 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2432 = (frost$core$Int64) {32};
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local0);
$fn2435 $tmp2434 = ($fn2435) $tmp2433->$class->vtable[2];
org$frostlang$frostc$Position $tmp2436 = $tmp2434($tmp2433);
org$frostlang$frostc$ASTNode* $tmp2437 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode($tmp2431, $tmp2432, $tmp2436, $tmp2437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
org$frostlang$frostc$ASTNode* $tmp2438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local0) = $tmp2431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
goto block35;
block35:;
// line 990
org$frostlang$frostc$ASTNode* $tmp2439 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$ASTNode* $tmp2440 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2439;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 997
frost$core$Int64 $tmp2441 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2442 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2441);
org$frostlang$frostc$parser$Token$nullable $tmp2443 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2442, &$s2444);
frost$core$Bit $tmp2445 = frost$core$Bit$init$builtin_bit(!$tmp2443.nonnull);
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block1; else goto block2;
block1:;
// line 998
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1000
frost$collections$Array* $tmp2447 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2447);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
frost$collections$Array* $tmp2448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local0) = $tmp2447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
// line 1
// line 1002
org$frostlang$frostc$ASTNode* $tmp2449 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
org$frostlang$frostc$ASTNode* $tmp2450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local1) = $tmp2449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
// line 1003
org$frostlang$frostc$ASTNode* $tmp2451 = *(&local1);
frost$core$Bit $tmp2452 = frost$core$Bit$init$builtin_bit($tmp2451 == NULL);
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block3; else goto block4;
block3:;
// line 1004
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 1006
frost$collections$Array* $tmp2456 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2457 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2456, ((frost$core$Object*) $tmp2457));
org$frostlang$frostc$ASTNode* $tmp2458 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1008
goto block5;
block5:;
frost$core$Int64 $tmp2459 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2460 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2459);
org$frostlang$frostc$parser$Token$nullable $tmp2461 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2460);
frost$core$Bit $tmp2462 = frost$core$Bit$init$builtin_bit($tmp2461.nonnull);
bool $tmp2463 = $tmp2462.value;
if ($tmp2463) goto block6; else goto block7;
block6:;
// line 1009
org$frostlang$frostc$ASTNode* $tmp2464 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
org$frostlang$frostc$ASTNode* $tmp2465 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local2) = $tmp2464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
// line 1010
org$frostlang$frostc$ASTNode* $tmp2466 = *(&local2);
frost$core$Bit $tmp2467 = frost$core$Bit$init$builtin_bit($tmp2466 == NULL);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block8; else goto block9;
block8:;
// line 1011
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 1013
frost$collections$Array* $tmp2471 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2472 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2471, ((frost$core$Object*) $tmp2472));
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1015
frost$core$Int64 $tmp2474 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2475 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2474);
org$frostlang$frostc$parser$Token$nullable $tmp2476 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2475, &$s2477);
frost$core$Bit $tmp2478 = frost$core$Bit$init$builtin_bit(!$tmp2476.nonnull);
bool $tmp2479 = $tmp2478.value;
if ($tmp2479) goto block10; else goto block11;
block10:;
// line 1016
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 1018
frost$collections$Array* $tmp2481 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp2482 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$collections$Array* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2482;

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
org$frostlang$frostc$ASTNode* $tmp2484 = org$frostlang$frostc$parser$Parser$term$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
org$frostlang$frostc$ASTNode* $tmp2485 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local0) = $tmp2484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
// line 1033
org$frostlang$frostc$ASTNode* $tmp2486 = *(&local0);
frost$core$Bit $tmp2487 = frost$core$Bit$init$builtin_bit($tmp2486 == NULL);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block1; else goto block2;
block1:;
// line 1034
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1036
goto block3;
block3:;
// line 1037
org$frostlang$frostc$parser$Token $tmp2490 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2490;
// line 1038
org$frostlang$frostc$parser$Token $tmp2491 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2492 = $tmp2491.kind;
frost$core$Int64 $tmp2493 = $tmp2492.$rawValue;
frost$core$Int64 $tmp2494 = (frost$core$Int64) {107};
frost$core$Bit $tmp2495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2493, $tmp2494);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block6; else goto block7;
block6:;
// line 1040
frost$collections$Stack** $tmp2497 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2498 = *$tmp2497;
frost$core$Bit $tmp2499 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2500;
$tmp2500 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2500->value = $tmp2499;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2498, ((frost$core$Object*) $tmp2500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
// line 1041
frost$collections$Array* $tmp2501 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2501);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
frost$collections$Array* $tmp2502 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
*(&local2) = $tmp2501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
// line 1042
frost$core$Int64 $tmp2503 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2504 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2503);
org$frostlang$frostc$parser$Token$nullable $tmp2505 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2504);
frost$core$Bit $tmp2506 = frost$core$Bit$init$builtin_bit(!$tmp2505.nonnull);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block8; else goto block9;
block8:;
// line 1043
org$frostlang$frostc$ASTNode* $tmp2508 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
org$frostlang$frostc$ASTNode* $tmp2509 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local3) = $tmp2508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
// line 1044
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local3);
frost$core$Bit $tmp2511 = frost$core$Bit$init$builtin_bit($tmp2510 == NULL);
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block10; else goto block11;
block10:;
// line 1045
frost$collections$Stack** $tmp2513 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2514 = *$tmp2513;
frost$core$Object* $tmp2515 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2514);
frost$core$Frost$unref$frost$core$Object$Q($tmp2515);
// line 1046
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2516 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1048
frost$collections$Array* $tmp2519 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2520 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2519, ((frost$core$Object*) $tmp2520));
// line 1049
goto block12;
block12:;
frost$core$Int64 $tmp2521 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2522 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2521);
org$frostlang$frostc$parser$Token$nullable $tmp2523 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2522);
frost$core$Bit $tmp2524 = frost$core$Bit$init$builtin_bit($tmp2523.nonnull);
bool $tmp2525 = $tmp2524.value;
if ($tmp2525) goto block13; else goto block14;
block13:;
// line 1050
org$frostlang$frostc$ASTNode* $tmp2526 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
org$frostlang$frostc$ASTNode* $tmp2527 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local3) = $tmp2526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
// line 1051
org$frostlang$frostc$ASTNode* $tmp2528 = *(&local3);
frost$core$Bit $tmp2529 = frost$core$Bit$init$builtin_bit($tmp2528 == NULL);
bool $tmp2530 = $tmp2529.value;
if ($tmp2530) goto block15; else goto block16;
block15:;
// line 1052
frost$collections$Stack** $tmp2531 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2532 = *$tmp2531;
frost$core$Object* $tmp2533 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2532);
frost$core$Frost$unref$frost$core$Object$Q($tmp2533);
// line 1053
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2534 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2536 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1055
frost$collections$Array* $tmp2537 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2538 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2537, ((frost$core$Object*) $tmp2538));
goto block12;
block14:;
// line 1057
frost$core$Int64 $tmp2539 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp2540 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2539);
org$frostlang$frostc$parser$Token$nullable $tmp2541 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2540, &$s2542);
frost$core$Bit $tmp2543 = frost$core$Bit$init$builtin_bit(!$tmp2541.nonnull);
bool $tmp2544 = $tmp2543.value;
if ($tmp2544) goto block17; else goto block18;
block17:;
// line 1058
frost$collections$Stack** $tmp2545 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2546 = *$tmp2545;
frost$core$Object* $tmp2547 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2546);
frost$core$Frost$unref$frost$core$Object$Q($tmp2547);
// line 1059
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2548 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2549 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp2550 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
org$frostlang$frostc$ASTNode* $tmp2551 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1062
frost$collections$Stack** $tmp2552 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2553 = *$tmp2552;
frost$core$Object* $tmp2554 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2553);
frost$core$Frost$unref$frost$core$Object$Q($tmp2554);
// line 1063
org$frostlang$frostc$ASTNode* $tmp2555 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2556 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token $tmp2557 = *(&local1);
org$frostlang$frostc$Position $tmp2558 = $tmp2557.position;
org$frostlang$frostc$ASTNode* $tmp2559 = *(&local0);
frost$collections$Array* $tmp2560 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2561 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2560);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2555, $tmp2556, $tmp2558, $tmp2559, $tmp2561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local0) = $tmp2555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
frost$collections$Array* $tmp2563 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2564 = (frost$core$Int64) {105};
frost$core$Bit $tmp2565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2493, $tmp2564);
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block19; else goto block20;
block19:;
// line 1067
org$frostlang$frostc$ASTNode* $tmp2567 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
org$frostlang$frostc$ASTNode* $tmp2568 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local4) = $tmp2567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// line 1068
org$frostlang$frostc$ASTNode* $tmp2569 = *(&local4);
frost$core$Bit $tmp2570 = frost$core$Bit$init$builtin_bit($tmp2569 == NULL);
bool $tmp2571 = $tmp2570.value;
if ($tmp2571) goto block21; else goto block22;
block21:;
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2572 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1071
frost$core$Int64 $tmp2574 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp2575 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2574);
org$frostlang$frostc$parser$Token$nullable $tmp2576 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2575, &$s2577);
frost$core$Bit $tmp2578 = frost$core$Bit$init$builtin_bit(!$tmp2576.nonnull);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block23; else goto block24;
block23:;
// line 1072
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2580 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2581 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block24:;
// line 1074
org$frostlang$frostc$ASTNode* $tmp2582 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2583 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2584 = *(&local1);
org$frostlang$frostc$Position $tmp2585 = $tmp2584.position;
org$frostlang$frostc$ASTNode* $tmp2586 = *(&local0);
frost$core$Int64 $tmp2587 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp2588 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2587);
org$frostlang$frostc$ASTNode* $tmp2589 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2582, $tmp2583, $tmp2585, $tmp2586, $tmp2588, $tmp2589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
org$frostlang$frostc$ASTNode* $tmp2590 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local0) = $tmp2582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
org$frostlang$frostc$ASTNode* $tmp2591 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2592 = (frost$core$Int64) {102};
frost$core$Bit $tmp2593 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2493, $tmp2592);
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block25; else goto block26;
block25:;
// line 1077
*(&local5) = ((frost$core$String*) NULL);
// line 1078
frost$core$Int64 $tmp2595 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp2596 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2595);
org$frostlang$frostc$parser$Token$nullable $tmp2597 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2596);
frost$core$Bit $tmp2598 = frost$core$Bit$init$builtin_bit($tmp2597.nonnull);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block27; else goto block29;
block27:;
// line 1079
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2600));
frost$core$String* $tmp2601 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
*(&local5) = &$s2600;
goto block28;
block29:;
// line 1
// line 1082
frost$core$String* $tmp2602 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$String* $tmp2603 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local5) = $tmp2602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// line 1083
frost$core$String* $tmp2604 = *(&local5);
frost$core$Bit $tmp2605 = frost$core$Bit$init$builtin_bit($tmp2604 == NULL);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block30; else goto block31;
block30:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2607 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1087
org$frostlang$frostc$ASTNode* $tmp2609 = *(&local0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
org$frostlang$frostc$ASTNode* $tmp2610 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local6) = $tmp2609;
// line 1088
org$frostlang$frostc$ASTNode* $tmp2611 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2612 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token $tmp2613 = *(&local1);
org$frostlang$frostc$Position $tmp2614 = $tmp2613.position;
org$frostlang$frostc$ASTNode* $tmp2615 = *(&local6);
frost$core$String* $tmp2616 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2611, $tmp2612, $tmp2614, $tmp2615, $tmp2616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$ASTNode* $tmp2617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local0) = $tmp2611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
// line 1089
org$frostlang$frostc$parser$Token $tmp2618 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2619 = $tmp2618.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2620;
$tmp2620 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2620->value = $tmp2619;
frost$core$Int64 $tmp2621 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp2622 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2621);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2623;
$tmp2623 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2623->value = $tmp2622;
ITable* $tmp2624 = ((frost$core$Equatable*) $tmp2620)->$class->itable;
while ($tmp2624->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2624 = $tmp2624->next;
}
$fn2626 $tmp2625 = $tmp2624->methods[0];
frost$core$Bit $tmp2627 = $tmp2625(((frost$core$Equatable*) $tmp2620), ((frost$core$Equatable*) $tmp2623));
bool $tmp2628 = $tmp2627.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2623)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2620)));
if ($tmp2628) goto block32; else goto block33;
block32:;
// line 1090
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1091
org$frostlang$frostc$FixedArray* $tmp2629 = org$frostlang$frostc$parser$Parser$typeSpecifiers$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
org$frostlang$frostc$FixedArray* $tmp2630 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local7) = $tmp2629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 1092
org$frostlang$frostc$FixedArray* $tmp2631 = *(&local7);
frost$core$Bit $tmp2632 = frost$core$Bit$init$builtin_bit($tmp2631 != NULL);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block34; else goto block36;
block34:;
// line 1093
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1094
org$frostlang$frostc$ASTNode* $tmp2634 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2635 = (frost$core$Int64) {17};
org$frostlang$frostc$parser$Token $tmp2636 = *(&local1);
org$frostlang$frostc$Position $tmp2637 = $tmp2636.position;
org$frostlang$frostc$ASTNode* $tmp2638 = *(&local6);
frost$core$String* $tmp2639 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2640 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2634, $tmp2635, $tmp2637, $tmp2638, $tmp2639, $tmp2640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
org$frostlang$frostc$ASTNode* $tmp2641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local0) = $tmp2634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
goto block35;
block36:;
// line 1
// line 1097
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1098
org$frostlang$frostc$ASTNode* $tmp2642 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
org$frostlang$frostc$FixedArray* $tmp2643 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2644 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2645 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local5) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2642;
block35:;
org$frostlang$frostc$FixedArray* $tmp2647 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2649 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2650 = (frost$core$Int64) {93};
frost$core$Bit $tmp2651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2493, $tmp2650);
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block37; else goto block38;
block37:;
// line 1103
org$frostlang$frostc$ASTNode* $tmp2653 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
org$frostlang$frostc$ASTNode* $tmp2654 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local8) = $tmp2653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
// line 1104
org$frostlang$frostc$ASTNode* $tmp2655 = *(&local8);
frost$core$Bit $tmp2656 = frost$core$Bit$init$builtin_bit($tmp2655 == NULL);
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block39; else goto block40;
block39:;
// line 1105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2658 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2659 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 1107
org$frostlang$frostc$ASTNode* $tmp2660 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2661 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2662 = *(&local1);
org$frostlang$frostc$Position $tmp2663 = $tmp2662.position;
org$frostlang$frostc$ASTNode* $tmp2664 = *(&local0);
frost$core$Int64 $tmp2665 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp2666 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2665);
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2660, $tmp2661, $tmp2663, $tmp2664, $tmp2666, $tmp2667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local0) = $tmp2660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2670 = (frost$core$Int64) {66};
frost$core$Bit $tmp2671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2493, $tmp2670);
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block41; else goto block42;
block41:;
// line 1112
org$frostlang$frostc$parser$Token $tmp2673 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2673);
// line 1113
org$frostlang$frostc$ASTNode* $tmp2674 = *(&local0);
frost$core$String* $tmp2675 = org$frostlang$frostc$parser$Parser$getClassName$org$frostlang$frostc$ASTNode$R$frost$core$String$Q($tmp2674);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$core$String* $tmp2676 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local9) = $tmp2675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
// line 1114
frost$core$String* $tmp2677 = *(&local9);
frost$core$Bit $tmp2678 = frost$core$Bit$init$builtin_bit($tmp2677 != NULL);
bool $tmp2679 = $tmp2678.value;
if ($tmp2679) goto block43; else goto block44;
block43:;
// line 1115
org$frostlang$frostc$parser$Parser$startSpeculative(param0);
// line 1116
org$frostlang$frostc$parser$Token $tmp2680 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1119
frost$collections$Array* $tmp2681 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2681);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
frost$collections$Array* $tmp2682 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local10) = $tmp2681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
// line 1120
frost$core$Bit $tmp2683 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2684 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2683);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
org$frostlang$frostc$ASTNode* $tmp2685 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local11) = $tmp2684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// line 1121
org$frostlang$frostc$ASTNode* $tmp2686 = *(&local11);
frost$core$Bit $tmp2687 = frost$core$Bit$init$builtin_bit($tmp2686 == NULL);
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block45; else goto block46;
block45:;
// line 1122
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1123
org$frostlang$frostc$ASTNode* $tmp2689 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
org$frostlang$frostc$ASTNode* $tmp2690 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2691 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2692 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2693 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2689;
block46:;
// line 1125
frost$collections$Array* $tmp2694 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2695 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2694, ((frost$core$Object*) $tmp2695));
// line 1126
goto block47;
block47:;
frost$core$Int64 $tmp2696 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp2697 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2696);
org$frostlang$frostc$parser$Token$nullable $tmp2698 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2697);
frost$core$Bit $tmp2699 = frost$core$Bit$init$builtin_bit($tmp2698.nonnull);
bool $tmp2700 = $tmp2699.value;
if ($tmp2700) goto block48; else goto block49;
block48:;
// line 1127
frost$core$Bit $tmp2701 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp2702 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp2701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
org$frostlang$frostc$ASTNode* $tmp2703 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local11) = $tmp2702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
// line 1128
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local11);
frost$core$Bit $tmp2705 = frost$core$Bit$init$builtin_bit($tmp2704 == NULL);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block50; else goto block51;
block50:;
// line 1129
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1130
org$frostlang$frostc$ASTNode* $tmp2707 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
org$frostlang$frostc$ASTNode* $tmp2708 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2709 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2710 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2707;
block51:;
// line 1132
frost$collections$Array* $tmp2712 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2713 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2712, ((frost$core$Object*) $tmp2713));
goto block47;
block49:;
// line 1134
frost$core$Int64 $tmp2714 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2715 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2714);
org$frostlang$frostc$parser$Token$nullable $tmp2716 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2715, &$s2717);
*(&local12) = $tmp2716;
// line 1135
org$frostlang$frostc$parser$Token$nullable $tmp2718 = *(&local12);
frost$core$Bit $tmp2719 = frost$core$Bit$init$builtin_bit(!$tmp2718.nonnull);
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block52; else goto block53;
block52:;
// line 1136
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1137
org$frostlang$frostc$ASTNode* $tmp2721 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
org$frostlang$frostc$ASTNode* $tmp2722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2723 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2721;
block53:;
// line 1166
// line 1167
frost$collections$Stack** $tmp2726 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2727 = *$tmp2726;
frost$core$Int64 $tmp2728 = (frost$core$Int64) {0};
frost$core$Object* $tmp2729 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2727, $tmp2728);
bool $tmp2730 = ((frost$core$Bit$wrapper*) $tmp2729)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2729);
if ($tmp2730) goto block54; else goto block56;
block54:;
// line 1168
org$frostlang$frostc$parser$Token $tmp2731 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local14) = $tmp2731;
// line 1169
org$frostlang$frostc$parser$Token $tmp2732 = *(&local14);
org$frostlang$frostc$parser$Token$Kind $tmp2733 = $tmp2732.kind;
frost$core$Int64 $tmp2734 = $tmp2733.$rawValue;
frost$core$Int64 $tmp2735 = (frost$core$Int64) {102};
frost$core$Bit $tmp2736 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2734, $tmp2735);
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2738 = (frost$core$Int64) {109};
frost$core$Bit $tmp2739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2734, $tmp2738);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2741 = (frost$core$Int64) {93};
frost$core$Bit $tmp2742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2734, $tmp2741);
bool $tmp2743 = $tmp2742.value;
if ($tmp2743) goto block58; else goto block61;
block58:;
// line 1171
frost$core$Bit $tmp2744 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2744;
goto block57;
block61:;
frost$core$Int64 $tmp2745 = (frost$core$Int64) {107};
frost$core$Bit $tmp2746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2734, $tmp2745);
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block62; else goto block63;
block62:;
// line 1174
org$frostlang$frostc$parser$Token $tmp2748 = *(&local14);
org$frostlang$frostc$Position $tmp2749 = $tmp2748.position;
frost$core$Int64 $tmp2750 = $tmp2749.line;
org$frostlang$frostc$parser$Token$nullable $tmp2751 = *(&local12);
org$frostlang$frostc$Position $tmp2752 = ((org$frostlang$frostc$parser$Token) $tmp2751.value).position;
frost$core$Int64 $tmp2753 = $tmp2752.line;
frost$core$Bit $tmp2754 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2753);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block64; else goto block65;
block64:;
org$frostlang$frostc$parser$Token $tmp2756 = *(&local14);
org$frostlang$frostc$Position $tmp2757 = $tmp2756.position;
frost$core$Int64 $tmp2758 = $tmp2757.column;
org$frostlang$frostc$parser$Token$nullable $tmp2759 = *(&local12);
org$frostlang$frostc$Position $tmp2760 = ((org$frostlang$frostc$parser$Token) $tmp2759.value).position;
frost$core$Int64 $tmp2761 = $tmp2760.column;
frost$core$Int64 $tmp2762 = (frost$core$Int64) {1};
int64_t $tmp2763 = $tmp2761.value;
int64_t $tmp2764 = $tmp2762.value;
int64_t $tmp2765 = $tmp2763 + $tmp2764;
frost$core$Int64 $tmp2766 = (frost$core$Int64) {$tmp2765};
frost$core$Bit $tmp2767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2758, $tmp2766);
*(&local15) = $tmp2767;
goto block66;
block65:;
*(&local15) = $tmp2754;
goto block66;
block66:;
frost$core$Bit $tmp2768 = *(&local15);
*(&local13) = $tmp2768;
goto block57;
block63:;
// line 1178
frost$core$Bit $tmp2769 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2769;
goto block57;
block57:;
// line 1181
frost$core$Bit $tmp2770 = *(&local13);
bool $tmp2771 = $tmp2770.value;
if ($tmp2771) goto block67; else goto block68;
block67:;
// line 1182
org$frostlang$frostc$parser$Token $tmp2772 = *(&local14);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2772);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1186
frost$core$Bit $tmp2773 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2773;
goto block55;
block55:;
// line 1188
frost$core$Bit $tmp2774 = *(&local13);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block69; else goto block71;
block69:;
// line 1189
org$frostlang$frostc$parser$Parser$accept(param0);
// line 1190
org$frostlang$frostc$ASTNode* $tmp2776 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2777 = (frost$core$Int64) {21};
org$frostlang$frostc$ASTNode* $tmp2778 = *(&local0);
$fn2780 $tmp2779 = ($fn2780) $tmp2778->$class->vtable[2];
org$frostlang$frostc$Position $tmp2781 = $tmp2779($tmp2778);
frost$core$String* $tmp2782 = *(&local9);
frost$collections$Array* $tmp2783 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2784 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2783);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2776, $tmp2777, $tmp2781, $tmp2782, $tmp2784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
org$frostlang$frostc$ASTNode* $tmp2785 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
*(&local0) = $tmp2776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// line 1192
org$frostlang$frostc$ASTNode* $tmp2786 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2787 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2788 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1195
org$frostlang$frostc$parser$Parser$rewind(param0);
// line 1196
org$frostlang$frostc$ASTNode* $tmp2789 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
org$frostlang$frostc$ASTNode* $tmp2790 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2791 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2792 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2789;
block70:;
org$frostlang$frostc$ASTNode* $tmp2794 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2795 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1199
org$frostlang$frostc$ASTNode* $tmp2796 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$String* $tmp2797 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2796;
block42:;
// line 1202
org$frostlang$frostc$parser$Token $tmp2799 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2799);
// line 1203
org$frostlang$frostc$ASTNode* $tmp2800 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
org$frostlang$frostc$ASTNode* $tmp2801 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2800;
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
org$frostlang$frostc$ASTNode* $tmp2802 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
org$frostlang$frostc$ASTNode* $tmp2803 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local0) = $tmp2802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
// line 1214
org$frostlang$frostc$ASTNode* $tmp2804 = *(&local0);
frost$core$Bit $tmp2805 = frost$core$Bit$init$builtin_bit($tmp2804 == NULL);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block1; else goto block2;
block1:;
// line 1215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2807 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1217
goto block3;
block3:;
// line 1218
frost$core$Int64 $tmp2808 = (frost$core$Int64) {61};
org$frostlang$frostc$parser$Token$Kind $tmp2809 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2808);
org$frostlang$frostc$parser$Token$nullable $tmp2810 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp2809);
*(&local1) = $tmp2810;
// line 1219
org$frostlang$frostc$parser$Token$nullable $tmp2811 = *(&local1);
frost$core$Bit $tmp2812 = frost$core$Bit$init$builtin_bit(!$tmp2811.nonnull);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block5; else goto block6;
block5:;
// line 1220
goto block4;
block6:;
// line 1222
org$frostlang$frostc$ASTNode* $tmp2814 = org$frostlang$frostc$parser$Parser$postfixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
org$frostlang$frostc$ASTNode* $tmp2815 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
*(&local2) = $tmp2814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
// line 1223
org$frostlang$frostc$ASTNode* $tmp2816 = *(&local2);
frost$core$Bit $tmp2817 = frost$core$Bit$init$builtin_bit($tmp2816 == NULL);
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block7; else goto block8;
block7:;
// line 1224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2819 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1226
org$frostlang$frostc$ASTNode* $tmp2821 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2822 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp2823 = *(&local1);
org$frostlang$frostc$Position $tmp2824 = ((org$frostlang$frostc$parser$Token) $tmp2823.value).position;
org$frostlang$frostc$ASTNode* $tmp2825 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp2826 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2827 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp2826.value));
org$frostlang$frostc$ASTNode* $tmp2828 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2821, $tmp2822, $tmp2824, $tmp2825, $tmp2827, $tmp2828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
org$frostlang$frostc$ASTNode* $tmp2829 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local0) = $tmp2821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
org$frostlang$frostc$ASTNode* $tmp2830 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1228
org$frostlang$frostc$ASTNode* $tmp2831 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
org$frostlang$frostc$ASTNode* $tmp2832 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2831;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1235
org$frostlang$frostc$parser$Token $tmp2833 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp2833;
// line 1236
org$frostlang$frostc$parser$Token $tmp2834 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp2835 = $tmp2834.kind;
frost$core$Int64 $tmp2836 = $tmp2835.$rawValue;
frost$core$Int64 $tmp2837 = (frost$core$Int64) {56};
frost$core$Bit $tmp2838 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2836, $tmp2837);
bool $tmp2839 = $tmp2838.value;
if ($tmp2839) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2840 = (frost$core$Int64) {53};
frost$core$Bit $tmp2841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2836, $tmp2840);
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2843 = (frost$core$Int64) {54};
frost$core$Bit $tmp2844 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2836, $tmp2843);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block2; else goto block5;
block2:;
// line 1238
org$frostlang$frostc$ASTNode* $tmp2846 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$ASTNode* $tmp2847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local1) = $tmp2846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
// line 1239
org$frostlang$frostc$ASTNode* $tmp2848 = *(&local1);
frost$core$Bit $tmp2849 = frost$core$Bit$init$builtin_bit($tmp2848 == NULL);
bool $tmp2850 = $tmp2849.value;
if ($tmp2850) goto block6; else goto block7;
block6:;
// line 1240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2851 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 1242
org$frostlang$frostc$ASTNode* $tmp2852 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2853 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token $tmp2854 = *(&local0);
org$frostlang$frostc$Position $tmp2855 = $tmp2854.position;
org$frostlang$frostc$parser$Token $tmp2856 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator $tmp2857 = org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator($tmp2856);
org$frostlang$frostc$ASTNode* $tmp2858 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode($tmp2852, $tmp2853, $tmp2855, $tmp2857, $tmp2858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
org$frostlang$frostc$ASTNode* $tmp2859 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2852;
block5:;
// line 1245
org$frostlang$frostc$parser$Token $tmp2860 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2860);
// line 1246
org$frostlang$frostc$ASTNode* $tmp2861 = org$frostlang$frostc$parser$Parser$exponentExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
return $tmp2861;
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
org$frostlang$frostc$ASTNode* $tmp2862 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
org$frostlang$frostc$ASTNode* $tmp2863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local0) = $tmp2862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
// line 1259
org$frostlang$frostc$ASTNode* $tmp2864 = *(&local0);
frost$core$Bit $tmp2865 = frost$core$Bit$init$builtin_bit($tmp2864 == NULL);
bool $tmp2866 = $tmp2865.value;
if ($tmp2866) goto block1; else goto block2;
block1:;
// line 1260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2867 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1262
goto block3;
block3:;
// line 1263
org$frostlang$frostc$parser$Token $tmp2868 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2868;
// line 1264
org$frostlang$frostc$parser$Token $tmp2869 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2870 = $tmp2869.kind;
frost$core$Int64 $tmp2871 = $tmp2870.$rawValue;
frost$core$Int64 $tmp2872 = (frost$core$Int64) {57};
frost$core$Bit $tmp2873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2872);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2875 = (frost$core$Int64) {58};
frost$core$Bit $tmp2876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2875);
bool $tmp2877 = $tmp2876.value;
if ($tmp2877) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2878 = (frost$core$Int64) {59};
frost$core$Bit $tmp2879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2878);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2881 = (frost$core$Int64) {60};
frost$core$Bit $tmp2882 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2881);
bool $tmp2883 = $tmp2882.value;
if ($tmp2883) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {76};
frost$core$Bit $tmp2885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2884);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2887 = (frost$core$Int64) {71};
frost$core$Bit $tmp2888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2887);
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp2890 = (frost$core$Int64) {73};
frost$core$Bit $tmp2891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2890);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block6; else goto block13;
block6:;
// line 1267
org$frostlang$frostc$ASTNode* $tmp2893 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
org$frostlang$frostc$ASTNode* $tmp2894 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local2) = $tmp2893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
// line 1268
org$frostlang$frostc$ASTNode* $tmp2895 = *(&local2);
frost$core$Bit $tmp2896 = frost$core$Bit$init$builtin_bit($tmp2895 == NULL);
bool $tmp2897 = $tmp2896.value;
if ($tmp2897) goto block14; else goto block15;
block14:;
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2898 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1271
org$frostlang$frostc$ASTNode* $tmp2900 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2901 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2902 = *(&local1);
org$frostlang$frostc$Position $tmp2903 = $tmp2902.position;
org$frostlang$frostc$ASTNode* $tmp2904 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2905 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2906 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2905);
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2900, $tmp2901, $tmp2903, $tmp2904, $tmp2906, $tmp2907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
org$frostlang$frostc$ASTNode* $tmp2908 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local0) = $tmp2900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
org$frostlang$frostc$ASTNode* $tmp2909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2910 = (frost$core$Int64) {67};
frost$core$Bit $tmp2911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2871, $tmp2910);
bool $tmp2912 = $tmp2911.value;
if ($tmp2912) goto block16; else goto block17;
block16:;
// line 1275
org$frostlang$frostc$parser$Token $tmp2913 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp2913;
// line 1276
org$frostlang$frostc$parser$Token $tmp2914 = *(&local3);
org$frostlang$frostc$parser$Token$Kind $tmp2915 = $tmp2914.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2916;
$tmp2916 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2916->value = $tmp2915;
frost$core$Int64 $tmp2917 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp2918 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2917);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp2919;
$tmp2919 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp2919->value = $tmp2918;
ITable* $tmp2920 = ((frost$core$Equatable*) $tmp2916)->$class->itable;
while ($tmp2920->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2920 = $tmp2920->next;
}
$fn2922 $tmp2921 = $tmp2920->methods[0];
frost$core$Bit $tmp2923 = $tmp2921(((frost$core$Equatable*) $tmp2916), ((frost$core$Equatable*) $tmp2919));
bool $tmp2924 = $tmp2923.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2919)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2916)));
if ($tmp2924) goto block18; else goto block20;
block18:;
// line 1278
org$frostlang$frostc$ASTNode* $tmp2925 = org$frostlang$frostc$parser$Parser$prefixExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
org$frostlang$frostc$ASTNode* $tmp2926 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
*(&local4) = $tmp2925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// line 1279
org$frostlang$frostc$ASTNode* $tmp2927 = *(&local4);
frost$core$Bit $tmp2928 = frost$core$Bit$init$builtin_bit($tmp2927 == NULL);
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block21; else goto block22;
block21:;
// line 1280
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1282
org$frostlang$frostc$ASTNode* $tmp2932 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2933 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2934 = *(&local1);
org$frostlang$frostc$Position $tmp2935 = $tmp2934.position;
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local0);
frost$core$Int64 $tmp2937 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp2938 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2937);
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2932, $tmp2933, $tmp2935, $tmp2936, $tmp2938, $tmp2939);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
org$frostlang$frostc$ASTNode* $tmp2940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local0) = $tmp2932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1286
org$frostlang$frostc$parser$Token $tmp2942 = *(&local3);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2942);
// line 1287
org$frostlang$frostc$parser$Token $tmp2943 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2943);
// line 1288
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2944;
block19:;
goto block5;
block17:;
// line 1292
org$frostlang$frostc$parser$Token $tmp2946 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2946);
// line 1293
org$frostlang$frostc$ASTNode* $tmp2947 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
org$frostlang$frostc$ASTNode* $tmp2948 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2947;
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
org$frostlang$frostc$ASTNode* $tmp2949 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
org$frostlang$frostc$ASTNode* $tmp2950 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local0) = $tmp2949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// line 1305
org$frostlang$frostc$ASTNode* $tmp2951 = *(&local0);
frost$core$Bit $tmp2952 = frost$core$Bit$init$builtin_bit($tmp2951 == NULL);
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block1; else goto block2;
block1:;
// line 1306
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1308
goto block3;
block3:;
// line 1309
org$frostlang$frostc$parser$Token $tmp2955 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp2955;
// line 1310
org$frostlang$frostc$parser$Token $tmp2956 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp2957 = $tmp2956.kind;
frost$core$Int64 $tmp2958 = $tmp2957.$rawValue;
frost$core$Int64 $tmp2959 = (frost$core$Int64) {55};
frost$core$Bit $tmp2960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2958, $tmp2959);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2962 = (frost$core$Int64) {56};
frost$core$Bit $tmp2963 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2958, $tmp2962);
bool $tmp2964 = $tmp2963.value;
if ($tmp2964) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2965 = (frost$core$Int64) {75};
frost$core$Bit $tmp2966 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2958, $tmp2965);
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block6; else goto block9;
block6:;
// line 1312
org$frostlang$frostc$ASTNode* $tmp2968 = org$frostlang$frostc$parser$Parser$multiplicativeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
org$frostlang$frostc$ASTNode* $tmp2969 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local2) = $tmp2968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
// line 1313
org$frostlang$frostc$ASTNode* $tmp2970 = *(&local2);
frost$core$Bit $tmp2971 = frost$core$Bit$init$builtin_bit($tmp2970 == NULL);
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block10; else goto block11;
block10:;
// line 1314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2974 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1316
org$frostlang$frostc$ASTNode* $tmp2975 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2976 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp2977 = *(&local1);
org$frostlang$frostc$Position $tmp2978 = $tmp2977.position;
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local0);
org$frostlang$frostc$parser$Token $tmp2980 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp2981 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp2980);
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp2975, $tmp2976, $tmp2978, $tmp2979, $tmp2981, $tmp2982);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
org$frostlang$frostc$ASTNode* $tmp2983 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
*(&local0) = $tmp2975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
org$frostlang$frostc$ASTNode* $tmp2984 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1320
org$frostlang$frostc$parser$Token $tmp2985 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp2985);
// line 1321
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
org$frostlang$frostc$ASTNode* $tmp2987 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2986;
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
frost$core$Bit local4;
frost$core$Bit local5;
org$frostlang$frostc$ASTNode* local6 = NULL;
// line 1332
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1333
org$frostlang$frostc$parser$Token $tmp2988 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp2989 = $tmp2988.kind;
frost$core$Int64 $tmp2990 = $tmp2989.$rawValue;
frost$core$Int64 $tmp2991 = (frost$core$Int64) {101};
frost$core$Bit $tmp2992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2990, $tmp2991);
bool $tmp2993 = $tmp2992.value;
if ($tmp2993) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {100};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2990, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block2; else goto block4;
block2:;
// line 1335
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1338
org$frostlang$frostc$ASTNode* $tmp2998 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
org$frostlang$frostc$ASTNode* $tmp2999 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local0) = $tmp2998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
// line 1339
org$frostlang$frostc$ASTNode* $tmp3000 = *(&local0);
frost$core$Bit $tmp3001 = frost$core$Bit$init$builtin_bit($tmp3000 == NULL);
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block5; else goto block6;
block5:;
// line 1340
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3003 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1344
org$frostlang$frostc$parser$Token $tmp3004 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3004;
// line 1345
org$frostlang$frostc$parser$Token $tmp3005 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3006 = $tmp3005.kind;
frost$core$Int64 $tmp3007 = $tmp3006.$rawValue;
frost$core$Int64 $tmp3008 = (frost$core$Int64) {101};
frost$core$Bit $tmp3009 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3007, $tmp3008);
bool $tmp3010 = $tmp3009.value;
if ($tmp3010) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3011 = (frost$core$Int64) {100};
frost$core$Bit $tmp3012 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3007, $tmp3011);
bool $tmp3013 = $tmp3012.value;
if ($tmp3013) goto block8; else goto block10;
block8:;
// line 1347
org$frostlang$frostc$parser$Token $tmp3014 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp3014;
// line 1348
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1349
org$frostlang$frostc$parser$Token $tmp3015 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3016 = $tmp3015.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3017;
$tmp3017 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3017->value = $tmp3016;
frost$core$Int64 $tmp3018 = (frost$core$Int64) {106};
org$frostlang$frostc$parser$Token$Kind $tmp3019 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3018);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3020;
$tmp3020 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3020->value = $tmp3019;
ITable* $tmp3021 = ((frost$core$Equatable*) $tmp3017)->$class->itable;
while ($tmp3021->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3021 = $tmp3021->next;
}
$fn3023 $tmp3022 = $tmp3021->methods[1];
frost$core$Bit $tmp3024 = $tmp3022(((frost$core$Equatable*) $tmp3017), ((frost$core$Equatable*) $tmp3020));
bool $tmp3025 = $tmp3024.value;
if ($tmp3025) goto block13; else goto block14;
block13:;
org$frostlang$frostc$parser$Token $tmp3026 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3027 = $tmp3026.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3028;
$tmp3028 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3028->value = $tmp3027;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3030 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3029);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3031;
$tmp3031 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3031->value = $tmp3030;
ITable* $tmp3032 = ((frost$core$Equatable*) $tmp3028)->$class->itable;
while ($tmp3032->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3032 = $tmp3032->next;
}
$fn3034 $tmp3033 = $tmp3032->methods[1];
frost$core$Bit $tmp3035 = $tmp3033(((frost$core$Equatable*) $tmp3028), ((frost$core$Equatable*) $tmp3031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3031)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3028)));
*(&local5) = $tmp3035;
goto block15;
block14:;
*(&local5) = $tmp3024;
goto block15;
block15:;
frost$core$Bit $tmp3036 = *(&local5);
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block16; else goto block17;
block16:;
org$frostlang$frostc$parser$Token $tmp3038 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp3039 = $tmp3038.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3040;
$tmp3040 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3040->value = $tmp3039;
frost$core$Int64 $tmp3041 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3042 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3041);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3043;
$tmp3043 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3043->value = $tmp3042;
ITable* $tmp3044 = ((frost$core$Equatable*) $tmp3040)->$class->itable;
while ($tmp3044->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3044 = $tmp3044->next;
}
$fn3046 $tmp3045 = $tmp3044->methods[1];
frost$core$Bit $tmp3047 = $tmp3045(((frost$core$Equatable*) $tmp3040), ((frost$core$Equatable*) $tmp3043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3043)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3040)));
*(&local4) = $tmp3047;
goto block18;
block17:;
*(&local4) = $tmp3036;
goto block18;
block18:;
frost$core$Bit $tmp3048 = *(&local4);
bool $tmp3049 = $tmp3048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3020)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3017)));
if ($tmp3049) goto block11; else goto block19;
block11:;
// line 1351
org$frostlang$frostc$ASTNode* $tmp3050 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
org$frostlang$frostc$ASTNode* $tmp3051 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local3) = $tmp3050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
// line 1352
org$frostlang$frostc$ASTNode* $tmp3052 = *(&local3);
frost$core$Bit $tmp3053 = frost$core$Bit$init$builtin_bit($tmp3052 == NULL);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block20; else goto block21;
block20:;
// line 1353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3056 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
goto block12;
block19:;
// line 1
// line 1357
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3057 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block12:;
// line 1359
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1360
frost$core$Int64 $tmp3058 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$Kind $tmp3059 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3058);
org$frostlang$frostc$parser$Token$nullable $tmp3060 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3059);
frost$core$Bit $tmp3061 = frost$core$Bit$init$builtin_bit($tmp3060.nonnull);
bool $tmp3062 = $tmp3061.value;
if ($tmp3062) goto block22; else goto block24;
block22:;
// line 1361
org$frostlang$frostc$ASTNode* $tmp3063 = org$frostlang$frostc$parser$Parser$additiveExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
org$frostlang$frostc$ASTNode* $tmp3064 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
*(&local6) = $tmp3063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
// line 1362
org$frostlang$frostc$ASTNode* $tmp3065 = *(&local6);
frost$core$Bit $tmp3066 = frost$core$Bit$init$builtin_bit($tmp3065 == NULL);
bool $tmp3067 = $tmp3066.value;
if ($tmp3067) goto block25; else goto block26;
block25:;
// line 1363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3069 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3070 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1367
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3071 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 1369
org$frostlang$frostc$ASTNode* $tmp3072 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3073 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token $tmp3074 = *(&local1);
org$frostlang$frostc$Position $tmp3075 = $tmp3074.position;
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3077 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3078 = $tmp3077.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3079;
$tmp3079 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3079->value = $tmp3078;
frost$core$Int64 $tmp3080 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp3081 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3080);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3082;
$tmp3082 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3082->value = $tmp3081;
ITable* $tmp3083 = ((frost$core$Equatable*) $tmp3079)->$class->itable;
while ($tmp3083->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3083 = $tmp3083->next;
}
$fn3085 $tmp3084 = $tmp3083->methods[0];
frost$core$Bit $tmp3086 = $tmp3084(((frost$core$Equatable*) $tmp3079), ((frost$core$Equatable*) $tmp3082));
org$frostlang$frostc$ASTNode* $tmp3087 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp3088 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q($tmp3072, $tmp3073, $tmp3075, $tmp3076, $tmp3086, $tmp3087, $tmp3088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3082)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3079)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
org$frostlang$frostc$ASTNode* $tmp3089 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3090 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3091 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3072;
block10:;
// line 1373
org$frostlang$frostc$parser$Token $tmp3092 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3092);
// line 1374
org$frostlang$frostc$ASTNode* $tmp3093 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
org$frostlang$frostc$ASTNode* $tmp3094 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3093;
block7:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1384
org$frostlang$frostc$ASTNode* $tmp3095 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
org$frostlang$frostc$ASTNode* $tmp3096 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local0) = $tmp3095;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
// line 1385
org$frostlang$frostc$ASTNode* $tmp3097 = *(&local0);
frost$core$Bit $tmp3098 = frost$core$Bit$init$builtin_bit($tmp3097 == NULL);
bool $tmp3099 = $tmp3098.value;
if ($tmp3099) goto block1; else goto block2;
block1:;
// line 1386
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1388
goto block3;
block3:;
// line 1389
org$frostlang$frostc$parser$Token $tmp3101 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3101;
// line 1390
org$frostlang$frostc$parser$Token $tmp3102 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3103 = $tmp3102.kind;
frost$core$Int64 $tmp3104 = $tmp3103.$rawValue;
frost$core$Int64 $tmp3105 = (frost$core$Int64) {62};
frost$core$Bit $tmp3106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3105);
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3108 = (frost$core$Int64) {63};
frost$core$Bit $tmp3109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3108);
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3111 = (frost$core$Int64) {64};
frost$core$Bit $tmp3112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3111);
bool $tmp3113 = $tmp3112.value;
if ($tmp3113) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3114 = (frost$core$Int64) {65};
frost$core$Bit $tmp3115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3114);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3117 = (frost$core$Int64) {66};
frost$core$Bit $tmp3118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3117);
bool $tmp3119 = $tmp3118.value;
if ($tmp3119) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3120 = (frost$core$Int64) {67};
frost$core$Bit $tmp3121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3120);
bool $tmp3122 = $tmp3121.value;
if ($tmp3122) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3123 = (frost$core$Int64) {68};
frost$core$Bit $tmp3124 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3123);
bool $tmp3125 = $tmp3124.value;
if ($tmp3125) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {69};
frost$core$Bit $tmp3127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3104, $tmp3126);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block6; else goto block14;
block6:;
// line 1399
org$frostlang$frostc$ASTNode* $tmp3129 = org$frostlang$frostc$parser$Parser$rangeExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
org$frostlang$frostc$ASTNode* $tmp3130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
*(&local2) = $tmp3129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
// line 1400
org$frostlang$frostc$ASTNode* $tmp3131 = *(&local2);
frost$core$Bit $tmp3132 = frost$core$Bit$init$builtin_bit($tmp3131 == NULL);
bool $tmp3133 = $tmp3132.value;
if ($tmp3133) goto block15; else goto block16;
block15:;
// line 1401
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1403
org$frostlang$frostc$ASTNode* $tmp3136 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3137 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3138 = *(&local1);
org$frostlang$frostc$Position $tmp3139 = $tmp3138.position;
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3141 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3142 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3141);
org$frostlang$frostc$ASTNode* $tmp3143 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3136, $tmp3137, $tmp3139, $tmp3140, $tmp3142, $tmp3143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
org$frostlang$frostc$ASTNode* $tmp3144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
*(&local0) = $tmp3136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
org$frostlang$frostc$ASTNode* $tmp3145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1407
org$frostlang$frostc$parser$Token $tmp3146 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3146);
// line 1408
org$frostlang$frostc$ASTNode* $tmp3147 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
org$frostlang$frostc$ASTNode* $tmp3148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3147;
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
org$frostlang$frostc$ASTNode* $tmp3149 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
org$frostlang$frostc$ASTNode* $tmp3150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
*(&local0) = $tmp3149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
// line 1419
org$frostlang$frostc$ASTNode* $tmp3151 = *(&local0);
frost$core$Bit $tmp3152 = frost$core$Bit$init$builtin_bit($tmp3151 == NULL);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block1; else goto block2;
block1:;
// line 1420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1422
goto block3;
block3:;
// line 1423
org$frostlang$frostc$parser$Token $tmp3155 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3155;
// line 1424
org$frostlang$frostc$parser$Token $tmp3156 = *(&local1);
org$frostlang$frostc$parser$Token$Kind $tmp3157 = $tmp3156.kind;
frost$core$Int64 $tmp3158 = $tmp3157.$rawValue;
frost$core$Int64 $tmp3159 = (frost$core$Int64) {70};
frost$core$Bit $tmp3160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3158, $tmp3159);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3162 = (frost$core$Int64) {74};
frost$core$Bit $tmp3163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3158, $tmp3162);
bool $tmp3164 = $tmp3163.value;
if ($tmp3164) goto block6; else goto block8;
block6:;
// line 1426
org$frostlang$frostc$ASTNode* $tmp3165 = org$frostlang$frostc$parser$Parser$comparisonExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
org$frostlang$frostc$ASTNode* $tmp3166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local2) = $tmp3165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// line 1427
org$frostlang$frostc$ASTNode* $tmp3167 = *(&local2);
frost$core$Bit $tmp3168 = frost$core$Bit$init$builtin_bit($tmp3167 == NULL);
bool $tmp3169 = $tmp3168.value;
if ($tmp3169) goto block9; else goto block10;
block9:;
// line 1428
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1430
org$frostlang$frostc$ASTNode* $tmp3172 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3173 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token $tmp3174 = *(&local1);
org$frostlang$frostc$Position $tmp3175 = $tmp3174.position;
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3177 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3178 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3177);
org$frostlang$frostc$ASTNode* $tmp3179 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3172, $tmp3173, $tmp3175, $tmp3176, $tmp3178, $tmp3179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
org$frostlang$frostc$ASTNode* $tmp3180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
*(&local0) = $tmp3172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1434
org$frostlang$frostc$parser$Token $tmp3182 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp3182);
// line 1435
org$frostlang$frostc$ASTNode* $tmp3183 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
org$frostlang$frostc$ASTNode* $tmp3184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3183;
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
org$frostlang$frostc$ASTNode* $tmp3185 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
org$frostlang$frostc$ASTNode* $tmp3186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local0) = $tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
// line 1446
org$frostlang$frostc$ASTNode* $tmp3187 = *(&local0);
frost$core$Bit $tmp3188 = frost$core$Bit$init$builtin_bit($tmp3187 == NULL);
bool $tmp3189 = $tmp3188.value;
if ($tmp3189) goto block1; else goto block2;
block1:;
// line 1447
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1449
goto block3;
block3:;
// line 1450
frost$core$Int64 $tmp3191 = (frost$core$Int64) {72};
org$frostlang$frostc$parser$Token$Kind $tmp3192 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3191);
org$frostlang$frostc$parser$Token$nullable $tmp3193 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3192);
*(&local1) = $tmp3193;
// line 1451
org$frostlang$frostc$parser$Token$nullable $tmp3194 = *(&local1);
frost$core$Bit $tmp3195 = frost$core$Bit$init$builtin_bit(!$tmp3194.nonnull);
bool $tmp3196 = $tmp3195.value;
if ($tmp3196) goto block5; else goto block6;
block5:;
// line 1452
goto block4;
block6:;
// line 1454
org$frostlang$frostc$ASTNode* $tmp3197 = org$frostlang$frostc$parser$Parser$andExpression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
org$frostlang$frostc$ASTNode* $tmp3198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
*(&local2) = $tmp3197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
// line 1455
org$frostlang$frostc$ASTNode* $tmp3199 = *(&local2);
frost$core$Bit $tmp3200 = frost$core$Bit$init$builtin_bit($tmp3199 == NULL);
bool $tmp3201 = $tmp3200.value;
if ($tmp3201) goto block7; else goto block8;
block7:;
// line 1456
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1458
org$frostlang$frostc$ASTNode* $tmp3204 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3205 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$Token$nullable $tmp3206 = *(&local1);
org$frostlang$frostc$Position $tmp3207 = ((org$frostlang$frostc$parser$Token) $tmp3206.value).position;
org$frostlang$frostc$ASTNode* $tmp3208 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp3209 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3210 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$parser$Token) $tmp3209.value));
org$frostlang$frostc$ASTNode* $tmp3211 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3204, $tmp3205, $tmp3207, $tmp3208, $tmp3210, $tmp3211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
org$frostlang$frostc$ASTNode* $tmp3212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local0) = $tmp3204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
org$frostlang$frostc$ASTNode* $tmp3213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1460
org$frostlang$frostc$ASTNode* $tmp3214 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlang$frostc$ASTNode* $tmp3215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3214;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1467
frost$core$Int64 $tmp3216 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3217 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3216);
org$frostlang$frostc$parser$Token$nullable $tmp3218 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3217, &$s3219);
*(&local0) = $tmp3218;
// line 1468
org$frostlang$frostc$parser$Token$nullable $tmp3220 = *(&local0);
frost$core$Bit $tmp3221 = frost$core$Bit$init$builtin_bit(!$tmp3220.nonnull);
bool $tmp3222 = $tmp3221.value;
if ($tmp3222) goto block1; else goto block2;
block1:;
// line 1469
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1471
org$frostlang$frostc$ASTNode* $tmp3223 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
org$frostlang$frostc$ASTNode* $tmp3224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
*(&local1) = $tmp3223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
// line 1472
org$frostlang$frostc$ASTNode* $tmp3225 = *(&local1);
frost$core$Bit $tmp3226 = frost$core$Bit$init$builtin_bit($tmp3225 == NULL);
bool $tmp3227 = $tmp3226.value;
if ($tmp3227) goto block3; else goto block4;
block3:;
// line 1473
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1475
org$frostlang$frostc$FixedArray* $tmp3229 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
org$frostlang$frostc$FixedArray* $tmp3230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
*(&local2) = $tmp3229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
// line 1476
org$frostlang$frostc$FixedArray* $tmp3231 = *(&local2);
frost$core$Bit $tmp3232 = frost$core$Bit$init$builtin_bit($tmp3231 == NULL);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block5; else goto block6;
block5:;
// line 1477
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1479
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1480
frost$core$Int64 $tmp3236 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$Kind $tmp3237 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3236);
org$frostlang$frostc$parser$Token$nullable $tmp3238 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3237);
frost$core$Bit $tmp3239 = frost$core$Bit$init$builtin_bit($tmp3238.nonnull);
bool $tmp3240 = $tmp3239.value;
if ($tmp3240) goto block7; else goto block9;
block7:;
// line 1481
org$frostlang$frostc$parser$Token $tmp3241 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3242 = $tmp3241.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3243;
$tmp3243 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3243->value = $tmp3242;
frost$core$Int64 $tmp3244 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp3245 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3244);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3246;
$tmp3246 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3246->value = $tmp3245;
ITable* $tmp3247 = ((frost$core$Equatable*) $tmp3243)->$class->itable;
while ($tmp3247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3247 = $tmp3247->next;
}
$fn3249 $tmp3248 = $tmp3247->methods[0];
frost$core$Bit $tmp3250 = $tmp3248(((frost$core$Equatable*) $tmp3243), ((frost$core$Equatable*) $tmp3246));
bool $tmp3251 = $tmp3250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3243)));
if ($tmp3251) goto block10; else goto block12;
block10:;
// line 1482
org$frostlang$frostc$ASTNode* $tmp3252 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$ASTNode* $tmp3253 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local3) = $tmp3252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
// line 1483
org$frostlang$frostc$ASTNode* $tmp3254 = *(&local3);
frost$core$Bit $tmp3255 = frost$core$Bit$init$builtin_bit($tmp3254 == NULL);
bool $tmp3256 = $tmp3255.value;
if ($tmp3256) goto block13; else goto block14;
block13:;
// line 1484
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
block14:;
goto block11;
block12:;
// line 1
// line 1488
org$frostlang$frostc$ASTNode* $tmp3260 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
org$frostlang$frostc$ASTNode* $tmp3261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
*(&local3) = $tmp3260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
// line 1489
org$frostlang$frostc$ASTNode* $tmp3262 = *(&local3);
frost$core$Bit $tmp3263 = frost$core$Bit$init$builtin_bit($tmp3262 == NULL);
bool $tmp3264 = $tmp3263.value;
if ($tmp3264) goto block15; else goto block16;
block15:;
// line 1490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
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
org$frostlang$frostc$ASTNode* $tmp3268 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1497
org$frostlang$frostc$ASTNode* $tmp3269 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3270 = (frost$core$Int64) {24};
org$frostlang$frostc$parser$Token$nullable $tmp3271 = *(&local0);
org$frostlang$frostc$Position $tmp3272 = ((org$frostlang$frostc$parser$Token) $tmp3271.value).position;
org$frostlang$frostc$ASTNode* $tmp3273 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3274 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3275 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q($tmp3269, $tmp3270, $tmp3272, $tmp3273, $tmp3274, $tmp3275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
org$frostlang$frostc$ASTNode* $tmp3276 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3277 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3278));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3269;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1504
frost$core$Int64 $tmp3279 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3280 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3279);
org$frostlang$frostc$parser$Token$nullable $tmp3281 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3280, &$s3282);
frost$core$Bit $tmp3283 = frost$core$Bit$init$builtin_bit(!$tmp3281.nonnull);
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block1; else goto block2;
block1:;
// line 1505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1507
frost$core$Bit $tmp3285 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$ASTNode* $tmp3286 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp3285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
return $tmp3286;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1514
frost$core$Int64 $tmp3287 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp3288 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3287);
org$frostlang$frostc$parser$Token$nullable $tmp3289 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3288, &$s3290);
*(&local0) = $tmp3289;
// line 1515
org$frostlang$frostc$parser$Token$nullable $tmp3291 = *(&local0);
frost$core$Bit $tmp3292 = frost$core$Bit$init$builtin_bit(!$tmp3291.nonnull);
bool $tmp3293 = $tmp3292.value;
if ($tmp3293) goto block1; else goto block2;
block1:;
// line 1516
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1518
org$frostlang$frostc$parser$Token $tmp3294 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3295 = $tmp3294.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3296;
$tmp3296 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3296->value = $tmp3295;
frost$core$Int64 $tmp3297 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp3298 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3297);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3299;
$tmp3299 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3299->value = $tmp3298;
ITable* $tmp3300 = ((frost$core$Equatable*) $tmp3296)->$class->itable;
while ($tmp3300->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3300 = $tmp3300->next;
}
$fn3302 $tmp3301 = $tmp3300->methods[0];
frost$core$Bit $tmp3303 = $tmp3301(((frost$core$Equatable*) $tmp3296), ((frost$core$Equatable*) $tmp3299));
bool $tmp3304 = $tmp3303.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3299)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3296)));
if ($tmp3304) goto block3; else goto block4;
block3:;
// line 1519
org$frostlang$frostc$ASTNode* $tmp3305 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
org$frostlang$frostc$ASTNode* $tmp3306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local1) = $tmp3305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
// line 1520
org$frostlang$frostc$ASTNode* $tmp3307 = *(&local1);
frost$core$Bit $tmp3308 = frost$core$Bit$init$builtin_bit($tmp3307 == NULL);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block5; else goto block6;
block5:;
// line 1521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1523
org$frostlang$frostc$ASTNode* $tmp3311 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3312 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp3313 = *(&local0);
org$frostlang$frostc$Position $tmp3314 = ((org$frostlang$frostc$parser$Token) $tmp3313.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3315 = *(&local0);
frost$core$String* $tmp3316 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3315.value));
org$frostlang$frostc$ASTNode* $tmp3317 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp3311, $tmp3312, $tmp3314, $tmp3316, $tmp3317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
org$frostlang$frostc$ASTNode* $tmp3318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3311;
block4:;
// line 1525
org$frostlang$frostc$ASTNode* $tmp3319 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3320 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3321 = *(&local0);
org$frostlang$frostc$Position $tmp3322 = ((org$frostlang$frostc$parser$Token) $tmp3321.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3323 = *(&local0);
frost$core$String* $tmp3324 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3323.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3319, $tmp3320, $tmp3322, $tmp3324);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
return $tmp3319;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
// line 1532
frost$core$Int64 $tmp3325 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$Kind $tmp3326 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3325);
org$frostlang$frostc$parser$Token$nullable $tmp3327 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3326, &$s3328);
*(&local0) = $tmp3327;
// line 1533
org$frostlang$frostc$parser$Token$nullable $tmp3329 = *(&local0);
frost$core$Bit $tmp3330 = frost$core$Bit$init$builtin_bit(!$tmp3329.nonnull);
bool $tmp3331 = $tmp3330.value;
if ($tmp3331) goto block1; else goto block2;
block1:;
// line 1534
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1536
org$frostlang$frostc$ASTNode* $tmp3332 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
org$frostlang$frostc$ASTNode* $tmp3333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local1) = $tmp3332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
// line 1537
org$frostlang$frostc$ASTNode* $tmp3334 = *(&local1);
frost$core$Bit $tmp3335 = frost$core$Bit$init$builtin_bit($tmp3334 == NULL);
bool $tmp3336 = $tmp3335.value;
if ($tmp3336) goto block3; else goto block4;
block3:;
// line 1538
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1540
frost$core$Int64 $tmp3338 = (frost$core$Int64) {35};
org$frostlang$frostc$parser$Token$Kind $tmp3339 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3338);
org$frostlang$frostc$parser$Token$nullable $tmp3340 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3339, &$s3341);
frost$core$Bit $tmp3342 = frost$core$Bit$init$builtin_bit(!$tmp3340.nonnull);
bool $tmp3343 = $tmp3342.value;
if ($tmp3343) goto block5; else goto block6;
block5:;
// line 1541
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1543
org$frostlang$frostc$ASTNode* $tmp3345 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
org$frostlang$frostc$ASTNode* $tmp3346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
*(&local2) = $tmp3345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
// line 1544
org$frostlang$frostc$ASTNode* $tmp3347 = *(&local2);
frost$core$Bit $tmp3348 = frost$core$Bit$init$builtin_bit($tmp3347 == NULL);
bool $tmp3349 = $tmp3348.value;
if ($tmp3349) goto block7; else goto block8;
block7:;
// line 1545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3350 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1547
org$frostlang$frostc$FixedArray* $tmp3352 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
org$frostlang$frostc$FixedArray* $tmp3353 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local3) = $tmp3352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
// line 1548
org$frostlang$frostc$FixedArray* $tmp3354 = *(&local3);
frost$core$Bit $tmp3355 = frost$core$Bit$init$builtin_bit($tmp3354 == NULL);
bool $tmp3356 = $tmp3355.value;
if ($tmp3356) goto block9; else goto block10;
block9:;
// line 1549
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 1551
org$frostlang$frostc$ASTNode* $tmp3360 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3361 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$nullable $tmp3362 = *(&local0);
org$frostlang$frostc$Position $tmp3363 = ((org$frostlang$frostc$parser$Token) $tmp3362.value).position;
org$frostlang$frostc$ASTNode* $tmp3364 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3365 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3366 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3360, $tmp3361, $tmp3363, param1, $tmp3364, $tmp3365, $tmp3366);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
org$frostlang$frostc$FixedArray* $tmp3367 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3368 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3360;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 1558
frost$core$Int64 $tmp3370 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3371 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3370);
org$frostlang$frostc$parser$Token$nullable $tmp3372 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3371, &$s3373);
*(&local0) = $tmp3372;
// line 1559
org$frostlang$frostc$parser$Token$nullable $tmp3374 = *(&local0);
frost$core$Bit $tmp3375 = frost$core$Bit$init$builtin_bit(!$tmp3374.nonnull);
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block1; else goto block2;
block1:;
// line 1560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1562
org$frostlang$frostc$ASTNode* $tmp3377 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
org$frostlang$frostc$ASTNode* $tmp3378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
*(&local1) = $tmp3377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
// line 1563
org$frostlang$frostc$ASTNode* $tmp3379 = *(&local1);
frost$core$Bit $tmp3380 = frost$core$Bit$init$builtin_bit($tmp3379 == NULL);
bool $tmp3381 = $tmp3380.value;
if ($tmp3381) goto block3; else goto block4;
block3:;
// line 1564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1566
org$frostlang$frostc$FixedArray* $tmp3383 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
org$frostlang$frostc$FixedArray* $tmp3384 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
*(&local2) = $tmp3383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
// line 1567
org$frostlang$frostc$FixedArray* $tmp3385 = *(&local2);
frost$core$Bit $tmp3386 = frost$core$Bit$init$builtin_bit($tmp3385 == NULL);
bool $tmp3387 = $tmp3386.value;
if ($tmp3387) goto block5; else goto block6;
block5:;
// line 1568
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1570
org$frostlang$frostc$ASTNode* $tmp3390 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3391 = (frost$core$Int64) {54};
org$frostlang$frostc$parser$Token$nullable $tmp3392 = *(&local0);
org$frostlang$frostc$Position $tmp3393 = ((org$frostlang$frostc$parser$Token) $tmp3392.value).position;
org$frostlang$frostc$ASTNode* $tmp3394 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3395 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3390, $tmp3391, $tmp3393, param1, $tmp3394, $tmp3395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
org$frostlang$frostc$FixedArray* $tmp3396 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3397 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3390;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1577
frost$core$Int64 $tmp3398 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp3399 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3398);
org$frostlang$frostc$parser$Token$nullable $tmp3400 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3399, &$s3401);
*(&local0) = $tmp3400;
// line 1578
org$frostlang$frostc$parser$Token$nullable $tmp3402 = *(&local0);
frost$core$Bit $tmp3403 = frost$core$Bit$init$builtin_bit(!$tmp3402.nonnull);
bool $tmp3404 = $tmp3403.value;
if ($tmp3404) goto block1; else goto block2;
block1:;
// line 1579
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1581
org$frostlang$frostc$FixedArray* $tmp3405 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
org$frostlang$frostc$FixedArray* $tmp3406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
*(&local1) = $tmp3405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
// line 1582
org$frostlang$frostc$FixedArray* $tmp3407 = *(&local1);
frost$core$Bit $tmp3408 = frost$core$Bit$init$builtin_bit($tmp3407 == NULL);
bool $tmp3409 = $tmp3408.value;
if ($tmp3409) goto block3; else goto block4;
block3:;
// line 1583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1585
frost$core$Int64 $tmp3411 = (frost$core$Int64) {32};
org$frostlang$frostc$parser$Token$Kind $tmp3412 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3411);
org$frostlang$frostc$parser$Token$nullable $tmp3413 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3412, &$s3414);
frost$core$Bit $tmp3415 = frost$core$Bit$init$builtin_bit(!$tmp3413.nonnull);
bool $tmp3416 = $tmp3415.value;
if ($tmp3416) goto block5; else goto block6;
block5:;
// line 1586
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1588
org$frostlang$frostc$ASTNode* $tmp3418 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
org$frostlang$frostc$ASTNode* $tmp3419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local2) = $tmp3418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
// line 1589
org$frostlang$frostc$ASTNode* $tmp3420 = *(&local2);
frost$core$Bit $tmp3421 = frost$core$Bit$init$builtin_bit($tmp3420 == NULL);
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block7; else goto block8;
block7:;
// line 1590
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1592
org$frostlang$frostc$ASTNode* $tmp3425 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3426 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$nullable $tmp3427 = *(&local0);
org$frostlang$frostc$Position $tmp3428 = ((org$frostlang$frostc$parser$Token) $tmp3427.value).position;
org$frostlang$frostc$FixedArray* $tmp3429 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3430 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp3425, $tmp3426, $tmp3428, param1, $tmp3429, $tmp3430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
org$frostlang$frostc$ASTNode* $tmp3431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3432 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3425;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
// line 1599
frost$core$Int64 $tmp3433 = (frost$core$Int64) {36};
org$frostlang$frostc$parser$Token$Kind $tmp3434 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3433);
org$frostlang$frostc$parser$Token$nullable $tmp3435 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3434, &$s3436);
*(&local0) = $tmp3435;
// line 1600
org$frostlang$frostc$parser$Token$nullable $tmp3437 = *(&local0);
frost$core$Bit $tmp3438 = frost$core$Bit$init$builtin_bit(!$tmp3437.nonnull);
bool $tmp3439 = $tmp3438.value;
if ($tmp3439) goto block1; else goto block2;
block1:;
// line 1601
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1603
org$frostlang$frostc$FixedArray* $tmp3440 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
org$frostlang$frostc$FixedArray* $tmp3441 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3441));
*(&local1) = $tmp3440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
// line 1604
org$frostlang$frostc$FixedArray* $tmp3442 = *(&local1);
frost$core$Bit $tmp3443 = frost$core$Bit$init$builtin_bit($tmp3442 == NULL);
bool $tmp3444 = $tmp3443.value;
if ($tmp3444) goto block3; else goto block4;
block3:;
// line 1605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1607
org$frostlang$frostc$ASTNode* $tmp3446 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3447 = (frost$core$Int64) {27};
org$frostlang$frostc$parser$Token$nullable $tmp3448 = *(&local0);
org$frostlang$frostc$Position $tmp3449 = ((org$frostlang$frostc$parser$Token) $tmp3448.value).position;
org$frostlang$frostc$FixedArray* $tmp3450 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3446, $tmp3447, $tmp3449, param1, $tmp3450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
org$frostlang$frostc$FixedArray* $tmp3451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3446;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1614
frost$core$Int64 $tmp3452 = (frost$core$Int64) {45};
org$frostlang$frostc$parser$Token$Kind $tmp3453 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3452);
org$frostlang$frostc$parser$Token$nullable $tmp3454 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3453, &$s3455);
*(&local0) = $tmp3454;
// line 1615
org$frostlang$frostc$parser$Token$nullable $tmp3456 = *(&local0);
frost$core$Bit $tmp3457 = frost$core$Bit$init$builtin_bit(!$tmp3456.nonnull);
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block1; else goto block2;
block1:;
// line 1616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1618
org$frostlang$frostc$ASTNode* $tmp3459 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
org$frostlang$frostc$ASTNode* $tmp3460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
*(&local1) = $tmp3459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
// line 1619
org$frostlang$frostc$ASTNode* $tmp3461 = *(&local1);
frost$core$Bit $tmp3462 = frost$core$Bit$init$builtin_bit($tmp3461 == NULL);
bool $tmp3463 = $tmp3462.value;
if ($tmp3463) goto block3; else goto block4;
block3:;
// line 1620
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1622
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1623
frost$core$Int64 $tmp3465 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3466 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3465);
org$frostlang$frostc$parser$Token$nullable $tmp3467 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3466);
frost$core$Bit $tmp3468 = frost$core$Bit$init$builtin_bit($tmp3467.nonnull);
bool $tmp3469 = $tmp3468.value;
if ($tmp3469) goto block5; else goto block7;
block5:;
// line 1624
org$frostlang$frostc$ASTNode* $tmp3470 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
org$frostlang$frostc$ASTNode* $tmp3471 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
*(&local2) = $tmp3470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
// line 1625
org$frostlang$frostc$ASTNode* $tmp3472 = *(&local2);
frost$core$Bit $tmp3473 = frost$core$Bit$init$builtin_bit($tmp3472 == NULL);
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block8; else goto block9;
block8:;
// line 1626
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1630
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3477 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1632
org$frostlang$frostc$ASTNode* $tmp3478 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3479 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$Token$nullable $tmp3480 = *(&local0);
org$frostlang$frostc$Position $tmp3481 = ((org$frostlang$frostc$parser$Token) $tmp3480.value).position;
org$frostlang$frostc$ASTNode* $tmp3482 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3483 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3478, $tmp3479, $tmp3481, $tmp3482, $tmp3483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
org$frostlang$frostc$ASTNode* $tmp3484 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3485 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3478;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1639
frost$core$Int64 $tmp3486 = (frost$core$Int64) {46};
org$frostlang$frostc$parser$Token$Kind $tmp3487 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3486);
org$frostlang$frostc$parser$Token$nullable $tmp3488 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3487, &$s3489);
*(&local0) = $tmp3488;
// line 1640
org$frostlang$frostc$parser$Token$nullable $tmp3490 = *(&local0);
frost$core$Bit $tmp3491 = frost$core$Bit$init$builtin_bit(!$tmp3490.nonnull);
bool $tmp3492 = $tmp3491.value;
if ($tmp3492) goto block1; else goto block2;
block1:;
// line 1641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1643
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1644
frost$core$Int64 $tmp3493 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3494 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3493);
org$frostlang$frostc$parser$Token$nullable $tmp3495 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3494);
frost$core$Bit $tmp3496 = frost$core$Bit$init$builtin_bit($tmp3495.nonnull);
bool $tmp3497 = $tmp3496.value;
if ($tmp3497) goto block3; else goto block5;
block3:;
// line 1645
org$frostlang$frostc$ASTNode* $tmp3498 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
org$frostlang$frostc$ASTNode* $tmp3499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local1) = $tmp3498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
// line 1646
org$frostlang$frostc$ASTNode* $tmp3500 = *(&local1);
frost$core$Bit $tmp3501 = frost$core$Bit$init$builtin_bit($tmp3500 == NULL);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block6; else goto block7;
block6:;
// line 1647
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1
// line 1651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3504));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 1653
org$frostlang$frostc$ASTNode* $tmp3505 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3506 = (frost$core$Int64) {49};
org$frostlang$frostc$parser$Token$nullable $tmp3507 = *(&local0);
org$frostlang$frostc$Position $tmp3508 = ((org$frostlang$frostc$parser$Token) $tmp3507.value).position;
org$frostlang$frostc$ASTNode* $tmp3509 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp3505, $tmp3506, $tmp3508, $tmp3509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
org$frostlang$frostc$ASTNode* $tmp3510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3505;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
frost$core$Bit* $tmp3511 = &param0->allowLambdas;
frost$core$Bit $tmp3512 = *$tmp3511;
bool $tmp3513 = $tmp3512.value;
if ($tmp3513) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3514 = (frost$core$Int64) {1661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3515, $tmp3514, &$s3516);
abort(); // unreachable
block1:;
// line 1662
frost$core$Int64 $tmp3517 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$Kind $tmp3518 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3517);
org$frostlang$frostc$parser$Token$nullable $tmp3519 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3518, &$s3520);
*(&local1) = $tmp3519;
// line 1663
org$frostlang$frostc$parser$Token$nullable $tmp3521 = *(&local1);
frost$core$Bit $tmp3522 = frost$core$Bit$init$builtin_bit(!$tmp3521.nonnull);
bool $tmp3523 = $tmp3522.value;
if ($tmp3523) goto block6; else goto block7;
block6:;
// line 1664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block7:;
// line 1666
frost$collections$Array* $tmp3524 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3524);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
frost$collections$Array* $tmp3525 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local2) = $tmp3524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
// line 1667
org$frostlang$frostc$ASTNode* $tmp3526 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
org$frostlang$frostc$ASTNode* $tmp3527 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
*(&local3) = $tmp3526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
// line 1668
org$frostlang$frostc$ASTNode* $tmp3528 = *(&local3);
frost$core$Bit $tmp3529 = frost$core$Bit$init$builtin_bit($tmp3528 == NULL);
bool $tmp3530 = $tmp3529.value;
if ($tmp3530) goto block8; else goto block9;
block8:;
// line 1669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3531 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3532 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block9:;
// line 1671
frost$collections$Array* $tmp3533 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3534 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3533, ((frost$core$Object*) $tmp3534));
// line 1672
goto block10;
block10:;
frost$core$Int64 $tmp3535 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3536 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3535);
org$frostlang$frostc$parser$Token$nullable $tmp3537 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3536);
frost$core$Bit $tmp3538 = frost$core$Bit$init$builtin_bit($tmp3537.nonnull);
bool $tmp3539 = $tmp3538.value;
if ($tmp3539) goto block11; else goto block12;
block11:;
// line 1673
org$frostlang$frostc$ASTNode* $tmp3540 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
org$frostlang$frostc$ASTNode* $tmp3541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
*(&local3) = $tmp3540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
// line 1674
org$frostlang$frostc$ASTNode* $tmp3542 = *(&local3);
frost$core$Bit $tmp3543 = frost$core$Bit$init$builtin_bit($tmp3542 == NULL);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block13; else goto block14;
block13:;
// line 1675
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3545 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3546 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block14:;
// line 1677
frost$collections$Array* $tmp3547 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3548 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3547, ((frost$core$Object*) $tmp3548));
goto block10;
block12:;
// line 1679
org$frostlang$frostc$FixedArray* $tmp3549 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
org$frostlang$frostc$FixedArray* $tmp3550 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
*(&local4) = $tmp3549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
// line 1680
org$frostlang$frostc$FixedArray* $tmp3551 = *(&local4);
frost$core$Bit $tmp3552 = frost$core$Bit$init$builtin_bit($tmp3551 == NULL);
bool $tmp3553 = $tmp3552.value;
if ($tmp3553) goto block15; else goto block16;
block15:;
// line 1681
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3554 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3555 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3556 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block16:;
// line 1683
org$frostlang$frostc$ASTNode* $tmp3557 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3558 = (frost$core$Int64) {53};
org$frostlang$frostc$parser$Token$nullable $tmp3559 = *(&local1);
org$frostlang$frostc$Position $tmp3560 = ((org$frostlang$frostc$parser$Token) $tmp3559.value).position;
frost$collections$Array* $tmp3561 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3562 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3561);
org$frostlang$frostc$FixedArray* $tmp3563 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3557, $tmp3558, $tmp3560, $tmp3562, $tmp3563);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
org$frostlang$frostc$FixedArray* $tmp3564 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3565 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3566 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
*(&local2) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp3557;
goto block3;
block3:;
frost$core$Bit* $tmp3567 = &param0->allowLambdas;
frost$core$Bit $tmp3568 = *$tmp3567;
bool $tmp3569 = $tmp3568.value;
if ($tmp3569) goto block4; else goto block5;
block4:;
org$frostlang$frostc$ASTNode* $tmp3570 = *(&local0);
return $tmp3570;
block5:;
frost$core$Int64 $tmp3571 = (frost$core$Int64) {1661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3572, $tmp3571, &$s3573);
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
frost$core$Int64 $tmp3574 = (frost$core$Int64) {39};
org$frostlang$frostc$parser$Token$Kind $tmp3575 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3574);
org$frostlang$frostc$parser$Token$nullable $tmp3576 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3575, &$s3577);
*(&local0) = $tmp3576;
// line 1691
org$frostlang$frostc$parser$Token$nullable $tmp3578 = *(&local0);
frost$core$Bit $tmp3579 = frost$core$Bit$init$builtin_bit(!$tmp3578.nonnull);
bool $tmp3580 = $tmp3579.value;
if ($tmp3580) goto block1; else goto block2;
block1:;
// line 1692
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1694
org$frostlang$frostc$ASTNode* $tmp3581 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
org$frostlang$frostc$ASTNode* $tmp3582 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
*(&local1) = $tmp3581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
// line 1695
org$frostlang$frostc$ASTNode* $tmp3583 = *(&local1);
frost$core$Bit $tmp3584 = frost$core$Bit$init$builtin_bit($tmp3583 == NULL);
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block3; else goto block4;
block3:;
// line 1696
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1698
frost$core$Int64 $tmp3587 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3588 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3587);
org$frostlang$frostc$parser$Token$nullable $tmp3589 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3588, &$s3590);
frost$core$Bit $tmp3591 = frost$core$Bit$init$builtin_bit(!$tmp3589.nonnull);
bool $tmp3592 = $tmp3591.value;
if ($tmp3592) goto block5; else goto block6;
block5:;
// line 1699
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 1701
frost$collections$Array* $tmp3594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3594);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
frost$collections$Array* $tmp3595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
*(&local2) = $tmp3594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
// line 1702
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3596 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 1703
goto block7;
block7:;
// line 1704
org$frostlang$frostc$parser$Token $tmp3597 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local4) = $tmp3597;
// line 1705
org$frostlang$frostc$parser$Token $tmp3598 = *(&local4);
org$frostlang$frostc$parser$Token$Kind $tmp3599 = $tmp3598.kind;
frost$core$Int64 $tmp3600 = $tmp3599.$rawValue;
frost$core$Int64 $tmp3601 = (frost$core$Int64) {104};
frost$core$Bit $tmp3602 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3600, $tmp3601);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block10; else goto block11;
block10:;
// line 1707
goto block8;
block11:;
frost$core$Int64 $tmp3604 = (frost$core$Int64) {40};
frost$core$Bit $tmp3605 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3600, $tmp3604);
bool $tmp3606 = $tmp3605.value;
if ($tmp3606) goto block12; else goto block13;
block12:;
// line 1710
org$frostlang$frostc$ASTNode* $tmp3607 = org$frostlang$frostc$parser$Parser$whenClause$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
org$frostlang$frostc$ASTNode* $tmp3608 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
*(&local5) = $tmp3607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
// line 1711
org$frostlang$frostc$ASTNode* $tmp3609 = *(&local5);
frost$core$Bit $tmp3610 = frost$core$Bit$init$builtin_bit($tmp3609 == NULL);
bool $tmp3611 = $tmp3610.value;
if ($tmp3611) goto block14; else goto block15;
block14:;
// line 1712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3613 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3614 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 1714
frost$collections$Array* $tmp3616 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3617 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3616, ((frost$core$Object*) $tmp3617));
org$frostlang$frostc$ASTNode* $tmp3618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3619 = (frost$core$Int64) {41};
frost$core$Bit $tmp3620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3600, $tmp3619);
bool $tmp3621 = $tmp3620.value;
if ($tmp3621) goto block16; else goto block17;
block16:;
// line 1717
org$frostlang$frostc$parser$Token $tmp3622 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local6) = $tmp3622;
// line 1718
org$frostlang$frostc$FixedArray* $tmp3623 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
org$frostlang$frostc$FixedArray* $tmp3624 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
*(&local3) = $tmp3623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
// line 1719
org$frostlang$frostc$FixedArray* $tmp3625 = *(&local3);
frost$core$Bit $tmp3626 = frost$core$Bit$init$builtin_bit($tmp3625 == NULL);
bool $tmp3627 = $tmp3626.value;
if ($tmp3627) goto block18; else goto block19;
block18:;
// line 1720
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3628 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3629 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3630 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block19:;
// line 1722
goto block8;
block17:;
// line 1725
org$frostlang$frostc$parser$Token $tmp3631 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1726
org$frostlang$frostc$parser$Token $tmp3632 = *(&local4);
org$frostlang$frostc$parser$Token $tmp3633 = *(&local4);
frost$core$String* $tmp3634 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp3633);
frost$core$String* $tmp3635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3636, $tmp3634);
frost$core$String* $tmp3637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3635, &$s3638);
frost$core$String* $tmp3639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3640, $tmp3637);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3632, $tmp3639);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
// line 1728
goto block8;
block9:;
goto block7;
block8:;
// line 1732
frost$core$Int64 $tmp3641 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3642 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3641);
org$frostlang$frostc$parser$Token$nullable $tmp3643 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3642, &$s3644);
frost$core$Bit $tmp3645 = frost$core$Bit$init$builtin_bit(!$tmp3643.nonnull);
bool $tmp3646 = $tmp3645.value;
if ($tmp3646) goto block20; else goto block21;
block20:;
// line 1733
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3647 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3648 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 1735
org$frostlang$frostc$FixedArray* $tmp3650 = *(&local3);
frost$core$Bit $tmp3651 = frost$core$Bit$init$builtin_bit($tmp3650 != NULL);
bool $tmp3652 = $tmp3651.value;
if ($tmp3652) goto block22; else goto block23;
block22:;
// line 1736
org$frostlang$frostc$ASTNode* $tmp3653 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3654 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3655 = *(&local0);
org$frostlang$frostc$Position $tmp3656 = ((org$frostlang$frostc$parser$Token) $tmp3655.value).position;
org$frostlang$frostc$ASTNode* $tmp3657 = *(&local1);
frost$collections$Array* $tmp3658 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3659 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3658);
org$frostlang$frostc$FixedArray* $tmp3660 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3653, $tmp3654, $tmp3656, $tmp3657, $tmp3659, $tmp3660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
org$frostlang$frostc$FixedArray* $tmp3661 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3662 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3663 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3653;
block23:;
// line 1738
org$frostlang$frostc$ASTNode* $tmp3664 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3665 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$nullable $tmp3666 = *(&local0);
org$frostlang$frostc$Position $tmp3667 = ((org$frostlang$frostc$parser$Token) $tmp3666.value).position;
org$frostlang$frostc$ASTNode* $tmp3668 = *(&local1);
frost$collections$Array* $tmp3669 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3670 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3669);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3664, $tmp3665, $tmp3667, $tmp3668, $tmp3670, ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
org$frostlang$frostc$FixedArray* $tmp3671 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3672 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3664;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1745
frost$core$Int64 $tmp3674 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp3675 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3674);
org$frostlang$frostc$parser$Token$nullable $tmp3676 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3675, &$s3677);
*(&local0) = $tmp3676;
// line 1746
org$frostlang$frostc$parser$Token$nullable $tmp3678 = *(&local0);
frost$core$Bit $tmp3679 = frost$core$Bit$init$builtin_bit(!$tmp3678.nonnull);
bool $tmp3680 = $tmp3679.value;
if ($tmp3680) goto block1; else goto block2;
block1:;
// line 1747
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 1749
frost$collections$Array* $tmp3681 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3681);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
frost$collections$Array* $tmp3682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
*(&local1) = $tmp3681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
// line 1750
goto block3;
block3:;
// line 1751
org$frostlang$frostc$parser$Token $tmp3683 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3684 = $tmp3683.kind;
frost$core$Int64 $tmp3685 = $tmp3684.$rawValue;
frost$core$Int64 $tmp3686 = (frost$core$Int64) {104};
frost$core$Bit $tmp3687 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3685, $tmp3686);
bool $tmp3688 = $tmp3687.value;
if ($tmp3688) goto block6; else goto block7;
block6:;
// line 1753
org$frostlang$frostc$parser$Token $tmp3689 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 1754
goto block4;
block7:;
frost$core$Int64 $tmp3690 = (frost$core$Int64) {29};
frost$core$Bit $tmp3691 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3685, $tmp3690);
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3693 = (frost$core$Int64) {30};
frost$core$Bit $tmp3694 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3685, $tmp3693);
bool $tmp3695 = $tmp3694.value;
if ($tmp3695) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3696 = (frost$core$Int64) {28};
frost$core$Bit $tmp3697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3685, $tmp3696);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block8; else goto block11;
block8:;
// line 1757
org$frostlang$frostc$ASTNode* $tmp3699 = org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
org$frostlang$frostc$ASTNode* $tmp3700 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3700));
*(&local2) = $tmp3699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
// line 1758
org$frostlang$frostc$ASTNode* $tmp3701 = *(&local2);
frost$core$Bit $tmp3702 = frost$core$Bit$init$builtin_bit($tmp3701 == NULL);
bool $tmp3703 = $tmp3702.value;
if ($tmp3703) goto block12; else goto block13;
block12:;
// line 1759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3704 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3705 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
// line 1761
frost$core$Int64 $tmp3706 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp3707 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3706);
org$frostlang$frostc$parser$Token$nullable $tmp3708 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3707, &$s3709);
frost$core$Bit $tmp3710 = frost$core$Bit$init$builtin_bit(!$tmp3708.nonnull);
bool $tmp3711 = $tmp3710.value;
if ($tmp3711) goto block14; else goto block15;
block14:;
// line 1762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3712 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block15:;
// line 1764
frost$collections$Array* $tmp3714 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3715 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3714, ((frost$core$Object*) $tmp3715));
// line 1765
org$frostlang$frostc$ASTNode* $tmp3716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1768
org$frostlang$frostc$ASTNode* $tmp3717 = org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
org$frostlang$frostc$ASTNode* $tmp3718 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local3) = $tmp3717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
// line 1769
org$frostlang$frostc$ASTNode* $tmp3719 = *(&local3);
frost$core$Bit $tmp3720 = frost$core$Bit$init$builtin_bit($tmp3719 == NULL);
bool $tmp3721 = $tmp3720.value;
if ($tmp3721) goto block16; else goto block17;
block16:;
// line 1770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3722 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block17:;
// line 1772
frost$collections$Array* $tmp3724 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp3725 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3724, ((frost$core$Object*) $tmp3725));
org$frostlang$frostc$ASTNode* $tmp3726 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1776
frost$collections$Array* $tmp3727 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3728 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
frost$collections$Array* $tmp3729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3728;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$FixedArray* local0 = NULL;
// line 1783
org$frostlang$frostc$FixedArray* $tmp3730 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
org$frostlang$frostc$FixedArray* $tmp3731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
*(&local0) = $tmp3730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
// line 1784
org$frostlang$frostc$FixedArray* $tmp3732 = *(&local0);
frost$core$Bit $tmp3733 = frost$core$Bit$init$builtin_bit($tmp3732 == NULL);
bool $tmp3734 = $tmp3733.value;
if ($tmp3734) goto block1; else goto block2;
block1:;
// line 1785
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp3735 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1787
org$frostlang$frostc$ASTNode* $tmp3736 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3737 = (frost$core$Int64) {7};
org$frostlang$frostc$Position $tmp3738 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$FixedArray* $tmp3739 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3736, $tmp3737, $tmp3738, $tmp3739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
org$frostlang$frostc$FixedArray* $tmp3740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp3736;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$parser$Token local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1794
org$frostlang$frostc$ASTNode* $tmp3741 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
org$frostlang$frostc$ASTNode* $tmp3742 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
*(&local0) = $tmp3741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
// line 1795
org$frostlang$frostc$ASTNode* $tmp3743 = *(&local0);
frost$core$Bit $tmp3744 = frost$core$Bit$init$builtin_bit($tmp3743 == NULL);
bool $tmp3745 = $tmp3744.value;
if ($tmp3745) goto block1; else goto block2;
block1:;
// line 1796
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1798
org$frostlang$frostc$parser$Token $tmp3747 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3748 = $tmp3747.kind;
frost$core$Int64 $tmp3749 = $tmp3748.$rawValue;
frost$core$Int64 $tmp3750 = (frost$core$Int64) {77};
frost$core$Bit $tmp3751 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3750);
bool $tmp3752 = $tmp3751.value;
if ($tmp3752) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3753 = (frost$core$Int64) {78};
frost$core$Bit $tmp3754 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3753);
bool $tmp3755 = $tmp3754.value;
if ($tmp3755) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3756 = (frost$core$Int64) {79};
frost$core$Bit $tmp3757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3756);
bool $tmp3758 = $tmp3757.value;
if ($tmp3758) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3759 = (frost$core$Int64) {80};
frost$core$Bit $tmp3760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3759);
bool $tmp3761 = $tmp3760.value;
if ($tmp3761) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3762 = (frost$core$Int64) {81};
frost$core$Bit $tmp3763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3762);
bool $tmp3764 = $tmp3763.value;
if ($tmp3764) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3765 = (frost$core$Int64) {82};
frost$core$Bit $tmp3766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3765);
bool $tmp3767 = $tmp3766.value;
if ($tmp3767) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3768 = (frost$core$Int64) {83};
frost$core$Bit $tmp3769 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3768);
bool $tmp3770 = $tmp3769.value;
if ($tmp3770) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3771 = (frost$core$Int64) {84};
frost$core$Bit $tmp3772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3771);
bool $tmp3773 = $tmp3772.value;
if ($tmp3773) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3774 = (frost$core$Int64) {85};
frost$core$Bit $tmp3775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3774);
bool $tmp3776 = $tmp3775.value;
if ($tmp3776) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3777 = (frost$core$Int64) {86};
frost$core$Bit $tmp3778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3777);
bool $tmp3779 = $tmp3778.value;
if ($tmp3779) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3780 = (frost$core$Int64) {87};
frost$core$Bit $tmp3781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3780);
bool $tmp3782 = $tmp3781.value;
if ($tmp3782) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3783 = (frost$core$Int64) {88};
frost$core$Bit $tmp3784 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3783);
bool $tmp3785 = $tmp3784.value;
if ($tmp3785) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3786 = (frost$core$Int64) {89};
frost$core$Bit $tmp3787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3786);
bool $tmp3788 = $tmp3787.value;
if ($tmp3788) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3789 = (frost$core$Int64) {90};
frost$core$Bit $tmp3790 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3789);
bool $tmp3791 = $tmp3790.value;
if ($tmp3791) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3792 = (frost$core$Int64) {91};
frost$core$Bit $tmp3793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3792);
bool $tmp3794 = $tmp3793.value;
if ($tmp3794) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3795 = (frost$core$Int64) {92};
frost$core$Bit $tmp3796 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3795);
bool $tmp3797 = $tmp3796.value;
if ($tmp3797) goto block4; else goto block20;
block4:;
// line 1804
org$frostlang$frostc$parser$Token $tmp3798 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local1) = $tmp3798;
// line 1805
org$frostlang$frostc$ASTNode* $tmp3799 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3799));
org$frostlang$frostc$ASTNode* $tmp3800 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
*(&local2) = $tmp3799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3799));
// line 1806
org$frostlang$frostc$ASTNode* $tmp3801 = *(&local2);
frost$core$Bit $tmp3802 = frost$core$Bit$init$builtin_bit($tmp3801 == NULL);
bool $tmp3803 = $tmp3802.value;
if ($tmp3803) goto block21; else goto block22;
block21:;
// line 1807
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3804 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3805 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
// line 1809
org$frostlang$frostc$ASTNode* $tmp3806 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3807 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3808 = *(&local0);
$fn3810 $tmp3809 = ($fn3810) $tmp3808->$class->vtable[2];
org$frostlang$frostc$Position $tmp3811 = $tmp3809($tmp3808);
org$frostlang$frostc$ASTNode* $tmp3812 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3813 = *(&local1);
org$frostlang$frostc$expression$Binary$Operator $tmp3814 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3813);
org$frostlang$frostc$ASTNode* $tmp3815 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3806, $tmp3807, $tmp3811, $tmp3812, $tmp3814, $tmp3815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
org$frostlang$frostc$ASTNode* $tmp3816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3806;
block20:;
frost$core$Int64 $tmp3818 = (frost$core$Int64) {62};
frost$core$Bit $tmp3819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3749, $tmp3818);
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block23; else goto block24;
block23:;
// line 1813
org$frostlang$frostc$parser$Token $tmp3821 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3821, &$s3822);
// line 1814
org$frostlang$frostc$parser$Token $tmp3823 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local3) = $tmp3823;
// line 1815
org$frostlang$frostc$ASTNode* $tmp3824 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
org$frostlang$frostc$ASTNode* $tmp3825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
*(&local4) = $tmp3824;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
// line 1816
org$frostlang$frostc$ASTNode* $tmp3826 = *(&local4);
frost$core$Bit $tmp3827 = frost$core$Bit$init$builtin_bit($tmp3826 == NULL);
bool $tmp3828 = $tmp3827.value;
if ($tmp3828) goto block25; else goto block26;
block25:;
// line 1817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3829 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3830 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block26:;
// line 1819
org$frostlang$frostc$ASTNode* $tmp3831 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3832 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode* $tmp3833 = *(&local0);
$fn3835 $tmp3834 = ($fn3835) $tmp3833->$class->vtable[2];
org$frostlang$frostc$Position $tmp3836 = $tmp3834($tmp3833);
org$frostlang$frostc$ASTNode* $tmp3837 = *(&local0);
org$frostlang$frostc$parser$Token $tmp3838 = *(&local3);
org$frostlang$frostc$expression$Binary$Operator $tmp3839 = org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator($tmp3838);
org$frostlang$frostc$ASTNode* $tmp3840 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp3831, $tmp3832, $tmp3836, $tmp3837, $tmp3839, $tmp3840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
org$frostlang$frostc$ASTNode* $tmp3841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3831;
block24:;
// line 1823
org$frostlang$frostc$ASTNode* $tmp3843 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3843));
org$frostlang$frostc$ASTNode* $tmp3844 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3843;
block3:;
goto block27;
block27:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 1832
org$frostlang$frostc$ASTNode* $tmp3845 = org$frostlang$frostc$parser$Parser$target$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
org$frostlang$frostc$ASTNode* $tmp3846 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
*(&local0) = $tmp3845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
// line 1833
org$frostlang$frostc$ASTNode* $tmp3847 = *(&local0);
frost$core$Bit $tmp3848 = frost$core$Bit$init$builtin_bit($tmp3847 == NULL);
bool $tmp3849 = $tmp3848.value;
if ($tmp3849) goto block1; else goto block2;
block1:;
// line 1834
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3850));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1836
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1837
frost$core$Int64 $tmp3851 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp3852 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3851);
org$frostlang$frostc$parser$Token$nullable $tmp3853 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3852);
frost$core$Bit $tmp3854 = frost$core$Bit$init$builtin_bit($tmp3853.nonnull);
bool $tmp3855 = $tmp3854.value;
if ($tmp3855) goto block3; else goto block5;
block3:;
// line 1838
org$frostlang$frostc$ASTNode* $tmp3856 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
org$frostlang$frostc$ASTNode* $tmp3857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3857));
*(&local1) = $tmp3856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
// line 1839
org$frostlang$frostc$ASTNode* $tmp3858 = *(&local1);
frost$core$Bit $tmp3859 = frost$core$Bit$init$builtin_bit($tmp3858 == NULL);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block6; else goto block7;
block6:;
// line 1840
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3861 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3861));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3862 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3862));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1843
org$frostlang$frostc$parser$Token $tmp3863 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp3864 = $tmp3863.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3865;
$tmp3865 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3865->value = $tmp3864;
frost$core$Int64 $tmp3866 = (frost$core$Int64) {62};
org$frostlang$frostc$parser$Token$Kind $tmp3867 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3866);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp3868;
$tmp3868 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp3868->value = $tmp3867;
ITable* $tmp3869 = ((frost$core$Equatable*) $tmp3865)->$class->itable;
while ($tmp3869->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3869 = $tmp3869->next;
}
$fn3871 $tmp3870 = $tmp3869->methods[0];
frost$core$Bit $tmp3872 = $tmp3870(((frost$core$Equatable*) $tmp3865), ((frost$core$Equatable*) $tmp3868));
bool $tmp3873 = $tmp3872.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3868)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3865)));
if ($tmp3873) goto block8; else goto block10;
block8:;
// line 1844
org$frostlang$frostc$parser$Token $tmp3874 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3874, &$s3875);
// line 1845
org$frostlang$frostc$ASTNode* $tmp3876 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
org$frostlang$frostc$ASTNode* $tmp3877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
*(&local1) = $tmp3876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
// line 1846
org$frostlang$frostc$ASTNode* $tmp3878 = *(&local1);
frost$core$Bit $tmp3879 = frost$core$Bit$init$builtin_bit($tmp3878 == NULL);
bool $tmp3880 = $tmp3879.value;
if ($tmp3880) goto block11; else goto block12;
block11:;
// line 1847
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3882 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3882));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1851
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3883 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3883));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1853
org$frostlang$frostc$ASTNode* $tmp3884 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3885 = (frost$core$Int64) {14};
org$frostlang$frostc$ASTNode* $tmp3886 = *(&local0);
$fn3888 $tmp3887 = ($fn3888) $tmp3886->$class->vtable[2];
org$frostlang$frostc$Position $tmp3889 = $tmp3887($tmp3886);
org$frostlang$frostc$ASTNode* $tmp3890 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp3891 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q($tmp3884, $tmp3885, $tmp3889, $tmp3890, $tmp3891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3884));
org$frostlang$frostc$ASTNode* $tmp3892 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp3884;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 1860
org$frostlang$frostc$parser$Token $tmp3894 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp3894;
// line 1861
// line 1862
org$frostlang$frostc$parser$Token $tmp3895 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp3896 = $tmp3895.kind;
frost$core$Int64 $tmp3897 = $tmp3896.$rawValue;
frost$core$Int64 $tmp3898 = (frost$core$Int64) {24};
frost$core$Bit $tmp3899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block2; else goto block3;
block2:;
// line 1864
frost$core$Int64 $tmp3901 = (frost$core$Int64) {0};
org$frostlang$frostc$Variable$Kind $tmp3902 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3901);
*(&local1) = $tmp3902;
goto block1;
block3:;
frost$core$Int64 $tmp3903 = (frost$core$Int64) {25};
frost$core$Bit $tmp3904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3903);
bool $tmp3905 = $tmp3904.value;
if ($tmp3905) goto block4; else goto block5;
block4:;
// line 1867
frost$core$Int64 $tmp3906 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp3907 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3906);
*(&local1) = $tmp3907;
goto block1;
block5:;
frost$core$Int64 $tmp3908 = (frost$core$Int64) {26};
frost$core$Bit $tmp3909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3908);
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block6; else goto block7;
block6:;
// line 1870
frost$core$Int64 $tmp3911 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable$Kind $tmp3912 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3911);
*(&local1) = $tmp3912;
goto block1;
block7:;
frost$core$Int64 $tmp3913 = (frost$core$Int64) {27};
frost$core$Bit $tmp3914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3897, $tmp3913);
bool $tmp3915 = $tmp3914.value;
if ($tmp3915) goto block8; else goto block9;
block8:;
// line 1873
frost$core$Int64 $tmp3916 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable$Kind $tmp3917 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp3916);
*(&local1) = $tmp3917;
goto block1;
block9:;
// line 1876
org$frostlang$frostc$parser$Token $tmp3918 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp3918, &$s3919);
goto block1;
block1:;
// line 1879
frost$collections$Array* $tmp3920 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3920);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3920));
frost$collections$Array* $tmp3921 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
*(&local2) = $tmp3920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3920));
// line 1880
org$frostlang$frostc$ASTNode* $tmp3922 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
org$frostlang$frostc$ASTNode* $tmp3923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
*(&local3) = $tmp3922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
// line 1881
org$frostlang$frostc$ASTNode* $tmp3924 = *(&local3);
frost$core$Bit $tmp3925 = frost$core$Bit$init$builtin_bit($tmp3924 == NULL);
bool $tmp3926 = $tmp3925.value;
if ($tmp3926) goto block10; else goto block11;
block10:;
// line 1882
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 1884
frost$collections$Array* $tmp3929 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3930 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3929, ((frost$core$Object*) $tmp3930));
// line 1885
goto block12;
block12:;
frost$core$Int64 $tmp3931 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp3932 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3931);
org$frostlang$frostc$parser$Token$nullable $tmp3933 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3932);
frost$core$Bit $tmp3934 = frost$core$Bit$init$builtin_bit($tmp3933.nonnull);
bool $tmp3935 = $tmp3934.value;
if ($tmp3935) goto block13; else goto block14;
block13:;
// line 1886
org$frostlang$frostc$ASTNode* $tmp3936 = org$frostlang$frostc$parser$Parser$singleVar$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
org$frostlang$frostc$ASTNode* $tmp3937 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
*(&local4) = $tmp3936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
// line 1887
org$frostlang$frostc$ASTNode* $tmp3938 = *(&local4);
frost$core$Bit $tmp3939 = frost$core$Bit$init$builtin_bit($tmp3938 == NULL);
bool $tmp3940 = $tmp3939.value;
if ($tmp3940) goto block15; else goto block16;
block15:;
// line 1888
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3942 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3942));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 1890
frost$collections$Array* $tmp3944 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3945 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp3944, ((frost$core$Object*) $tmp3945));
org$frostlang$frostc$ASTNode* $tmp3946 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3946));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1892
org$frostlang$frostc$ASTNode* $tmp3947 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3948 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token $tmp3949 = *(&local0);
org$frostlang$frostc$Position $tmp3950 = $tmp3949.position;
org$frostlang$frostc$Variable$Kind $tmp3951 = *(&local1);
frost$collections$Array* $tmp3952 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3953 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3952);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3947, $tmp3948, $tmp3950, $tmp3951, $tmp3953);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
org$frostlang$frostc$ASTNode* $tmp3954 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3955 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp3947;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 1899
frost$core$Int64 $tmp3956 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp3957 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3956);
org$frostlang$frostc$parser$Token$nullable $tmp3958 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3957, &$s3959);
*(&local0) = $tmp3958;
// line 1900
org$frostlang$frostc$parser$Token$nullable $tmp3960 = *(&local0);
frost$core$Bit $tmp3961 = frost$core$Bit$init$builtin_bit(!$tmp3960.nonnull);
bool $tmp3962 = $tmp3961.value;
if ($tmp3962) goto block1; else goto block2;
block1:;
// line 1901
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1903
frost$core$Int64 $tmp3963 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp3964 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3963);
org$frostlang$frostc$parser$Token$nullable $tmp3965 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3964, &$s3966);
frost$core$Bit $tmp3967 = frost$core$Bit$init$builtin_bit(!$tmp3965.nonnull);
bool $tmp3968 = $tmp3967.value;
if ($tmp3968) goto block3; else goto block4;
block3:;
// line 1904
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 1906
frost$collections$Stack** $tmp3969 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp3970 = *$tmp3969;
frost$core$Bit $tmp3971 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp3972;
$tmp3972 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3972->value = $tmp3971;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3970, ((frost$core$Object*) $tmp3972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
// line 1907
org$frostlang$frostc$ASTNode* $tmp3973 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3974 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp3975 = *(&local0);
org$frostlang$frostc$Position $tmp3976 = ((org$frostlang$frostc$parser$Token) $tmp3975.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp3977 = *(&local0);
frost$core$String* $tmp3978 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp3977.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3973, $tmp3974, $tmp3976, $tmp3978);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
org$frostlang$frostc$ASTNode* $tmp3979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
*(&local1) = $tmp3973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
// line 1908
frost$collections$Array* $tmp3980 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3980);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
frost$collections$Array* $tmp3981 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
*(&local2) = $tmp3980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
// line 1909
frost$core$Int64 $tmp3982 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp3983 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3982);
org$frostlang$frostc$parser$Token$nullable $tmp3984 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp3983);
frost$core$Bit $tmp3985 = frost$core$Bit$init$builtin_bit(!$tmp3984.nonnull);
bool $tmp3986 = $tmp3985.value;
if ($tmp3986) goto block5; else goto block6;
block5:;
// line 1910
org$frostlang$frostc$ASTNode* $tmp3987 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
org$frostlang$frostc$ASTNode* $tmp3988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local3) = $tmp3987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
// line 1911
org$frostlang$frostc$ASTNode* $tmp3989 = *(&local3);
frost$core$Bit $tmp3990 = frost$core$Bit$init$builtin_bit($tmp3989 == NULL);
bool $tmp3991 = $tmp3990.value;
if ($tmp3991) goto block7; else goto block8;
block7:;
// line 1912
frost$collections$Stack** $tmp3992 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp3993 = *$tmp3992;
frost$core$Object* $tmp3994 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3993);
frost$core$Frost$unref$frost$core$Object$Q($tmp3994);
// line 1913
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp3995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp3997 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 1915
frost$collections$Array* $tmp3998 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp3999 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3998, ((frost$core$Object*) $tmp3999));
// line 1916
goto block9;
block9:;
frost$core$Int64 $tmp4000 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4001 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4000);
org$frostlang$frostc$parser$Token$nullable $tmp4002 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4001);
frost$core$Bit $tmp4003 = frost$core$Bit$init$builtin_bit($tmp4002.nonnull);
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block10; else goto block11;
block10:;
// line 1917
org$frostlang$frostc$ASTNode* $tmp4005 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
org$frostlang$frostc$ASTNode* $tmp4006 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
*(&local3) = $tmp4005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
// line 1918
org$frostlang$frostc$ASTNode* $tmp4007 = *(&local3);
frost$core$Bit $tmp4008 = frost$core$Bit$init$builtin_bit($tmp4007 == NULL);
bool $tmp4009 = $tmp4008.value;
if ($tmp4009) goto block12; else goto block13;
block12:;
// line 1919
frost$collections$Stack** $tmp4010 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4011 = *$tmp4010;
frost$core$Object* $tmp4012 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4011);
frost$core$Frost$unref$frost$core$Object$Q($tmp4012);
// line 1920
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4013 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4014 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4014));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 1922
frost$collections$Array* $tmp4016 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4017 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4016, ((frost$core$Object*) $tmp4017));
goto block9;
block11:;
// line 1924
frost$core$Int64 $tmp4018 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4019 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4018);
org$frostlang$frostc$parser$Token$nullable $tmp4020 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4019, &$s4021);
frost$core$Bit $tmp4022 = frost$core$Bit$init$builtin_bit(!$tmp4020.nonnull);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block14; else goto block15;
block14:;
// line 1925
frost$collections$Stack** $tmp4024 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4025 = *$tmp4024;
frost$core$Object* $tmp4026 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4025);
frost$core$Frost$unref$frost$core$Object$Q($tmp4026);
// line 1926
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4027 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
org$frostlang$frostc$ASTNode* $tmp4030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1929
frost$collections$Stack** $tmp4031 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4032 = *$tmp4031;
frost$core$Object* $tmp4033 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4032);
frost$core$Frost$unref$frost$core$Object$Q($tmp4033);
// line 1930
org$frostlang$frostc$ASTNode* $tmp4034 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4035 = (frost$core$Int64) {9};
org$frostlang$frostc$parser$Token$nullable $tmp4036 = *(&local0);
org$frostlang$frostc$Position $tmp4037 = ((org$frostlang$frostc$parser$Token) $tmp4036.value).position;
org$frostlang$frostc$ASTNode* $tmp4038 = *(&local1);
frost$collections$Array* $tmp4039 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4040 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4039);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4034, $tmp4035, $tmp4037, $tmp4038, $tmp4040);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
frost$collections$Array* $tmp4041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp4042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4034;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1937
frost$core$Int64 $tmp4043 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$Kind $tmp4044 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4043);
org$frostlang$frostc$parser$Token$nullable $tmp4045 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4044, &$s4046);
*(&local0) = $tmp4045;
// line 1938
org$frostlang$frostc$parser$Token$nullable $tmp4047 = *(&local0);
frost$core$Bit $tmp4048 = frost$core$Bit$init$builtin_bit(!$tmp4047.nonnull);
bool $tmp4049 = $tmp4048.value;
if ($tmp4049) goto block1; else goto block2;
block1:;
// line 1939
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1941
frost$core$Int64 $tmp4050 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4051 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4050);
org$frostlang$frostc$parser$Token$nullable $tmp4052 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4051);
*(&local1) = $tmp4052;
// line 1942
org$frostlang$frostc$parser$Token$nullable $tmp4053 = *(&local1);
frost$core$Bit $tmp4054 = frost$core$Bit$init$builtin_bit($tmp4053.nonnull);
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block3; else goto block4;
block3:;
// line 1943
org$frostlang$frostc$ASTNode* $tmp4056 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4057 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4058 = *(&local0);
org$frostlang$frostc$Position $tmp4059 = ((org$frostlang$frostc$parser$Token) $tmp4058.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4060 = *(&local1);
frost$core$String* $tmp4061 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4060.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4056, $tmp4057, $tmp4059, $tmp4061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
return $tmp4056;
block4:;
// line 1945
org$frostlang$frostc$ASTNode* $tmp4062 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4063 = (frost$core$Int64) {8};
org$frostlang$frostc$parser$Token$nullable $tmp4064 = *(&local0);
org$frostlang$frostc$Position $tmp4065 = ((org$frostlang$frostc$parser$Token) $tmp4064.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4062, $tmp4063, $tmp4065, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
return $tmp4062;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 1952
frost$core$Int64 $tmp4066 = (frost$core$Int64) {30};
org$frostlang$frostc$parser$Token$Kind $tmp4067 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4066);
org$frostlang$frostc$parser$Token$nullable $tmp4068 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4067, &$s4069);
*(&local0) = $tmp4068;
// line 1953
org$frostlang$frostc$parser$Token$nullable $tmp4070 = *(&local0);
frost$core$Bit $tmp4071 = frost$core$Bit$init$builtin_bit(!$tmp4070.nonnull);
bool $tmp4072 = $tmp4071.value;
if ($tmp4072) goto block1; else goto block2;
block1:;
// line 1954
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1956
frost$core$Int64 $tmp4073 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4074 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4073);
org$frostlang$frostc$parser$Token$nullable $tmp4075 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4074);
*(&local1) = $tmp4075;
// line 1957
org$frostlang$frostc$parser$Token$nullable $tmp4076 = *(&local1);
frost$core$Bit $tmp4077 = frost$core$Bit$init$builtin_bit($tmp4076.nonnull);
bool $tmp4078 = $tmp4077.value;
if ($tmp4078) goto block3; else goto block4;
block3:;
// line 1958
org$frostlang$frostc$ASTNode* $tmp4079 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4080 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4081 = *(&local0);
org$frostlang$frostc$Position $tmp4082 = ((org$frostlang$frostc$parser$Token) $tmp4081.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4083 = *(&local1);
frost$core$String* $tmp4084 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4083.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4079, $tmp4080, $tmp4082, $tmp4084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
return $tmp4079;
block4:;
// line 1960
org$frostlang$frostc$ASTNode* $tmp4085 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4086 = (frost$core$Int64) {13};
org$frostlang$frostc$parser$Token$nullable $tmp4087 = *(&local0);
org$frostlang$frostc$Position $tmp4088 = ((org$frostlang$frostc$parser$Token) $tmp4087.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q($tmp4085, $tmp4086, $tmp4088, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
return $tmp4085;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 1967
frost$core$Int64 $tmp4089 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$Kind $tmp4090 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4089);
org$frostlang$frostc$parser$Token$nullable $tmp4091 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4090, &$s4092);
*(&local0) = $tmp4091;
// line 1968
org$frostlang$frostc$parser$Token$nullable $tmp4093 = *(&local0);
frost$core$Bit $tmp4094 = frost$core$Bit$init$builtin_bit(!$tmp4093.nonnull);
bool $tmp4095 = $tmp4094.value;
if ($tmp4095) goto block1; else goto block2;
block1:;
// line 1969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 1971
org$frostlang$frostc$parser$Token $tmp4096 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4097 = $tmp4096.kind;
frost$core$Int64 $tmp4098 = $tmp4097.$rawValue;
frost$core$Int64 $tmp4099 = (frost$core$Int64) {104};
frost$core$Bit $tmp4100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4098, $tmp4099);
bool $tmp4101 = $tmp4100.value;
if ($tmp4101) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4102 = (frost$core$Int64) {40};
frost$core$Bit $tmp4103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4098, $tmp4102);
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4105 = (frost$core$Int64) {41};
frost$core$Bit $tmp4106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4098, $tmp4105);
bool $tmp4107 = $tmp4106.value;
if ($tmp4107) goto block4; else goto block7;
block4:;
// line 1973
org$frostlang$frostc$ASTNode* $tmp4108 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4109 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4110 = *(&local0);
org$frostlang$frostc$Position $tmp4111 = ((org$frostlang$frostc$parser$Token) $tmp4110.value).position;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4108, $tmp4109, $tmp4111, ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
return $tmp4108;
block7:;
// line 1976
frost$collections$Array* $tmp4112 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4112);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
frost$collections$Array* $tmp4113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4113));
*(&local1) = $tmp4112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
// line 1977
org$frostlang$frostc$ASTNode* $tmp4114 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
org$frostlang$frostc$ASTNode* $tmp4115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4115));
*(&local2) = $tmp4114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
// line 1978
org$frostlang$frostc$ASTNode* $tmp4116 = *(&local2);
frost$core$Bit $tmp4117 = frost$core$Bit$init$builtin_bit($tmp4116 == NULL);
bool $tmp4118 = $tmp4117.value;
if ($tmp4118) goto block8; else goto block9;
block8:;
// line 1979
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4119 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4120 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4120));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 1981
frost$collections$Array* $tmp4121 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4122 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4121, ((frost$core$Object*) $tmp4122));
// line 1982
org$frostlang$frostc$ASTNode* $tmp4123 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4124 = (frost$core$Int64) {38};
org$frostlang$frostc$parser$Token$nullable $tmp4125 = *(&local0);
org$frostlang$frostc$Position $tmp4126 = ((org$frostlang$frostc$parser$Token) $tmp4125.value).position;
org$frostlang$frostc$ASTNode* $tmp4127 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q($tmp4123, $tmp4124, $tmp4126, $tmp4127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
org$frostlang$frostc$ASTNode* $tmp4128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4123;
block3:;
goto block10;
block10:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$terminalStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 1991
org$frostlang$frostc$parser$Token $tmp4130 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4131 = $tmp4130.kind;
frost$core$Int64 $tmp4132 = $tmp4131.$rawValue;
frost$core$Int64 $tmp4133 = (frost$core$Int64) {29};
frost$core$Bit $tmp4134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4132, $tmp4133);
bool $tmp4135 = $tmp4134.value;
if ($tmp4135) goto block2; else goto block3;
block2:;
// line 1992
org$frostlang$frostc$ASTNode* $tmp4136 = org$frostlang$frostc$parser$Parser$breakStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
return $tmp4136;
block3:;
frost$core$Int64 $tmp4137 = (frost$core$Int64) {30};
frost$core$Bit $tmp4138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4132, $tmp4137);
bool $tmp4139 = $tmp4138.value;
if ($tmp4139) goto block4; else goto block5;
block4:;
// line 1993
org$frostlang$frostc$ASTNode* $tmp4140 = org$frostlang$frostc$parser$Parser$continueStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
return $tmp4140;
block5:;
frost$core$Int64 $tmp4141 = (frost$core$Int64) {28};
frost$core$Bit $tmp4142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4132, $tmp4141);
bool $tmp4143 = $tmp4142.value;
if ($tmp4143) goto block6; else goto block7;
block6:;
// line 1994
org$frostlang$frostc$ASTNode* $tmp4144 = org$frostlang$frostc$parser$Parser$returnStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4144));
return $tmp4144;
block7:;
// line 1995
frost$core$Bit $tmp4145 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4146 = $tmp4145.value;
if ($tmp4146) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp4147 = (frost$core$Int64) {1995};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4148, $tmp4147);
abort(); // unreachable
block8:;
// line 1995
goto block10;
block10:;
goto block10;
block11:;
goto block1;
block1:;
goto block12;
block12:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 2003
org$frostlang$frostc$parser$Token $tmp4149 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4150 = $tmp4149.kind;
frost$core$Int64 $tmp4151 = $tmp4150.$rawValue;
frost$core$Int64 $tmp4152 = (frost$core$Int64) {31};
frost$core$Bit $tmp4153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4151, $tmp4152);
bool $tmp4154 = $tmp4153.value;
if ($tmp4154) goto block2; else goto block3;
block2:;
// line 2004
org$frostlang$frostc$ASTNode* $tmp4155 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4155));
return $tmp4155;
block3:;
frost$core$Int64 $tmp4156 = (frost$core$Int64) {33};
frost$core$Bit $tmp4157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4151, $tmp4156);
bool $tmp4158 = $tmp4157.value;
if ($tmp4158) goto block4; else goto block5;
block4:;
// line 2005
org$frostlang$frostc$ASTNode* $tmp4159 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
return $tmp4159;
block5:;
frost$core$Int64 $tmp4160 = (frost$core$Int64) {36};
frost$core$Bit $tmp4161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4151, $tmp4160);
bool $tmp4162 = $tmp4161.value;
if ($tmp4162) goto block6; else goto block7;
block6:;
// line 2006
org$frostlang$frostc$ASTNode* $tmp4163 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
return $tmp4163;
block7:;
frost$core$Int64 $tmp4164 = (frost$core$Int64) {32};
frost$core$Bit $tmp4165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4151, $tmp4164);
bool $tmp4166 = $tmp4165.value;
if ($tmp4166) goto block8; else goto block9;
block8:;
// line 2007
org$frostlang$frostc$ASTNode* $tmp4167 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
return $tmp4167;
block9:;
// line 2010
frost$core$Int64 $tmp4168 = (frost$core$Int64) {31};
org$frostlang$frostc$parser$Token$Kind $tmp4169 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4168);
org$frostlang$frostc$parser$Token$nullable $tmp4170 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4169, &$s4171);
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
frost$core$Int64 $tmp4172 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4173 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4172);
org$frostlang$frostc$parser$Token$nullable $tmp4174 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4173);
*(&local1) = $tmp4174;
// line 2022
org$frostlang$frostc$parser$Token$nullable $tmp4175 = *(&local1);
frost$core$Bit $tmp4176 = frost$core$Bit$init$builtin_bit(!$tmp4175.nonnull);
bool $tmp4177 = $tmp4176.value;
if ($tmp4177) goto block1; else goto block3;
block1:;
// line 2023
frost$core$Int64 $tmp4178 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4179 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4178);
org$frostlang$frostc$parser$Token$nullable $tmp4180 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4179, &$s4181);
*(&local1) = $tmp4180;
// line 2024
org$frostlang$frostc$parser$Token$nullable $tmp4182 = *(&local1);
frost$core$Bit $tmp4183 = frost$core$Bit$init$builtin_bit(!$tmp4182.nonnull);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block4; else goto block5;
block4:;
// line 2025
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2027
frost$core$Int64 $tmp4185 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4186 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4185);
*(&local0) = $tmp4186;
goto block2;
block3:;
// line 1
// line 2030
frost$core$Int64 $tmp4187 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4188 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4187);
*(&local0) = $tmp4188;
goto block2;
block2:;
// line 2032
frost$core$Int64 $tmp4189 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4190 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4189);
org$frostlang$frostc$parser$Token$nullable $tmp4191 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4190, &$s4192);
*(&local2) = $tmp4191;
// line 2033
org$frostlang$frostc$parser$Token$nullable $tmp4193 = *(&local2);
frost$core$Bit $tmp4194 = frost$core$Bit$init$builtin_bit(!$tmp4193.nonnull);
bool $tmp4195 = $tmp4194.value;
if ($tmp4195) goto block6; else goto block7;
block6:;
// line 2034
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2036
org$frostlang$frostc$FixedArray* $tmp4196 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
org$frostlang$frostc$FixedArray* $tmp4197 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
*(&local3) = $tmp4196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
// line 2037
org$frostlang$frostc$FixedArray* $tmp4198 = *(&local3);
frost$core$Bit $tmp4199 = frost$core$Bit$init$builtin_bit($tmp4198 == NULL);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block8; else goto block9;
block8:;
// line 2038
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4201 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4201));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2040
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2041
org$frostlang$frostc$parser$Token $tmp4202 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4203 = $tmp4202.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4204;
$tmp4204 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4204->value = $tmp4203;
frost$core$Int64 $tmp4205 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4206 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4205);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4207;
$tmp4207 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4207->value = $tmp4206;
ITable* $tmp4208 = ((frost$core$Equatable*) $tmp4204)->$class->itable;
while ($tmp4208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4208 = $tmp4208->next;
}
$fn4210 $tmp4209 = $tmp4208->methods[0];
frost$core$Bit $tmp4211 = $tmp4209(((frost$core$Equatable*) $tmp4204), ((frost$core$Equatable*) $tmp4207));
bool $tmp4212 = $tmp4211.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4207)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4204)));
if ($tmp4212) goto block10; else goto block12;
block10:;
// line 2042
org$frostlang$frostc$ASTNode* $tmp4213 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4213));
org$frostlang$frostc$ASTNode* $tmp4214 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4214));
*(&local4) = $tmp4213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4213));
// line 2043
org$frostlang$frostc$ASTNode* $tmp4215 = *(&local4);
frost$core$Bit $tmp4216 = frost$core$Bit$init$builtin_bit($tmp4215 == NULL);
bool $tmp4217 = $tmp4216.value;
if ($tmp4217) goto block13; else goto block14;
block13:;
// line 2044
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4218));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2048
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4220 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2050
org$frostlang$frostc$FixedArray* $tmp4221 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4221));
org$frostlang$frostc$FixedArray* $tmp4222 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
*(&local5) = $tmp4221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4221));
// line 2051
org$frostlang$frostc$FixedArray* $tmp4223 = *(&local5);
frost$core$Bit $tmp4224 = frost$core$Bit$init$builtin_bit($tmp4223 == NULL);
bool $tmp4225 = $tmp4224.value;
if ($tmp4225) goto block15; else goto block16;
block15:;
// line 2052
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4226 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4227 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2054
org$frostlang$frostc$ASTNode* $tmp4229 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4230 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4231 = *(&local1);
org$frostlang$frostc$Position $tmp4232 = ((org$frostlang$frostc$parser$Token) $tmp4231.value).position;
org$frostlang$frostc$FixedArray* $tmp4233 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4233);
org$frostlang$frostc$MethodDecl$Kind $tmp4234 = *(&local0);
org$frostlang$frostc$parser$Token$nullable $tmp4235 = *(&local2);
frost$core$String* $tmp4236 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4235.value));
org$frostlang$frostc$FixedArray* $tmp4237 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp4238 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp4239 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4229, $tmp4230, $tmp4232, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4233, $tmp4234, $tmp4236, ((org$frostlang$frostc$FixedArray*) NULL), $tmp4237, $tmp4238, $tmp4239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
org$frostlang$frostc$FixedArray* $tmp4240 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4241 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4242 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4229;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2062
frost$core$Int64 $tmp4243 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$Kind $tmp4244 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4243);
org$frostlang$frostc$parser$Token$nullable $tmp4245 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4244, &$s4246);
*(&local0) = $tmp4245;
// line 2063
org$frostlang$frostc$parser$Token$nullable $tmp4247 = *(&local0);
frost$core$Bit $tmp4248 = frost$core$Bit$init$builtin_bit(!$tmp4247.nonnull);
bool $tmp4249 = $tmp4248.value;
if ($tmp4249) goto block1; else goto block2;
block1:;
// line 2064
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2066
org$frostlang$frostc$FixedArray* $tmp4250 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
org$frostlang$frostc$FixedArray* $tmp4251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
*(&local1) = $tmp4250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
// line 2067
org$frostlang$frostc$FixedArray* $tmp4252 = *(&local1);
frost$core$Bit $tmp4253 = frost$core$Bit$init$builtin_bit($tmp4252 == NULL);
bool $tmp4254 = $tmp4253.value;
if ($tmp4254) goto block3; else goto block4;
block3:;
// line 2068
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4255 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2070
frost$core$Int64 $tmp4256 = (frost$core$Int64) {48};
org$frostlang$frostc$parser$Token$Kind $tmp4257 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4256);
org$frostlang$frostc$parser$Token$nullable $tmp4258 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4257, &$s4259);
frost$core$Bit $tmp4260 = frost$core$Bit$init$builtin_bit(!$tmp4258.nonnull);
bool $tmp4261 = $tmp4260.value;
if ($tmp4261) goto block5; else goto block6;
block5:;
// line 2071
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2073
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2074
frost$core$Int64 $tmp4263 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4264 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4263);
org$frostlang$frostc$parser$Token$nullable $tmp4265 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4264);
frost$core$Bit $tmp4266 = frost$core$Bit$init$builtin_bit($tmp4265.nonnull);
bool $tmp4267 = $tmp4266.value;
if ($tmp4267) goto block7; else goto block9;
block7:;
// line 2075
frost$core$Int64 $tmp4268 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4269 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4268);
org$frostlang$frostc$parser$Token$nullable $tmp4270 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4269, &$s4271);
*(&local3) = $tmp4270;
// line 2076
org$frostlang$frostc$parser$Token$nullable $tmp4272 = *(&local3);
frost$core$Bit $tmp4273 = frost$core$Bit$init$builtin_bit(!$tmp4272.nonnull);
bool $tmp4274 = $tmp4273.value;
if ($tmp4274) goto block10; else goto block11;
block10:;
// line 2077
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4275));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2079
org$frostlang$frostc$ASTNode* $tmp4277 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4278 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4279 = *(&local3);
org$frostlang$frostc$Position $tmp4280 = ((org$frostlang$frostc$parser$Token) $tmp4279.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4281 = *(&local3);
frost$core$String* $tmp4282 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4281.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4277, $tmp4278, $tmp4280, $tmp4282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
org$frostlang$frostc$ASTNode* $tmp4283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
*(&local2) = $tmp4277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
// line 2080
frost$core$Int64 $tmp4284 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4285 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4284);
org$frostlang$frostc$parser$Token$nullable $tmp4286 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4285, &$s4287);
frost$core$Bit $tmp4288 = frost$core$Bit$init$builtin_bit(!$tmp4286.nonnull);
bool $tmp4289 = $tmp4288.value;
if ($tmp4289) goto block12; else goto block13;
block12:;
// line 2081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4290 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4290));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
goto block8;
block9:;
// line 1
// line 2085
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 2087
org$frostlang$frostc$FixedArray* $tmp4293 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
org$frostlang$frostc$FixedArray* $tmp4294 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
*(&local4) = $tmp4293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
// line 2088
org$frostlang$frostc$FixedArray* $tmp4295 = *(&local4);
frost$core$Bit $tmp4296 = frost$core$Bit$init$builtin_bit($tmp4295 == NULL);
bool $tmp4297 = $tmp4296.value;
if ($tmp4297) goto block14; else goto block15;
block14:;
// line 2089
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// line 2091
org$frostlang$frostc$ASTNode* $tmp4301 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4302 = (frost$core$Int64) {42};
org$frostlang$frostc$parser$Token$nullable $tmp4303 = *(&local0);
org$frostlang$frostc$Position $tmp4304 = ((org$frostlang$frostc$parser$Token) $tmp4303.value).position;
org$frostlang$frostc$FixedArray* $tmp4305 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4306 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4307 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4301, $tmp4302, $tmp4304, $tmp4305, $tmp4306, $tmp4307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
org$frostlang$frostc$FixedArray* $tmp4308 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4301;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$statement$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$parser$Token$nullable local1;
// line 2099
org$frostlang$frostc$parser$Token $tmp4311 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4312 = $tmp4311.kind;
frost$core$Int64 $tmp4313 = $tmp4312.$rawValue;
frost$core$Int64 $tmp4314 = (frost$core$Int64) {37};
frost$core$Bit $tmp4315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4314);
bool $tmp4316 = $tmp4315.value;
if ($tmp4316) goto block2; else goto block3;
block2:;
// line 2100
org$frostlang$frostc$ASTNode* $tmp4317 = org$frostlang$frostc$parser$Parser$ifStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
return $tmp4317;
block3:;
frost$core$Int64 $tmp4318 = (frost$core$Int64) {33};
frost$core$Bit $tmp4319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4318);
bool $tmp4320 = $tmp4319.value;
if ($tmp4320) goto block4; else goto block5;
block4:;
// line 2101
org$frostlang$frostc$ASTNode* $tmp4321 = org$frostlang$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4321));
return $tmp4321;
block5:;
frost$core$Int64 $tmp4322 = (frost$core$Int64) {32};
frost$core$Bit $tmp4323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4322);
bool $tmp4324 = $tmp4323.value;
if ($tmp4324) goto block6; else goto block7;
block6:;
// line 2102
org$frostlang$frostc$ASTNode* $tmp4325 = org$frostlang$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
return $tmp4325;
block7:;
frost$core$Int64 $tmp4326 = (frost$core$Int64) {31};
frost$core$Bit $tmp4327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4326);
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block8; else goto block9;
block8:;
// line 2103
org$frostlang$frostc$ASTNode* $tmp4329 = org$frostlang$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
return $tmp4329;
block9:;
frost$core$Int64 $tmp4330 = (frost$core$Int64) {36};
frost$core$Bit $tmp4331 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4330);
bool $tmp4332 = $tmp4331.value;
if ($tmp4332) goto block10; else goto block11;
block10:;
// line 2104
org$frostlang$frostc$ASTNode* $tmp4333 = org$frostlang$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4333));
return $tmp4333;
block11:;
frost$core$Int64 $tmp4334 = (frost$core$Int64) {45};
frost$core$Bit $tmp4335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4334);
bool $tmp4336 = $tmp4335.value;
if ($tmp4336) goto block12; else goto block13;
block12:;
// line 2105
org$frostlang$frostc$ASTNode* $tmp4337 = org$frostlang$frostc$parser$Parser$assertStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
return $tmp4337;
block13:;
frost$core$Int64 $tmp4338 = (frost$core$Int64) {39};
frost$core$Bit $tmp4339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4338);
bool $tmp4340 = $tmp4339.value;
if ($tmp4340) goto block14; else goto block15;
block14:;
// line 2106
org$frostlang$frostc$ASTNode* $tmp4341 = org$frostlang$frostc$parser$Parser$matchStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
return $tmp4341;
block15:;
frost$core$Int64 $tmp4342 = (frost$core$Int64) {103};
frost$core$Bit $tmp4343 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4342);
bool $tmp4344 = $tmp4343.value;
if ($tmp4344) goto block16; else goto block17;
block16:;
// line 2107
org$frostlang$frostc$ASTNode* $tmp4345 = org$frostlang$frostc$parser$Parser$block$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
return $tmp4345;
block17:;
frost$core$Int64 $tmp4346 = (frost$core$Int64) {52};
frost$core$Bit $tmp4347 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4346);
bool $tmp4348 = $tmp4347.value;
if ($tmp4348) goto block18; else goto block19;
block18:;
// line 2109
org$frostlang$frostc$parser$Token $tmp4349 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp4349;
// line 2110
frost$core$Int64 $tmp4350 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4351 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4350);
org$frostlang$frostc$parser$Token$nullable $tmp4352 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4351);
*(&local1) = $tmp4352;
// line 2111
org$frostlang$frostc$parser$Token$nullable $tmp4353 = *(&local1);
frost$core$Bit $tmp4354 = frost$core$Bit$init$builtin_bit($tmp4353.nonnull);
bool $tmp4355 = $tmp4354.value;
if ($tmp4355) goto block20; else goto block21;
block20:;
// line 2112
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4356 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4357 = *$tmp4356;
frost$core$Bit $tmp4358 = frost$core$Bit$init$builtin_bit($tmp4357 != NULL);
bool $tmp4359 = $tmp4358.value;
if ($tmp4359) goto block22; else goto block23;
block22:;
// line 2113
org$frostlang$frostc$parser$Token$nullable $tmp4360 = *(&local1);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, ((org$frostlang$frostc$parser$Token) $tmp4360.value));
// line 2114
org$frostlang$frostc$parser$Token $tmp4361 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4361);
// line 2115
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4362 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4363 = *$tmp4362;
frost$core$Int64 $tmp4364 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4365 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4364);
$fn4367 $tmp4366 = ($fn4367) $tmp4363->$class->vtable[3];
$tmp4366($tmp4363, $tmp4365);
// line 2116
org$frostlang$frostc$parser$Token $tmp4368 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2117
org$frostlang$frostc$parser$Token $tmp4369 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2118
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp4370 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp4371 = *$tmp4370;
frost$core$Int64 $tmp4372 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4373 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4372);
$fn4375 $tmp4374 = ($fn4375) $tmp4371->$class->vtable[4];
$tmp4374($tmp4371, $tmp4373);
goto block23;
block23:;
// line 2120
org$frostlang$frostc$parser$Token $tmp4376 = *(&local0);
frost$core$String* $tmp4377 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4376);
org$frostlang$frostc$ASTNode* $tmp4378 = org$frostlang$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp4377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
return $tmp4378;
block21:;
// line 2122
org$frostlang$frostc$parser$Token $tmp4379 = *(&local0);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token(param0, $tmp4379);
// line 2123
org$frostlang$frostc$ASTNode* $tmp4380 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
return $tmp4380;
block19:;
frost$core$Int64 $tmp4381 = (frost$core$Int64) {49};
frost$core$Bit $tmp4382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4381);
bool $tmp4383 = $tmp4382.value;
if ($tmp4383) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4384 = (frost$core$Int64) {50};
frost$core$Bit $tmp4385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4384);
bool $tmp4386 = $tmp4385.value;
if ($tmp4386) goto block24; else goto block26;
block24:;
// line 2126
org$frostlang$frostc$ASTNode* $tmp4387 = org$frostlang$frostc$parser$Parser$expressionOrAssignment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
return $tmp4387;
block26:;
frost$core$Int64 $tmp4388 = (frost$core$Int64) {24};
frost$core$Bit $tmp4389 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4388);
bool $tmp4390 = $tmp4389.value;
if ($tmp4390) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4391 = (frost$core$Int64) {25};
frost$core$Bit $tmp4392 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4391);
bool $tmp4393 = $tmp4392.value;
if ($tmp4393) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4394 = (frost$core$Int64) {26};
frost$core$Bit $tmp4395 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4394);
bool $tmp4396 = $tmp4395.value;
if ($tmp4396) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4397 = (frost$core$Int64) {27};
frost$core$Bit $tmp4398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4397);
bool $tmp4399 = $tmp4398.value;
if ($tmp4399) goto block27; else goto block31;
block27:;
// line 2129
org$frostlang$frostc$ASTNode* $tmp4400 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
return $tmp4400;
block31:;
frost$core$Int64 $tmp4401 = (frost$core$Int64) {23};
frost$core$Bit $tmp4402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4401);
bool $tmp4403 = $tmp4402.value;
if ($tmp4403) goto block32; else goto block33;
block32:;
// line 2132
org$frostlang$frostc$ASTNode* $tmp4404 = org$frostlang$frostc$parser$Parser$initCall$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
return $tmp4404;
block33:;
frost$core$Int64 $tmp4405 = (frost$core$Int64) {22};
frost$core$Bit $tmp4406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4405);
bool $tmp4407 = $tmp4406.value;
if ($tmp4407) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4408 = (frost$core$Int64) {21};
frost$core$Bit $tmp4409 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4408);
bool $tmp4410 = $tmp4409.value;
if ($tmp4410) goto block34; else goto block36;
block34:;
// line 2135
org$frostlang$frostc$ASTNode* $tmp4411 = org$frostlang$frostc$parser$Parser$innerMethod$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
return $tmp4411;
block36:;
frost$core$Int64 $tmp4412 = (frost$core$Int64) {47};
frost$core$Bit $tmp4413 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4412);
bool $tmp4414 = $tmp4413.value;
if ($tmp4414) goto block37; else goto block38;
block37:;
// line 2138
org$frostlang$frostc$ASTNode* $tmp4415 = org$frostlang$frostc$parser$Parser$tryStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
return $tmp4415;
block38:;
frost$core$Int64 $tmp4416 = (frost$core$Int64) {46};
frost$core$Bit $tmp4417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4313, $tmp4416);
bool $tmp4418 = $tmp4417.value;
if ($tmp4418) goto block39; else goto block40;
block39:;
// line 2141
org$frostlang$frostc$ASTNode* $tmp4419 = org$frostlang$frostc$parser$Parser$unreachableStatement$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
return $tmp4419;
block40:;
// line 2145
frost$core$Int64 $tmp4420 = (frost$core$Int64) {37};
org$frostlang$frostc$parser$Token$Kind $tmp4421 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4420);
org$frostlang$frostc$parser$Token$nullable $tmp4422 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4421, &$s4423);
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
frost$core$Int64 $tmp4424 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp4425 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4424);
org$frostlang$frostc$parser$Token$nullable $tmp4426 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4425, &$s4427);
*(&local0) = $tmp4426;
// line 2156
org$frostlang$frostc$parser$Token$nullable $tmp4428 = *(&local0);
frost$core$Bit $tmp4429 = frost$core$Bit$init$builtin_bit(!$tmp4428.nonnull);
bool $tmp4430 = $tmp4429.value;
if ($tmp4430) goto block1; else goto block2;
block1:;
// line 2157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2159
frost$core$Int64 $tmp4431 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4432 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4431);
org$frostlang$frostc$parser$Token$nullable $tmp4433 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4432, &$s4434);
*(&local1) = $tmp4433;
// line 2160
org$frostlang$frostc$parser$Token$nullable $tmp4435 = *(&local1);
frost$core$Bit $tmp4436 = frost$core$Bit$init$builtin_bit(!$tmp4435.nonnull);
bool $tmp4437 = $tmp4436.value;
if ($tmp4437) goto block3; else goto block4;
block3:;
// line 2161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2163
frost$core$MutableString* $tmp4438 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4439 = *(&local1);
frost$core$String* $tmp4440 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4439.value));
frost$core$MutableString$init$frost$core$String($tmp4438, $tmp4440);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
frost$core$MutableString* $tmp4441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4441));
*(&local2) = $tmp4438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
// line 2164
goto block5;
block5:;
// line 2165
frost$core$Int64 $tmp4442 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4443 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4442);
org$frostlang$frostc$parser$Token$nullable $tmp4444 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4443);
*(&local1) = $tmp4444;
// line 2166
org$frostlang$frostc$parser$Token$nullable $tmp4445 = *(&local1);
frost$core$Bit $tmp4446 = frost$core$Bit$init$builtin_bit(!$tmp4445.nonnull);
bool $tmp4447 = $tmp4446.value;
if ($tmp4447) goto block7; else goto block8;
block7:;
// line 2167
goto block6;
block8:;
// line 2169
frost$core$MutableString* $tmp4448 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4448, &$s4449);
// line 2170
frost$core$Int64 $tmp4450 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4451 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4450);
org$frostlang$frostc$parser$Token$nullable $tmp4452 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4451, &$s4453);
*(&local1) = $tmp4452;
// line 2171
org$frostlang$frostc$parser$Token$nullable $tmp4454 = *(&local1);
frost$core$Bit $tmp4455 = frost$core$Bit$init$builtin_bit(!$tmp4454.nonnull);
bool $tmp4456 = $tmp4455.value;
if ($tmp4456) goto block9; else goto block10;
block9:;
// line 2172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2174
frost$core$MutableString* $tmp4458 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4459 = *(&local1);
frost$core$String* $tmp4460 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4459.value));
frost$core$MutableString$append$frost$core$String($tmp4458, $tmp4460);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4460));
goto block5;
block6:;
// line 2176
org$frostlang$frostc$ASTNode* $tmp4461 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4462 = (frost$core$Int64) {33};
org$frostlang$frostc$parser$Token$nullable $tmp4463 = *(&local0);
org$frostlang$frostc$Position $tmp4464 = ((org$frostlang$frostc$parser$Token) $tmp4463.value).position;
frost$core$MutableString* $tmp4465 = *(&local2);
frost$core$String* $tmp4466 = frost$core$MutableString$finish$R$frost$core$String($tmp4465);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4461, $tmp4462, $tmp4464, $tmp4466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
frost$core$MutableString* $tmp4467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4461;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2183
frost$core$Int64 $tmp4468 = (frost$core$Int64) {16};
org$frostlang$frostc$parser$Token$Kind $tmp4469 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4468);
org$frostlang$frostc$parser$Token$nullable $tmp4470 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4469, &$s4471);
*(&local0) = $tmp4470;
// line 2184
org$frostlang$frostc$parser$Token$nullable $tmp4472 = *(&local0);
frost$core$Bit $tmp4473 = frost$core$Bit$init$builtin_bit(!$tmp4472.nonnull);
bool $tmp4474 = $tmp4473.value;
if ($tmp4474) goto block1; else goto block2;
block1:;
// line 2185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2187
frost$core$Int64 $tmp4475 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4476 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4475);
org$frostlang$frostc$parser$Token$nullable $tmp4477 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4476, &$s4478);
*(&local1) = $tmp4477;
// line 2188
org$frostlang$frostc$parser$Token$nullable $tmp4479 = *(&local1);
frost$core$Bit $tmp4480 = frost$core$Bit$init$builtin_bit(!$tmp4479.nonnull);
bool $tmp4481 = $tmp4480.value;
if ($tmp4481) goto block3; else goto block4;
block3:;
// line 2189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2191
frost$core$MutableString* $tmp4482 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$parser$Token$nullable $tmp4483 = *(&local1);
frost$core$String* $tmp4484 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4483.value));
frost$core$MutableString$init$frost$core$String($tmp4482, $tmp4484);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
frost$core$MutableString* $tmp4485 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
*(&local2) = $tmp4482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
// line 2192
goto block5;
block5:;
// line 2193
frost$core$Int64 $tmp4486 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp4487 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4486);
org$frostlang$frostc$parser$Token$nullable $tmp4488 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4487);
*(&local1) = $tmp4488;
// line 2194
org$frostlang$frostc$parser$Token$nullable $tmp4489 = *(&local1);
frost$core$Bit $tmp4490 = frost$core$Bit$init$builtin_bit(!$tmp4489.nonnull);
bool $tmp4491 = $tmp4490.value;
if ($tmp4491) goto block7; else goto block8;
block7:;
// line 2195
goto block6;
block8:;
// line 2197
frost$core$MutableString* $tmp4492 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4492, &$s4493);
// line 2198
frost$core$Int64 $tmp4494 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4495 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4494);
org$frostlang$frostc$parser$Token$nullable $tmp4496 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4495, &$s4497);
*(&local1) = $tmp4496;
// line 2199
org$frostlang$frostc$parser$Token$nullable $tmp4498 = *(&local1);
frost$core$Bit $tmp4499 = frost$core$Bit$init$builtin_bit(!$tmp4498.nonnull);
bool $tmp4500 = $tmp4499.value;
if ($tmp4500) goto block9; else goto block10;
block9:;
// line 2200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 2202
frost$core$MutableString* $tmp4502 = *(&local2);
org$frostlang$frostc$parser$Token$nullable $tmp4503 = *(&local1);
frost$core$String* $tmp4504 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4503.value));
frost$core$MutableString$append$frost$core$String($tmp4502, $tmp4504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
goto block5;
block6:;
// line 2204
org$frostlang$frostc$ASTNode* $tmp4505 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4506 = (frost$core$Int64) {51};
org$frostlang$frostc$parser$Token$nullable $tmp4507 = *(&local0);
org$frostlang$frostc$Position $tmp4508 = ((org$frostlang$frostc$parser$Token) $tmp4507.value).position;
frost$core$MutableString* $tmp4509 = *(&local2);
frost$core$String* $tmp4510 = frost$core$MutableString$finish$R$frost$core$String($tmp4509);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4505, $tmp4506, $tmp4508, $tmp4510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4505));
frost$core$MutableString* $tmp4511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4505;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 2211
frost$core$Int64 $tmp4512 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4513 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4512);
org$frostlang$frostc$parser$Token$nullable $tmp4514 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4513, &$s4515);
*(&local0) = $tmp4514;
// line 2212
org$frostlang$frostc$parser$Token$nullable $tmp4516 = *(&local0);
frost$core$Bit $tmp4517 = frost$core$Bit$init$builtin_bit(!$tmp4516.nonnull);
bool $tmp4518 = $tmp4517.value;
if ($tmp4518) goto block1; else goto block2;
block1:;
// line 2213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2215
frost$core$Int64 $tmp4519 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4520 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4519);
org$frostlang$frostc$parser$Token$nullable $tmp4521 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4520, &$s4522);
*(&local1) = $tmp4521;
// line 2216
org$frostlang$frostc$parser$Token$nullable $tmp4523 = *(&local1);
frost$core$Bit $tmp4524 = frost$core$Bit$init$builtin_bit(!$tmp4523.nonnull);
bool $tmp4525 = $tmp4524.value;
if ($tmp4525) goto block3; else goto block4;
block3:;
// line 2217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2219
frost$collections$Array* $tmp4526 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4526);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
frost$collections$Array* $tmp4527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4527));
*(&local2) = $tmp4526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
// line 2220
frost$core$Int64 $tmp4528 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4529 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4528);
org$frostlang$frostc$parser$Token$nullable $tmp4530 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4529);
frost$core$Bit $tmp4531 = frost$core$Bit$init$builtin_bit($tmp4530.nonnull);
bool $tmp4532 = $tmp4531.value;
if ($tmp4532) goto block5; else goto block7;
block5:;
// line 2221
org$frostlang$frostc$ASTNode* $tmp4533 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
org$frostlang$frostc$ASTNode* $tmp4534 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
*(&local3) = $tmp4533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
// line 2222
org$frostlang$frostc$ASTNode* $tmp4535 = *(&local3);
frost$core$Bit $tmp4536 = frost$core$Bit$init$builtin_bit($tmp4535 == NULL);
bool $tmp4537 = $tmp4536.value;
if ($tmp4537) goto block8; else goto block9;
block8:;
// line 2223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4538));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4539 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2225
frost$collections$Array* $tmp4540 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4541 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4542 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4543 = *(&local1);
org$frostlang$frostc$Position $tmp4544 = ((org$frostlang$frostc$parser$Token) $tmp4543.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4545 = *(&local1);
frost$core$String* $tmp4546 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4545.value));
org$frostlang$frostc$ASTNode* $tmp4547 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4541, $tmp4542, $tmp4544, $tmp4546, $tmp4547);
frost$collections$Array$add$frost$collections$Array$T($tmp4540, ((frost$core$Object*) $tmp4541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
org$frostlang$frostc$ASTNode* $tmp4548 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2228
frost$collections$Array* $tmp4549 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4550 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4551 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4552 = *(&local1);
org$frostlang$frostc$Position $tmp4553 = ((org$frostlang$frostc$parser$Token) $tmp4552.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4554 = *(&local1);
frost$core$String* $tmp4555 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4554.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4550, $tmp4551, $tmp4553, $tmp4555);
frost$collections$Array$add$frost$collections$Array$T($tmp4549, ((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
goto block6;
block6:;
// line 2230
goto block10;
block10:;
frost$core$Int64 $tmp4556 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4557 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4556);
org$frostlang$frostc$parser$Token$nullable $tmp4558 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4557);
frost$core$Bit $tmp4559 = frost$core$Bit$init$builtin_bit($tmp4558.nonnull);
bool $tmp4560 = $tmp4559.value;
if ($tmp4560) goto block11; else goto block12;
block11:;
// line 2231
frost$core$Int64 $tmp4561 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4562 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4561);
org$frostlang$frostc$parser$Token$nullable $tmp4563 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4562, &$s4564);
*(&local1) = $tmp4563;
// line 2232
org$frostlang$frostc$parser$Token$nullable $tmp4565 = *(&local1);
frost$core$Bit $tmp4566 = frost$core$Bit$init$builtin_bit(!$tmp4565.nonnull);
bool $tmp4567 = $tmp4566.value;
if ($tmp4567) goto block13; else goto block14;
block13:;
// line 2233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block14:;
// line 2235
frost$core$Int64 $tmp4569 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4570 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4569);
org$frostlang$frostc$parser$Token$nullable $tmp4571 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4570);
frost$core$Bit $tmp4572 = frost$core$Bit$init$builtin_bit($tmp4571.nonnull);
bool $tmp4573 = $tmp4572.value;
if ($tmp4573) goto block15; else goto block17;
block15:;
// line 2236
org$frostlang$frostc$ASTNode* $tmp4574 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
org$frostlang$frostc$ASTNode* $tmp4575 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
*(&local4) = $tmp4574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
// line 2237
org$frostlang$frostc$ASTNode* $tmp4576 = *(&local4);
frost$core$Bit $tmp4577 = frost$core$Bit$init$builtin_bit($tmp4576 == NULL);
bool $tmp4578 = $tmp4577.value;
if ($tmp4578) goto block18; else goto block19;
block18:;
// line 2238
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4579 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4579));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4580 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4580));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block19:;
// line 2240
frost$collections$Array* $tmp4581 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4582 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4583 = (frost$core$Int64) {47};
org$frostlang$frostc$parser$Token$nullable $tmp4584 = *(&local1);
org$frostlang$frostc$Position $tmp4585 = ((org$frostlang$frostc$parser$Token) $tmp4584.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4586 = *(&local1);
frost$core$String* $tmp4587 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4586.value));
org$frostlang$frostc$ASTNode* $tmp4588 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q($tmp4582, $tmp4583, $tmp4585, $tmp4587, $tmp4588);
frost$collections$Array$add$frost$collections$Array$T($tmp4581, ((frost$core$Object*) $tmp4582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4582));
org$frostlang$frostc$ASTNode* $tmp4589 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2243
frost$collections$Array* $tmp4590 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp4591 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4592 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$nullable $tmp4593 = *(&local1);
org$frostlang$frostc$Position $tmp4594 = ((org$frostlang$frostc$parser$Token) $tmp4593.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4595 = *(&local1);
frost$core$String* $tmp4596 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4595.value));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4591, $tmp4592, $tmp4594, $tmp4596);
frost$collections$Array$add$frost$collections$Array$T($tmp4590, ((frost$core$Object*) $tmp4591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
goto block16;
block16:;
goto block10;
block12:;
// line 2246
frost$core$Int64 $tmp4597 = (frost$core$Int64) {67};
org$frostlang$frostc$parser$Token$Kind $tmp4598 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4597);
org$frostlang$frostc$parser$Token$nullable $tmp4599 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4598, &$s4600);
frost$core$Bit $tmp4601 = frost$core$Bit$init$builtin_bit(!$tmp4599.nonnull);
bool $tmp4602 = $tmp4601.value;
if ($tmp4602) goto block20; else goto block21;
block20:;
// line 2247
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4603 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4603));
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block21:;
// line 2249
frost$collections$Array* $tmp4604 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4605 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$collections$Array* $tmp4606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4605;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2256
frost$core$Int64 $tmp4607 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4608 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4607);
org$frostlang$frostc$parser$Token$nullable $tmp4609 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4608, &$s4610);
*(&local0) = $tmp4609;
// line 2257
org$frostlang$frostc$parser$Token$nullable $tmp4611 = *(&local0);
frost$core$Bit $tmp4612 = frost$core$Bit$init$builtin_bit(!$tmp4611.nonnull);
bool $tmp4613 = $tmp4612.value;
if ($tmp4613) goto block1; else goto block2;
block1:;
// line 2258
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2260
frost$collections$Array* $tmp4614 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4614);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
frost$collections$Array* $tmp4615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local1) = $tmp4614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
// line 2261
org$frostlang$frostc$ASTNode* $tmp4616 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
org$frostlang$frostc$ASTNode* $tmp4617 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
*(&local2) = $tmp4616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
// line 2262
org$frostlang$frostc$ASTNode* $tmp4618 = *(&local2);
frost$core$Bit $tmp4619 = frost$core$Bit$init$builtin_bit($tmp4618 == NULL);
bool $tmp4620 = $tmp4619.value;
if ($tmp4620) goto block3; else goto block4;
block3:;
// line 2263
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block4:;
// line 2265
frost$collections$Array* $tmp4623 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4624 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4623, ((frost$core$Object*) $tmp4624));
// line 2266
goto block5;
block5:;
frost$core$Int64 $tmp4625 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4626 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4625);
org$frostlang$frostc$parser$Token$nullable $tmp4627 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4626);
frost$core$Bit $tmp4628 = frost$core$Bit$init$builtin_bit($tmp4627.nonnull);
bool $tmp4629 = $tmp4628.value;
if ($tmp4629) goto block6; else goto block7;
block6:;
// line 2267
org$frostlang$frostc$ASTNode* $tmp4630 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
org$frostlang$frostc$ASTNode* $tmp4631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local2) = $tmp4630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
// line 2268
org$frostlang$frostc$ASTNode* $tmp4632 = *(&local2);
frost$core$Bit $tmp4633 = frost$core$Bit$init$builtin_bit($tmp4632 == NULL);
bool $tmp4634 = $tmp4633.value;
if ($tmp4634) goto block8; else goto block9;
block8:;
// line 2269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block9:;
// line 2271
frost$collections$Array* $tmp4637 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4638 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4637, ((frost$core$Object*) $tmp4638));
goto block5;
block7:;
// line 2273
frost$collections$Array* $tmp4639 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4640 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
org$frostlang$frostc$ASTNode* $tmp4641 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4642 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4640;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$parser$Token$nullable local3;
org$frostlang$frostc$parser$Token$nullable local4;
// line 2280
frost$core$Int64 $tmp4643 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4644 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4643);
org$frostlang$frostc$parser$Token$nullable $tmp4645 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4644, &$s4646);
*(&local0) = $tmp4645;
// line 2281
*(&local1) = ((frost$core$String*) NULL);
// line 2282
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2283
frost$core$Int64 $tmp4648 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4649 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4648);
org$frostlang$frostc$parser$Token$nullable $tmp4650 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4649);
*(&local3) = $tmp4650;
// line 2284
org$frostlang$frostc$parser$Token$nullable $tmp4651 = *(&local3);
frost$core$Bit $tmp4652 = frost$core$Bit$init$builtin_bit($tmp4651.nonnull);
bool $tmp4653 = $tmp4652.value;
if ($tmp4653) goto block1; else goto block2;
block1:;
// line 2285
org$frostlang$frostc$ASTNode* $tmp4654 = org$frostlang$frostc$parser$Parser$expression$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4654));
org$frostlang$frostc$ASTNode* $tmp4655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
*(&local2) = $tmp4654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4654));
// line 2286
org$frostlang$frostc$ASTNode* $tmp4656 = *(&local2);
frost$core$Bit $tmp4657 = frost$core$Bit$init$builtin_bit($tmp4656 == NULL);
bool $tmp4658 = $tmp4657.value;
if ($tmp4658) goto block3; else goto block4;
block3:;
// line 2287
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4659 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4659));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4660 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2289
frost$core$Int64 $tmp4661 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4662 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4661);
org$frostlang$frostc$parser$Token$nullable $tmp4663 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4662, &$s4664);
*(&local4) = $tmp4663;
// line 2290
org$frostlang$frostc$parser$Token$nullable $tmp4665 = *(&local4);
frost$core$Bit $tmp4666 = frost$core$Bit$init$builtin_bit(!$tmp4665.nonnull);
bool $tmp4667 = $tmp4666.value;
if ($tmp4667) goto block5; else goto block6;
block5:;
// line 2291
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4668 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4668));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2293
frost$core$String** $tmp4670 = &param0->source;
frost$core$String* $tmp4671 = *$tmp4670;
frost$core$String** $tmp4672 = &param0->source;
frost$core$String* $tmp4673 = *$tmp4672;
org$frostlang$frostc$parser$Token$nullable $tmp4674 = *(&local3);
frost$core$String$Index $tmp4675 = ((org$frostlang$frostc$parser$Token) $tmp4674.value).start;
frost$core$String$Index $tmp4676 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4673, $tmp4675);
org$frostlang$frostc$parser$Token$nullable $tmp4677 = *(&local4);
frost$core$String$Index $tmp4678 = ((org$frostlang$frostc$parser$Token) $tmp4677.value).start;
frost$core$Bit $tmp4679 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4680 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4676, $tmp4678, $tmp4679);
frost$core$String* $tmp4681 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4671, $tmp4680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
frost$core$String* $tmp4682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
*(&local1) = $tmp4681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
goto block2;
block2:;
// line 2295
org$frostlang$frostc$ASTNode* $tmp4683 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4684 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$nullable $tmp4685 = *(&local0);
org$frostlang$frostc$Position $tmp4686 = ((org$frostlang$frostc$parser$Token) $tmp4685.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4687 = *(&local0);
frost$core$String* $tmp4688 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4687.value));
frost$core$String* $tmp4689 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4690 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q($tmp4683, $tmp4684, $tmp4686, $tmp4688, $tmp4689, $tmp4690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
org$frostlang$frostc$ASTNode* $tmp4691 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
*(&local1) = ((frost$core$String*) NULL);
return $tmp4683;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2302
frost$collections$Array* $tmp4693 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4693);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4693));
frost$collections$Array* $tmp4694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
*(&local0) = $tmp4693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4693));
// line 2303
goto block1;
block1:;
org$frostlang$frostc$parser$Token $tmp4695 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4696 = $tmp4695.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4697;
$tmp4697 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4697->value = $tmp4696;
frost$core$Int64 $tmp4698 = (frost$core$Int64) {14};
org$frostlang$frostc$parser$Token$Kind $tmp4699 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4698);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4700;
$tmp4700 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4700->value = $tmp4699;
ITable* $tmp4701 = ((frost$core$Equatable*) $tmp4697)->$class->itable;
while ($tmp4701->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4701 = $tmp4701->next;
}
$fn4703 $tmp4702 = $tmp4701->methods[0];
frost$core$Bit $tmp4704 = $tmp4702(((frost$core$Equatable*) $tmp4697), ((frost$core$Equatable*) $tmp4700));
bool $tmp4705 = $tmp4704.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4700)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4697)));
if ($tmp4705) goto block2; else goto block3;
block2:;
// line 2304
org$frostlang$frostc$ASTNode* $tmp4706 = org$frostlang$frostc$parser$Parser$annotation$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
org$frostlang$frostc$ASTNode* $tmp4707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
*(&local1) = $tmp4706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
// line 2305
org$frostlang$frostc$ASTNode* $tmp4708 = *(&local1);
frost$core$Bit $tmp4709 = frost$core$Bit$init$builtin_bit($tmp4708 == NULL);
bool $tmp4710 = $tmp4709.value;
if ($tmp4710) goto block4; else goto block5;
block4:;
// line 2306
org$frostlang$frostc$ASTNode* $tmp4711 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2308
frost$collections$Array* $tmp4712 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp4713 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4712, ((frost$core$Object*) $tmp4713));
org$frostlang$frostc$ASTNode* $tmp4714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2310
frost$collections$Array* $tmp4715 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4716 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4715);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
frost$collections$Array* $tmp4717 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4716;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlang$frostc$parser$Token local2;
// line 2314
frost$core$Int64 $tmp4718 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4719 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4718);
org$frostlang$frostc$parser$Token$nullable $tmp4720 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4719, &$s4721);
*(&local0) = $tmp4720;
// line 2315
org$frostlang$frostc$parser$Token$nullable $tmp4722 = *(&local0);
frost$core$Bit $tmp4723 = frost$core$Bit$init$builtin_bit(!$tmp4722.nonnull);
bool $tmp4724 = $tmp4723.value;
if ($tmp4724) goto block1; else goto block2;
block1:;
// line 2316
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2318
frost$core$MutableString* $tmp4725 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4725);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$MutableString* $tmp4726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
*(&local1) = $tmp4725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
// line 2319
goto block3;
block3:;
// line 2320
org$frostlang$frostc$parser$Token $tmp4727 = org$frostlang$frostc$parser$Parser$rawNext$R$org$frostlang$frostc$parser$Token(param0);
*(&local2) = $tmp4727;
// line 2321
org$frostlang$frostc$parser$Token $tmp4728 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4729 = $tmp4728.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4730;
$tmp4730 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4730->value = $tmp4729;
frost$core$Int64 $tmp4731 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp4732 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4731);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4733;
$tmp4733 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4733->value = $tmp4732;
ITable* $tmp4734 = ((frost$core$Equatable*) $tmp4730)->$class->itable;
while ($tmp4734->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4734 = $tmp4734->next;
}
$fn4736 $tmp4735 = $tmp4734->methods[0];
frost$core$Bit $tmp4737 = $tmp4735(((frost$core$Equatable*) $tmp4730), ((frost$core$Equatable*) $tmp4733));
bool $tmp4738 = $tmp4737.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4733)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4730)));
if ($tmp4738) goto block5; else goto block6;
block5:;
// line 2322
goto block4;
block6:;
// line 2324
org$frostlang$frostc$parser$Token $tmp4739 = *(&local2);
org$frostlang$frostc$parser$Token$Kind $tmp4740 = $tmp4739.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4741;
$tmp4741 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4741->value = $tmp4740;
frost$core$Int64 $tmp4742 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp4743 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4742);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4744;
$tmp4744 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4744->value = $tmp4743;
ITable* $tmp4745 = ((frost$core$Equatable*) $tmp4741)->$class->itable;
while ($tmp4745->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4745 = $tmp4745->next;
}
$fn4747 $tmp4746 = $tmp4745->methods[0];
frost$core$Bit $tmp4748 = $tmp4746(((frost$core$Equatable*) $tmp4741), ((frost$core$Equatable*) $tmp4744));
bool $tmp4749 = $tmp4748.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4744)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4741)));
if ($tmp4749) goto block7; else goto block8;
block7:;
// line 2325
org$frostlang$frostc$parser$Token$nullable $tmp4750 = *(&local0);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4750.value), &$s4751);
// line 2326
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2328
frost$core$MutableString* $tmp4753 = *(&local1);
org$frostlang$frostc$parser$Token $tmp4754 = *(&local2);
frost$core$String* $tmp4755 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp4754);
frost$core$MutableString$append$frost$core$String($tmp4753, $tmp4755);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
goto block3;
block4:;
// line 2330
org$frostlang$frostc$ASTNode* $tmp4756 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4757 = (frost$core$Int64) {40};
org$frostlang$frostc$parser$Token$nullable $tmp4758 = *(&local0);
org$frostlang$frostc$Position $tmp4759 = ((org$frostlang$frostc$parser$Token) $tmp4758.value).position;
frost$core$MutableString* $tmp4760 = *(&local1);
frost$core$String* $tmp4761 = frost$core$MutableString$finish$R$frost$core$String($tmp4760);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4756, $tmp4757, $tmp4759, $tmp4761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$MutableString* $tmp4762 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4762));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4756;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 2337
frost$core$Int64 $tmp4763 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4764 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4763);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4764);
// line 2338
frost$core$Int64 $tmp4765 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp4766 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4765);
org$frostlang$frostc$parser$Token$nullable $tmp4767 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4766, &$s4768);
*(&local0) = $tmp4767;
// line 2339
frost$core$Int64 $tmp4769 = (frost$core$Int64) {5};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4770 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4769);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4770);
// line 2340
org$frostlang$frostc$parser$Token$nullable $tmp4771 = *(&local0);
frost$core$Bit $tmp4772 = frost$core$Bit$init$builtin_bit(!$tmp4771.nonnull);
bool $tmp4773 = $tmp4772.value;
if ($tmp4773) goto block1; else goto block2;
block1:;
// line 2341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2343
org$frostlang$frostc$ASTNode* $tmp4774 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
org$frostlang$frostc$ASTNode* $tmp4775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
*(&local1) = $tmp4774;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
// line 2344
org$frostlang$frostc$ASTNode* $tmp4776 = *(&local1);
frost$core$Bit $tmp4777 = frost$core$Bit$init$builtin_bit($tmp4776 == NULL);
bool $tmp4778 = $tmp4777.value;
if ($tmp4778) goto block3; else goto block4;
block3:;
// line 2345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2347
org$frostlang$frostc$ASTNode* $tmp4780 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4781 = (frost$core$Int64) {34};
org$frostlang$frostc$parser$Token$nullable $tmp4782 = *(&local0);
org$frostlang$frostc$Position $tmp4783 = ((org$frostlang$frostc$parser$Token) $tmp4782.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp4784 = *(&local0);
frost$core$String* $tmp4785 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp4784.value));
org$frostlang$frostc$ASTNode* $tmp4786 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode($tmp4780, $tmp4781, $tmp4783, $tmp4785, $tmp4786);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
org$frostlang$frostc$ASTNode* $tmp4787 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp4780;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2354
frost$core$Int64 $tmp4788 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp4789 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4788);
org$frostlang$frostc$parser$Token$nullable $tmp4790 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4789, &$s4791);
*(&local0) = $tmp4790;
// line 2355
org$frostlang$frostc$parser$Token$nullable $tmp4792 = *(&local0);
frost$core$Bit $tmp4793 = frost$core$Bit$init$builtin_bit(!$tmp4792.nonnull);
bool $tmp4794 = $tmp4793.value;
if ($tmp4794) goto block1; else goto block2;
block1:;
// line 2356
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
return ((org$frostlang$frostc$FixedArray*) NULL);
block2:;
// line 2358
frost$collections$Array* $tmp4795 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4795);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
frost$collections$Array* $tmp4796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
*(&local1) = $tmp4795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
// line 2359
frost$core$Int64 $tmp4797 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4798 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4797);
org$frostlang$frostc$parser$Token$nullable $tmp4799 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4798);
frost$core$Bit $tmp4800 = frost$core$Bit$init$builtin_bit(!$tmp4799.nonnull);
bool $tmp4801 = $tmp4800.value;
if ($tmp4801) goto block3; else goto block4;
block3:;
// line 2360
org$frostlang$frostc$ASTNode* $tmp4802 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
org$frostlang$frostc$ASTNode* $tmp4803 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
*(&local2) = $tmp4802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
// line 2361
org$frostlang$frostc$ASTNode* $tmp4804 = *(&local2);
frost$core$Bit $tmp4805 = frost$core$Bit$init$builtin_bit($tmp4804 == NULL);
bool $tmp4806 = $tmp4805.value;
if ($tmp4806) goto block5; else goto block6;
block5:;
// line 2362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4807 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4808 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4808));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block6:;
// line 2364
frost$collections$Array* $tmp4809 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4810 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4809, ((frost$core$Object*) $tmp4810));
// line 2365
goto block7;
block7:;
frost$core$Int64 $tmp4811 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp4812 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4811);
org$frostlang$frostc$parser$Token$nullable $tmp4813 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4812);
frost$core$Bit $tmp4814 = frost$core$Bit$init$builtin_bit($tmp4813.nonnull);
bool $tmp4815 = $tmp4814.value;
if ($tmp4815) goto block8; else goto block9;
block8:;
// line 2366
org$frostlang$frostc$ASTNode* $tmp4816 = org$frostlang$frostc$parser$Parser$parameter$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
org$frostlang$frostc$ASTNode* $tmp4817 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
*(&local2) = $tmp4816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
// line 2367
org$frostlang$frostc$ASTNode* $tmp4818 = *(&local2);
frost$core$Bit $tmp4819 = frost$core$Bit$init$builtin_bit($tmp4818 == NULL);
bool $tmp4820 = $tmp4819.value;
if ($tmp4820) goto block10; else goto block11;
block10:;
// line 2368
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block11:;
// line 2370
frost$collections$Array* $tmp4823 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp4824 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4823, ((frost$core$Object*) $tmp4824));
goto block7;
block9:;
// line 2372
frost$core$Int64 $tmp4825 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp4826 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4825);
org$frostlang$frostc$parser$Token$nullable $tmp4827 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4826, &$s4828);
frost$core$Bit $tmp4829 = frost$core$Bit$init$builtin_bit(!$tmp4827.nonnull);
bool $tmp4830 = $tmp4829.value;
if ($tmp4830) goto block12; else goto block13;
block12:;
// line 2373
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4831 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4832));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$FixedArray*) NULL);
block13:;
org$frostlang$frostc$ASTNode* $tmp4833 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2376
frost$collections$Array* $tmp4834 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4835 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4834);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$collections$Array* $tmp4836 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4835;

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
frost$core$Int64 $tmp4837 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4838 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4837);
org$frostlang$frostc$parser$Token$nullable $tmp4839 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4838);
*(&local1) = $tmp4839;
// line 2386
org$frostlang$frostc$parser$Token$nullable $tmp4840 = *(&local1);
frost$core$Bit $tmp4841 = frost$core$Bit$init$builtin_bit(!$tmp4840.nonnull);
bool $tmp4842 = $tmp4841.value;
if ($tmp4842) goto block1; else goto block3;
block1:;
// line 2387
frost$core$Int64 $tmp4843 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4844 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4843);
org$frostlang$frostc$parser$Token$nullable $tmp4845 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4844, &$s4846);
*(&local1) = $tmp4845;
// line 2388
org$frostlang$frostc$parser$Token$nullable $tmp4847 = *(&local1);
frost$core$Bit $tmp4848 = frost$core$Bit$init$builtin_bit(!$tmp4847.nonnull);
bool $tmp4849 = $tmp4848.value;
if ($tmp4849) goto block4; else goto block5;
block4:;
// line 2389
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2391
frost$core$Int64 $tmp4850 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4851 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4850);
*(&local0) = $tmp4851;
goto block2;
block3:;
// line 1
// line 2394
frost$core$Int64 $tmp4852 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4853 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4852);
*(&local0) = $tmp4853;
goto block2;
block2:;
// line 2396
frost$core$Int64 $tmp4854 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4855 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4854);
org$frostlang$frostc$parser$Parser$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4855);
// line 2397
frost$core$String* $tmp4856 = org$frostlang$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4856));
frost$core$String* $tmp4857 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4857));
*(&local2) = $tmp4856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4856));
// line 2398
frost$core$Int64 $tmp4858 = (frost$core$Int64) {4};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp4859 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4858);
org$frostlang$frostc$parser$Parser$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4859);
// line 2399
frost$core$String* $tmp4860 = *(&local2);
frost$core$Bit $tmp4861 = frost$core$Bit$init$builtin_bit($tmp4860 == NULL);
bool $tmp4862 = $tmp4861.value;
if ($tmp4862) goto block6; else goto block7;
block6:;
// line 2400
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4863 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2402
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2403
org$frostlang$frostc$parser$Token $tmp4864 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4865 = $tmp4864.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4866;
$tmp4866 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4866->value = $tmp4865;
frost$core$Int64 $tmp4867 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp4868 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4867);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4869;
$tmp4869 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4869->value = $tmp4868;
ITable* $tmp4870 = ((frost$core$Equatable*) $tmp4866)->$class->itable;
while ($tmp4870->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4870 = $tmp4870->next;
}
$fn4872 $tmp4871 = $tmp4870->methods[0];
frost$core$Bit $tmp4873 = $tmp4871(((frost$core$Equatable*) $tmp4866), ((frost$core$Equatable*) $tmp4869));
bool $tmp4874 = $tmp4873.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4869)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4866)));
if ($tmp4874) goto block8; else goto block10;
block8:;
// line 2404
org$frostlang$frostc$FixedArray* $tmp4875 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
org$frostlang$frostc$FixedArray* $tmp4876 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4876));
*(&local3) = $tmp4875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
goto block9;
block10:;
// line 1
// line 2407
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4877 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2409
org$frostlang$frostc$FixedArray* $tmp4878 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
org$frostlang$frostc$FixedArray* $tmp4879 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4879));
*(&local4) = $tmp4878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
// line 2410
org$frostlang$frostc$FixedArray* $tmp4880 = *(&local4);
frost$core$Bit $tmp4881 = frost$core$Bit$init$builtin_bit($tmp4880 == NULL);
bool $tmp4882 = $tmp4881.value;
if ($tmp4882) goto block11; else goto block12;
block11:;
// line 2411
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4883 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4884 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4885 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
// line 2413
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2414
org$frostlang$frostc$parser$Token $tmp4886 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4887 = $tmp4886.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4888;
$tmp4888 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4888->value = $tmp4887;
frost$core$Int64 $tmp4889 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4890 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4889);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4891;
$tmp4891 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4891->value = $tmp4890;
ITable* $tmp4892 = ((frost$core$Equatable*) $tmp4888)->$class->itable;
while ($tmp4892->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4892 = $tmp4892->next;
}
$fn4894 $tmp4893 = $tmp4892->methods[0];
frost$core$Bit $tmp4895 = $tmp4893(((frost$core$Equatable*) $tmp4888), ((frost$core$Equatable*) $tmp4891));
bool $tmp4896 = $tmp4895.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4891)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4888)));
if ($tmp4896) goto block13; else goto block15;
block13:;
// line 2415
org$frostlang$frostc$ASTNode* $tmp4897 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
org$frostlang$frostc$ASTNode* $tmp4898 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local5) = $tmp4897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
// line 2416
org$frostlang$frostc$ASTNode* $tmp4899 = *(&local5);
frost$core$Bit $tmp4900 = frost$core$Bit$init$builtin_bit($tmp4899 == NULL);
bool $tmp4901 = $tmp4900.value;
if ($tmp4901) goto block16; else goto block17;
block16:;
// line 2417
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4902 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4903 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4904 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4905 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2421
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4906 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2423
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2424
org$frostlang$frostc$parser$Token $tmp4907 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4908 = $tmp4907.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4909;
$tmp4909 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4909->value = $tmp4908;
frost$core$Int64 $tmp4910 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp4911 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4910);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4912;
$tmp4912 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4912->value = $tmp4911;
ITable* $tmp4913 = ((frost$core$Equatable*) $tmp4909)->$class->itable;
while ($tmp4913->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4913 = $tmp4913->next;
}
$fn4915 $tmp4914 = $tmp4913->methods[0];
frost$core$Bit $tmp4916 = $tmp4914(((frost$core$Equatable*) $tmp4909), ((frost$core$Equatable*) $tmp4912));
bool $tmp4917 = $tmp4916.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4912)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4909)));
if ($tmp4917) goto block18; else goto block20;
block18:;
// line 2425
org$frostlang$frostc$FixedArray* $tmp4918 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
org$frostlang$frostc$FixedArray* $tmp4919 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
*(&local6) = $tmp4918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
// line 2426
org$frostlang$frostc$FixedArray* $tmp4920 = *(&local6);
frost$core$Bit $tmp4921 = frost$core$Bit$init$builtin_bit($tmp4920 == NULL);
bool $tmp4922 = $tmp4921.value;
if ($tmp4922) goto block21; else goto block22;
block21:;
// line 2427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4923 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4924 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4925 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4926 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2431
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4928 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2433
org$frostlang$frostc$ASTNode* $tmp4929 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4930 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4931 = *(&local1);
org$frostlang$frostc$Position $tmp4932 = ((org$frostlang$frostc$parser$Token) $tmp4931.value).position;
org$frostlang$frostc$MethodDecl$Kind $tmp4933 = *(&local0);
frost$core$String* $tmp4934 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp4935 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp4936 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp4937 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp4938 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4929, $tmp4930, $tmp4932, param1, param2, $tmp4933, $tmp4934, $tmp4935, $tmp4936, $tmp4937, $tmp4938);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
org$frostlang$frostc$FixedArray* $tmp4939 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4940 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4940));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4942 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
*(&local2) = ((frost$core$String*) NULL);
return $tmp4929;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$anonymousMethod$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$parser$Token$nullable local1;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$FixedArray* local4 = NULL;
// line 2441
// line 2442
frost$core$Int64 $tmp4944 = (frost$core$Int64) {21};
org$frostlang$frostc$parser$Token$Kind $tmp4945 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4944);
org$frostlang$frostc$parser$Token$nullable $tmp4946 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4945);
*(&local1) = $tmp4946;
// line 2443
org$frostlang$frostc$parser$Token$nullable $tmp4947 = *(&local1);
frost$core$Bit $tmp4948 = frost$core$Bit$init$builtin_bit(!$tmp4947.nonnull);
bool $tmp4949 = $tmp4948.value;
if ($tmp4949) goto block1; else goto block3;
block1:;
// line 2444
frost$core$Int64 $tmp4950 = (frost$core$Int64) {22};
org$frostlang$frostc$parser$Token$Kind $tmp4951 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4950);
org$frostlang$frostc$parser$Token$nullable $tmp4952 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp4951, &$s4953);
*(&local1) = $tmp4952;
// line 2445
org$frostlang$frostc$parser$Token$nullable $tmp4954 = *(&local1);
frost$core$Bit $tmp4955 = frost$core$Bit$init$builtin_bit(!$tmp4954.nonnull);
bool $tmp4956 = $tmp4955.value;
if ($tmp4956) goto block4; else goto block5;
block4:;
// line 2446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 2448
frost$core$Int64 $tmp4957 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp4958 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4957);
*(&local0) = $tmp4958;
goto block2;
block3:;
// line 1
// line 2451
frost$core$Int64 $tmp4959 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp4960 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4959);
*(&local0) = $tmp4960;
goto block2;
block2:;
// line 2453
org$frostlang$frostc$FixedArray* $tmp4961 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
org$frostlang$frostc$FixedArray* $tmp4962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
*(&local2) = $tmp4961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
// line 2454
org$frostlang$frostc$FixedArray* $tmp4963 = *(&local2);
frost$core$Bit $tmp4964 = frost$core$Bit$init$builtin_bit($tmp4963 == NULL);
bool $tmp4965 = $tmp4964.value;
if ($tmp4965) goto block6; else goto block7;
block6:;
// line 2455
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4966 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2457
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2458
org$frostlang$frostc$parser$Token $tmp4967 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp4968 = $tmp4967.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4969;
$tmp4969 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4969->value = $tmp4968;
frost$core$Int64 $tmp4970 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp4971 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4970);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4972;
$tmp4972 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4972->value = $tmp4971;
ITable* $tmp4973 = ((frost$core$Equatable*) $tmp4969)->$class->itable;
while ($tmp4973->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4973 = $tmp4973->next;
}
$fn4975 $tmp4974 = $tmp4973->methods[0];
frost$core$Bit $tmp4976 = $tmp4974(((frost$core$Equatable*) $tmp4969), ((frost$core$Equatable*) $tmp4972));
bool $tmp4977 = $tmp4976.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4972)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4969)));
if ($tmp4977) goto block8; else goto block10;
block8:;
// line 2459
org$frostlang$frostc$ASTNode* $tmp4978 = org$frostlang$frostc$parser$Parser$typeDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
org$frostlang$frostc$ASTNode* $tmp4979 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4979));
*(&local3) = $tmp4978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
// line 2460
org$frostlang$frostc$ASTNode* $tmp4980 = *(&local3);
frost$core$Bit $tmp4981 = frost$core$Bit$init$builtin_bit($tmp4980 == NULL);
bool $tmp4982 = $tmp4981.value;
if ($tmp4982) goto block11; else goto block12;
block11:;
// line 2461
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4983 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4984 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2465
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp4985 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2467
org$frostlang$frostc$FixedArray* $tmp4986 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
org$frostlang$frostc$FixedArray* $tmp4987 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
*(&local4) = $tmp4986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
// line 2468
org$frostlang$frostc$FixedArray* $tmp4988 = *(&local4);
frost$core$Bit $tmp4989 = frost$core$Bit$init$builtin_bit($tmp4988 == NULL);
bool $tmp4990 = $tmp4989.value;
if ($tmp4990) goto block13; else goto block14;
block13:;
// line 2469
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp4991 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4992 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4993 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// line 2471
org$frostlang$frostc$ASTNode* $tmp4994 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4995 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp4996 = *(&local1);
org$frostlang$frostc$Position $tmp4997 = ((org$frostlang$frostc$parser$Token) $tmp4996.value).position;
org$frostlang$frostc$FixedArray* $tmp4998 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4998);
org$frostlang$frostc$MethodDecl$Kind $tmp4999 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5000 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5001 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5002 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4994, $tmp4995, $tmp4997, ((org$frostlang$frostc$ASTNode*) NULL), $tmp4998, $tmp4999, &$s5003, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5000, $tmp5001, $tmp5002);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
org$frostlang$frostc$FixedArray* $tmp5004 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5004));
*(&local4) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5005 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5006));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp4994;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$parser$Token$nullable local0;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2479
frost$core$Int64 $tmp5007 = (frost$core$Int64) {23};
org$frostlang$frostc$parser$Token$Kind $tmp5008 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5007);
org$frostlang$frostc$parser$Token$nullable $tmp5009 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5008, &$s5010);
*(&local0) = $tmp5009;
// line 2480
org$frostlang$frostc$parser$Token$nullable $tmp5011 = *(&local0);
frost$core$Bit $tmp5012 = frost$core$Bit$init$builtin_bit(!$tmp5011.nonnull);
bool $tmp5013 = $tmp5012.value;
if ($tmp5013) goto block1; else goto block2;
block1:;
// line 2481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2483
org$frostlang$frostc$FixedArray* $tmp5014 = org$frostlang$frostc$parser$Parser$parameters$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
org$frostlang$frostc$FixedArray* $tmp5015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
*(&local1) = $tmp5014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
// line 2484
org$frostlang$frostc$FixedArray* $tmp5016 = *(&local1);
frost$core$Bit $tmp5017 = frost$core$Bit$init$builtin_bit($tmp5016 == NULL);
bool $tmp5018 = $tmp5017.value;
if ($tmp5018) goto block3; else goto block4;
block3:;
// line 2485
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5019 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2487
org$frostlang$frostc$FixedArray* $tmp5020 = org$frostlang$frostc$parser$Parser$blockStatements$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
org$frostlang$frostc$FixedArray* $tmp5021 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
*(&local2) = $tmp5020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
// line 2488
org$frostlang$frostc$FixedArray* $tmp5022 = *(&local2);
frost$core$Bit $tmp5023 = frost$core$Bit$init$builtin_bit($tmp5022 == NULL);
bool $tmp5024 = $tmp5023.value;
if ($tmp5024) goto block5; else goto block6;
block5:;
// line 2489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5026 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 2491
org$frostlang$frostc$ASTNode* $tmp5027 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5028 = (frost$core$Int64) {29};
org$frostlang$frostc$parser$Token$nullable $tmp5029 = *(&local0);
org$frostlang$frostc$Position $tmp5030 = ((org$frostlang$frostc$parser$Token) $tmp5029.value).position;
frost$core$Int64 $tmp5031 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp5032 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5031);
org$frostlang$frostc$FixedArray* $tmp5033 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5034 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5027, $tmp5028, $tmp5030, param1, param2, $tmp5032, &$s5035, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5033, ((org$frostlang$frostc$ASTNode*) NULL), $tmp5034);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
org$frostlang$frostc$FixedArray* $tmp5036 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5037 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5027;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$FixedArray* param2) {

org$frostlang$frostc$ASTNode* local0 = NULL;
// line 2499
org$frostlang$frostc$ASTNode* $tmp5038 = org$frostlang$frostc$parser$Parser$varDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
org$frostlang$frostc$ASTNode* $tmp5039 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
*(&local0) = $tmp5038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
// line 2500
org$frostlang$frostc$ASTNode* $tmp5040 = *(&local0);
frost$core$Bit $tmp5041 = frost$core$Bit$init$builtin_bit($tmp5040 == NULL);
bool $tmp5042 = $tmp5041.value;
if ($tmp5042) goto block1; else goto block2;
block1:;
// line 2501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5043 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2503
org$frostlang$frostc$ASTNode* $tmp5044 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5045 = (frost$core$Int64) {18};
org$frostlang$frostc$ASTNode* $tmp5046 = *(&local0);
$fn5048 $tmp5047 = ($fn5048) $tmp5046->$class->vtable[2];
org$frostlang$frostc$Position $tmp5049 = $tmp5047($tmp5046);
org$frostlang$frostc$ASTNode* $tmp5050 = *(&local0);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode($tmp5044, $tmp5045, $tmp5049, param1, param2, $tmp5050);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
org$frostlang$frostc$ASTNode* $tmp5051 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5044;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2510
frost$core$Int64 $tmp5052 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5053 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5052);
org$frostlang$frostc$parser$Token$nullable $tmp5054 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5053, &$s5055);
*(&local0) = $tmp5054;
// line 2511
org$frostlang$frostc$parser$Token$nullable $tmp5056 = *(&local0);
frost$core$Bit $tmp5057 = frost$core$Bit$init$builtin_bit(!$tmp5056.nonnull);
bool $tmp5058 = $tmp5057.value;
if ($tmp5058) goto block1; else goto block2;
block1:;
// line 2512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2514
frost$collections$Array* $tmp5059 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5059);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
frost$collections$Array* $tmp5060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
*(&local1) = $tmp5059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
// line 2515
frost$core$Int64 $tmp5061 = (frost$core$Int64) {107};
org$frostlang$frostc$parser$Token$Kind $tmp5062 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5061);
org$frostlang$frostc$parser$Token$nullable $tmp5063 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5062);
frost$core$Bit $tmp5064 = frost$core$Bit$init$builtin_bit($tmp5063.nonnull);
bool $tmp5065 = $tmp5064.value;
if ($tmp5065) goto block3; else goto block4;
block3:;
// line 2516
org$frostlang$frostc$parser$Token $tmp5066 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5067 = $tmp5066.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5068;
$tmp5068 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5068->value = $tmp5067;
frost$core$Int64 $tmp5069 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5070 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5069);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5071;
$tmp5071 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5071->value = $tmp5070;
ITable* $tmp5072 = ((frost$core$Equatable*) $tmp5068)->$class->itable;
while ($tmp5072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5072 = $tmp5072->next;
}
$fn5074 $tmp5073 = $tmp5072->methods[1];
frost$core$Bit $tmp5075 = $tmp5073(((frost$core$Equatable*) $tmp5068), ((frost$core$Equatable*) $tmp5071));
bool $tmp5076 = $tmp5075.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5068)));
if ($tmp5076) goto block5; else goto block6;
block5:;
// line 2517
org$frostlang$frostc$ASTNode* $tmp5077 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
org$frostlang$frostc$ASTNode* $tmp5078 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5078));
*(&local2) = $tmp5077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
// line 2518
org$frostlang$frostc$ASTNode* $tmp5079 = *(&local2);
frost$core$Bit $tmp5080 = frost$core$Bit$init$builtin_bit($tmp5079 == NULL);
bool $tmp5081 = $tmp5080.value;
if ($tmp5081) goto block7; else goto block8;
block7:;
// line 2519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5082 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5083 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block8:;
// line 2521
frost$collections$Array* $tmp5084 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5085 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5084, ((frost$core$Object*) $tmp5085));
// line 2522
goto block9;
block9:;
frost$core$Int64 $tmp5086 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5087 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5086);
org$frostlang$frostc$parser$Token$nullable $tmp5088 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5087);
frost$core$Bit $tmp5089 = frost$core$Bit$init$builtin_bit($tmp5088.nonnull);
bool $tmp5090 = $tmp5089.value;
if ($tmp5090) goto block10; else goto block11;
block10:;
// line 2523
org$frostlang$frostc$ASTNode* $tmp5091 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
org$frostlang$frostc$ASTNode* $tmp5092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
*(&local2) = $tmp5091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
// line 2524
org$frostlang$frostc$ASTNode* $tmp5093 = *(&local2);
frost$core$Bit $tmp5094 = frost$core$Bit$init$builtin_bit($tmp5093 == NULL);
bool $tmp5095 = $tmp5094.value;
if ($tmp5095) goto block12; else goto block13;
block12:;
// line 2525
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5096 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2527
frost$collections$Array* $tmp5098 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp5099 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5098, ((frost$core$Object*) $tmp5099));
goto block9;
block11:;
org$frostlang$frostc$ASTNode* $tmp5100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2530
frost$core$Int64 $tmp5101 = (frost$core$Int64) {108};
org$frostlang$frostc$parser$Token$Kind $tmp5102 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5101);
org$frostlang$frostc$parser$Token$nullable $tmp5103 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5102, &$s5104);
frost$core$Bit $tmp5105 = frost$core$Bit$init$builtin_bit(!$tmp5103.nonnull);
bool $tmp5106 = $tmp5105.value;
if ($tmp5106) goto block14; else goto block15;
block14:;
// line 2531
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2534
org$frostlang$frostc$ASTNode* $tmp5108 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5109 = (frost$core$Int64) {10};
org$frostlang$frostc$parser$Token$nullable $tmp5110 = *(&local0);
org$frostlang$frostc$Position $tmp5111 = ((org$frostlang$frostc$parser$Token) $tmp5110.value).position;
org$frostlang$frostc$parser$Token$nullable $tmp5112 = *(&local0);
frost$core$String* $tmp5113 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5112.value));
frost$collections$Array* $tmp5114 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5115 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5114);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp5108, $tmp5109, $tmp5111, param1, $tmp5113, $tmp5115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
frost$collections$Array* $tmp5116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5108;

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
frost$core$Bit local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
// line 2544
frost$core$Int64 $tmp5117 = (frost$core$Int64) {20};
org$frostlang$frostc$parser$Token$Kind $tmp5118 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5117);
org$frostlang$frostc$parser$Token$nullable $tmp5119 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5118, &$s5120);
*(&local0) = $tmp5119;
// line 2545
org$frostlang$frostc$parser$Token$nullable $tmp5121 = *(&local0);
frost$core$Bit $tmp5122 = frost$core$Bit$init$builtin_bit(!$tmp5121.nonnull);
bool $tmp5123 = $tmp5122.value;
if ($tmp5123) goto block1; else goto block2;
block1:;
// line 2546
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2548
frost$core$Int64 $tmp5124 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5125 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5124);
org$frostlang$frostc$parser$Token$nullable $tmp5126 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5125, &$s5127);
*(&local1) = $tmp5126;
// line 2549
org$frostlang$frostc$parser$Token$nullable $tmp5128 = *(&local1);
frost$core$Bit $tmp5129 = frost$core$Bit$init$builtin_bit(!$tmp5128.nonnull);
bool $tmp5130 = $tmp5129.value;
if ($tmp5130) goto block3; else goto block4;
block3:;
// line 2550
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2552
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2553
org$frostlang$frostc$parser$Token $tmp5131 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5132 = $tmp5131.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5133;
$tmp5133 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5133->value = $tmp5132;
frost$core$Int64 $tmp5134 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5135 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5134);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5136;
$tmp5136 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5136->value = $tmp5135;
ITable* $tmp5137 = ((frost$core$Equatable*) $tmp5133)->$class->itable;
while ($tmp5137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5137 = $tmp5137->next;
}
$fn5139 $tmp5138 = $tmp5137->methods[0];
frost$core$Bit $tmp5140 = $tmp5138(((frost$core$Equatable*) $tmp5133), ((frost$core$Equatable*) $tmp5136));
bool $tmp5141 = $tmp5140.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5136)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5133)));
if ($tmp5141) goto block5; else goto block7;
block5:;
// line 2554
org$frostlang$frostc$FixedArray* $tmp5142 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
org$frostlang$frostc$FixedArray* $tmp5143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
*(&local2) = $tmp5142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
// line 2555
org$frostlang$frostc$FixedArray* $tmp5144 = *(&local2);
frost$core$Bit $tmp5145 = frost$core$Bit$init$builtin_bit($tmp5144 == NULL);
bool $tmp5146 = $tmp5145.value;
if ($tmp5146) goto block8; else goto block9;
block8:;
// line 2556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5147 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2562
frost$core$Int64 $tmp5149 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5150 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5149);
org$frostlang$frostc$parser$Token$nullable $tmp5151 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5150, &$s5152);
frost$core$Bit $tmp5153 = frost$core$Bit$init$builtin_bit(!$tmp5151.nonnull);
bool $tmp5154 = $tmp5153.value;
if ($tmp5154) goto block10; else goto block11;
block10:;
// line 2563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// line 2565
frost$collections$Array* $tmp5156 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5156);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
frost$collections$Array* $tmp5157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
*(&local3) = $tmp5156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
// line 2566
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5158 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2567
goto block12;
block12:;
// line 2568
org$frostlang$frostc$parser$Token $tmp5159 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local5) = $tmp5159;
// line 2569
org$frostlang$frostc$parser$Token $tmp5160 = *(&local5);
org$frostlang$frostc$parser$Token$Kind $tmp5161 = $tmp5160.kind;
frost$core$Int64 $tmp5162 = $tmp5161.$rawValue;
frost$core$Int64 $tmp5163 = (frost$core$Int64) {18};
frost$core$Bit $tmp5164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5163);
bool $tmp5165 = $tmp5164.value;
if ($tmp5165) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5166 = (frost$core$Int64) {19};
frost$core$Bit $tmp5167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5166);
bool $tmp5168 = $tmp5167.value;
if ($tmp5168) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5169 = (frost$core$Int64) {20};
frost$core$Bit $tmp5170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5169);
bool $tmp5171 = $tmp5170.value;
if ($tmp5171) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5172 = (frost$core$Int64) {22};
frost$core$Bit $tmp5173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5172);
bool $tmp5174 = $tmp5173.value;
if ($tmp5174) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5175 = (frost$core$Int64) {21};
frost$core$Bit $tmp5176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5175);
bool $tmp5177 = $tmp5176.value;
if ($tmp5177) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5178 = (frost$core$Int64) {14};
frost$core$Bit $tmp5179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5178);
bool $tmp5180 = $tmp5179.value;
if ($tmp5180) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5181 = (frost$core$Int64) {24};
frost$core$Bit $tmp5182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5181);
bool $tmp5183 = $tmp5182.value;
if ($tmp5183) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5184 = (frost$core$Int64) {25};
frost$core$Bit $tmp5185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5184);
bool $tmp5186 = $tmp5185.value;
if ($tmp5186) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5187 = (frost$core$Int64) {26};
frost$core$Bit $tmp5188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5187);
bool $tmp5189 = $tmp5188.value;
if ($tmp5189) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5190 = (frost$core$Int64) {27};
frost$core$Bit $tmp5191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5190);
bool $tmp5192 = $tmp5191.value;
if ($tmp5192) goto block15; else goto block25;
block15:;
// line 2573
goto block13;
block25:;
frost$core$Int64 $tmp5193 = (frost$core$Int64) {12};
frost$core$Bit $tmp5194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5193);
bool $tmp5195 = $tmp5194.value;
if ($tmp5195) goto block26; else goto block27;
block26:;
// line 2576
org$frostlang$frostc$ASTNode* $tmp5196 = *(&local4);
frost$core$Bit $tmp5197 = frost$core$Bit$init$builtin_bit($tmp5196 != NULL);
bool $tmp5198 = $tmp5197.value;
if ($tmp5198) goto block28; else goto block29;
block28:;
// line 2577
org$frostlang$frostc$parser$Token $tmp5199 = *(&local5);
org$frostlang$frostc$parser$Token $tmp5200 = *(&local5);
frost$core$String* $tmp5201 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5200);
frost$core$String* $tmp5202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5203, $tmp5201);
frost$core$String* $tmp5204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5202, &$s5205);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5199, $tmp5204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
goto block29;
block29:;
// line 2579
org$frostlang$frostc$ASTNode* $tmp5206 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
org$frostlang$frostc$ASTNode* $tmp5207 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
*(&local4) = $tmp5206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
goto block14;
block27:;
frost$core$Int64 $tmp5208 = (frost$core$Int64) {52};
frost$core$Bit $tmp5209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5162, $tmp5208);
bool $tmp5210 = $tmp5209.value;
if ($tmp5210) goto block30; else goto block31;
block30:;
// line 2582
org$frostlang$frostc$ASTNode* $tmp5211 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5212 = org$frostlang$frostc$parser$Parser$choiceCase$org$frostlang$frostc$ASTNode$Q$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5211);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
org$frostlang$frostc$ASTNode* $tmp5213 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
*(&local6) = $tmp5212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
// line 2583
org$frostlang$frostc$ASTNode* $tmp5214 = *(&local6);
frost$core$Bit $tmp5215 = frost$core$Bit$init$builtin_bit($tmp5214 == NULL);
bool $tmp5216 = $tmp5215.value;
if ($tmp5216) goto block32; else goto block33;
block32:;
// line 2584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5217 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5217));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block33:;
// line 2586
frost$collections$Array* $tmp5221 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5222 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5221, ((frost$core$Object*) $tmp5222));
// line 2587
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp5224 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2590
goto block13;
block14:;
goto block12;
block13:;
// line 2594
org$frostlang$frostc$FixedArray* $tmp5225 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5225);
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
org$frostlang$frostc$FixedArray* $tmp5226 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
*(&local7) = $tmp5225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
// line 2595
goto block34;
block34:;
// line 2596
org$frostlang$frostc$parser$Token $tmp5227 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local8) = $tmp5227;
// line 2597
org$frostlang$frostc$parser$Token $tmp5228 = *(&local8);
org$frostlang$frostc$parser$Token$Kind $tmp5229 = $tmp5228.kind;
frost$core$Int64 $tmp5230 = $tmp5229.$rawValue;
frost$core$Int64 $tmp5231 = (frost$core$Int64) {14};
frost$core$Bit $tmp5232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5231);
bool $tmp5233 = $tmp5232.value;
if ($tmp5233) goto block37; else goto block38;
block37:;
// line 2599
org$frostlang$frostc$FixedArray* $tmp5234 = *(&local7);
ITable* $tmp5235 = ((frost$collections$CollectionView*) $tmp5234)->$class->itable;
while ($tmp5235->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5235 = $tmp5235->next;
}
$fn5237 $tmp5236 = $tmp5235->methods[0];
frost$core$Int64 $tmp5238 = $tmp5236(((frost$collections$CollectionView*) $tmp5234));
frost$core$Int64 $tmp5239 = (frost$core$Int64) {0};
int64_t $tmp5240 = $tmp5238.value;
int64_t $tmp5241 = $tmp5239.value;
bool $tmp5242 = $tmp5240 > $tmp5241;
frost$core$Bit $tmp5243 = (frost$core$Bit) {$tmp5242};
bool $tmp5244 = $tmp5243.value;
if ($tmp5244) goto block39; else goto block40;
block39:;
// line 2600
org$frostlang$frostc$parser$Token $tmp5245 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5246 = *(&local8);
frost$core$String* $tmp5247 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5246);
frost$core$String* $tmp5248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5249, $tmp5247);
frost$core$String* $tmp5250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5248, &$s5251);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5245, $tmp5250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
// line 2601
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5252 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5253 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5254 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block40:;
// line 2603
org$frostlang$frostc$FixedArray* $tmp5256 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
org$frostlang$frostc$FixedArray* $tmp5257 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
*(&local7) = $tmp5256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
goto block36;
block38:;
frost$core$Int64 $tmp5258 = (frost$core$Int64) {12};
frost$core$Bit $tmp5259 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5258);
bool $tmp5260 = $tmp5259.value;
if ($tmp5260) goto block41; else goto block42;
block41:;
// line 2606
org$frostlang$frostc$ASTNode* $tmp5261 = *(&local4);
frost$core$Bit $tmp5262 = frost$core$Bit$init$builtin_bit($tmp5261 != NULL);
bool $tmp5263 = $tmp5262.value;
if ($tmp5263) goto block45; else goto block46;
block45:;
*(&local9) = $tmp5262;
goto block47;
block46:;
org$frostlang$frostc$FixedArray* $tmp5264 = *(&local7);
ITable* $tmp5265 = ((frost$collections$CollectionView*) $tmp5264)->$class->itable;
while ($tmp5265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5265 = $tmp5265->next;
}
$fn5267 $tmp5266 = $tmp5265->methods[0];
frost$core$Int64 $tmp5268 = $tmp5266(((frost$collections$CollectionView*) $tmp5264));
frost$core$Int64 $tmp5269 = (frost$core$Int64) {0};
int64_t $tmp5270 = $tmp5268.value;
int64_t $tmp5271 = $tmp5269.value;
bool $tmp5272 = $tmp5270 > $tmp5271;
frost$core$Bit $tmp5273 = (frost$core$Bit) {$tmp5272};
*(&local9) = $tmp5273;
goto block47;
block47:;
frost$core$Bit $tmp5274 = *(&local9);
bool $tmp5275 = $tmp5274.value;
if ($tmp5275) goto block43; else goto block44;
block43:;
// line 2607
org$frostlang$frostc$parser$Token $tmp5276 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5277 = *(&local8);
frost$core$String* $tmp5278 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5277);
frost$core$String* $tmp5279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5280, $tmp5278);
frost$core$String* $tmp5281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5279, &$s5282);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5276, $tmp5281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
// line 2608
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5283 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5284 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5284));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5285 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5285));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block44:;
// line 2610
org$frostlang$frostc$ASTNode* $tmp5287 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
org$frostlang$frostc$ASTNode* $tmp5288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
*(&local4) = $tmp5287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
goto block36;
block42:;
frost$core$Int64 $tmp5289 = (frost$core$Int64) {18};
frost$core$Bit $tmp5290 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5289);
bool $tmp5291 = $tmp5290.value;
if ($tmp5291) goto block48; else goto block49;
block48:;
// line 2613
org$frostlang$frostc$ASTNode* $tmp5292 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5293 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5294 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5292, $tmp5293);
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
org$frostlang$frostc$ASTNode* $tmp5295 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
*(&local10) = $tmp5294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
// line 2614
org$frostlang$frostc$ASTNode* $tmp5296 = *(&local10);
frost$core$Bit $tmp5297 = frost$core$Bit$init$builtin_bit($tmp5296 == NULL);
bool $tmp5298 = $tmp5297.value;
if ($tmp5298) goto block50; else goto block51;
block50:;
// line 2615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5299 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5299));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5300 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5300));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5301 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5302 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block51:;
// line 2617
frost$collections$Array* $tmp5304 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5305 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5304, ((frost$core$Object*) $tmp5305));
// line 2618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5306 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5306));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2619
org$frostlang$frostc$FixedArray* $tmp5307 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
org$frostlang$frostc$FixedArray* $tmp5308 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5308));
*(&local7) = $tmp5307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
org$frostlang$frostc$ASTNode* $tmp5309 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block49:;
frost$core$Int64 $tmp5310 = (frost$core$Int64) {19};
frost$core$Bit $tmp5311 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5310);
bool $tmp5312 = $tmp5311.value;
if ($tmp5312) goto block52; else goto block53;
block52:;
// line 2622
org$frostlang$frostc$ASTNode* $tmp5313 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5314 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5315 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5313, $tmp5314);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
org$frostlang$frostc$ASTNode* $tmp5316 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
*(&local11) = $tmp5315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
// line 2623
org$frostlang$frostc$ASTNode* $tmp5317 = *(&local11);
frost$core$Bit $tmp5318 = frost$core$Bit$init$builtin_bit($tmp5317 == NULL);
bool $tmp5319 = $tmp5318.value;
if ($tmp5319) goto block54; else goto block55;
block54:;
// line 2624
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5320 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5320));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5321 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5321));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5322));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5323 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5324 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block55:;
// line 2626
frost$collections$Array* $tmp5325 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5326 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5325, ((frost$core$Object*) $tmp5326));
// line 2627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5327));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2628
org$frostlang$frostc$FixedArray* $tmp5328 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5328));
org$frostlang$frostc$FixedArray* $tmp5329 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
*(&local7) = $tmp5328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5328));
org$frostlang$frostc$ASTNode* $tmp5330 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5330));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block53:;
frost$core$Int64 $tmp5331 = (frost$core$Int64) {20};
frost$core$Bit $tmp5332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5331);
bool $tmp5333 = $tmp5332.value;
if ($tmp5333) goto block56; else goto block57;
block56:;
// line 2631
org$frostlang$frostc$ASTNode* $tmp5334 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5335 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5336 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5334, $tmp5335);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
org$frostlang$frostc$ASTNode* $tmp5337 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
*(&local12) = $tmp5336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
// line 2632
org$frostlang$frostc$ASTNode* $tmp5338 = *(&local12);
frost$core$Bit $tmp5339 = frost$core$Bit$init$builtin_bit($tmp5338 == NULL);
bool $tmp5340 = $tmp5339.value;
if ($tmp5340) goto block58; else goto block59;
block58:;
// line 2633
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5341 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5342 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5342));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5345 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5345));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block59:;
// line 2635
frost$collections$Array* $tmp5346 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5347 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5346, ((frost$core$Object*) $tmp5347));
// line 2636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5348 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5348));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2637
org$frostlang$frostc$FixedArray* $tmp5349 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
org$frostlang$frostc$FixedArray* $tmp5350 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
*(&local7) = $tmp5349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
org$frostlang$frostc$ASTNode* $tmp5351 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5351));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block57:;
frost$core$Int64 $tmp5352 = (frost$core$Int64) {22};
frost$core$Bit $tmp5353 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5352);
bool $tmp5354 = $tmp5353.value;
if ($tmp5354) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp5355 = (frost$core$Int64) {21};
frost$core$Bit $tmp5356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5355);
bool $tmp5357 = $tmp5356.value;
if ($tmp5357) goto block60; else goto block62;
block60:;
// line 2640
org$frostlang$frostc$ASTNode* $tmp5358 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5359 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5360 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5358, $tmp5359);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
org$frostlang$frostc$ASTNode* $tmp5361 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
*(&local13) = $tmp5360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
// line 2641
org$frostlang$frostc$ASTNode* $tmp5362 = *(&local13);
frost$core$Bit $tmp5363 = frost$core$Bit$init$builtin_bit($tmp5362 == NULL);
bool $tmp5364 = $tmp5363.value;
if ($tmp5364) goto block63; else goto block64;
block63:;
// line 2642
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5365 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5366 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5367 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5368 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5369 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block64:;
// line 2644
frost$collections$Array* $tmp5370 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5371 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5370, ((frost$core$Object*) $tmp5371));
// line 2645
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5372 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2646
org$frostlang$frostc$FixedArray* $tmp5373 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
org$frostlang$frostc$FixedArray* $tmp5374 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
*(&local7) = $tmp5373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
org$frostlang$frostc$ASTNode* $tmp5375 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5375));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block62:;
frost$core$Int64 $tmp5376 = (frost$core$Int64) {24};
frost$core$Bit $tmp5377 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5376);
bool $tmp5378 = $tmp5377.value;
if ($tmp5378) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp5379 = (frost$core$Int64) {25};
frost$core$Bit $tmp5380 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5379);
bool $tmp5381 = $tmp5380.value;
if ($tmp5381) goto block65; else goto block67;
block67:;
frost$core$Int64 $tmp5382 = (frost$core$Int64) {26};
frost$core$Bit $tmp5383 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5382);
bool $tmp5384 = $tmp5383.value;
if ($tmp5384) goto block65; else goto block68;
block68:;
frost$core$Int64 $tmp5385 = (frost$core$Int64) {27};
frost$core$Bit $tmp5386 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5385);
bool $tmp5387 = $tmp5386.value;
if ($tmp5387) goto block65; else goto block69;
block65:;
// line 2649
org$frostlang$frostc$ASTNode* $tmp5388 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5389 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp5390 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5388, $tmp5389);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
org$frostlang$frostc$ASTNode* $tmp5391 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local14) = $tmp5390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
// line 2650
org$frostlang$frostc$ASTNode* $tmp5392 = *(&local14);
frost$core$Bit $tmp5393 = frost$core$Bit$init$builtin_bit($tmp5392 == NULL);
bool $tmp5394 = $tmp5393.value;
if ($tmp5394) goto block70; else goto block71;
block70:;
// line 2651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5395 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp5396 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5398 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block71:;
// line 2653
frost$collections$Array* $tmp5400 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5401 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp5400, ((frost$core$Object*) $tmp5401));
// line 2654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5402 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2655
org$frostlang$frostc$FixedArray* $tmp5403 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
org$frostlang$frostc$FixedArray* $tmp5404 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
*(&local7) = $tmp5403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
org$frostlang$frostc$ASTNode* $tmp5405 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5405));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block69:;
frost$core$Int64 $tmp5406 = (frost$core$Int64) {104};
frost$core$Bit $tmp5407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5230, $tmp5406);
bool $tmp5408 = $tmp5407.value;
if ($tmp5408) goto block72; else goto block73;
block72:;
// line 2658
frost$core$Int64 $tmp5409 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5410 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5409);
org$frostlang$frostc$parser$Token$nullable $tmp5411 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5410, &$s5412);
// line 2659
goto block35;
block73:;
// line 2662
org$frostlang$frostc$parser$Token $tmp5413 = *(&local8);
org$frostlang$frostc$parser$Token $tmp5414 = *(&local8);
frost$core$String* $tmp5415 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, $tmp5414);
frost$core$String* $tmp5416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5417, $tmp5415);
frost$core$String* $tmp5418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5416, &$s5419);
org$frostlang$frostc$parser$Parser$error$org$frostlang$frostc$parser$Token$frost$core$String(param0, $tmp5413, $tmp5418);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
// line 2663
org$frostlang$frostc$parser$Token $tmp5420 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token(param0);
// line 2664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5422 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5423 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2668
org$frostlang$frostc$ASTNode* $tmp5425 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5426 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5427 = *(&local0);
org$frostlang$frostc$Position $tmp5428 = ((org$frostlang$frostc$parser$Token) $tmp5427.value).position;
frost$core$Int64 $tmp5429 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp5430 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5429);
org$frostlang$frostc$parser$Token$nullable $tmp5431 = *(&local1);
frost$core$String* $tmp5432 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5431.value));
org$frostlang$frostc$FixedArray* $tmp5433 = *(&local2);
frost$collections$Array* $tmp5434 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5435 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5434);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5425, $tmp5426, $tmp5428, param1, param2, $tmp5430, $tmp5432, $tmp5433, ((org$frostlang$frostc$FixedArray*) NULL), $tmp5435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
org$frostlang$frostc$FixedArray* $tmp5436 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5436));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5437 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5438 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5439 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5425;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

org$frostlang$frostc$parser$Token local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 2678
org$frostlang$frostc$parser$Token $tmp5440 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
*(&local0) = $tmp5440;
// line 2679
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 2680
org$frostlang$frostc$parser$Token $tmp5441 = *(&local0);
org$frostlang$frostc$parser$Token$Kind $tmp5442 = $tmp5441.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5443;
$tmp5443 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5443->value = $tmp5442;
frost$core$Int64 $tmp5444 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$Kind $tmp5445 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5444);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5446;
$tmp5446 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5446->value = $tmp5445;
ITable* $tmp5447 = ((frost$core$Equatable*) $tmp5443)->$class->itable;
while ($tmp5447->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5447 = $tmp5447->next;
}
$fn5449 $tmp5448 = $tmp5447->methods[0];
frost$core$Bit $tmp5450 = $tmp5448(((frost$core$Equatable*) $tmp5443), ((frost$core$Equatable*) $tmp5446));
bool $tmp5451 = $tmp5450.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5446)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5443)));
if ($tmp5451) goto block1; else goto block3;
block1:;
// line 2681
org$frostlang$frostc$ASTNode* $tmp5452 = org$frostlang$frostc$parser$Parser$doccomment$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
org$frostlang$frostc$ASTNode* $tmp5453 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local1) = $tmp5452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
// line 2682
org$frostlang$frostc$ASTNode* $tmp5454 = *(&local1);
frost$core$Bit $tmp5455 = frost$core$Bit$init$builtin_bit($tmp5454 == NULL);
bool $tmp5456 = $tmp5455.value;
if ($tmp5456) goto block4; else goto block5;
block4:;
// line 2683
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5458 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2689
org$frostlang$frostc$FixedArray* $tmp5459 = org$frostlang$frostc$parser$Parser$annotations$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
org$frostlang$frostc$FixedArray* $tmp5460 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
*(&local2) = $tmp5459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
// line 2690
org$frostlang$frostc$FixedArray* $tmp5461 = *(&local2);
frost$core$Bit $tmp5462 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5463 = $tmp5462.value;
if ($tmp5463) goto block6; else goto block7;
block6:;
// line 2691
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block7:;
// line 2693
org$frostlang$frostc$parser$Token $tmp5466 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5467 = $tmp5466.kind;
frost$core$Int64 $tmp5468 = $tmp5467.$rawValue;
frost$core$Int64 $tmp5469 = (frost$core$Int64) {18};
frost$core$Bit $tmp5470 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5469);
bool $tmp5471 = $tmp5470.value;
if ($tmp5471) goto block9; else goto block10;
block9:;
// line 2695
org$frostlang$frostc$ASTNode* $tmp5472 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5473 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5474 = org$frostlang$frostc$parser$Parser$classDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5472, $tmp5473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
org$frostlang$frostc$FixedArray* $tmp5475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5476));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5474;
block10:;
frost$core$Int64 $tmp5477 = (frost$core$Int64) {19};
frost$core$Bit $tmp5478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5477);
bool $tmp5479 = $tmp5478.value;
if ($tmp5479) goto block11; else goto block12;
block11:;
// line 2698
org$frostlang$frostc$ASTNode* $tmp5480 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5481 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5482 = org$frostlang$frostc$parser$Parser$interfaceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5480, $tmp5481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$FixedArray* $tmp5483 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5482;
block12:;
frost$core$Int64 $tmp5485 = (frost$core$Int64) {20};
frost$core$Bit $tmp5486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5485);
bool $tmp5487 = $tmp5486.value;
if ($tmp5487) goto block13; else goto block14;
block13:;
// line 2701
org$frostlang$frostc$ASTNode* $tmp5488 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5489 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5490 = org$frostlang$frostc$parser$Parser$choiceDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5488, $tmp5489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
org$frostlang$frostc$FixedArray* $tmp5491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5491));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5490;
block14:;
frost$core$Int64 $tmp5493 = (frost$core$Int64) {22};
frost$core$Bit $tmp5494 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5493);
bool $tmp5495 = $tmp5494.value;
if ($tmp5495) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5496 = (frost$core$Int64) {21};
frost$core$Bit $tmp5497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5496);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block15; else goto block17;
block15:;
// line 2704
org$frostlang$frostc$ASTNode* $tmp5499 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5500 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5501 = org$frostlang$frostc$parser$Parser$methodDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5499, $tmp5500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5501));
org$frostlang$frostc$FixedArray* $tmp5502 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5502));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5503));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5501;
block17:;
frost$core$Int64 $tmp5504 = (frost$core$Int64) {23};
frost$core$Bit $tmp5505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5504);
bool $tmp5506 = $tmp5505.value;
if ($tmp5506) goto block18; else goto block19;
block18:;
// line 2707
org$frostlang$frostc$ASTNode* $tmp5507 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5508 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5509 = org$frostlang$frostc$parser$Parser$initDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5507, $tmp5508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
org$frostlang$frostc$FixedArray* $tmp5510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5509;
block19:;
frost$core$Int64 $tmp5512 = (frost$core$Int64) {24};
frost$core$Bit $tmp5513 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5512);
bool $tmp5514 = $tmp5513.value;
if ($tmp5514) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5515 = (frost$core$Int64) {25};
frost$core$Bit $tmp5516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5515);
bool $tmp5517 = $tmp5516.value;
if ($tmp5517) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5518 = (frost$core$Int64) {26};
frost$core$Bit $tmp5519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5518);
bool $tmp5520 = $tmp5519.value;
if ($tmp5520) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5521 = (frost$core$Int64) {27};
frost$core$Bit $tmp5522 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5468, $tmp5521);
bool $tmp5523 = $tmp5522.value;
if ($tmp5523) goto block20; else goto block24;
block20:;
// line 2710
org$frostlang$frostc$ASTNode* $tmp5524 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp5525 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp5526 = org$frostlang$frostc$parser$Parser$fieldDeclaration$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ASTNode$Q(param0, $tmp5524, $tmp5525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5526));
org$frostlang$frostc$FixedArray* $tmp5527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5527));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp5526;
block24:;
// line 2714
frost$core$Int64 $tmp5529 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5530 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5529);
org$frostlang$frostc$parser$Token$nullable $tmp5531 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5530, &$s5532);
// line 2715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp5534 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
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
frost$core$Int64 $tmp5535 = (frost$core$Int64) {18};
org$frostlang$frostc$parser$Token$Kind $tmp5536 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5535);
org$frostlang$frostc$parser$Token$nullable $tmp5537 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5536, &$s5538);
*(&local0) = $tmp5537;
// line 2725
org$frostlang$frostc$parser$Token$nullable $tmp5539 = *(&local0);
frost$core$Bit $tmp5540 = frost$core$Bit$init$builtin_bit(!$tmp5539.nonnull);
bool $tmp5541 = $tmp5540.value;
if ($tmp5541) goto block1; else goto block2;
block1:;
// line 2726
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2728
frost$core$Int64 $tmp5542 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5543 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5542);
org$frostlang$frostc$parser$Token$nullable $tmp5544 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5543, &$s5545);
*(&local1) = $tmp5544;
// line 2729
org$frostlang$frostc$parser$Token$nullable $tmp5546 = *(&local1);
frost$core$Bit $tmp5547 = frost$core$Bit$init$builtin_bit(!$tmp5546.nonnull);
bool $tmp5548 = $tmp5547.value;
if ($tmp5548) goto block3; else goto block4;
block3:;
// line 2730
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2732
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2733
org$frostlang$frostc$parser$Token $tmp5549 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5550 = $tmp5549.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5551;
$tmp5551 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5551->value = $tmp5550;
frost$core$Int64 $tmp5552 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5553 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5552);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5554;
$tmp5554 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5554->value = $tmp5553;
ITable* $tmp5555 = ((frost$core$Equatable*) $tmp5551)->$class->itable;
while ($tmp5555->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5555 = $tmp5555->next;
}
$fn5557 $tmp5556 = $tmp5555->methods[0];
frost$core$Bit $tmp5558 = $tmp5556(((frost$core$Equatable*) $tmp5551), ((frost$core$Equatable*) $tmp5554));
bool $tmp5559 = $tmp5558.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5554)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5551)));
if ($tmp5559) goto block5; else goto block7;
block5:;
// line 2734
org$frostlang$frostc$FixedArray* $tmp5560 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
org$frostlang$frostc$FixedArray* $tmp5561 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
*(&local2) = $tmp5560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
// line 2735
org$frostlang$frostc$FixedArray* $tmp5562 = *(&local2);
frost$core$Bit $tmp5563 = frost$core$Bit$init$builtin_bit($tmp5562 == NULL);
bool $tmp5564 = $tmp5563.value;
if ($tmp5564) goto block8; else goto block9;
block8:;
// line 2736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5565));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5566 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2742
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2743
org$frostlang$frostc$parser$Token $tmp5567 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5568 = $tmp5567.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5569;
$tmp5569 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5569->value = $tmp5568;
frost$core$Int64 $tmp5570 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5571 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5570);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5572;
$tmp5572 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5572->value = $tmp5571;
ITable* $tmp5573 = ((frost$core$Equatable*) $tmp5569)->$class->itable;
while ($tmp5573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5573 = $tmp5573->next;
}
$fn5575 $tmp5574 = $tmp5573->methods[0];
frost$core$Bit $tmp5576 = $tmp5574(((frost$core$Equatable*) $tmp5569), ((frost$core$Equatable*) $tmp5572));
bool $tmp5577 = $tmp5576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5572)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5569)));
if ($tmp5577) goto block10; else goto block12;
block10:;
// line 2744
org$frostlang$frostc$FixedArray* $tmp5578 = org$frostlang$frostc$parser$Parser$supertypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
org$frostlang$frostc$FixedArray* $tmp5579 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5579));
*(&local3) = $tmp5578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
// line 2745
org$frostlang$frostc$FixedArray* $tmp5580 = *(&local3);
frost$core$Bit $tmp5581 = frost$core$Bit$init$builtin_bit($tmp5580 == NULL);
bool $tmp5582 = $tmp5581.value;
if ($tmp5582) goto block13; else goto block14;
block13:;
// line 2746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5583 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5585 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5585));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2752
frost$core$Int64 $tmp5586 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5587 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5586);
org$frostlang$frostc$parser$Token$nullable $tmp5588 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5587, &$s5589);
frost$core$Bit $tmp5590 = frost$core$Bit$init$builtin_bit(!$tmp5588.nonnull);
bool $tmp5591 = $tmp5590.value;
if ($tmp5591) goto block15; else goto block16;
block15:;
// line 2753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5592 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5592));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block16:;
// line 2755
frost$collections$Array* $tmp5594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5594);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
frost$collections$Array* $tmp5595 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5595));
*(&local4) = $tmp5594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
// line 2756
goto block17;
block17:;
frost$core$Int64 $tmp5596 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5597 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5596);
org$frostlang$frostc$parser$Token$nullable $tmp5598 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5597);
frost$core$Bit $tmp5599 = frost$core$Bit$init$builtin_bit(!$tmp5598.nonnull);
bool $tmp5600 = $tmp5599.value;
if ($tmp5600) goto block18; else goto block19;
block18:;
// line 2757
org$frostlang$frostc$ASTNode* $tmp5601 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
org$frostlang$frostc$ASTNode* $tmp5602 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
*(&local5) = $tmp5601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
// line 2758
org$frostlang$frostc$ASTNode* $tmp5603 = *(&local5);
frost$core$Bit $tmp5604 = frost$core$Bit$init$builtin_bit($tmp5603 == NULL);
bool $tmp5605 = $tmp5604.value;
if ($tmp5605) goto block20; else goto block21;
block20:;
// line 2759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5606 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5607));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5608 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5608));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5609 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 2761
frost$collections$Array* $tmp5610 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp5611 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5610, ((frost$core$Object*) $tmp5611));
org$frostlang$frostc$ASTNode* $tmp5612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2763
org$frostlang$frostc$ASTNode* $tmp5613 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5614 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5615 = *(&local0);
org$frostlang$frostc$Position $tmp5616 = ((org$frostlang$frostc$parser$Token) $tmp5615.value).position;
frost$core$Int64 $tmp5617 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp5618 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5617);
org$frostlang$frostc$parser$Token$nullable $tmp5619 = *(&local1);
frost$core$String* $tmp5620 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5619.value));
org$frostlang$frostc$FixedArray* $tmp5621 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp5622 = *(&local3);
frost$collections$Array* $tmp5623 = *(&local4);
org$frostlang$frostc$FixedArray* $tmp5624 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5623);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5613, $tmp5614, $tmp5616, param1, param2, $tmp5618, $tmp5620, $tmp5621, $tmp5622, $tmp5624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$collections$Array* $tmp5625 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5625));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5626 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5626));
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp5627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5613;

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
frost$core$Int64 $tmp5628 = (frost$core$Int64) {19};
org$frostlang$frostc$parser$Token$Kind $tmp5629 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5628);
org$frostlang$frostc$parser$Token$nullable $tmp5630 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5629, &$s5631);
*(&local0) = $tmp5630;
// line 2773
org$frostlang$frostc$parser$Token$nullable $tmp5632 = *(&local0);
frost$core$Bit $tmp5633 = frost$core$Bit$init$builtin_bit(!$tmp5632.nonnull);
bool $tmp5634 = $tmp5633.value;
if ($tmp5634) goto block1; else goto block2;
block1:;
// line 2774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 2776
frost$core$Int64 $tmp5635 = (frost$core$Int64) {52};
org$frostlang$frostc$parser$Token$Kind $tmp5636 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5635);
org$frostlang$frostc$parser$Token$nullable $tmp5637 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5636, &$s5638);
*(&local1) = $tmp5637;
// line 2777
org$frostlang$frostc$parser$Token$nullable $tmp5639 = *(&local1);
frost$core$Bit $tmp5640 = frost$core$Bit$init$builtin_bit(!$tmp5639.nonnull);
bool $tmp5641 = $tmp5640.value;
if ($tmp5641) goto block3; else goto block4;
block3:;
// line 2778
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block4:;
// line 2780
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
// line 2781
org$frostlang$frostc$parser$Token $tmp5642 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5643 = $tmp5642.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5644;
$tmp5644 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5644->value = $tmp5643;
frost$core$Int64 $tmp5645 = (frost$core$Int64) {66};
org$frostlang$frostc$parser$Token$Kind $tmp5646 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5645);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5647;
$tmp5647 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5647->value = $tmp5646;
ITable* $tmp5648 = ((frost$core$Equatable*) $tmp5644)->$class->itable;
while ($tmp5648->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5648 = $tmp5648->next;
}
$fn5650 $tmp5649 = $tmp5648->methods[0];
frost$core$Bit $tmp5651 = $tmp5649(((frost$core$Equatable*) $tmp5644), ((frost$core$Equatable*) $tmp5647));
bool $tmp5652 = $tmp5651.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5647)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5644)));
if ($tmp5652) goto block5; else goto block7;
block5:;
// line 2782
org$frostlang$frostc$FixedArray* $tmp5653 = org$frostlang$frostc$parser$Parser$genericsDeclaration$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
org$frostlang$frostc$FixedArray* $tmp5654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
*(&local2) = $tmp5653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
// line 2783
org$frostlang$frostc$FixedArray* $tmp5655 = *(&local2);
frost$core$Bit $tmp5656 = frost$core$Bit$init$builtin_bit($tmp5655 == NULL);
bool $tmp5657 = $tmp5656.value;
if ($tmp5657) goto block8; else goto block9;
block8:;
// line 2784
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$FixedArray* $tmp5658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2788
org$frostlang$frostc$FixedArray* $tmp5659 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp5659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
org$frostlang$frostc$FixedArray* $tmp5660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5660));
*(&local2) = $tmp5659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
goto block6;
block6:;
// line 2790
frost$collections$Array* $tmp5661 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5661);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
frost$collections$Array* $tmp5662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local3) = $tmp5661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
// line 2791
frost$core$Int64 $tmp5663 = (frost$core$Int64) {99};
org$frostlang$frostc$parser$Token$Kind $tmp5664 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5663);
org$frostlang$frostc$parser$Token$nullable $tmp5665 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5664);
frost$core$Bit $tmp5666 = frost$core$Bit$init$builtin_bit($tmp5665.nonnull);
bool $tmp5667 = $tmp5666.value;
if ($tmp5667) goto block10; else goto block11;
block10:;
// line 2792
org$frostlang$frostc$ASTNode* $tmp5668 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
org$frostlang$frostc$ASTNode* $tmp5669 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
*(&local4) = $tmp5668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
// line 2793
org$frostlang$frostc$ASTNode* $tmp5670 = *(&local4);
frost$core$Bit $tmp5671 = frost$core$Bit$init$builtin_bit($tmp5670 == NULL);
bool $tmp5672 = $tmp5671.value;
if ($tmp5672) goto block12; else goto block13;
block12:;
// line 2794
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5674 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5674));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5675));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// line 2796
frost$collections$Array* $tmp5676 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5677 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5676, ((frost$core$Object*) $tmp5677));
// line 2797
goto block14;
block14:;
frost$core$Int64 $tmp5678 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp5679 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5678);
org$frostlang$frostc$parser$Token$nullable $tmp5680 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5679);
frost$core$Bit $tmp5681 = frost$core$Bit$init$builtin_bit($tmp5680.nonnull);
bool $tmp5682 = $tmp5681.value;
if ($tmp5682) goto block15; else goto block16;
block15:;
// line 2798
org$frostlang$frostc$ASTNode* $tmp5683 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
org$frostlang$frostc$ASTNode* $tmp5684 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5684));
*(&local4) = $tmp5683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
// line 2799
org$frostlang$frostc$ASTNode* $tmp5685 = *(&local4);
frost$core$Bit $tmp5686 = frost$core$Bit$init$builtin_bit($tmp5685 == NULL);
bool $tmp5687 = $tmp5686.value;
if ($tmp5687) goto block17; else goto block18;
block17:;
// line 2800
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5688 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5689));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5690));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// line 2802
frost$collections$Array* $tmp5691 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp5692 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5691, ((frost$core$Object*) $tmp5692));
goto block14;
block16:;
org$frostlang$frostc$ASTNode* $tmp5693 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5693));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2805
frost$core$Int64 $tmp5694 = (frost$core$Int64) {103};
org$frostlang$frostc$parser$Token$Kind $tmp5695 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5694);
org$frostlang$frostc$parser$Token$nullable $tmp5696 = org$frostlang$frostc$parser$Parser$expect$org$frostlang$frostc$parser$Token$Kind$frost$core$String$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5695, &$s5697);
frost$core$Bit $tmp5698 = frost$core$Bit$init$builtin_bit(!$tmp5696.nonnull);
bool $tmp5699 = $tmp5698.value;
if ($tmp5699) goto block19; else goto block20;
block19:;
// line 2806
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5700 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5701 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block20:;
// line 2808
frost$collections$Array* $tmp5702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5702);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
frost$collections$Array* $tmp5703 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
*(&local5) = $tmp5702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
// line 2809
goto block21;
block21:;
frost$core$Int64 $tmp5704 = (frost$core$Int64) {104};
org$frostlang$frostc$parser$Token$Kind $tmp5705 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5704);
org$frostlang$frostc$parser$Token$nullable $tmp5706 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q(param0, $tmp5705);
frost$core$Bit $tmp5707 = frost$core$Bit$init$builtin_bit(!$tmp5706.nonnull);
bool $tmp5708 = $tmp5707.value;
if ($tmp5708) goto block22; else goto block23;
block22:;
// line 2810
org$frostlang$frostc$ASTNode* $tmp5709 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
org$frostlang$frostc$ASTNode* $tmp5710 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
*(&local6) = $tmp5709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
// line 2811
org$frostlang$frostc$ASTNode* $tmp5711 = *(&local6);
frost$core$Bit $tmp5712 = frost$core$Bit$init$builtin_bit($tmp5711 == NULL);
bool $tmp5713 = $tmp5712.value;
if ($tmp5713) goto block24; else goto block25;
block24:;
// line 2812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5714 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5714));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5715 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5715));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5716 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5717 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 2814
frost$collections$Array* $tmp5718 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp5719 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5718, ((frost$core$Object*) $tmp5719));
org$frostlang$frostc$ASTNode* $tmp5720 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2816
org$frostlang$frostc$ASTNode* $tmp5721 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5722 = (frost$core$Int64) {12};
org$frostlang$frostc$parser$Token$nullable $tmp5723 = *(&local0);
org$frostlang$frostc$Position $tmp5724 = ((org$frostlang$frostc$parser$Token) $tmp5723.value).position;
frost$core$Int64 $tmp5725 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp5726 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5725);
org$frostlang$frostc$parser$Token$nullable $tmp5727 = *(&local1);
frost$core$String* $tmp5728 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlang$frostc$parser$Token) $tmp5727.value));
org$frostlang$frostc$FixedArray* $tmp5729 = *(&local2);
frost$collections$Array* $tmp5730 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp5731 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5730);
frost$collections$Array* $tmp5732 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp5733 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5732);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5721, $tmp5722, $tmp5724, param1, param2, $tmp5726, $tmp5728, $tmp5729, $tmp5731, $tmp5733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
frost$collections$Array* $tmp5734 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp5736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp5721;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

// line 2825
org$frostlang$frostc$parser$Token $tmp5737 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5738 = $tmp5737.kind;
frost$core$Int64 $tmp5739 = $tmp5738.$rawValue;
frost$core$Int64 $tmp5740 = (frost$core$Int64) {16};
frost$core$Bit $tmp5741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5739, $tmp5740);
bool $tmp5742 = $tmp5741.value;
if ($tmp5742) goto block2; else goto block3;
block2:;
// line 2827
org$frostlang$frostc$ASTNode* $tmp5743 = org$frostlang$frostc$parser$Parser$usesDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
return $tmp5743;
block3:;
// line 2830
org$frostlang$frostc$ASTNode* $tmp5744 = org$frostlang$frostc$parser$Parser$declaration$R$org$frostlang$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
return $tmp5744;
block1:;
goto block4;
block4:;

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
// line 2839
frost$collections$Array* $tmp5745 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5745);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5745));
frost$collections$Array* $tmp5746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
*(&local0) = $tmp5745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5745));
// line 2840
org$frostlang$frostc$parser$Token $tmp5747 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5748 = $tmp5747.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5749;
$tmp5749 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5749->value = $tmp5748;
frost$core$Int64 $tmp5750 = (frost$core$Int64) {15};
org$frostlang$frostc$parser$Token$Kind $tmp5751 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5750);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5752;
$tmp5752 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5752->value = $tmp5751;
ITable* $tmp5753 = ((frost$core$Equatable*) $tmp5749)->$class->itable;
while ($tmp5753->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5753 = $tmp5753->next;
}
$fn5755 $tmp5754 = $tmp5753->methods[0];
frost$core$Bit $tmp5756 = $tmp5754(((frost$core$Equatable*) $tmp5749), ((frost$core$Equatable*) $tmp5752));
bool $tmp5757 = $tmp5756.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5752)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5749)));
if ($tmp5757) goto block1; else goto block2;
block1:;
// line 2841
org$frostlang$frostc$ASTNode* $tmp5758 = org$frostlang$frostc$parser$Parser$packageDeclaration$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5758));
org$frostlang$frostc$ASTNode* $tmp5759 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5759));
*(&local1) = $tmp5758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5758));
// line 2842
org$frostlang$frostc$ASTNode* $tmp5760 = *(&local1);
frost$core$Bit $tmp5761 = frost$core$Bit$init$builtin_bit($tmp5760 != NULL);
bool $tmp5762 = $tmp5761.value;
if ($tmp5762) goto block3; else goto block4;
block3:;
// line 2843
frost$collections$Array* $tmp5763 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5764 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5763, ((frost$core$Object*) $tmp5764));
goto block4;
block4:;
org$frostlang$frostc$ASTNode* $tmp5765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5765));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2846
goto block5;
block5:;
org$frostlang$frostc$parser$Token $tmp5766 = org$frostlang$frostc$parser$Parser$peek$R$org$frostlang$frostc$parser$Token(param0);
org$frostlang$frostc$parser$Token$Kind $tmp5767 = $tmp5766.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5768;
$tmp5768 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5768->value = $tmp5767;
frost$core$Int64 $tmp5769 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$Token$Kind $tmp5770 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5769);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp5771;
$tmp5771 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp5771->value = $tmp5770;
ITable* $tmp5772 = ((frost$core$Equatable*) $tmp5768)->$class->itable;
while ($tmp5772->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5772 = $tmp5772->next;
}
$fn5774 $tmp5773 = $tmp5772->methods[1];
frost$core$Bit $tmp5775 = $tmp5773(((frost$core$Equatable*) $tmp5768), ((frost$core$Equatable*) $tmp5771));
bool $tmp5776 = $tmp5775.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5771)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5768)));
if ($tmp5776) goto block6; else goto block7;
block6:;
// line 2847
org$frostlang$frostc$ASTNode* $tmp5777 = org$frostlang$frostc$parser$Parser$bodyEntry$R$org$frostlang$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
org$frostlang$frostc$ASTNode* $tmp5778 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5778));
*(&local2) = $tmp5777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
// line 2848
org$frostlang$frostc$ASTNode* $tmp5779 = *(&local2);
frost$core$Bit $tmp5780 = frost$core$Bit$init$builtin_bit($tmp5779 == NULL);
bool $tmp5781 = $tmp5780.value;
if ($tmp5781) goto block8; else goto block9;
block8:;
// line 2849
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp5782 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5783 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5783));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$ASTNode*) NULL);
block9:;
// line 2851
frost$collections$Stack** $tmp5784 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5785 = *$tmp5784;
frost$core$Int64 $tmp5786 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5785);
frost$core$Int64 $tmp5787 = (frost$core$Int64) {0};
frost$core$Bit $tmp5788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5786, $tmp5787);
bool $tmp5789 = $tmp5788.value;
if ($tmp5789) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5790 = (frost$core$Int64) {2851};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5791, $tmp5790);
abort(); // unreachable
block10:;
// line 2852
frost$collections$Array* $tmp5792 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp5793 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5792, ((frost$core$Object*) $tmp5793));
org$frostlang$frostc$ASTNode* $tmp5794 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5794));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2854
org$frostlang$frostc$ASTNode* $tmp5795 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp5796 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5797 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp5798 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp5797);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp5795, $tmp5796, $tmp5798);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5795));
frost$collections$Array* $tmp5799 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5795;

}
void org$frostlang$frostc$parser$Parser$cleanup(org$frostlang$frostc$parser$Parser* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Lexer** $tmp5800 = &param0->lexer;
org$frostlang$frostc$parser$Lexer* $tmp5801 = *$tmp5800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5801));
org$frostlang$regex$RegexParser** $tmp5802 = &param0->regexParser;
org$frostlang$regex$RegexParser* $tmp5803 = *$tmp5802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
frost$threads$MessageQueue** $tmp5804 = &param0->errors;
frost$threads$MessageQueue* $tmp5805 = *$tmp5804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
frost$io$File** $tmp5806 = &param0->path;
frost$io$File* $tmp5807 = *$tmp5806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
frost$core$String** $tmp5808 = &param0->source;
frost$core$String* $tmp5809 = *$tmp5808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT** $tmp5810 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* $tmp5811 = *$tmp5810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5811));
frost$collections$Stack** $tmp5812 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5813 = *$tmp5812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5813));
frost$collections$Stack** $tmp5814 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5815 = *$tmp5814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5815));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp5816 = &param0->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp5817 = *$tmp5816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5817));
return;

}

