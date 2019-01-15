#include "org/frostlanguage/frostc/parser/Parser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlanguage/frostc/parser/Lexer.h"
#include "frost/core/Frost.h"
#include "frost/collections/SpecializedArray.LTorg/frostlanguage/frostc/parser/Token.GT.h"
#include "frost/collections/Stack.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/regex/RegexParser.h"
#include "frost/io/File.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter.h"
#include "org/frostlanguage/frostc/parser/Token.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlanguage/frostc/parser/Parser/AutoSyntaxHighlight.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/Compiler/Error.h"
#include "org/frostlanguage/frostc/Position.h"
#include "frost/core/Immutable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char8.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt8.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/plex/runtime/DFA.h"
#include "org/frostlanguage/regex/RegexLexer.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Real64.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/ClassDecl/Kind.h"


static frost$core$String $s1;
org$frostlanguage$frostc$parser$Parser$class_type org$frostlanguage$frostc$parser$Parser$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$parser$Parser$cleanup, org$frostlanguage$frostc$parser$Parser$start$frost$io$File$frost$core$String, org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token, org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q, org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q, org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String, org$frostlanguage$frostc$parser$Parser$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind, org$frostlanguage$frostc$parser$Parser$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind, org$frostlanguage$frostc$parser$Parser$startSpeculative, org$frostlanguage$frostc$parser$Parser$accept, org$frostlanguage$frostc$parser$Parser$rewind, org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String, org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode, org$frostlanguage$frostc$parser$Parser$formatString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q, org$frostlanguage$frostc$parser$Parser$alignmentString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q, org$frostlanguage$frostc$parser$Parser$convertToString$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode, org$frostlanguage$frostc$parser$Parser$string$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$parenthesizedExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$arrayLiteral$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$lambda$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$regex$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$term$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$methodName$R$frost$core$String$Q, org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$functionOrTupleType$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$typeSpecifiers$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$parser$Parser$callExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$exponentExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$multiplicativeExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$rangeExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$comparisonExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$andExpression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$ifStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$target$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$assertStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$whenClause$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$matchStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$parser$Parser$block$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$expressionOrAssignment$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$singleVar$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$varDeclaration$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$initCall$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$breakStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$continueStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$returnStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$terminalStatement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$innerMethod$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$statement$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$packageDeclaration$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$usesDeclaration$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$parser$Parser$supertypes$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$parser$Parser$annotation$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$annotations$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT, org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$parameter$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q, org$frostlanguage$frostc$parser$Parser$methodDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$anonymousMethod$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$initDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$fieldDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$choiceCase$org$frostlanguage$frostc$ASTNode$Q$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$choiceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$classDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$interfaceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$bodyEntry$R$org$frostlanguage$frostc$ASTNode$Q, org$frostlanguage$frostc$parser$Parser$file$R$org$frostlanguage$frostc$ASTNode$Q} };

typedef void (*$fn54)(org$frostlanguage$frostc$parser$SyntaxHighlighter*);
typedef frost$core$Int64 (*$fn59)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn71)(frost$collections$CollectionView*);
typedef void (*$fn94)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token);
typedef frost$core$Bit (*$fn111)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn134)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn143)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn149)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn154)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token);
typedef frost$core$Int64 (*$fn246)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn260)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn275)(frost$collections$CollectionView*);
typedef void (*$fn288)(org$frostlanguage$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn292)(org$frostlanguage$frostc$parser$SyntaxHighlighter*);
typedef frost$core$Int64 (*$fn299)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn311)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn326)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn338)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn375)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn383)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int64 (*$fn402)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$Position (*$fn505)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn550)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn564)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn679)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn693)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlanguage$frostc$Position (*$fn783)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn790)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn798)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn805)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn827)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn838)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn862)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn907)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn923)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlanguage$frostc$Position (*$fn1014)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1022)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1033)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1050)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1086)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1094)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn1113)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1131)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn1744)(org$frostlanguage$frostc$parser$SyntaxHighlighter*);
typedef void (*$fn1748)(org$frostlanguage$frostc$parser$SyntaxHighlighter*);
typedef org$frostlanguage$frostc$Position (*$fn1764)(org$frostlanguage$frostc$ASTNode*);
typedef void (*$fn1768)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$Token);
typedef frost$core$Bit (*$fn1790)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1801)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2119)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2270)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2279)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2378)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn2470)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2661)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn2815)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2967)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3078)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3089)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3101)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3140)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3319)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3372)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn3856)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn3881)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3922)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn3939)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn4276)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn4365)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4373)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Bit (*$fn4698)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4731)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4742)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4889)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4910)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4970)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn5043)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Bit (*$fn5069)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5134)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn5232)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn5262)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn5444)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5557)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5650)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5760)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5779)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -5208520602033287070, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 115, 3244644311343226457, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x6f\x72\x6d\x61\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, -5845542348212964033, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 150, 960482151464878221, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0d", 1, 114, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x09", 1, 110, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c", 1, 193, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 4872307991516742361, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s1097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, 2245579887012294313, NULL };
static frost$core$String $s1476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s1547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s1952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s1990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, -4843752943012306573, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x67\x65\x74\x43\x6c\x61\x73\x73\x4e\x61\x6d\x65\x28\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 143, 8070428160738636846, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s2145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 8404386605286983212, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s2260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s2289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x4f\x72\x54\x75\x70\x6c\x65\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, 4302025541518337454, NULL };
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
static frost$core$String $s2840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -5698982695379594869, NULL };
static frost$core$String $s2905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 6270086979416767681, NULL };
static frost$core$String $s2997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 6920006046477489379, NULL };
static frost$core$String $s3041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, 3634076262481739201, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 8873693948328440744, NULL };
static frost$core$String $s3212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 6251547789674970598, NULL };
static frost$core$String $s3253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, 3293227002158322502, NULL };
static frost$core$String $s3289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static frost$core$String $s3352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s3360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s3398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static frost$core$String $s3411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static frost$core$String $s3443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static frost$core$String $s3484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static frost$core$String $s3506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static frost$core$String $s3525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static frost$core$String $s3560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 2795642619268027758, NULL };
static frost$core$String $s3565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static frost$core$String $s3623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static frost$core$String $s3636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s3684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static frost$core$String $s3690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s3755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s3868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s3895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 972838798710332817, NULL };
static frost$core$String $s3926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static frost$core$String $s4010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s4017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static frost$core$String $s4120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static frost$core$String $s4143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static frost$core$String $s4184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 7594626162482636844, NULL };
static frost$core$String $s4204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, 3984974424992429528, NULL };
static frost$core$String $s4232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static frost$core$String $s4236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, -7552551720256422472, NULL };
static frost$core$String $s4247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static frost$core$String $s4417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s4418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, 1257859856636321596, NULL };
static frost$core$String $s4422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static frost$core$String $s4429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static frost$core$String $s4473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static frost$core$String $s4517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static frost$core$String $s4605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static frost$core$String $s4641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static frost$core$String $s4659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static frost$core$String $s4746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static frost$core$String $s4763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s4786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static frost$core$String $s4823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s4841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static frost$core$String $s4998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static frost$core$String $s5005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static frost$core$String $s5030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s5050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s5115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static frost$core$String $s5122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s5412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static frost$core$String $s5414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s5527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static frost$core$String $s5533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s5534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, -3695689363458743203, NULL };
static frost$core$String $s5538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static frost$core$String $s5545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static frost$core$String $s5638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static frost$core$String $s5697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static frost$core$String $s5748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static frost$core$String $s5749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, 4856007519737943335, NULL };
static frost$core$String $s5796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };

void org$frostlanguage$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlanguage$frostc$Compiler$Error$GT(org$frostlanguage$frostc$parser$Parser* param0, frost$threads$MessageQueue* param1) {

// line 35
org$frostlanguage$frostc$parser$Lexer* $tmp2 = (org$frostlanguage$frostc$parser$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$parser$Lexer$class);
org$frostlanguage$frostc$parser$Lexer$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlanguage$frostc$parser$Lexer** $tmp3 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlanguage$frostc$parser$Lexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlanguage.frostc.parser.Lexer)
// line 45
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp6 = (frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$class);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp7 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($15:frost.collections.SpecializedArray<org.frostlanguage.frostc.parser.Token>)
// line 47
frost$collections$Stack* $tmp10 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Stack** $tmp11 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$Stack** $tmp13 = &param0->commaSeparatedExpressionContext;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing REF($29:frost.collections.Stack<frost.core.Bit>)
// line 49
frost$collections$Stack* $tmp14 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Stack** $tmp15 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$Stack** $tmp17 = &param0->speculativeBuffers;
*$tmp17 = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($44:frost.collections.Stack<frost.collections.SpecializedArray<org.frostlanguage.frostc.parser.Token>>)
// line 51
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp19 = &param0->allowLambdas;
*$tmp19 = $tmp18;
// line 53
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp21 = &param0->reportErrors;
*$tmp21 = $tmp20;
// line 58
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$MessageQueue** $tmp22 = &param0->errors;
frost$threads$MessageQueue* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$threads$MessageQueue** $tmp24 = &param0->errors;
*$tmp24 = param1;
// line 59
frost$collections$Stack** $tmp25 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp26 = *$tmp25;
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp28;
$tmp28 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp28->value = $tmp27;
frost$collections$Stack$push$frost$collections$Stack$T($tmp26, ((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($80:frost.collections.Stack.T)
// line 60
org$frostlanguage$regex$RegexParser* $tmp29 = (org$frostlanguage$regex$RegexParser*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlanguage$regex$RegexParser$class);
org$frostlanguage$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlanguage$frostc$Compiler$Error$GT($tmp29, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlanguage$regex$RegexParser** $tmp30 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlanguage$regex$RegexParser** $tmp32 = &param0->regexParser;
*$tmp32 = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($86:org.frostlanguage.regex.RegexParser)
return;

}
void org$frostlanguage$frostc$parser$Parser$start$frost$io$File$frost$core$String(org$frostlanguage$frostc$parser$Parser* param0, frost$io$File* param1, frost$core$String* param2) {

// line 64
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp34 = &param0->reportErrors;
*$tmp34 = $tmp33;
// line 65
org$frostlanguage$frostc$parser$Lexer** $tmp35 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp36 = *$tmp35;
org$frostlanguage$frostc$parser$Lexer$start$frost$core$String($tmp36, param2);
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp37 = &param0->path;
frost$io$File* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$io$File** $tmp39 = &param0->path;
*$tmp39 = param1;
// line 67
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp40 = &param0->source;
frost$core$String* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String** $tmp42 = &param0->source;
*$tmp42 = param2;
// line 68
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp43 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp44 = *$tmp43;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$clear($tmp44);
// line 69
org$frostlanguage$regex$RegexParser** $tmp45 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp46 = *$tmp45;
org$frostlanguage$regex$RegexParser$start$frost$io$File$frost$core$String($tmp46, param1, param2);
// line 70
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp47 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp48 = *$tmp47;
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block1:;
// line 71
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp51 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp52 = *$tmp51;
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[2];
$tmp53($tmp52);
goto block2;
block2:;
return;

}
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$parser$Token local2;
frost$core$Bit local3;
// line 76
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp55 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp56 = *$tmp55;
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
// line 77
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp67 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp68 = *$tmp67;
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
// line 78
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp78 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp79 = *$tmp78;
frost$core$Int64 $tmp80 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp81 = frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token($tmp79, $tmp80);
*(&local1) = $tmp81;
// line 79
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp82 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp83 = *$tmp82;
frost$core$Int64 $tmp84 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp85 = frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$removeIndex$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token($tmp83, $tmp84);
// line 80
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp86 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp87 = *$tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block3; else goto block4;
block3:;
// line 81
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp90 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp91 = *$tmp90;
org$frostlanguage$frostc$parser$Token $tmp92 = *(&local1);
$fn94 $tmp93 = ($fn94) $tmp91->$class->vtable[6];
$tmp93($tmp91, $tmp92);
goto block4;
block4:;
// line 83
org$frostlanguage$frostc$parser$Token $tmp95 = *(&local1);
return $tmp95;
block2:;
// line 85
org$frostlanguage$frostc$parser$Lexer** $tmp96 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp97 = *$tmp96;
org$frostlanguage$frostc$parser$Token $tmp98 = org$frostlanguage$frostc$parser$Lexer$next$R$org$frostlanguage$frostc$parser$Token($tmp97);
*(&local2) = $tmp98;
// line 86
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp99 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp100 = *$tmp99;
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit($tmp100 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block5; else goto block6;
block5:;
// line 87
org$frostlanguage$frostc$parser$Token $tmp103 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp104 = $tmp103.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp105->value = $tmp104;
frost$core$Int64 $tmp106 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$Kind $tmp107 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp106);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp108->value = $tmp107;
ITable* $tmp109 = ((frost$core$Equatable*) $tmp105)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110(((frost$core$Equatable*) $tmp105), ((frost$core$Equatable*) $tmp108));
bool $tmp113 = $tmp112.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp108)));
// unreffing REF($73:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp105)));
// unreffing REF($69:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp113) goto block7; else goto block8;
block7:;
// line 88
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp114 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp115 = *$tmp114;
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
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp122 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp123 = *$tmp122;
frost$collections$Stack** $tmp124 = &$tmp123->stack;
frost$collections$Stack* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Object* $tmp127 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp125, $tmp126);
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp128;
$tmp128 = (org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp128->value = ((org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp127)->value;
frost$core$Int64 $tmp129 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp130 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp129);
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp131;
$tmp131 = (org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp131->value = $tmp130;
ITable* $tmp132 = ((frost$core$Equatable*) $tmp128)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Bit $tmp135 = $tmp133(((frost$core$Equatable*) $tmp128), ((frost$core$Equatable*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
// unreffing REF($111:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
// unreffing REF($107:frost.core.Equatable<org.frostlanguage.frostc.parser.SyntaxHighlighter.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($105:frost.collections.Stack.T)
*(&local3) = $tmp135;
goto block13;
block13:;
frost$core$Bit $tmp136 = *(&local3);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block9; else goto block14;
block9:;
// line 90
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp138 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp139 = *$tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp141 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp140);
$fn143 $tmp142 = ($fn143) $tmp139->$class->vtable[3];
$tmp142($tmp139, $tmp141);
goto block10;
block14:;
// line 1
// line 93
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp144 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp147 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp146);
$fn149 $tmp148 = ($fn149) $tmp145->$class->vtable[4];
$tmp148($tmp145, $tmp147);
goto block10;
block10:;
goto block8;
block8:;
// line 96
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp150 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp151 = *$tmp150;
org$frostlanguage$frostc$parser$Token $tmp152 = *(&local2);
$fn154 $tmp153 = ($fn154) $tmp151->$class->vtable[6];
$tmp153($tmp151, $tmp152);
goto block6;
block6:;
// line 98
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
// line 99
frost$collections$Stack** $tmp164 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp165 = *$tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {0};
frost$core$Object* $tmp167 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp165, $tmp166);
org$frostlanguage$frostc$parser$Token $tmp168 = *(&local2);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$add$org$frostlanguage$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) $tmp167), $tmp168);
frost$core$Frost$unref$frost$core$Object$Q($tmp167);
// unreffing REF($173:frost.collections.Stack.T)
goto block16;
block16:;
// line 101
org$frostlanguage$frostc$parser$Token $tmp169 = *(&local2);
return $tmp169;

}
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$frostlanguage$frostc$parser$Token local2;
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$frostlanguage$frostc$parser$Token local4;
// line 105
goto block1;
block1:;
// line 106
org$frostlanguage$frostc$parser$Token $tmp170 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp170;
// line 107
org$frostlanguage$frostc$parser$Token $tmp171 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp172 = $tmp171.kind;
frost$core$Int64 $tmp173 = $tmp172.$rawValue;
frost$core$Int64 $tmp174 = (frost$core$Int64) {13};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block4; else goto block5;
block4:;
// line 109
goto block1;
block5:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {9};
frost$core$Bit $tmp178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block6; else goto block7;
block6:;
// line 112
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp180 = (org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp181 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp182 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp181);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlanguage$frostc$parser$Parser$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind($tmp180, param0, $tmp182);
*(&local1) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local1) = $tmp180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($20:org.frostlanguage.frostc.parser.Parser.AutoSyntaxHighlight)
// line 113
goto block8;
block8:;
// line 114
org$frostlanguage$frostc$parser$Token $tmp184 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local2) = $tmp184;
// line 115
org$frostlanguage$frostc$parser$Token $tmp185 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp186 = $tmp185.kind;
frost$core$Int64 $tmp187 = $tmp186.$rawValue;
frost$core$Int64 $tmp188 = (frost$core$Int64) {13};
frost$core$Bit $tmp189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp187, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block11; else goto block12;
block11:;
// line 117
org$frostlanguage$frostc$parser$Token $tmp191 = *(&local2);
frost$core$String* $tmp192 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp191);
frost$core$Bit $tmp193 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp192, &$s194);
bool $tmp195 = $tmp193.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($49:frost.core.String)
if ($tmp195) goto block13; else goto block14;
block13:;
// line 118
goto block9;
block14:;
goto block10;
block12:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {0};
frost$core$Bit $tmp197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp187, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block15; else goto block10;
block15:;
// line 122
org$frostlanguage$frostc$parser$Token $tmp199 = *(&local2);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing auto
*(&local1) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp199;
block10:;
goto block8;
block9:;
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing auto
*(&local1) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {10};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block16; else goto block17;
block16:;
// line 128
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp205 = (org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp206 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp207 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp206);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlanguage$frostc$parser$Parser$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind($tmp205, param0, $tmp207);
*(&local3) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp208 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local3) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($83:org.frostlanguage.frostc.parser.Parser.AutoSyntaxHighlight)
// line 129
goto block18;
block18:;
// line 130
org$frostlanguage$frostc$parser$Token $tmp209 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local4) = $tmp209;
// line 131
org$frostlanguage$frostc$parser$Token $tmp210 = *(&local4);
org$frostlanguage$frostc$parser$Token$Kind $tmp211 = $tmp210.kind;
frost$core$Int64 $tmp212 = $tmp211.$rawValue;
frost$core$Int64 $tmp213 = (frost$core$Int64) {11};
frost$core$Bit $tmp214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp212, $tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block21; else goto block22;
block21:;
// line 133
goto block19;
block22:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
frost$core$Bit $tmp217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp212, $tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block23; else goto block20;
block23:;
// line 136
org$frostlanguage$frostc$parser$Token $tmp219 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp219, &$s220);
// line 137
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp222 = &param0->reportErrors;
*$tmp222 = $tmp221;
// line 138
org$frostlanguage$frostc$parser$Token $tmp223 = *(&local4);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing auto
*(&local3) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp223;
block20:;
goto block18;
block19:;
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing auto
*(&local3) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 144
org$frostlanguage$frostc$parser$Token $tmp226 = *(&local0);
return $tmp226;
block3:;
goto block1;
block2:;
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit(false);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token param1) {

// line 151
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp232 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp233 = *$tmp232;
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block1; else goto block2;
block1:;
// line 152
goto block3;
block3:;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp236 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp237 = *$tmp236;
frost$collections$Array** $tmp238 = &$tmp237->tokens;
frost$collections$Array* $tmp239 = *$tmp238;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp240 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp241 = *$tmp240;
frost$collections$Array** $tmp242 = &$tmp241->tokens;
frost$collections$Array* $tmp243 = *$tmp242;
ITable* $tmp244 = ((frost$collections$CollectionView*) $tmp243)->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$core$Int64 $tmp247 = $tmp245(((frost$collections$CollectionView*) $tmp243));
frost$core$Int64 $tmp248 = (frost$core$Int64) {1};
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249 - $tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {$tmp251};
frost$core$Object* $tmp253 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp239, $tmp252);
frost$core$Object** $tmp254 = &((org$frostlanguage$frostc$Pair*) $tmp253)->first;
frost$core$Object* $tmp255 = *$tmp254;
frost$core$String* $tmp256 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token$wrapper*) $tmp255)->value);
frost$core$String* $tmp257 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, param1);
ITable* $tmp258 = ((frost$core$Equatable*) $tmp256)->$class->itable;
while ($tmp258->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[1];
frost$core$Bit $tmp261 = $tmp259(((frost$core$Equatable*) $tmp256), ((frost$core$Equatable*) $tmp257));
bool $tmp262 = $tmp261.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
// unreffing REF($28:frost.collections.Array.T)
if ($tmp262) goto block4; else goto block5;
block4:;
// line 154
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp263 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp264 = *$tmp263;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp265 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp266 = *$tmp265;
frost$collections$Array** $tmp267 = &$tmp266->tokens;
frost$collections$Array* $tmp268 = *$tmp267;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp269 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp270 = *$tmp269;
frost$collections$Array** $tmp271 = &$tmp270->tokens;
frost$collections$Array* $tmp272 = *$tmp271;
ITable* $tmp273 = ((frost$collections$CollectionView*) $tmp272)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$core$Int64 $tmp276 = $tmp274(((frost$collections$CollectionView*) $tmp272));
frost$core$Int64 $tmp277 = (frost$core$Int64) {1};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278 - $tmp279;
frost$core$Int64 $tmp281 = (frost$core$Int64) {$tmp280};
frost$core$Object* $tmp282 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp268, $tmp281);
frost$core$Object** $tmp283 = &((org$frostlanguage$frostc$Pair*) $tmp282)->first;
frost$core$Object* $tmp284 = *$tmp283;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$add$org$frostlanguage$frostc$parser$Token($tmp264, ((org$frostlanguage$frostc$parser$Token$wrapper*) $tmp284)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp282);
// unreffing REF($74:frost.collections.Array.T)
// line 156
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp285 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp286 = *$tmp285;
$fn288 $tmp287 = ($fn288) $tmp286->$class->vtable[7];
$tmp287($tmp286);
goto block3;
block5:;
// line 158
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp289 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp290 = *$tmp289;
$fn292 $tmp291 = ($fn292) $tmp290->$class->vtable[7];
$tmp291($tmp290);
goto block2;
block2:;
// line 160
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp293 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp294 = *$tmp293;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$add$org$frostlanguage$frostc$parser$Token($tmp294, param1);
return;

}
org$frostlanguage$frostc$parser$Token org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(org$frostlanguage$frostc$parser$Parser* param0) {

// line 164
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp295 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp296 = *$tmp295;
ITable* $tmp297 = ((frost$collections$CollectionView*) $tmp296)->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
frost$core$Int64 $tmp300 = $tmp298(((frost$collections$CollectionView*) $tmp296));
frost$core$Int64 $tmp301 = (frost$core$Int64) {0};
frost$core$Bit $tmp302 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp300, $tmp301);
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block1; else goto block2;
block1:;
// line 165
org$frostlanguage$frostc$parser$Token $tmp304 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp304);
goto block2;
block2:;
// line 167
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp305 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp306 = *$tmp305;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp307 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp308 = *$tmp307;
ITable* $tmp309 = ((frost$collections$CollectionView*) $tmp308)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Int64 $tmp312 = $tmp310(((frost$collections$CollectionView*) $tmp308));
frost$core$Int64 $tmp313 = (frost$core$Int64) {1};
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 - $tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {$tmp316};
org$frostlanguage$frostc$parser$Token $tmp318 = frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token($tmp306, $tmp317);
return $tmp318;

}
org$frostlanguage$frostc$parser$Token$nullable org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token$Kind param1) {

org$frostlanguage$frostc$parser$Token local0;
// line 171
org$frostlanguage$frostc$parser$Token $tmp319 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp319;
// line 172
org$frostlanguage$frostc$parser$Token $tmp320 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp321 = $tmp320.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp322;
$tmp322 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp322->value = $tmp321;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp323;
$tmp323 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp323->value = param1;
ITable* $tmp324 = ((frost$core$Equatable*) $tmp322)->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[0];
frost$core$Bit $tmp327 = $tmp325(((frost$core$Equatable*) $tmp322), ((frost$core$Equatable*) $tmp323));
bool $tmp328 = $tmp327.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp323)));
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp322)));
// unreffing REF($6:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp328) goto block1; else goto block2;
block1:;
// line 173
org$frostlanguage$frostc$parser$Token $tmp329 = *(&local0);
return ((org$frostlanguage$frostc$parser$Token$nullable) { $tmp329, true });
block2:;
// line 175
org$frostlanguage$frostc$parser$Token $tmp330 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp330);
// line 176
return ((org$frostlanguage$frostc$parser$Token$nullable) { .nonnull = false });

}
org$frostlanguage$frostc$parser$Token$nullable org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token$Kind param1, frost$core$String* param2) {

org$frostlanguage$frostc$parser$Token local0;
// line 180
org$frostlanguage$frostc$parser$Token $tmp331 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp331;
// line 181
org$frostlanguage$frostc$parser$Token $tmp332 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp333 = $tmp332.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp334;
$tmp334 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp334->value = $tmp333;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp335;
$tmp335 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp335->value = param1;
ITable* $tmp336 = ((frost$core$Equatable*) $tmp334)->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp336 = $tmp336->next;
}
$fn338 $tmp337 = $tmp336->methods[0];
frost$core$Bit $tmp339 = $tmp337(((frost$core$Equatable*) $tmp334), ((frost$core$Equatable*) $tmp335));
bool $tmp340 = $tmp339.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp335)));
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp334)));
// unreffing REF($6:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp340) goto block1; else goto block2;
block1:;
// line 182
org$frostlanguage$frostc$parser$Token $tmp341 = *(&local0);
return ((org$frostlanguage$frostc$parser$Token$nullable) { $tmp341, true });
block2:;
// line 184
org$frostlanguage$frostc$parser$Token $tmp342 = *(&local0);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s344, param2);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s346);
org$frostlanguage$frostc$parser$Token $tmp347 = *(&local0);
frost$core$String* $tmp348 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp347);
frost$core$String* $tmp349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, $tmp348);
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp349, &$s351);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp342, $tmp350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($30:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($25:frost.core.String)
// line 185
return ((org$frostlanguage$frostc$parser$Token$nullable) { .nonnull = false });

}
void org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token param1, frost$core$String* param2) {

frost$core$Bit local0;
// line 189
frost$collections$Stack** $tmp352 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp353 = *$tmp352;
frost$core$Int64 $tmp354 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp353);
frost$core$Int64 $tmp355 = (frost$core$Int64) {0};
frost$core$Bit $tmp356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp354, $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block3; else goto block4;
block3:;
frost$core$Bit* $tmp358 = &param0->reportErrors;
frost$core$Bit $tmp359 = *$tmp358;
*(&local0) = $tmp359;
goto block5;
block4:;
*(&local0) = $tmp356;
goto block5;
block5:;
frost$core$Bit $tmp360 = *(&local0);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block1; else goto block2;
block1:;
// line 190
frost$threads$MessageQueue** $tmp362 = &param0->errors;
frost$threads$MessageQueue* $tmp363 = *$tmp362;
org$frostlanguage$frostc$Compiler$Error* $tmp364 = (org$frostlanguage$frostc$Compiler$Error*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Error$class);
frost$io$File** $tmp365 = &param0->path;
frost$io$File* $tmp366 = *$tmp365;
org$frostlanguage$frostc$Position $tmp367 = param1.position;
org$frostlanguage$frostc$Compiler$Error$init$frost$io$File$org$frostlanguage$frostc$Position$frost$core$String($tmp364, $tmp366, $tmp367, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp363, ((frost$core$Immutable*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($22:org.frostlanguage.frostc.Compiler.Error)
goto block2;
block2:;
return;

}
void org$frostlanguage$frostc$parser$Parser$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 195
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp368 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp369 = *$tmp368;
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit($tmp369 != NULL);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 196
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp372 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[3];
$tmp374($tmp373, param1);
goto block2;
block2:;
return;

}
void org$frostlanguage$frostc$parser$Parser$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param1) {

// line 201
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp376 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp377 = *$tmp376;
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377 != NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block1:;
// line 202
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp380 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp381 = *$tmp380;
$fn383 $tmp382 = ($fn383) $tmp381->$class->vtable[4];
$tmp382($tmp381, param1);
goto block2;
block2:;
return;

}
void org$frostlanguage$frostc$parser$Parser$startSpeculative(org$frostlanguage$frostc$parser$Parser* param0) {

// line 207
frost$collections$Stack** $tmp384 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp385 = *$tmp384;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp386 = (frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$class);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$init($tmp386);
frost$collections$Stack$push$frost$collections$Stack$T($tmp385, ((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($4:frost.collections.SpecializedArray<org.frostlanguage.frostc.parser.Token>)
// line 208
frost$collections$Stack** $tmp387 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp388 = *$tmp387;
frost$core$Int64 $tmp389 = (frost$core$Int64) {0};
frost$core$Object* $tmp390 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp388, $tmp389);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp391 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp392 = *$tmp391;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$addAll$frost$collections$CollectionView$LTorg$frostlanguage$frostc$parser$Token$GT(((frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) $tmp390), ((frost$collections$CollectionView*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q($tmp390);
// unreffing REF($16:frost.collections.Stack.T)
return;

}
void org$frostlanguage$frostc$parser$Parser$accept(org$frostlanguage$frostc$parser$Parser* param0) {

// line 212
frost$collections$Stack** $tmp393 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp394 = *$tmp393;
frost$core$Object* $tmp395 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp394);
frost$core$Frost$unref$frost$core$Object$Q($tmp395);
// unreffing REF($4:frost.collections.Stack.T)
return;

}
void org$frostlanguage$frostc$parser$Parser$rewind(org$frostlanguage$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
// line 216
frost$collections$Stack** $tmp396 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp397 = *$tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {0};
frost$core$Object* $tmp399 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp397, $tmp398);
ITable* $tmp400 = ((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) $tmp399))->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[0];
frost$core$Int64 $tmp403 = $tmp401(((frost$collections$CollectionView*) ((frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) $tmp399)));
frost$core$Int64 $tmp404 = (frost$core$Int64) {1};
int64_t $tmp405 = $tmp403.value;
int64_t $tmp406 = $tmp404.value;
int64_t $tmp407 = $tmp405 - $tmp406;
frost$core$Int64 $tmp408 = (frost$core$Int64) {$tmp407};
frost$core$Int64 $tmp409 = (frost$core$Int64) {0};
frost$core$Int64 $tmp410 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp412 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp408, $tmp409, $tmp410, $tmp411);
frost$core$Int64 $tmp413 = $tmp412.start;
*(&local0) = $tmp413;
frost$core$Int64 $tmp414 = $tmp412.end;
frost$core$Int64 $tmp415 = $tmp412.step;
frost$core$UInt64 $tmp416 = frost$core$Int64$convert$R$frost$core$UInt64($tmp415);
frost$core$Int64 $tmp417 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp415);
frost$core$UInt64 $tmp418 = frost$core$Int64$convert$R$frost$core$UInt64($tmp417);
frost$core$Bit $tmp419 = $tmp412.inclusive;
bool $tmp420 = $tmp419.value;
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
int64_t $tmp422 = $tmp415.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 >= $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block4; else goto block5;
block4:;
if ($tmp420) goto block6; else goto block7;
block6:;
int64_t $tmp427 = $tmp413.value;
int64_t $tmp428 = $tmp414.value;
bool $tmp429 = $tmp427 <= $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block1; else goto block2;
block7:;
int64_t $tmp432 = $tmp413.value;
int64_t $tmp433 = $tmp414.value;
bool $tmp434 = $tmp432 < $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block1; else goto block2;
block5:;
if ($tmp420) goto block8; else goto block9;
block8:;
int64_t $tmp437 = $tmp413.value;
int64_t $tmp438 = $tmp414.value;
bool $tmp439 = $tmp437 >= $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block1; else goto block2;
block9:;
int64_t $tmp442 = $tmp413.value;
int64_t $tmp443 = $tmp414.value;
bool $tmp444 = $tmp442 > $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block1; else goto block2;
block1:;
// line 217
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp447 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp448 = *$tmp447;
frost$collections$Stack** $tmp449 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp450 = *$tmp449;
frost$core$Int64 $tmp451 = (frost$core$Int64) {0};
frost$core$Object* $tmp452 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp450, $tmp451);
frost$core$Int64 $tmp453 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp454 = frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$parser$Token(((frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT*) $tmp452), $tmp453);
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT$add$org$frostlanguage$frostc$parser$Token($tmp448, $tmp454);
frost$core$Frost$unref$frost$core$Object$Q($tmp452);
// unreffing REF($68:frost.collections.Stack.T)
goto block3;
block3:;
frost$core$Int64 $tmp455 = *(&local0);
if ($tmp426) goto block11; else goto block12;
block11:;
int64_t $tmp456 = $tmp414.value;
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456 - $tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
frost$core$UInt64 $tmp460 = frost$core$Int64$convert$R$frost$core$UInt64($tmp459);
if ($tmp420) goto block13; else goto block14;
block13:;
uint64_t $tmp461 = $tmp460.value;
uint64_t $tmp462 = $tmp416.value;
bool $tmp463 = $tmp461 >= $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block10; else goto block2;
block14:;
uint64_t $tmp466 = $tmp460.value;
uint64_t $tmp467 = $tmp416.value;
bool $tmp468 = $tmp466 > $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block10; else goto block2;
block12:;
int64_t $tmp471 = $tmp455.value;
int64_t $tmp472 = $tmp414.value;
int64_t $tmp473 = $tmp471 - $tmp472;
frost$core$Int64 $tmp474 = (frost$core$Int64) {$tmp473};
frost$core$UInt64 $tmp475 = frost$core$Int64$convert$R$frost$core$UInt64($tmp474);
if ($tmp420) goto block15; else goto block16;
block15:;
uint64_t $tmp476 = $tmp475.value;
uint64_t $tmp477 = $tmp418.value;
bool $tmp478 = $tmp476 >= $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block2;
block16:;
uint64_t $tmp481 = $tmp475.value;
uint64_t $tmp482 = $tmp418.value;
bool $tmp483 = $tmp481 > $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block10; else goto block2;
block10:;
int64_t $tmp486 = $tmp455.value;
int64_t $tmp487 = $tmp415.value;
int64_t $tmp488 = $tmp486 + $tmp487;
frost$core$Int64 $tmp489 = (frost$core$Int64) {$tmp488};
*(&local0) = $tmp489;
goto block1;
block2:;
frost$core$Frost$unref$frost$core$Object$Q($tmp399);
// unreffing REF($5:frost.collections.Stack.T)
// line 219
frost$collections$Stack** $tmp490 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp491 = *$tmp490;
frost$core$Object* $tmp492 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp491);
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
// unreffing REF($128:frost.collections.Stack.T)
return;

}
frost$core$String* org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token param1) {

// line 223
frost$core$String** $tmp493 = &param0->source;
frost$core$String* $tmp494 = *$tmp493;
frost$core$String$Index $tmp495 = param1.start;
frost$core$String$Index $tmp496 = param1.end;
frost$core$Bit $tmp497 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp498 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp495, $tmp496, $tmp497);
frost$core$String* $tmp499 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp494, $tmp498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($7:frost.core.String)
return $tmp499;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$ASTNode* param2) {

// line 227
frost$core$Bit $tmp500 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block1; else goto block2;
block1:;
// line 228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// line 230
org$frostlanguage$frostc$ASTNode* $tmp502 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp503 = (frost$core$Int64) {5};
$fn505 $tmp504 = ($fn505) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp506 = $tmp504(param1);
frost$core$Int64 $tmp507 = (frost$core$Int64) {52};
org$frostlanguage$frostc$parser$Token$Kind $tmp508 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp507);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp502, $tmp503, $tmp506, param1, $tmp508, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing REF($10:org.frostlanguage.frostc.ASTNode)
return $tmp502;

}
frost$core$String* org$frostlanguage$frostc$parser$Parser$formatString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token param1) {

frost$core$MutableString* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$parser$Token local3;
frost$core$String* local4 = NULL;
frost$core$Char8 local5;
// line 234
frost$core$MutableString* $tmp509 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp509);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$MutableString* $tmp510 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local0) = $tmp509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing REF($1:frost.core.MutableString)
// line 235
goto block1;
block1:;
// line 236
org$frostlanguage$frostc$parser$Token $tmp511 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp511;
// line 237
org$frostlanguage$frostc$parser$Token $tmp512 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp513 = $tmp512.kind;
frost$core$Int64 $tmp514 = $tmp513.$rawValue;
frost$core$Int64 $tmp515 = (frost$core$Int64) {13};
frost$core$Bit $tmp516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block4; else goto block5;
block4:;
// line 239
org$frostlanguage$frostc$parser$Token $tmp518 = *(&local1);
frost$core$String* $tmp519 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp518);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$String* $tmp520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local2) = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($28:frost.core.String)
// line 240
frost$core$String* $tmp521 = *(&local2);
frost$core$Bit $tmp522 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp521, &$s523);
bool $tmp524 = $tmp522.value;
if ($tmp524) goto block6; else goto block7;
block6:;
// line 241
org$frostlanguage$frostc$parser$Token $tmp525 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp525, &$s526);
// line 242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing str
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp528 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 244
frost$core$MutableString* $tmp529 = *(&local0);
frost$core$String* $tmp530 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp529, $tmp530);
frost$core$String* $tmp531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing str
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {0};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block8; else goto block9;
block8:;
// line 247
org$frostlanguage$frostc$parser$Token $tmp535 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp535, &$s536);
// line 248
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp537 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {107};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block10; else goto block11;
block10:;
// line 251
org$frostlanguage$frostc$parser$Token $tmp541 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local3) = $tmp541;
// line 252
org$frostlanguage$frostc$parser$Token $tmp542 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp543 = $tmp542.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp544;
$tmp544 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp544->value = $tmp543;
frost$core$Int64 $tmp545 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$Kind $tmp546 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp545);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp547;
$tmp547 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp547->value = $tmp546;
ITable* $tmp548 = ((frost$core$Equatable*) $tmp544)->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$core$Bit $tmp551 = $tmp549(((frost$core$Equatable*) $tmp544), ((frost$core$Equatable*) $tmp547));
bool $tmp552 = $tmp551.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp547)));
// unreffing REF($101:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp544)));
// unreffing REF($97:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp552) goto block12; else goto block13;
block12:;
// line 253
org$frostlanguage$frostc$parser$Token $tmp553 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp553, &$s554);
// line 254
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 256
org$frostlanguage$frostc$parser$Token $tmp556 = *(&local3);
frost$core$String* $tmp557 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp556);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$String* $tmp558 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local4) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing REF($126:frost.core.String)
// line 257
frost$core$String* $tmp559 = *(&local4);
frost$collections$ListView* $tmp560 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp559);
frost$core$Int64 $tmp561 = (frost$core$Int64) {0};
ITable* $tmp562 = $tmp560->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$core$Object* $tmp565 = $tmp563($tmp560, $tmp561);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp565)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp565);
// unreffing REF($143:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing REF($139:frost.collections.ListView<frost.core.Char8>)
// line 258
frost$core$Char8 $tmp566 = *(&local5);
frost$core$UInt8 $tmp567 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp568 = frost$core$Char8$init$frost$core$UInt8($tmp567);
frost$core$Bit $tmp569 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block15; else goto block16;
block15:;
// line 259
frost$core$MutableString* $tmp571 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp571, &$s572);
goto block14;
block16:;
frost$core$UInt8 $tmp573 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp574 = frost$core$Char8$init$frost$core$UInt8($tmp573);
frost$core$Bit $tmp575 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block17; else goto block18;
block17:;
// line 260
frost$core$MutableString* $tmp577 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp577, &$s578);
goto block14;
block18:;
frost$core$UInt8 $tmp579 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp580 = frost$core$Char8$init$frost$core$UInt8($tmp579);
frost$core$Bit $tmp581 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block19; else goto block20;
block19:;
// line 261
frost$core$MutableString* $tmp583 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp583, &$s584);
goto block14;
block20:;
frost$core$UInt8 $tmp585 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp586 = frost$core$Char8$init$frost$core$UInt8($tmp585);
frost$core$Bit $tmp587 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block21; else goto block22;
block21:;
// line 262
frost$core$MutableString* $tmp589 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp589, &$s590);
goto block14;
block22:;
frost$core$UInt8 $tmp591 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp592 = frost$core$Char8$init$frost$core$UInt8($tmp591);
frost$core$Bit $tmp593 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp592);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block23; else goto block24;
block23:;
// line 263
frost$core$MutableString* $tmp595 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp595, &$s596);
goto block14;
block24:;
frost$core$UInt8 $tmp597 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp598 = frost$core$Char8$init$frost$core$UInt8($tmp597);
frost$core$Bit $tmp599 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block25; else goto block26;
block25:;
// line 264
frost$core$MutableString* $tmp601 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp601, &$s602);
goto block14;
block26:;
frost$core$UInt8 $tmp603 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp604 = frost$core$Char8$init$frost$core$UInt8($tmp603);
frost$core$Bit $tmp605 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp566, $tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block27; else goto block28;
block27:;
// line 265
frost$core$MutableString* $tmp607 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp607, &$s608);
goto block14;
block28:;
// line 267
org$frostlanguage$frostc$parser$Token $tmp609 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp609, &$s610);
// line 268
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing escapeText
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 271
frost$core$MutableString* $tmp613 = *(&local0);
frost$core$String* $tmp614 = *(&local4);
frost$core$String* $tmp615 = *(&local4);
frost$core$String* $tmp616 = *(&local4);
frost$core$String$Index $tmp617 = frost$core$String$get_start$R$frost$core$String$Index($tmp616);
frost$core$String$Index $tmp618 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp615, $tmp617);
frost$core$Bit $tmp619 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp620 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp618, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp619);
frost$core$String* $tmp621 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp614, $tmp620);
frost$core$MutableString$append$frost$core$String($tmp613, $tmp621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($244:frost.core.String)
frost$core$String* $tmp622 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing escapeText
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {101};
frost$core$Bit $tmp624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block29; else goto block30;
block29:;
// line 274
org$frostlanguage$frostc$parser$Token $tmp626 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp626);
// line 275
frost$core$MutableString* $tmp627 = *(&local0);
frost$core$String* $tmp628 = frost$core$MutableString$finish$R$frost$core$String($tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing REF($264:frost.core.String)
frost$core$MutableString* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp628;
block30:;
// line 278
frost$core$MutableString* $tmp630 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp631 = *(&local1);
frost$core$String* $tmp632 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp631);
frost$core$MutableString$append$frost$core$String($tmp630, $tmp632);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($280:frost.core.String)
goto block3;
block3:;
goto block1;
block2:;
frost$core$Bit $tmp633 = frost$core$Bit$init$builtin_bit(false);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {233};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s636, $tmp635, &$s637);
abort(); // unreachable
block31:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$parser$Parser$alignmentString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$parser$Token param1) {

frost$core$MutableString* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$parser$Token local3;
frost$core$String* local4 = NULL;
frost$core$Char8 local5;
// line 285
frost$core$MutableString* $tmp638 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp638);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$MutableString* $tmp639 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local0) = $tmp638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing REF($1:frost.core.MutableString)
// line 286
goto block1;
block1:;
// line 287
org$frostlanguage$frostc$parser$Token $tmp640 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp640;
// line 288
org$frostlanguage$frostc$parser$Token $tmp641 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp642 = $tmp641.kind;
frost$core$Int64 $tmp643 = $tmp642.$rawValue;
frost$core$Int64 $tmp644 = (frost$core$Int64) {13};
frost$core$Bit $tmp645 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp643, $tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block4; else goto block5;
block4:;
// line 290
org$frostlanguage$frostc$parser$Token $tmp647 = *(&local1);
frost$core$String* $tmp648 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp647);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$String* $tmp649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local2) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($28:frost.core.String)
// line 291
frost$core$String* $tmp650 = *(&local2);
frost$core$Bit $tmp651 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp650, &$s652);
bool $tmp653 = $tmp651.value;
if ($tmp653) goto block6; else goto block7;
block6:;
// line 292
org$frostlanguage$frostc$parser$Token $tmp654 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp654, &$s655);
// line 293
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing str
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp657 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block7:;
// line 295
frost$core$MutableString* $tmp658 = *(&local0);
frost$core$String* $tmp659 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp658, $tmp659);
frost$core$String* $tmp660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing str
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {0};
frost$core$Bit $tmp662 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp643, $tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block8; else goto block9;
block8:;
// line 298
org$frostlanguage$frostc$parser$Token $tmp664 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp664, &$s665);
// line 299
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp666 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block9:;
frost$core$Int64 $tmp667 = (frost$core$Int64) {107};
frost$core$Bit $tmp668 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp643, $tmp667);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block10; else goto block11;
block10:;
// line 302
org$frostlanguage$frostc$parser$Token $tmp670 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local3) = $tmp670;
// line 303
org$frostlanguage$frostc$parser$Token $tmp671 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp672 = $tmp671.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp673;
$tmp673 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp673->value = $tmp672;
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$Kind $tmp675 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp674);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp676;
$tmp676 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp676->value = $tmp675;
ITable* $tmp677 = ((frost$core$Equatable*) $tmp673)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[0];
frost$core$Bit $tmp680 = $tmp678(((frost$core$Equatable*) $tmp673), ((frost$core$Equatable*) $tmp676));
bool $tmp681 = $tmp680.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp676)));
// unreffing REF($101:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp673)));
// unreffing REF($97:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp681) goto block12; else goto block13;
block12:;
// line 304
org$frostlanguage$frostc$parser$Token $tmp682 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp682, &$s683);
// line 305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp684 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block13:;
// line 307
org$frostlanguage$frostc$parser$Token $tmp685 = *(&local3);
frost$core$String* $tmp686 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp685);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$String* $tmp687 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local4) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($126:frost.core.String)
// line 308
frost$core$String* $tmp688 = *(&local4);
frost$collections$ListView* $tmp689 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp688);
frost$core$Int64 $tmp690 = (frost$core$Int64) {0};
ITable* $tmp691 = $tmp689->$class->itable;
while ($tmp691->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
frost$core$Object* $tmp694 = $tmp692($tmp689, $tmp690);
*(&local5) = ((frost$core$Char8$wrapper*) $tmp694)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp694);
// unreffing REF($143:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing REF($139:frost.collections.ListView<frost.core.Char8>)
// line 309
frost$core$Char8 $tmp695 = *(&local5);
frost$core$UInt8 $tmp696 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp697 = frost$core$Char8$init$frost$core$UInt8($tmp696);
frost$core$Bit $tmp698 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp697);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block15; else goto block16;
block15:;
// line 310
frost$core$MutableString* $tmp700 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp700, &$s701);
goto block14;
block16:;
frost$core$UInt8 $tmp702 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp703 = frost$core$Char8$init$frost$core$UInt8($tmp702);
frost$core$Bit $tmp704 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block17; else goto block18;
block17:;
// line 311
frost$core$MutableString* $tmp706 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp706, &$s707);
goto block14;
block18:;
frost$core$UInt8 $tmp708 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp709 = frost$core$Char8$init$frost$core$UInt8($tmp708);
frost$core$Bit $tmp710 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp709);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block19; else goto block20;
block19:;
// line 312
frost$core$MutableString* $tmp712 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp712, &$s713);
goto block14;
block20:;
frost$core$UInt8 $tmp714 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp715 = frost$core$Char8$init$frost$core$UInt8($tmp714);
frost$core$Bit $tmp716 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp715);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block21; else goto block22;
block21:;
// line 313
frost$core$MutableString* $tmp718 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp718, &$s719);
goto block14;
block22:;
frost$core$UInt8 $tmp720 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp721 = frost$core$Char8$init$frost$core$UInt8($tmp720);
frost$core$Bit $tmp722 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp721);
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block23; else goto block24;
block23:;
// line 314
frost$core$MutableString* $tmp724 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp724, &$s725);
goto block14;
block24:;
frost$core$UInt8 $tmp726 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp727 = frost$core$Char8$init$frost$core$UInt8($tmp726);
frost$core$Bit $tmp728 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp727);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block25; else goto block26;
block25:;
// line 315
frost$core$MutableString* $tmp730 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp730, &$s731);
goto block14;
block26:;
frost$core$UInt8 $tmp732 = (frost$core$UInt8) {58};
frost$core$Char8 $tmp733 = frost$core$Char8$init$frost$core$UInt8($tmp732);
frost$core$Bit $tmp734 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp733);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block27; else goto block28;
block27:;
// line 316
frost$core$MutableString* $tmp736 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp736, &$s737);
goto block14;
block28:;
frost$core$UInt8 $tmp738 = (frost$core$UInt8) {125};
frost$core$Char8 $tmp739 = frost$core$Char8$init$frost$core$UInt8($tmp738);
frost$core$Bit $tmp740 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp695, $tmp739);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block29; else goto block30;
block29:;
// line 317
frost$core$MutableString* $tmp742 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp742, &$s743);
goto block14;
block30:;
// line 319
org$frostlanguage$frostc$parser$Token $tmp744 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp744, &$s745);
// line 320
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp746 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing escapeText
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp747 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block14:;
// line 323
frost$core$MutableString* $tmp748 = *(&local0);
frost$core$String* $tmp749 = *(&local4);
frost$core$String* $tmp750 = *(&local4);
frost$core$String* $tmp751 = *(&local4);
frost$core$String$Index $tmp752 = frost$core$String$get_start$R$frost$core$String$Index($tmp751);
frost$core$String$Index $tmp753 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp750, $tmp752);
frost$core$Bit $tmp754 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp755 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp753, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp754);
frost$core$String* $tmp756 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp749, $tmp755);
frost$core$MutableString$append$frost$core$String($tmp748, $tmp756);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($253:frost.core.String)
frost$core$String* $tmp757 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// unreffing escapeText
*(&local4) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp758 = (frost$core$Int64) {96};
frost$core$Bit $tmp759 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp643, $tmp758);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block31; else goto block32;
block31:;
// line 326
org$frostlanguage$frostc$parser$Token $tmp761 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp761);
// line 327
frost$core$MutableString* $tmp762 = *(&local0);
frost$core$String* $tmp763 = frost$core$MutableString$finish$R$frost$core$String($tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing REF($273:frost.core.String)
frost$core$MutableString* $tmp764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp763;
block32:;
frost$core$Int64 $tmp765 = (frost$core$Int64) {101};
frost$core$Bit $tmp766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp643, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block33; else goto block34;
block33:;
// line 330
org$frostlanguage$frostc$parser$Token $tmp768 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp768);
// line 331
frost$core$MutableString* $tmp769 = *(&local0);
frost$core$String* $tmp770 = frost$core$MutableString$finish$R$frost$core$String($tmp769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing REF($295:frost.core.String)
frost$core$MutableString* $tmp771 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp770;
block34:;
// line 334
frost$core$MutableString* $tmp772 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp773 = *(&local1);
frost$core$String* $tmp774 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp773);
frost$core$MutableString$append$frost$core$String($tmp772, $tmp774);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($311:frost.core.String)
goto block3;
block3:;
goto block1;
block2:;
frost$core$Bit $tmp775 = frost$core$Bit$init$builtin_bit(false);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp777 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s778, $tmp777, &$s779);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$convertToString$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 342
org$frostlanguage$frostc$ASTNode* $tmp780 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp781 = (frost$core$Int64) {16};
$fn783 $tmp782 = ($fn783) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp784 = $tmp782(param1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp780, $tmp781, $tmp784, param1, &$s785);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
org$frostlanguage$frostc$ASTNode* $tmp786 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local0) = $tmp780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode)
// line 343
org$frostlanguage$frostc$ASTNode* $tmp787 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp788 = (frost$core$Int64) {9};
$fn790 $tmp789 = ($fn790) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp791 = $tmp789(param1);
org$frostlanguage$frostc$ASTNode* $tmp792 = *(&local0);
org$frostlanguage$frostc$FixedArray* $tmp793 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp793);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp787, $tmp788, $tmp791, $tmp792, $tmp793);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlanguage$frostc$ASTNode* $tmp794 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local1) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($22:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// unreffing REF($17:org.frostlanguage.frostc.ASTNode)
// line 344
org$frostlanguage$frostc$ASTNode* $tmp795 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp796 = (frost$core$Int64) {45};
$fn798 $tmp797 = ($fn798) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp799 = $tmp797(param1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp795, $tmp796, $tmp799, &$s800);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlanguage$frostc$ASTNode* $tmp801 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local2) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($40:org.frostlanguage.frostc.ASTNode)
// line 345
org$frostlanguage$frostc$ASTNode* $tmp802 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp803 = (frost$core$Int64) {5};
$fn805 $tmp804 = ($fn805) param1->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp806 = $tmp804(param1);
org$frostlanguage$frostc$ASTNode* $tmp807 = *(&local1);
frost$core$Int64 $tmp808 = (frost$core$Int64) {90};
org$frostlanguage$frostc$parser$Token$Kind $tmp809 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp808);
org$frostlanguage$frostc$ASTNode* $tmp810 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp802, $tmp803, $tmp806, $tmp807, $tmp809, $tmp810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing REF($56:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp811 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing stringType
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing call
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp813 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing dot
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp802;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$string$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
frost$core$Bit local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
frost$core$MutableString* local4 = NULL;
org$frostlanguage$frostc$parser$Token local5;
frost$core$String* local6 = NULL;
org$frostlanguage$frostc$parser$Token local7;
frost$core$String* local8 = NULL;
frost$core$Char8 local9;
frost$core$Bit local10;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
frost$core$String* local12 = NULL;
frost$core$String* local13 = NULL;
org$frostlanguage$frostc$ASTNode* local14 = NULL;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
org$frostlanguage$frostc$ASTNode* local16 = NULL;
frost$collections$Array* local17 = NULL;
org$frostlanguage$frostc$ASTNode* local18 = NULL;
org$frostlanguage$frostc$ASTNode* local19 = NULL;
frost$collections$Array* local20 = NULL;
frost$core$String* local21 = NULL;
frost$core$Bit local22;
// line 350
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp814 = (org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class);
frost$core$Int64 $tmp815 = (frost$core$Int64) {10};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp816 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp815);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlanguage$frostc$parser$Parser$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind($tmp814, param0, $tmp816);
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local0) = $tmp814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing REF($1:org.frostlanguage.frostc.parser.Parser.AutoSyntaxHighlight)
// line 351
org$frostlanguage$frostc$parser$Token $tmp818 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp818;
// line 352
org$frostlanguage$frostc$parser$Token $tmp819 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp820 = $tmp819.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp821;
$tmp821 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp821->value = $tmp820;
frost$core$Int64 $tmp822 = (frost$core$Int64) {8};
org$frostlanguage$frostc$parser$Token$Kind $tmp823 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp822);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp824;
$tmp824 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp824->value = $tmp823;
ITable* $tmp825 = ((frost$core$Equatable*) $tmp821)->$class->itable;
while ($tmp825->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp825 = $tmp825->next;
}
$fn827 $tmp826 = $tmp825->methods[1];
frost$core$Bit $tmp828 = $tmp826(((frost$core$Equatable*) $tmp821), ((frost$core$Equatable*) $tmp824));
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block3; else goto block4;
block3:;
org$frostlanguage$frostc$parser$Token $tmp830 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp831 = $tmp830.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp832;
$tmp832 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp832->value = $tmp831;
frost$core$Int64 $tmp833 = (frost$core$Int64) {7};
org$frostlanguage$frostc$parser$Token$Kind $tmp834 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp833);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp835;
$tmp835 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp835->value = $tmp834;
ITable* $tmp836 = ((frost$core$Equatable*) $tmp832)->$class->itable;
while ($tmp836->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp836 = $tmp836->next;
}
$fn838 $tmp837 = $tmp836->methods[1];
frost$core$Bit $tmp839 = $tmp837(((frost$core$Equatable*) $tmp832), ((frost$core$Equatable*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp835)));
// unreffing REF($36:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp832)));
// unreffing REF($32:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
*(&local2) = $tmp839;
goto block5;
block4:;
*(&local2) = $tmp828;
goto block5;
block5:;
frost$core$Bit $tmp840 = *(&local2);
bool $tmp841 = $tmp840.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp824)));
// unreffing REF($25:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp821)));
// unreffing REF($21:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp841) goto block1; else goto block2;
block1:;
// line 353
org$frostlanguage$frostc$parser$Token $tmp842 = *(&local1);
org$frostlanguage$frostc$parser$Token $tmp843 = *(&local1);
frost$core$String* $tmp844 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp843);
frost$core$String* $tmp845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s846, $tmp844);
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp845, &$s848);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp842, $tmp847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($61:frost.core.String)
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 356
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp850 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 357
frost$core$MutableString* $tmp851 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp851);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$MutableString* $tmp852 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local4) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing REF($92:frost.core.MutableString)
// line 358
goto block6;
block6:;
// line 359
org$frostlanguage$frostc$parser$Token $tmp853 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local5) = $tmp853;
// line 360
org$frostlanguage$frostc$parser$Token $tmp854 = *(&local5);
org$frostlanguage$frostc$parser$Token$Kind $tmp855 = $tmp854.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp856;
$tmp856 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp856->value = $tmp855;
org$frostlanguage$frostc$parser$Token $tmp857 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp858 = $tmp857.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp859;
$tmp859 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp859->value = $tmp858;
ITable* $tmp860 = ((frost$core$Equatable*) $tmp856)->$class->itable;
while ($tmp860->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp860 = $tmp860->next;
}
$fn862 $tmp861 = $tmp860->methods[0];
frost$core$Bit $tmp863 = $tmp861(((frost$core$Equatable*) $tmp856), ((frost$core$Equatable*) $tmp859));
bool $tmp864 = $tmp863.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp859)));
// unreffing REF($116:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp856)));
// unreffing REF($112:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp864) goto block8; else goto block9;
block8:;
// line 361
goto block7;
block9:;
// line 363
org$frostlanguage$frostc$parser$Token $tmp865 = *(&local5);
org$frostlanguage$frostc$parser$Token$Kind $tmp866 = $tmp865.kind;
frost$core$Int64 $tmp867 = $tmp866.$rawValue;
frost$core$Int64 $tmp868 = (frost$core$Int64) {13};
frost$core$Bit $tmp869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp867, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block11; else goto block12;
block11:;
// line 365
org$frostlanguage$frostc$parser$Token $tmp871 = *(&local5);
frost$core$String* $tmp872 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp871);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$String* $tmp873 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local6) = $tmp872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($139:frost.core.String)
// line 366
frost$core$String* $tmp874 = *(&local6);
frost$core$Bit $tmp875 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp874, &$s876);
bool $tmp877 = $tmp875.value;
if ($tmp877) goto block13; else goto block14;
block13:;
// line 367
org$frostlanguage$frostc$parser$Token $tmp878 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp878, &$s879);
// line 368
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp880 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing str
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp881 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp882 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp883 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
// line 370
frost$core$MutableString* $tmp884 = *(&local4);
frost$core$String* $tmp885 = *(&local6);
frost$core$MutableString$append$frost$core$String($tmp884, $tmp885);
frost$core$String* $tmp886 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing str
*(&local6) = ((frost$core$String*) NULL);
goto block10;
block12:;
frost$core$Int64 $tmp887 = (frost$core$Int64) {0};
frost$core$Bit $tmp888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp867, $tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block15; else goto block16;
block15:;
// line 373
org$frostlanguage$frostc$parser$Token $tmp890 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp890, &$s891);
// line 374
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp892 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp893 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp894 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
frost$core$Int64 $tmp895 = (frost$core$Int64) {107};
frost$core$Bit $tmp896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp867, $tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block17; else goto block18;
block17:;
// line 377
org$frostlanguage$frostc$parser$Token $tmp898 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local7) = $tmp898;
// line 378
org$frostlanguage$frostc$parser$Token $tmp899 = *(&local7);
org$frostlanguage$frostc$parser$Token$Kind $tmp900 = $tmp899.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp901;
$tmp901 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp901->value = $tmp900;
frost$core$Int64 $tmp902 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$Kind $tmp903 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp902);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp904;
$tmp904 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp904->value = $tmp903;
ITable* $tmp905 = ((frost$core$Equatable*) $tmp901)->$class->itable;
while ($tmp905->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp905 = $tmp905->next;
}
$fn907 $tmp906 = $tmp905->methods[0];
frost$core$Bit $tmp908 = $tmp906(((frost$core$Equatable*) $tmp901), ((frost$core$Equatable*) $tmp904));
bool $tmp909 = $tmp908.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp904)));
// unreffing REF($232:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp901)));
// unreffing REF($228:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp909) goto block19; else goto block20;
block19:;
// line 379
org$frostlanguage$frostc$parser$Token $tmp910 = *(&local1);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp910, &$s911);
// line 380
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp912 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp913 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp914 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block20:;
// line 382
org$frostlanguage$frostc$parser$Token $tmp915 = *(&local7);
frost$core$String* $tmp916 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp915);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$String* $tmp917 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local8) = $tmp916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing REF($267:frost.core.String)
// line 383
frost$core$String* $tmp918 = *(&local8);
frost$collections$ListView* $tmp919 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT($tmp918);
frost$core$Int64 $tmp920 = (frost$core$Int64) {0};
ITable* $tmp921 = $tmp919->$class->itable;
while ($tmp921->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp921 = $tmp921->next;
}
$fn923 $tmp922 = $tmp921->methods[0];
frost$core$Object* $tmp924 = $tmp922($tmp919, $tmp920);
*(&local9) = ((frost$core$Char8$wrapper*) $tmp924)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp924);
// unreffing REF($284:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($280:frost.collections.ListView<frost.core.Char8>)
// line 384
frost$core$Char8 $tmp925 = *(&local9);
frost$core$UInt8 $tmp926 = (frost$core$UInt8) {110};
frost$core$Char8 $tmp927 = frost$core$Char8$init$frost$core$UInt8($tmp926);
frost$core$Bit $tmp928 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp927);
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block22; else goto block23;
block22:;
// line 385
frost$core$MutableString* $tmp930 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp930, &$s931);
goto block21;
block23:;
frost$core$UInt8 $tmp932 = (frost$core$UInt8) {114};
frost$core$Char8 $tmp933 = frost$core$Char8$init$frost$core$UInt8($tmp932);
frost$core$Bit $tmp934 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp933);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block24; else goto block25;
block24:;
// line 386
frost$core$MutableString* $tmp936 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp936, &$s937);
goto block21;
block25:;
frost$core$UInt8 $tmp938 = (frost$core$UInt8) {116};
frost$core$Char8 $tmp939 = frost$core$Char8$init$frost$core$UInt8($tmp938);
frost$core$Bit $tmp940 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp939);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block26; else goto block27;
block26:;
// line 387
frost$core$MutableString* $tmp942 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp942, &$s943);
goto block21;
block27:;
frost$core$UInt8 $tmp944 = (frost$core$UInt8) {39};
frost$core$Char8 $tmp945 = frost$core$Char8$init$frost$core$UInt8($tmp944);
frost$core$Bit $tmp946 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp945);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block28; else goto block29;
block28:;
// line 388
frost$core$MutableString* $tmp948 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp948, &$s949);
goto block21;
block29:;
frost$core$UInt8 $tmp950 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp951 = frost$core$Char8$init$frost$core$UInt8($tmp950);
frost$core$Bit $tmp952 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp951);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block30; else goto block31;
block30:;
// line 389
frost$core$MutableString* $tmp954 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp954, &$s955);
goto block21;
block31:;
frost$core$UInt8 $tmp956 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp957 = frost$core$Char8$init$frost$core$UInt8($tmp956);
frost$core$Bit $tmp958 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp957);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block32; else goto block33;
block32:;
// line 390
frost$core$MutableString* $tmp960 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp960, &$s961);
goto block21;
block33:;
frost$core$UInt8 $tmp962 = (frost$core$UInt8) {123};
frost$core$Char8 $tmp963 = frost$core$Char8$init$frost$core$UInt8($tmp962);
frost$core$Bit $tmp964 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp925, $tmp963);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block34; else goto block35;
block34:;
// line 393
frost$core$Bit* $tmp966 = &param0->allowLambdas;
frost$core$Bit $tmp967 = *$tmp966;
*(&local10) = $tmp967;
// line 394
frost$core$Bit $tmp968 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp969 = &param0->allowLambdas;
*$tmp969 = $tmp968;
// line 395
org$frostlanguage$frostc$ASTNode* $tmp970 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
org$frostlanguage$frostc$ASTNode* $tmp971 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local11) = $tmp970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// unreffing REF($363:org.frostlanguage.frostc.ASTNode?)
// line 396
frost$core$Bit $tmp972 = *(&local10);
frost$core$Bit* $tmp973 = &param0->allowLambdas;
*$tmp973 = $tmp972;
// line 397
org$frostlanguage$frostc$ASTNode* $tmp974 = *(&local11);
frost$core$Bit $tmp975 = frost$core$Bit$init$builtin_bit($tmp974 == NULL);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block36; else goto block37;
block36:;
// line 398
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp977 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing expr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp978 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing escapeText
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp979 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp980 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp981 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block37:;
// line 400
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp982 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local12) = ((frost$core$String*) NULL);
// line 401
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp983 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local13) = ((frost$core$String*) NULL);
// line 402
frost$core$Int64 $tmp984 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp985 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp984);
org$frostlanguage$frostc$parser$Token$nullable $tmp986 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp985);
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit($tmp986.nonnull);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block38; else goto block39;
block38:;
// line 403
org$frostlanguage$frostc$parser$Token $tmp989 = *(&local1);
frost$core$String* $tmp990 = org$frostlanguage$frostc$parser$Parser$alignmentString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$String* $tmp991 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local12) = $tmp990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing REF($439:frost.core.String?)
goto block39;
block39:;
// line 405
frost$core$Int64 $tmp992 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp993 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp992);
org$frostlanguage$frostc$parser$Token$nullable $tmp994 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp993);
frost$core$Bit $tmp995 = frost$core$Bit$init$builtin_bit($tmp994.nonnull);
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block40; else goto block41;
block40:;
// line 406
org$frostlanguage$frostc$parser$Token $tmp997 = *(&local1);
frost$core$String* $tmp998 = org$frostlanguage$frostc$parser$Parser$formatString$org$frostlanguage$frostc$parser$Token$R$frost$core$String$Q(param0, $tmp997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$String* $tmp999 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local13) = $tmp998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($460:frost.core.String?)
// line 407
frost$core$String* $tmp1000 = *(&local13);
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit($tmp1000 == NULL);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block42; else goto block43;
block42:;
// line 408
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1003 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing format
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp1004 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing align
*(&local12) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1005 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing expr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1006 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing escapeText
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1007 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1008 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block43:;
// line 410
org$frostlanguage$frostc$ASTNode* $tmp1010 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1011 = (frost$core$Int64) {45};
org$frostlanguage$frostc$ASTNode* $tmp1012 = *(&local11);
$fn1014 $tmp1013 = ($fn1014) $tmp1012->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1015 = $tmp1013($tmp1012);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1010, $tmp1011, $tmp1015, &$s1016);
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
org$frostlanguage$frostc$ASTNode* $tmp1017 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local14) = $tmp1010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing REF($516:org.frostlanguage.frostc.ASTNode)
// line 412
org$frostlanguage$frostc$ASTNode* $tmp1018 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1019 = (frost$core$Int64) {5};
org$frostlanguage$frostc$ASTNode* $tmp1020 = *(&local11);
$fn1022 $tmp1021 = ($fn1022) $tmp1020->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1023 = $tmp1021($tmp1020);
org$frostlanguage$frostc$ASTNode* $tmp1024 = *(&local11);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {90};
org$frostlanguage$frostc$parser$Token$Kind $tmp1026 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1025);
org$frostlanguage$frostc$ASTNode* $tmp1027 = *(&local14);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp1018, $tmp1019, $tmp1023, $tmp1024, $tmp1026, $tmp1027);
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
org$frostlanguage$frostc$ASTNode* $tmp1028 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local15) = $tmp1018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($534:org.frostlanguage.frostc.ASTNode)
// line 414
org$frostlanguage$frostc$ASTNode* $tmp1029 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1030 = (frost$core$Int64) {16};
org$frostlanguage$frostc$ASTNode* $tmp1031 = *(&local11);
$fn1033 $tmp1032 = ($fn1033) $tmp1031->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1034 = $tmp1032($tmp1031);
org$frostlanguage$frostc$ASTNode* $tmp1035 = *(&local15);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp1029, $tmp1030, $tmp1034, $tmp1035, &$s1036);
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlanguage$frostc$ASTNode* $tmp1037 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local16) = $tmp1029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing REF($557:org.frostlanguage.frostc.ASTNode)
// line 415
frost$collections$Array* $tmp1038 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1038);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$collections$Array* $tmp1039 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local17) = $tmp1038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing REF($576:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 416
frost$collections$Array* $tmp1040 = *(&local17);
org$frostlanguage$frostc$ASTNode* $tmp1041 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1042 = (frost$core$Int64) {41};
org$frostlanguage$frostc$parser$Token $tmp1043 = *(&local1);
org$frostlanguage$frostc$Position $tmp1044 = $tmp1043.position;
frost$core$String* $tmp1045 = *(&local13);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1041, $tmp1042, $tmp1044, $tmp1045);
frost$collections$Array$add$frost$collections$Array$T($tmp1040, ((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($592:org.frostlanguage.frostc.ASTNode)
// line 417
org$frostlanguage$frostc$ASTNode* $tmp1046 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1047 = (frost$core$Int64) {9};
org$frostlanguage$frostc$ASTNode* $tmp1048 = *(&local11);
$fn1050 $tmp1049 = ($fn1050) $tmp1048->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1051 = $tmp1049($tmp1048);
org$frostlanguage$frostc$ASTNode* $tmp1052 = *(&local16);
frost$collections$Array* $tmp1053 = *(&local17);
org$frostlanguage$frostc$FixedArray* $tmp1054 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1053);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp1046, $tmp1047, $tmp1051, $tmp1052, $tmp1054);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlanguage$frostc$ASTNode* $tmp1055 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local11) = $tmp1046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($614:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// unreffing REF($605:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp1056 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing callArgs
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1057 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing dot
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1058 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing cast
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1059 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing formattable
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block41;
block41:;
// line 420
frost$core$Int64 $tmp1060 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp1061 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1060);
org$frostlanguage$frostc$parser$Token$nullable $tmp1062 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1061, &$s1063);
frost$core$Bit $tmp1064 = frost$core$Bit$init$builtin_bit(!$tmp1062.nonnull);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block44; else goto block45;
block44:;
// line 421
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1066 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing format
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp1067 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// unreffing align
*(&local12) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1068 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
// unreffing expr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1069 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing escapeText
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1070 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1071 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block45:;
// line 423
frost$core$String* $tmp1073 = *(&local12);
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit($tmp1073 != NULL);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block46; else goto block47;
block46:;
// line 424
frost$core$String* $tmp1076 = *(&local13);
frost$core$Bit $tmp1077 = frost$core$Bit$init$builtin_bit($tmp1076 == NULL);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block48; else goto block49;
block48:;
// line 425
org$frostlanguage$frostc$ASTNode* $tmp1079 = *(&local11);
org$frostlanguage$frostc$ASTNode* $tmp1080 = org$frostlanguage$frostc$parser$Parser$convertToString$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(param0, $tmp1079);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
org$frostlanguage$frostc$ASTNode* $tmp1081 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local11) = $tmp1080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// unreffing REF($713:org.frostlanguage.frostc.ASTNode)
goto block49;
block49:;
// line 427
org$frostlanguage$frostc$ASTNode* $tmp1082 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1083 = (frost$core$Int64) {45};
org$frostlanguage$frostc$ASTNode* $tmp1084 = *(&local11);
$fn1086 $tmp1085 = ($fn1086) $tmp1084->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1087 = $tmp1085($tmp1084);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1082, $tmp1083, $tmp1087, &$s1088);
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
org$frostlanguage$frostc$ASTNode* $tmp1089 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local18) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// unreffing REF($726:org.frostlanguage.frostc.ASTNode)
// line 428
org$frostlanguage$frostc$ASTNode* $tmp1090 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1091 = (frost$core$Int64) {16};
org$frostlanguage$frostc$ASTNode* $tmp1092 = *(&local11);
$fn1094 $tmp1093 = ($fn1094) $tmp1092->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1095 = $tmp1093($tmp1092);
org$frostlanguage$frostc$ASTNode* $tmp1096 = *(&local18);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp1090, $tmp1091, $tmp1095, $tmp1096, &$s1097);
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
org$frostlanguage$frostc$ASTNode* $tmp1098 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local19) = $tmp1090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
// unreffing REF($744:org.frostlanguage.frostc.ASTNode)
// line 429
frost$collections$Array* $tmp1099 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1099);
*(&local20) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$collections$Array* $tmp1100 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local20) = $tmp1099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing REF($763:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 430
frost$collections$Array* $tmp1101 = *(&local20);
org$frostlanguage$frostc$ASTNode* $tmp1102 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp1101, ((frost$core$Object*) $tmp1102));
// line 431
frost$collections$Array* $tmp1103 = *(&local20);
org$frostlanguage$frostc$ASTNode* $tmp1104 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1105 = (frost$core$Int64) {41};
org$frostlanguage$frostc$parser$Token $tmp1106 = *(&local1);
org$frostlanguage$frostc$Position $tmp1107 = $tmp1106.position;
frost$core$String* $tmp1108 = *(&local12);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1104, $tmp1105, $tmp1107, $tmp1108);
frost$collections$Array$add$frost$collections$Array$T($tmp1103, ((frost$core$Object*) $tmp1104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
// unreffing REF($786:org.frostlanguage.frostc.ASTNode)
// line 432
org$frostlanguage$frostc$ASTNode* $tmp1109 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1110 = (frost$core$Int64) {9};
org$frostlanguage$frostc$ASTNode* $tmp1111 = *(&local11);
$fn1113 $tmp1112 = ($fn1113) $tmp1111->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1114 = $tmp1112($tmp1111);
org$frostlanguage$frostc$ASTNode* $tmp1115 = *(&local19);
frost$collections$Array* $tmp1116 = *(&local20);
org$frostlanguage$frostc$FixedArray* $tmp1117 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1116);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp1109, $tmp1110, $tmp1114, $tmp1115, $tmp1117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
org$frostlanguage$frostc$ASTNode* $tmp1118 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local11) = $tmp1109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// unreffing REF($808:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
// unreffing REF($799:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp1119 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// unreffing callArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1120 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
// unreffing callTarget
*(&local19) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1121 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
// unreffing frostType
*(&local18) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block47;
block47:;
// line 435
frost$core$MutableString* $tmp1122 = *(&local4);
frost$core$String* $tmp1123 = frost$core$MutableString$finish$R$frost$core$String($tmp1122);
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$String* $tmp1124 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local21) = $tmp1123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
// unreffing REF($842:frost.core.String)
// line 436
frost$core$MutableString* $tmp1125 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$MutableString* $tmp1126 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local4) = $tmp1125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($854:frost.core.MutableString)
// line 437
frost$core$String* $tmp1127 = *(&local21);
ITable* $tmp1129 = ((frost$core$Equatable*) $tmp1127)->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[1];
frost$core$Bit $tmp1132 = $tmp1130(((frost$core$Equatable*) $tmp1127), ((frost$core$Equatable*) &$s1128));
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block52; else goto block53;
block52:;
*(&local22) = $tmp1132;
goto block54;
block53:;
org$frostlanguage$frostc$ASTNode* $tmp1134 = *(&local3);
frost$core$Bit $tmp1135 = frost$core$Bit$init$builtin_bit($tmp1134 != NULL);
*(&local22) = $tmp1135;
goto block54;
block54:;
frost$core$Bit $tmp1136 = *(&local22);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block50; else goto block55;
block50:;
// line 438
org$frostlanguage$frostc$ASTNode* $tmp1138 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp1139 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1140 = (frost$core$Int64) {41};
org$frostlanguage$frostc$parser$Token $tmp1141 = *(&local1);
org$frostlanguage$frostc$Position $tmp1142 = $tmp1141.position;
frost$core$String* $tmp1143 = *(&local21);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1139, $tmp1140, $tmp1142, $tmp1143);
org$frostlanguage$frostc$ASTNode* $tmp1144 = org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(param0, $tmp1138, $tmp1139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
org$frostlanguage$frostc$ASTNode* $tmp1145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local3) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($892:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing REF($886:org.frostlanguage.frostc.ASTNode)
// line 440
org$frostlanguage$frostc$ASTNode* $tmp1146 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp1147 = *(&local11);
org$frostlanguage$frostc$ASTNode* $tmp1148 = org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(param0, $tmp1146, $tmp1147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
org$frostlanguage$frostc$ASTNode* $tmp1149 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local3) = $tmp1148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
// unreffing REF($910:org.frostlanguage.frostc.ASTNode)
goto block51;
block55:;
// line 1
// line 443
org$frostlanguage$frostc$ASTNode* $tmp1150 = *(&local11);
org$frostlanguage$frostc$ASTNode* $tmp1151 = org$frostlanguage$frostc$parser$Parser$convertToString$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(param0, $tmp1150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
org$frostlanguage$frostc$ASTNode* $tmp1152 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local3) = $tmp1151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// unreffing REF($926:org.frostlanguage.frostc.ASTNode)
goto block51;
block51:;
frost$core$String* $tmp1153 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing text
*(&local21) = ((frost$core$String*) NULL);
frost$core$String* $tmp1154 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing format
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp1155 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing align
*(&local12) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1156 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing expr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block21;
block35:;
// line 447
org$frostlanguage$frostc$parser$Token $tmp1157 = *(&local5);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp1157, &$s1158);
// line 448
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1159 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing escapeText
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1160 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
// line 451
frost$core$MutableString* $tmp1163 = *(&local4);
frost$core$String* $tmp1164 = *(&local8);
frost$core$String* $tmp1165 = *(&local8);
frost$core$String* $tmp1166 = *(&local8);
frost$core$String$Index $tmp1167 = frost$core$String$get_start$R$frost$core$String$Index($tmp1166);
frost$core$String$Index $tmp1168 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp1165, $tmp1167);
frost$core$Bit $tmp1169 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1170 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1168, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1169);
frost$core$String* $tmp1171 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1164, $tmp1170);
frost$core$MutableString$append$frost$core$String($tmp1163, $tmp1171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// unreffing REF($996:frost.core.String)
frost$core$String* $tmp1172 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// unreffing escapeText
*(&local8) = ((frost$core$String*) NULL);
goto block10;
block18:;
// line 454
frost$core$MutableString* $tmp1173 = *(&local4);
org$frostlanguage$frostc$parser$Token $tmp1174 = *(&local5);
frost$core$String* $tmp1175 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1174);
frost$core$MutableString$append$frost$core$String($tmp1173, $tmp1175);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing REF($1010:frost.core.String)
goto block10;
block10:;
goto block6;
block7:;
// line 458
org$frostlanguage$frostc$ASTNode* $tmp1176 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp1177 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1178 = (frost$core$Int64) {41};
org$frostlanguage$frostc$parser$Token $tmp1179 = *(&local1);
org$frostlanguage$frostc$Position $tmp1180 = $tmp1179.position;
frost$core$MutableString* $tmp1181 = *(&local4);
frost$core$String* $tmp1182 = frost$core$MutableString$finish$R$frost$core$String($tmp1181);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1177, $tmp1178, $tmp1180, $tmp1182);
org$frostlanguage$frostc$ASTNode* $tmp1183 = org$frostlanguage$frostc$parser$Parser$addStringChunk$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode(param0, $tmp1176, $tmp1177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// unreffing REF($1026:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($1024:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($1019:org.frostlanguage.frostc.ASTNode)
frost$core$MutableString* $tmp1184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// unreffing chunk
*(&local4) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1185 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// unreffing result
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* $tmp1186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// unreffing auto
*(&local0) = ((org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp1183;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$parenthesizedExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$Position local2;
frost$core$String* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local6;
org$frostlanguage$frostc$ASTNode* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$core$Bit local10;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
frost$core$Bit local12;
org$frostlanguage$frostc$ASTNode* local13 = NULL;
frost$collections$Array* local14 = NULL;
org$frostlanguage$frostc$ASTNode* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlanguage$frostc$ASTNode* local17 = NULL;
// line 467
frost$core$Int64 $tmp1187 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp1188 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1187);
org$frostlanguage$frostc$parser$Token$nullable $tmp1189 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1188, &$s1190);
*(&local0) = $tmp1189;
// line 468
org$frostlanguage$frostc$parser$Token$nullable $tmp1191 = *(&local0);
frost$core$Bit $tmp1192 = frost$core$Bit$init$builtin_bit(!$tmp1191.nonnull);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block1; else goto block2;
block1:;
// line 469
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 471
org$frostlanguage$frostc$ASTNode* $tmp1194 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
org$frostlanguage$frostc$ASTNode* $tmp1195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local1) = $tmp1194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 472
org$frostlanguage$frostc$ASTNode* $tmp1196 = *(&local1);
frost$core$Bit $tmp1197 = frost$core$Bit$init$builtin_bit($tmp1196 == NULL);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block3; else goto block4;
block3:;
// line 473
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 475
org$frostlanguage$frostc$ASTNode* $tmp1200 = *(&local1);
frost$core$Int64* $tmp1201 = &$tmp1200->$rawValue;
frost$core$Int64 $tmp1202 = *$tmp1201;
frost$core$Int64 $tmp1203 = (frost$core$Int64) {22};
frost$core$Bit $tmp1204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1202, $tmp1203);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block6; else goto block7;
block6:;
org$frostlanguage$frostc$Position* $tmp1206 = (org$frostlanguage$frostc$Position*) ($tmp1200->$data + 0);
org$frostlanguage$frostc$Position $tmp1207 = *$tmp1206;
*(&local2) = $tmp1207;
frost$core$String** $tmp1208 = (frost$core$String**) ($tmp1200->$data + 16);
frost$core$String* $tmp1209 = *$tmp1208;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$String* $tmp1210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local3) = $tmp1209;
// line 478
frost$core$Int64 $tmp1211 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp1212 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1211);
org$frostlanguage$frostc$parser$Token$nullable $tmp1213 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1212);
frost$core$Bit $tmp1214 = frost$core$Bit$init$builtin_bit($tmp1213.nonnull);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block8; else goto block9;
block8:;
// line 480
frost$collections$Array* $tmp1216 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1216);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$collections$Array* $tmp1217 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local4) = $tmp1216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// unreffing REF($72:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 481
org$frostlanguage$frostc$ASTNode* $tmp1218 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
org$frostlanguage$frostc$ASTNode* $tmp1219 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local5) = $tmp1218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing REF($86:org.frostlanguage.frostc.ASTNode?)
// line 482
org$frostlanguage$frostc$ASTNode* $tmp1220 = *(&local5);
frost$core$Bit $tmp1221 = frost$core$Bit$init$builtin_bit($tmp1220 == NULL);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block10; else goto block11;
block10:;
// line 483
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1223 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 485
frost$collections$Array* $tmp1227 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp1228 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1229 = (frost$core$Int64) {34};
org$frostlanguage$frostc$Position $tmp1230 = *(&local2);
frost$core$String* $tmp1231 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp1232 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp1228, $tmp1229, $tmp1230, $tmp1231, $tmp1232);
frost$collections$Array$add$frost$collections$Array$T($tmp1227, ((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// unreffing REF($130:org.frostlanguage.frostc.ASTNode)
// line 486
goto block12;
block12:;
frost$core$Int64 $tmp1233 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1234 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1233);
org$frostlanguage$frostc$parser$Token$nullable $tmp1235 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1234);
frost$core$Bit $tmp1236 = frost$core$Bit$init$builtin_bit($tmp1235.nonnull);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block13; else goto block14;
block13:;
// line 487
frost$core$Int64 $tmp1238 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp1239 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1238);
org$frostlanguage$frostc$parser$Token$nullable $tmp1240 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1239, &$s1241);
*(&local6) = $tmp1240;
// line 488
frost$core$Int64 $tmp1242 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp1243 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1242);
org$frostlanguage$frostc$parser$Token$nullable $tmp1244 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1243, &$s1245);
frost$core$Bit $tmp1246 = frost$core$Bit$init$builtin_bit(!$tmp1244.nonnull);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block15; else goto block16;
block15:;
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1249 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1250 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 491
org$frostlanguage$frostc$ASTNode* $tmp1252 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
org$frostlanguage$frostc$ASTNode* $tmp1253 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local7) = $tmp1252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing REF($189:org.frostlanguage.frostc.ASTNode?)
// line 492
org$frostlanguage$frostc$ASTNode* $tmp1254 = *(&local7);
frost$core$Bit $tmp1255 = frost$core$Bit$init$builtin_bit($tmp1254 == NULL);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block17; else goto block18;
block17:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1257 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
// unreffing nextType
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1258 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block18:;
// line 495
frost$collections$Array* $tmp1262 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp1263 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1264 = (frost$core$Int64) {34};
org$frostlanguage$frostc$parser$Token$nullable $tmp1265 = *(&local6);
org$frostlanguage$frostc$Position $tmp1266 = ((org$frostlanguage$frostc$parser$Token) $tmp1265.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp1267 = *(&local6);
frost$core$String* $tmp1268 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp1267.value));
org$frostlanguage$frostc$ASTNode* $tmp1269 = *(&local7);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp1263, $tmp1264, $tmp1266, $tmp1268, $tmp1269);
frost$collections$Array$add$frost$collections$Array$T($tmp1262, ((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing REF($245:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// unreffing REF($238:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1270 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// unreffing nextType
*(&local7) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 498
frost$core$Int64 $tmp1271 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1272 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1271);
org$frostlanguage$frostc$parser$Token$nullable $tmp1273 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1272, &$s1274);
frost$core$Bit $tmp1275 = frost$core$Bit$init$builtin_bit(!$tmp1273.nonnull);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block19; else goto block20;
block19:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1277 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1278 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1279 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block20:;
// line 501
frost$core$Int64 $tmp1281 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1282 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1281);
org$frostlanguage$frostc$parser$Token$nullable $tmp1283 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1282, &$s1284);
frost$core$Bit $tmp1285 = frost$core$Bit$init$builtin_bit(!$tmp1283.nonnull);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block21; else goto block22;
block21:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1287 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1289 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1290 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block22:;
// line 504
org$frostlanguage$frostc$ASTNode* $tmp1291 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlanguage$frostc$ASTNode* $tmp1292 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local8) = $tmp1291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// unreffing REF($328:org.frostlanguage.frostc.ASTNode?)
// line 505
org$frostlanguage$frostc$ASTNode* $tmp1293 = *(&local8);
frost$core$Bit $tmp1294 = frost$core$Bit$init$builtin_bit($tmp1293 == NULL);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block23; else goto block24;
block23:;
// line 506
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1296 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// unreffing body
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1297 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1299 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block24:;
// line 508
org$frostlanguage$frostc$ASTNode* $tmp1301 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {46};
org$frostlanguage$frostc$parser$Token$nullable $tmp1303 = *(&local0);
org$frostlanguage$frostc$Position $tmp1304 = ((org$frostlanguage$frostc$parser$Token) $tmp1303.value).position;
frost$collections$Array* $tmp1305 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp1306 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1305);
org$frostlanguage$frostc$ASTNode* $tmp1307 = *(&local8);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp1301, $tmp1302, $tmp1304, $tmp1306, $tmp1307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($382:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// unreffing REF($375:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing body
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1309 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
// unreffing firstType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1310 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1311 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1301;
block9:;
// line 511
frost$core$Int64 $tmp1313 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1314 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1313);
org$frostlanguage$frostc$parser$Token$nullable $tmp1315 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1314);
frost$core$Bit $tmp1316 = frost$core$Bit$init$builtin_bit($tmp1315.nonnull);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block25; else goto block26;
block25:;
// line 513
frost$collections$Array* $tmp1318 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1318);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$collections$Array* $tmp1319 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local9) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($431:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 514
frost$collections$Array* $tmp1320 = *(&local9);
org$frostlanguage$frostc$ASTNode* $tmp1321 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp1320, ((frost$core$Object*) $tmp1321));
// line 515
frost$core$Bit $tmp1322 = frost$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1322;
// line 516
goto block27;
block27:;
// line 517
org$frostlanguage$frostc$ASTNode* $tmp1323 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
org$frostlanguage$frostc$ASTNode* $tmp1324 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local11) = $tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
// unreffing REF($457:org.frostlanguage.frostc.ASTNode?)
// line 518
org$frostlanguage$frostc$ASTNode* $tmp1325 = *(&local11);
frost$core$Bit $tmp1326 = frost$core$Bit$init$builtin_bit($tmp1325 == NULL);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block30; else goto block31;
block30:;
// line 519
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1328 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing nextExpr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1329 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing parameters
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1330 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block31:;
// line 521
org$frostlanguage$frostc$ASTNode* $tmp1332 = *(&local11);
frost$core$Int64* $tmp1333 = &$tmp1332->$rawValue;
frost$core$Int64 $tmp1334 = *$tmp1333;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {22};
frost$core$Bit $tmp1336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1334, $tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block33; else goto block34;
block33:;
goto block32;
block34:;
// line 526
frost$core$Bit $tmp1338 = frost$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1338;
goto block32;
block32:;
// line 529
frost$collections$Array* $tmp1339 = *(&local9);
org$frostlanguage$frostc$ASTNode* $tmp1340 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp1339, ((frost$core$Object*) $tmp1340));
org$frostlanguage$frostc$ASTNode* $tmp1341 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// unreffing nextExpr
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block28;
block28:;
frost$core$Int64 $tmp1342 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1343 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1342);
org$frostlanguage$frostc$parser$Token$nullable $tmp1344 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1343);
frost$core$Bit $tmp1345 = frost$core$Bit$init$builtin_bit($tmp1344.nonnull);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block27; else goto block29;
block29:;
// line 531
frost$core$Int64 $tmp1347 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1348 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1347);
org$frostlanguage$frostc$parser$Token$nullable $tmp1349 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1348, &$s1350);
frost$core$Bit $tmp1351 = frost$core$Bit$init$builtin_bit(!$tmp1349.nonnull);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block35; else goto block36;
block35:;
// line 532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1353 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing parameters
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1354 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block36:;
// line 534
frost$core$Bit $tmp1356 = *(&local10);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block39; else goto block40;
block39:;
frost$core$Int64 $tmp1358 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1359 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1358);
org$frostlanguage$frostc$parser$Token$nullable $tmp1360 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1359);
frost$core$Bit $tmp1361 = frost$core$Bit$init$builtin_bit($tmp1360.nonnull);
*(&local12) = $tmp1361;
goto block41;
block40:;
*(&local12) = $tmp1356;
goto block41;
block41:;
frost$core$Bit $tmp1362 = *(&local12);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block37; else goto block38;
block37:;
// line 535
org$frostlanguage$frostc$ASTNode* $tmp1364 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
org$frostlanguage$frostc$ASTNode* $tmp1365 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local13) = $tmp1364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($576:org.frostlanguage.frostc.ASTNode?)
// line 536
org$frostlanguage$frostc$ASTNode* $tmp1366 = *(&local13);
frost$core$Bit $tmp1367 = frost$core$Bit$init$builtin_bit($tmp1366 == NULL);
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block42; else goto block43;
block42:;
// line 537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1369 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing body
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1370 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing parameters
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block43:;
// line 539
org$frostlanguage$frostc$ASTNode* $tmp1373 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {48};
org$frostlanguage$frostc$parser$Token$nullable $tmp1375 = *(&local0);
org$frostlanguage$frostc$Position $tmp1376 = ((org$frostlanguage$frostc$parser$Token) $tmp1375.value).position;
frost$collections$Array* $tmp1377 = *(&local9);
org$frostlanguage$frostc$FixedArray* $tmp1378 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1377);
org$frostlanguage$frostc$ASTNode* $tmp1379 = *(&local13);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp1373, $tmp1374, $tmp1376, $tmp1378, $tmp1379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($625:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($618:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1380 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// unreffing body
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1381 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
// unreffing parameters
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1382 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1373;
block38:;
// line 543
org$frostlanguage$frostc$parser$Token$nullable $tmp1384 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp1384.value), &$s1385);
// line 544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1386 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
// unreffing parameters
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1387 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block26:;
// line 547
frost$core$Int64 $tmp1389 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1390 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1389);
org$frostlanguage$frostc$parser$Token$nullable $tmp1391 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1390, &$s1392);
frost$core$Bit $tmp1393 = frost$core$Bit$init$builtin_bit(!$tmp1391.nonnull);
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block44; else goto block45;
block44:;
// line 548
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1395 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1396 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block45:;
// line 550
frost$core$Int64 $tmp1397 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1398 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1397);
org$frostlanguage$frostc$parser$Token$nullable $tmp1399 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1398);
frost$core$Bit $tmp1400 = frost$core$Bit$init$builtin_bit($tmp1399.nonnull);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block46; else goto block47;
block46:;
// line 551
frost$collections$Array* $tmp1402 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1402);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$collections$Array* $tmp1403 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local14) = $tmp1402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing REF($714:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 552
frost$collections$Array* $tmp1404 = *(&local14);
org$frostlanguage$frostc$ASTNode* $tmp1405 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp1404, ((frost$core$Object*) $tmp1405));
// line 553
org$frostlanguage$frostc$ASTNode* $tmp1406 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
org$frostlanguage$frostc$ASTNode* $tmp1407 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local15) = $tmp1406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($735:org.frostlanguage.frostc.ASTNode?)
// line 554
org$frostlanguage$frostc$ASTNode* $tmp1408 = *(&local15);
frost$core$Bit $tmp1409 = frost$core$Bit$init$builtin_bit($tmp1408 == NULL);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block48; else goto block49;
block48:;
// line 555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1411 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// unreffing body
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1412 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block49:;
// line 557
org$frostlanguage$frostc$ASTNode* $tmp1415 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1416 = (frost$core$Int64) {48};
org$frostlanguage$frostc$parser$Token$nullable $tmp1417 = *(&local0);
org$frostlanguage$frostc$Position $tmp1418 = ((org$frostlanguage$frostc$parser$Token) $tmp1417.value).position;
frost$collections$Array* $tmp1419 = *(&local14);
org$frostlanguage$frostc$FixedArray* $tmp1420 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1419);
org$frostlanguage$frostc$ASTNode* $tmp1421 = *(&local15);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp1415, $tmp1416, $tmp1418, $tmp1420, $tmp1421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
// unreffing REF($784:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// unreffing REF($777:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1422 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
// unreffing body
*(&local15) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1423 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp1424 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1425 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1415;
block47:;
// line 560
org$frostlanguage$frostc$ASTNode* $tmp1426 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$String* $tmp1427 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// unreffing firstName
*(&local3) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1426;
block7:;
// line 564
frost$core$Int64 $tmp1429 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1430 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1429);
org$frostlanguage$frostc$parser$Token$nullable $tmp1431 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1430);
frost$core$Bit $tmp1432 = frost$core$Bit$init$builtin_bit(!$tmp1431.nonnull);
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block50; else goto block51;
block50:;
// line 565
frost$core$Int64 $tmp1434 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1435 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1434);
org$frostlanguage$frostc$parser$Token$nullable $tmp1436 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1435, &$s1437);
// line 566
org$frostlanguage$frostc$ASTNode* $tmp1438 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
org$frostlanguage$frostc$ASTNode* $tmp1439 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1438;
block51:;
// line 568
frost$collections$Array* $tmp1440 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1440);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$collections$Array* $tmp1441 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local16) = $tmp1440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
// unreffing REF($857:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 569
frost$collections$Array* $tmp1442 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1443 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp1442, ((frost$core$Object*) $tmp1443));
// line 570
goto block52;
block52:;
// line 571
org$frostlanguage$frostc$ASTNode* $tmp1444 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
org$frostlanguage$frostc$ASTNode* $tmp1445 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local17) = $tmp1444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// unreffing REF($880:org.frostlanguage.frostc.ASTNode?)
// line 572
org$frostlanguage$frostc$ASTNode* $tmp1446 = *(&local17);
frost$core$Bit $tmp1447 = frost$core$Bit$init$builtin_bit($tmp1446 == NULL);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block55; else goto block56;
block55:;
// line 573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1449 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// unreffing nextExpr
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1450 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// unreffing arguments
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block56:;
// line 575
frost$collections$Array* $tmp1452 = *(&local16);
org$frostlanguage$frostc$ASTNode* $tmp1453 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp1452, ((frost$core$Object*) $tmp1453));
org$frostlanguage$frostc$ASTNode* $tmp1454 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing nextExpr
*(&local17) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block53;
block53:;
frost$core$Int64 $tmp1455 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1456 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1455);
org$frostlanguage$frostc$parser$Token$nullable $tmp1457 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1456);
frost$core$Bit $tmp1458 = frost$core$Bit$init$builtin_bit($tmp1457.nonnull);
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block52; else goto block54;
block54:;
// line 578
frost$core$Int64 $tmp1460 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1461 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1460);
org$frostlanguage$frostc$parser$Token$nullable $tmp1462 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1461, &$s1463);
// line 580
org$frostlanguage$frostc$parser$Token$nullable $tmp1464 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp1464.value), &$s1465);
// line 581
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1466 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
// unreffing arguments
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
frost$core$Bit $tmp1468 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp1470 = (frost$core$Int64) {466};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1471, $tmp1470, &$s1472);
abort(); // unreachable
block57:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$arrayLiteral$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 590
frost$core$Int64 $tmp1473 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp1474 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1473);
org$frostlanguage$frostc$parser$Token$nullable $tmp1475 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1474, &$s1476);
*(&local0) = $tmp1475;
// line 591
frost$collections$Array* $tmp1477 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1477);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$collections$Array* $tmp1478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local1) = $tmp1477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// unreffing REF($6:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 592
frost$core$Int64 $tmp1479 = (frost$core$Int64) {103};
org$frostlanguage$frostc$parser$Token$Kind $tmp1480 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1479);
org$frostlanguage$frostc$parser$Token$nullable $tmp1481 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1480);
frost$core$Bit $tmp1482 = frost$core$Bit$init$builtin_bit(!$tmp1481.nonnull);
bool $tmp1483 = $tmp1482.value;
if ($tmp1483) goto block1; else goto block2;
block1:;
// line 593
frost$collections$Stack** $tmp1484 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1485 = *$tmp1484;
frost$core$Bit $tmp1486 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1487;
$tmp1487 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1487->value = $tmp1486;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1485, ((frost$core$Object*) $tmp1487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// unreffing REF($32:frost.collections.Stack.T)
// line 594
frost$core$Int64 $tmp1488 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1489 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1488);
org$frostlanguage$frostc$parser$Token$nullable $tmp1490 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1489);
frost$core$Bit $tmp1491 = frost$core$Bit$init$builtin_bit(!$tmp1490.nonnull);
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block3; else goto block4;
block3:;
// line 595
org$frostlanguage$frostc$ASTNode* $tmp1493 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
org$frostlanguage$frostc$ASTNode* $tmp1494 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local2) = $tmp1493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// unreffing REF($46:org.frostlanguage.frostc.ASTNode?)
// line 596
org$frostlanguage$frostc$ASTNode* $tmp1495 = *(&local2);
frost$core$Bit $tmp1496 = frost$core$Bit$init$builtin_bit($tmp1495 == NULL);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block5; else goto block6;
block5:;
// line 597
frost$collections$Stack** $tmp1498 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1499 = *$tmp1498;
frost$core$Object* $tmp1500 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1499);
frost$core$Frost$unref$frost$core$Object$Q($tmp1500);
// unreffing REF($67:frost.collections.Stack.T)
// line 598
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 600
frost$collections$Array* $tmp1503 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp1504 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1503, ((frost$core$Object*) $tmp1504));
// line 601
goto block7;
block7:;
frost$core$Int64 $tmp1505 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp1506 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1505);
org$frostlanguage$frostc$parser$Token$nullable $tmp1507 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1506);
frost$core$Bit $tmp1508 = frost$core$Bit$init$builtin_bit($tmp1507.nonnull);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block8; else goto block9;
block8:;
// line 602
org$frostlanguage$frostc$ASTNode* $tmp1510 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
org$frostlanguage$frostc$ASTNode* $tmp1511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local2) = $tmp1510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// unreffing REF($103:org.frostlanguage.frostc.ASTNode?)
// line 603
org$frostlanguage$frostc$ASTNode* $tmp1512 = *(&local2);
frost$core$Bit $tmp1513 = frost$core$Bit$init$builtin_bit($tmp1512 == NULL);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block10; else goto block11;
block10:;
// line 604
frost$collections$Stack** $tmp1515 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1516 = *$tmp1515;
frost$core$Object* $tmp1517 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1516);
frost$core$Frost$unref$frost$core$Object$Q($tmp1517);
// unreffing REF($123:frost.collections.Stack.T)
// line 605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 607
frost$collections$Array* $tmp1520 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp1521 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1520, ((frost$core$Object*) $tmp1521));
goto block7;
block9:;
// line 609
frost$core$Int64 $tmp1522 = (frost$core$Int64) {103};
org$frostlanguage$frostc$parser$Token$Kind $tmp1523 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1522);
org$frostlanguage$frostc$parser$Token$nullable $tmp1524 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1523, &$s1525);
frost$core$Bit $tmp1526 = frost$core$Bit$init$builtin_bit(!$tmp1524.nonnull);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block12; else goto block13;
block12:;
// line 610
frost$collections$Stack** $tmp1528 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1529 = *$tmp1528;
frost$core$Object* $tmp1530 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1529);
frost$core$Frost$unref$frost$core$Object$Q($tmp1530);
// unreffing REF($162:frost.collections.Stack.T)
// line 611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
org$frostlanguage$frostc$ASTNode* $tmp1533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 614
frost$collections$Stack** $tmp1534 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp1535 = *$tmp1534;
frost$core$Object* $tmp1536 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1535);
frost$core$Frost$unref$frost$core$Object$Q($tmp1536);
// unreffing REF($191:frost.collections.Stack.T)
goto block2;
block2:;
// line 616
org$frostlanguage$frostc$ASTNode* $tmp1537 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1538 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$Token$nullable $tmp1539 = *(&local0);
org$frostlanguage$frostc$Position $tmp1540 = ((org$frostlanguage$frostc$parser$Token) $tmp1539.value).position;
frost$collections$Array* $tmp1541 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp1542 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1541);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp1537, $tmp1538, $tmp1540, $tmp1542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
// unreffing REF($205:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
// unreffing REF($198:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp1543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1537;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$lambda$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
// line 623
frost$core$Int64 $tmp1544 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp1545 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1544);
org$frostlanguage$frostc$parser$Token$nullable $tmp1546 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1545, &$s1547);
*(&local0) = $tmp1546;
// line 624
frost$core$Int64 $tmp1548 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp1549 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1548);
org$frostlanguage$frostc$parser$Token$nullable $tmp1550 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1549);
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit($tmp1550.nonnull);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block1; else goto block2;
block1:;
// line 625
org$frostlanguage$frostc$ASTNode* $tmp1553 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
org$frostlanguage$frostc$ASTNode* $tmp1554 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local1) = $tmp1553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
// unreffing REF($14:org.frostlanguage.frostc.ASTNode?)
// line 626
org$frostlanguage$frostc$ASTNode* $tmp1555 = *(&local1);
frost$core$Bit $tmp1556 = frost$core$Bit$init$builtin_bit($tmp1555 == NULL);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block3; else goto block4;
block3:;
// line 627
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 629
frost$collections$Array* $tmp1559 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1559);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$collections$Array* $tmp1560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local2) = $tmp1559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing REF($41:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 630
frost$collections$Array* $tmp1561 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp1562 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1563 = (frost$core$Int64) {34};
org$frostlanguage$frostc$parser$Token$nullable $tmp1564 = *(&local0);
org$frostlanguage$frostc$Position $tmp1565 = ((org$frostlanguage$frostc$parser$Token) $tmp1564.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp1566 = *(&local0);
frost$core$String* $tmp1567 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp1566.value));
org$frostlanguage$frostc$ASTNode* $tmp1568 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp1562, $tmp1563, $tmp1565, $tmp1567, $tmp1568);
frost$collections$Array$add$frost$collections$Array$T($tmp1561, ((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// unreffing REF($64:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
// unreffing REF($57:org.frostlanguage.frostc.ASTNode)
// line 631
frost$core$Int64 $tmp1569 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1570 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1569);
org$frostlanguage$frostc$parser$Token$nullable $tmp1571 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1570, &$s1572);
frost$core$Bit $tmp1573 = frost$core$Bit$init$builtin_bit(!$tmp1571.nonnull);
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block5; else goto block6;
block5:;
// line 632
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 634
org$frostlanguage$frostc$ASTNode* $tmp1577 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlanguage$frostc$ASTNode* $tmp1578 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local3) = $tmp1577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// unreffing REF($99:org.frostlanguage.frostc.ASTNode?)
// line 635
org$frostlanguage$frostc$ASTNode* $tmp1579 = *(&local3);
frost$core$Bit $tmp1580 = frost$core$Bit$init$builtin_bit($tmp1579 == NULL);
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block7; else goto block8;
block7:;
// line 636
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1582 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 638
org$frostlanguage$frostc$ASTNode* $tmp1585 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1586 = (frost$core$Int64) {46};
org$frostlanguage$frostc$parser$Token$nullable $tmp1587 = *(&local0);
org$frostlanguage$frostc$Position $tmp1588 = ((org$frostlanguage$frostc$parser$Token) $tmp1587.value).position;
frost$collections$Array* $tmp1589 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp1590 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1589);
org$frostlanguage$frostc$ASTNode* $tmp1591 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp1585, $tmp1586, $tmp1588, $tmp1590, $tmp1591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
// unreffing REF($143:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// unreffing REF($136:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1592 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp1594 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1585;
block2:;
// line 641
frost$collections$Array* $tmp1595 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1595);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$collections$Array* $tmp1596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local4) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
// unreffing REF($174:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 642
frost$collections$Array* $tmp1597 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp1598 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1599 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$nullable $tmp1600 = *(&local0);
org$frostlanguage$frostc$Position $tmp1601 = ((org$frostlanguage$frostc$parser$Token) $tmp1600.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp1602 = *(&local0);
frost$core$String* $tmp1603 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp1602.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1598, $tmp1599, $tmp1601, $tmp1603);
frost$collections$Array$add$frost$collections$Array$T($tmp1597, ((frost$core$Object*) $tmp1598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
// unreffing REF($197:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// unreffing REF($190:org.frostlanguage.frostc.ASTNode)
// line 643
frost$core$Int64 $tmp1604 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1605 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1604);
org$frostlanguage$frostc$parser$Token$nullable $tmp1606 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1605, &$s1607);
frost$core$Bit $tmp1608 = frost$core$Bit$init$builtin_bit(!$tmp1606.nonnull);
bool $tmp1609 = $tmp1608.value;
if ($tmp1609) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp1610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 646
org$frostlanguage$frostc$ASTNode* $tmp1611 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlanguage$frostc$ASTNode* $tmp1612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local5) = $tmp1611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// unreffing REF($225:org.frostlanguage.frostc.ASTNode?)
// line 647
org$frostlanguage$frostc$ASTNode* $tmp1613 = *(&local5);
frost$core$Bit $tmp1614 = frost$core$Bit$init$builtin_bit($tmp1613 == NULL);
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block11; else goto block12;
block11:;
// line 648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1616 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
// unreffing expr
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block12:;
// line 650
org$frostlanguage$frostc$ASTNode* $tmp1618 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1619 = (frost$core$Int64) {48};
org$frostlanguage$frostc$parser$Token$nullable $tmp1620 = *(&local0);
org$frostlanguage$frostc$Position $tmp1621 = ((org$frostlanguage$frostc$parser$Token) $tmp1620.value).position;
frost$collections$Array* $tmp1622 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp1623 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp1622);
org$frostlanguage$frostc$ASTNode* $tmp1624 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp1618, $tmp1619, $tmp1621, $tmp1623, $tmp1624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
// unreffing REF($264:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
// unreffing REF($257:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1625 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
// unreffing expr
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp1626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1618;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$regex$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

frost$core$Int64 local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 658
frost$core$Int64 $tmp1627 = (frost$core$Int64) {55};
org$frostlanguage$frostc$parser$Token$Kind $tmp1628 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1627);
org$frostlanguage$frostc$parser$Token$nullable $tmp1629 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1628, &$s1630);
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(!$tmp1629.nonnull);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block1; else goto block2;
block1:;
// line 659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 662
org$frostlanguage$frostc$parser$Lexer** $tmp1633 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1634 = *$tmp1633;
org$frostlanguage$plex$runtime$DFA** $tmp1635 = &$tmp1634->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1636 = *$tmp1635;
frost$core$Int64* $tmp1637 = &$tmp1636->offset;
frost$core$Int64 $tmp1638 = *$tmp1637;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {1};
int64_t $tmp1640 = $tmp1638.value;
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640 - $tmp1641;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {$tmp1642};
*(&local0) = $tmp1643;
// line 663
org$frostlanguage$regex$RegexParser** $tmp1644 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1645 = *$tmp1644;
org$frostlanguage$regex$RegexLexer** $tmp1646 = &$tmp1645->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1647 = *$tmp1646;
org$frostlanguage$plex$runtime$DFA** $tmp1648 = &$tmp1647->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1649 = *$tmp1648;
org$frostlanguage$frostc$parser$Lexer** $tmp1650 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1651 = *$tmp1650;
org$frostlanguage$plex$runtime$DFA** $tmp1652 = &$tmp1651->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1653 = *$tmp1652;
frost$core$Int64* $tmp1654 = &$tmp1653->offset;
frost$core$Int64 $tmp1655 = *$tmp1654;
frost$core$Int64* $tmp1656 = &$tmp1649->offset;
*$tmp1656 = $tmp1655;
// line 664
org$frostlanguage$regex$RegexParser** $tmp1657 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1658 = *$tmp1657;
org$frostlanguage$regex$RegexLexer** $tmp1659 = &$tmp1658->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1660 = *$tmp1659;
org$frostlanguage$plex$runtime$DFA** $tmp1661 = &$tmp1660->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1662 = *$tmp1661;
org$frostlanguage$frostc$parser$Lexer** $tmp1663 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1664 = *$tmp1663;
org$frostlanguage$plex$runtime$DFA** $tmp1665 = &$tmp1664->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1666 = *$tmp1665;
frost$core$Int64* $tmp1667 = &$tmp1666->line;
frost$core$Int64 $tmp1668 = *$tmp1667;
frost$core$Int64* $tmp1669 = &$tmp1662->line;
*$tmp1669 = $tmp1668;
// line 665
org$frostlanguage$regex$RegexParser** $tmp1670 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1671 = *$tmp1670;
org$frostlanguage$regex$RegexLexer** $tmp1672 = &$tmp1671->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1673 = *$tmp1672;
org$frostlanguage$plex$runtime$DFA** $tmp1674 = &$tmp1673->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1675 = *$tmp1674;
org$frostlanguage$frostc$parser$Lexer** $tmp1676 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1677 = *$tmp1676;
org$frostlanguage$plex$runtime$DFA** $tmp1678 = &$tmp1677->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1679 = *$tmp1678;
frost$core$Int64* $tmp1680 = &$tmp1679->column;
frost$core$Int64 $tmp1681 = *$tmp1680;
frost$core$Int64* $tmp1682 = &$tmp1675->column;
*$tmp1682 = $tmp1681;
// line 666
org$frostlanguage$regex$RegexParser** $tmp1683 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1684 = *$tmp1683;
org$frostlanguage$frostc$ASTNode* $tmp1685 = org$frostlanguage$regex$RegexParser$regex$R$org$frostlanguage$frostc$ASTNode$Q($tmp1684);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
org$frostlanguage$frostc$ASTNode* $tmp1686 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local1) = $tmp1685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
// unreffing REF($73:org.frostlanguage.frostc.ASTNode?)
// line 667
org$frostlanguage$frostc$parser$Lexer** $tmp1687 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1688 = *$tmp1687;
org$frostlanguage$plex$runtime$DFA** $tmp1689 = &$tmp1688->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1690 = *$tmp1689;
org$frostlanguage$regex$RegexParser** $tmp1691 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1692 = *$tmp1691;
org$frostlanguage$regex$RegexLexer** $tmp1693 = &$tmp1692->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1694 = *$tmp1693;
org$frostlanguage$plex$runtime$DFA** $tmp1695 = &$tmp1694->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1696 = *$tmp1695;
frost$core$Int64* $tmp1697 = &$tmp1696->offset;
frost$core$Int64 $tmp1698 = *$tmp1697;
frost$core$Int64* $tmp1699 = &$tmp1690->offset;
*$tmp1699 = $tmp1698;
// line 668
org$frostlanguage$frostc$parser$Lexer** $tmp1700 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1701 = *$tmp1700;
org$frostlanguage$plex$runtime$DFA** $tmp1702 = &$tmp1701->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1703 = *$tmp1702;
org$frostlanguage$regex$RegexParser** $tmp1704 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1705 = *$tmp1704;
org$frostlanguage$regex$RegexLexer** $tmp1706 = &$tmp1705->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1707 = *$tmp1706;
org$frostlanguage$plex$runtime$DFA** $tmp1708 = &$tmp1707->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1709 = *$tmp1708;
frost$core$Int64* $tmp1710 = &$tmp1709->line;
frost$core$Int64 $tmp1711 = *$tmp1710;
frost$core$Int64* $tmp1712 = &$tmp1703->line;
*$tmp1712 = $tmp1711;
// line 669
org$frostlanguage$frostc$parser$Lexer** $tmp1713 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1714 = *$tmp1713;
org$frostlanguage$plex$runtime$DFA** $tmp1715 = &$tmp1714->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1716 = *$tmp1715;
org$frostlanguage$regex$RegexParser** $tmp1717 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp1718 = *$tmp1717;
org$frostlanguage$regex$RegexLexer** $tmp1719 = &$tmp1718->lexer;
org$frostlanguage$regex$RegexLexer* $tmp1720 = *$tmp1719;
org$frostlanguage$plex$runtime$DFA** $tmp1721 = &$tmp1720->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1722 = *$tmp1721;
frost$core$Int64* $tmp1723 = &$tmp1722->column;
frost$core$Int64 $tmp1724 = *$tmp1723;
frost$core$Int64* $tmp1725 = &$tmp1716->column;
*$tmp1725 = $tmp1724;
// line 670
org$frostlanguage$frostc$ASTNode* $tmp1726 = *(&local1);
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit($tmp1726 == NULL);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block3; else goto block4;
block3:;
// line 671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// unreffing regex
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 673
frost$core$Int64 $tmp1730 = (frost$core$Int64) {55};
org$frostlanguage$frostc$parser$Token$Kind $tmp1731 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1730);
org$frostlanguage$frostc$parser$Token$nullable $tmp1732 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1731, &$s1733);
frost$core$Bit $tmp1734 = frost$core$Bit$init$builtin_bit(!$tmp1732.nonnull);
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block5; else goto block6;
block5:;
// line 674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing regex
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 676
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp1737 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp1738 = *$tmp1737;
frost$core$Bit $tmp1739 = frost$core$Bit$init$builtin_bit($tmp1738 != NULL);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block7; else goto block8;
block7:;
// line 678
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp1741 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp1742 = *$tmp1741;
$fn1744 $tmp1743 = ($fn1744) $tmp1742->$class->vtable[7];
$tmp1743($tmp1742);
// line 679
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp1745 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp1746 = *$tmp1745;
$fn1748 $tmp1747 = ($fn1748) $tmp1746->$class->vtable[7];
$tmp1747($tmp1746);
// line 681
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp1749 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp1750 = *$tmp1749;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$Token$Kind $tmp1752 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1751);
frost$core$Int64 $tmp1753 = *(&local0);
frost$core$String$Index $tmp1754 = frost$core$String$Index$init$frost$core$Int64($tmp1753);
org$frostlanguage$frostc$parser$Lexer** $tmp1755 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp1756 = *$tmp1755;
org$frostlanguage$plex$runtime$DFA** $tmp1757 = &$tmp1756->dfa;
org$frostlanguage$plex$runtime$DFA* $tmp1758 = *$tmp1757;
frost$core$Int64* $tmp1759 = &$tmp1758->offset;
frost$core$Int64 $tmp1760 = *$tmp1759;
frost$core$String$Index $tmp1761 = frost$core$String$Index$init$frost$core$Int64($tmp1760);
org$frostlanguage$frostc$ASTNode* $tmp1762 = *(&local1);
$fn1764 $tmp1763 = ($fn1764) $tmp1762->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp1765 = $tmp1763($tmp1762);
org$frostlanguage$frostc$parser$Token $tmp1766 = org$frostlanguage$frostc$parser$Token$init$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlanguage$frostc$Position($tmp1752, $tmp1754, $tmp1761, $tmp1765);
$fn1768 $tmp1767 = ($fn1768) $tmp1750->$class->vtable[6];
$tmp1767($tmp1750, $tmp1766);
goto block8;
block8:;
// line 684
org$frostlanguage$frostc$ASTNode* $tmp1769 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
org$frostlanguage$frostc$ASTNode* $tmp1770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// unreffing regex
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp1769;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$term$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$parser$Token$Kind local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$String* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
// line 694
org$frostlanguage$frostc$parser$Token $tmp1771 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp1771;
// line 695
org$frostlanguage$frostc$parser$Token $tmp1772 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp1773 = $tmp1772.kind;
frost$core$Int64 $tmp1774 = $tmp1773.$rawValue;
frost$core$Int64 $tmp1775 = (frost$core$Int64) {49};
frost$core$Bit $tmp1776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1775);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block2; else goto block3;
block2:;
// line 697
org$frostlanguage$frostc$parser$Token $tmp1778 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp1779 = $tmp1778.kind;
*(&local1) = $tmp1779;
// line 698
frost$core$Bit* $tmp1780 = &param0->allowLambdas;
frost$core$Bit $tmp1781 = *$tmp1780;
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block6; else goto block7;
block6:;
org$frostlanguage$frostc$parser$Token$Kind $tmp1783 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp1784;
$tmp1784 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp1784->value = $tmp1783;
frost$core$Int64 $tmp1785 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp1786 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1785);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp1787;
$tmp1787 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp1787->value = $tmp1786;
ITable* $tmp1788 = ((frost$core$Equatable*) $tmp1784)->$class->itable;
while ($tmp1788->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1788 = $tmp1788->next;
}
$fn1790 $tmp1789 = $tmp1788->methods[0];
frost$core$Bit $tmp1791 = $tmp1789(((frost$core$Equatable*) $tmp1784), ((frost$core$Equatable*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1787)));
// unreffing REF($25:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1784)));
// unreffing REF($21:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
*(&local3) = $tmp1791;
goto block8;
block7:;
*(&local3) = $tmp1781;
goto block8;
block8:;
frost$core$Bit $tmp1792 = *(&local3);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block9; else goto block10;
block9:;
*(&local2) = $tmp1792;
goto block11;
block10:;
org$frostlanguage$frostc$parser$Token$Kind $tmp1794 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp1795;
$tmp1795 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp1795->value = $tmp1794;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {91};
org$frostlanguage$frostc$parser$Token$Kind $tmp1797 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1796);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp1798;
$tmp1798 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp1798->value = $tmp1797;
ITable* $tmp1799 = ((frost$core$Equatable*) $tmp1795)->$class->itable;
while ($tmp1799->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1799 = $tmp1799->next;
}
$fn1801 $tmp1800 = $tmp1799->methods[0];
frost$core$Bit $tmp1802 = $tmp1800(((frost$core$Equatable*) $tmp1795), ((frost$core$Equatable*) $tmp1798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1798)));
// unreffing REF($48:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1795)));
// unreffing REF($44:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
*(&local2) = $tmp1802;
goto block11;
block11:;
frost$core$Bit $tmp1803 = *(&local2);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block4; else goto block5;
block4:;
// line 699
org$frostlanguage$frostc$parser$Token $tmp1805 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1805);
// line 700
org$frostlanguage$frostc$ASTNode* $tmp1806 = org$frostlanguage$frostc$parser$Parser$lambda$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// unreffing REF($66:org.frostlanguage.frostc.ASTNode?)
return $tmp1806;
block5:;
// line 702
org$frostlanguage$frostc$ASTNode* $tmp1807 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token $tmp1809 = *(&local0);
org$frostlanguage$frostc$Position $tmp1810 = $tmp1809.position;
org$frostlanguage$frostc$parser$Token $tmp1811 = *(&local0);
frost$core$String* $tmp1812 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1811);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp1807, $tmp1808, $tmp1810, $tmp1812);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// unreffing REF($74:org.frostlanguage.frostc.ASTNode)
return $tmp1807;
block3:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {3};
frost$core$Bit $tmp1814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1813);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block12; else goto block13;
block12:;
// line 705
org$frostlanguage$frostc$ASTNode* $tmp1816 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1817 = (frost$core$Int64) {25};
org$frostlanguage$frostc$parser$Token $tmp1818 = *(&local0);
org$frostlanguage$frostc$Position $tmp1819 = $tmp1818.position;
org$frostlanguage$frostc$parser$Token $tmp1820 = *(&local0);
frost$core$String* $tmp1821 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1820);
frost$core$UInt64$nullable $tmp1822 = frost$core$String$convert$R$frost$core$UInt64$Q($tmp1821);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp1816, $tmp1817, $tmp1819, ((frost$core$UInt64) $tmp1822.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
// unreffing REF($101:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
// unreffing REF($96:org.frostlanguage.frostc.ASTNode)
return $tmp1816;
block13:;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {4};
frost$core$Bit $tmp1824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1823);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block14; else goto block15;
block14:;
// line 708
org$frostlanguage$frostc$ASTNode* $tmp1826 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {25};
org$frostlanguage$frostc$parser$Token $tmp1828 = *(&local0);
org$frostlanguage$frostc$Position $tmp1829 = $tmp1828.position;
org$frostlanguage$frostc$parser$Token $tmp1830 = *(&local0);
frost$core$String* $tmp1831 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1830);
frost$core$Int64 $tmp1832 = (frost$core$Int64) {2};
frost$core$Bit $tmp1833 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1834 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1832, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1833);
frost$core$String* $tmp1835 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1831, $tmp1834);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {2};
frost$core$UInt64$nullable $tmp1837 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1835, $tmp1836);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp1826, $tmp1827, $tmp1829, ((frost$core$UInt64) $tmp1837.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
// unreffing REF($120:org.frostlanguage.frostc.ASTNode)
return $tmp1826;
block15:;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {5};
frost$core$Bit $tmp1839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1838);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block16; else goto block17;
block16:;
// line 711
org$frostlanguage$frostc$ASTNode* $tmp1841 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1842 = (frost$core$Int64) {25};
org$frostlanguage$frostc$parser$Token $tmp1843 = *(&local0);
org$frostlanguage$frostc$Position $tmp1844 = $tmp1843.position;
org$frostlanguage$frostc$parser$Token $tmp1845 = *(&local0);
frost$core$String* $tmp1846 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1845);
frost$core$Int64 $tmp1847 = (frost$core$Int64) {2};
frost$core$Bit $tmp1848 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1849 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1847, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1848);
frost$core$String* $tmp1850 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1846, $tmp1849);
frost$core$Int64 $tmp1851 = (frost$core$Int64) {16};
frost$core$UInt64$nullable $tmp1852 = frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp1850, $tmp1851);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp1841, $tmp1842, $tmp1844, ((frost$core$UInt64) $tmp1852.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
// unreffing REF($163:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// unreffing REF($158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
// unreffing REF($153:org.frostlanguage.frostc.ASTNode)
return $tmp1841;
block17:;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {6};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block18; else goto block19;
block18:;
// line 714
org$frostlanguage$frostc$ASTNode* $tmp1856 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {37};
org$frostlanguage$frostc$parser$Token $tmp1858 = *(&local0);
org$frostlanguage$frostc$Position $tmp1859 = $tmp1858.position;
org$frostlanguage$frostc$parser$Token $tmp1860 = *(&local0);
frost$core$String* $tmp1861 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1860);
frost$core$Real64$nullable $tmp1862 = frost$core$String$convert$R$frost$core$Real64$Q($tmp1861);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Real64($tmp1856, $tmp1857, $tmp1859, ((frost$core$Real64) $tmp1862.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// unreffing REF($191:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// unreffing REF($186:org.frostlanguage.frostc.ASTNode)
return $tmp1856;
block19:;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {47};
frost$core$Bit $tmp1864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block20; else goto block21;
block20:;
// line 717
org$frostlanguage$frostc$ASTNode* $tmp1866 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1867 = (frost$core$Int64) {40};
org$frostlanguage$frostc$parser$Token $tmp1868 = *(&local0);
org$frostlanguage$frostc$Position $tmp1869 = $tmp1868.position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1866, $tmp1867, $tmp1869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// unreffing REF($210:org.frostlanguage.frostc.ASTNode)
return $tmp1866;
block21:;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {48};
frost$core$Bit $tmp1871 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1870);
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block22; else goto block23;
block22:;
// line 720
org$frostlanguage$frostc$ASTNode* $tmp1873 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1874 = (frost$core$Int64) {42};
org$frostlanguage$frostc$parser$Token $tmp1875 = *(&local0);
org$frostlanguage$frostc$Position $tmp1876 = $tmp1875.position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1873, $tmp1874, $tmp1876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// unreffing REF($227:org.frostlanguage.frostc.ASTNode)
return $tmp1873;
block23:;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {44};
frost$core$Bit $tmp1878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1877);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block24; else goto block25;
block24:;
// line 723
org$frostlanguage$frostc$ASTNode* $tmp1880 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1881 = (frost$core$Int64) {31};
org$frostlanguage$frostc$parser$Token $tmp1882 = *(&local0);
org$frostlanguage$frostc$Position $tmp1883 = $tmp1882.position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1880, $tmp1881, $tmp1883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
// unreffing REF($244:org.frostlanguage.frostc.ASTNode)
return $tmp1880;
block25:;
frost$core$Int64 $tmp1884 = (frost$core$Int64) {42};
frost$core$Bit $tmp1885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block26; else goto block27;
block26:;
// line 726
org$frostlanguage$frostc$ASTNode* $tmp1887 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1888 = (frost$core$Int64) {6};
org$frostlanguage$frostc$parser$Token $tmp1889 = *(&local0);
org$frostlanguage$frostc$Position $tmp1890 = $tmp1889.position;
frost$core$Bit $tmp1891 = frost$core$Bit$init$builtin_bit(true);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp1887, $tmp1888, $tmp1890, $tmp1891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
// unreffing REF($261:org.frostlanguage.frostc.ASTNode)
return $tmp1887;
block27:;
frost$core$Int64 $tmp1892 = (frost$core$Int64) {43};
frost$core$Bit $tmp1893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1892);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block28; else goto block29;
block28:;
// line 729
org$frostlanguage$frostc$ASTNode* $tmp1895 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1896 = (frost$core$Int64) {6};
org$frostlanguage$frostc$parser$Token $tmp1897 = *(&local0);
org$frostlanguage$frostc$Position $tmp1898 = $tmp1897.position;
frost$core$Bit $tmp1899 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$Bit($tmp1895, $tmp1896, $tmp1898, $tmp1899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
// unreffing REF($279:org.frostlanguage.frostc.ASTNode)
return $tmp1895;
block29:;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {8};
frost$core$Bit $tmp1901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1900);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp1903 = (frost$core$Int64) {7};
frost$core$Bit $tmp1904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block30; else goto block32;
block30:;
// line 732
org$frostlanguage$frostc$parser$Token $tmp1906 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1906);
// line 733
org$frostlanguage$frostc$ASTNode* $tmp1907 = org$frostlanguage$frostc$parser$Parser$string$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
// unreffing REF($304:org.frostlanguage.frostc.ASTNode?)
return $tmp1907;
block32:;
frost$core$Int64 $tmp1908 = (frost$core$Int64) {104};
frost$core$Bit $tmp1909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1908);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block33; else goto block34;
block33:;
// line 736
org$frostlanguage$frostc$parser$Token $tmp1911 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1911);
// line 737
org$frostlanguage$frostc$ASTNode* $tmp1912 = org$frostlanguage$frostc$parser$Parser$parenthesizedExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
// unreffing REF($319:org.frostlanguage.frostc.ASTNode?)
return $tmp1912;
block34:;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {102};
frost$core$Bit $tmp1914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block35; else goto block36;
block35:;
// line 740
org$frostlanguage$frostc$parser$Token $tmp1916 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1916);
// line 741
org$frostlanguage$frostc$ASTNode* $tmp1917 = org$frostlanguage$frostc$parser$Parser$arrayLiteral$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// unreffing REF($334:org.frostlanguage.frostc.ASTNode?)
return $tmp1917;
block36:;
frost$core$Int64 $tmp1918 = (frost$core$Int64) {14};
frost$core$Bit $tmp1919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1918);
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block37; else goto block38;
block37:;
// line 744
org$frostlanguage$frostc$parser$Token $tmp1921 = *(&local0);
frost$core$String* $tmp1922 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1921);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$String* $tmp1923 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local4) = $tmp1922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing REF($347:frost.core.String)
// line 745
frost$core$String* $tmp1924 = *(&local4);
frost$core$Bit $tmp1925 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1924, &$s1926);
bool $tmp1927 = $tmp1925.value;
if ($tmp1927) goto block39; else goto block41;
block39:;
// line 746
frost$core$Int64 $tmp1928 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp1929 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1928);
org$frostlanguage$frostc$parser$Token$nullable $tmp1930 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1929, &$s1931);
// line 747
org$frostlanguage$frostc$ASTNode* $tmp1932 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
org$frostlanguage$frostc$ASTNode* $tmp1933 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local5) = $tmp1932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// unreffing REF($368:org.frostlanguage.frostc.ASTNode?)
// line 748
org$frostlanguage$frostc$ASTNode* $tmp1934 = *(&local5);
frost$core$Bit $tmp1935 = frost$core$Bit$init$builtin_bit($tmp1934 == NULL);
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block42; else goto block43;
block42:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp1937 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
// unreffing expr
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1938 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block43:;
// line 751
frost$core$Int64 $tmp1939 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp1940 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp1939);
org$frostlanguage$frostc$parser$Token$nullable $tmp1941 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp1940, &$s1942);
// line 752
org$frostlanguage$frostc$ASTNode* $tmp1943 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1944 = (frost$core$Int64) {3};
org$frostlanguage$frostc$parser$Token $tmp1945 = *(&local0);
org$frostlanguage$frostc$Position $tmp1946 = $tmp1945.position;
org$frostlanguage$frostc$ASTNode* $tmp1947 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode($tmp1943, $tmp1944, $tmp1946, $tmp1947);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
// unreffing REF($404:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp1948 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
// unreffing expr
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp1949 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
return $tmp1943;
block41:;
// line 754
frost$core$String* $tmp1950 = *(&local4);
frost$core$Bit $tmp1951 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1950, &$s1952);
bool $tmp1953 = $tmp1951.value;
if ($tmp1953) goto block44; else goto block45;
block44:;
// line 755
org$frostlanguage$frostc$ASTNode* $tmp1954 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp1955 = (frost$core$Int64) {4};
org$frostlanguage$frostc$parser$Token $tmp1956 = *(&local0);
org$frostlanguage$frostc$Position $tmp1957 = $tmp1956.position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp1954, $tmp1955, $tmp1957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
// unreffing REF($434:org.frostlanguage.frostc.ASTNode)
frost$core$String* $tmp1958 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
return $tmp1954;
block45:;
goto block40;
block40:;
// line 757
org$frostlanguage$frostc$parser$Token $tmp1959 = *(&local0);
frost$core$String* $tmp1960 = *(&local4);
frost$core$String* $tmp1961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1962, $tmp1960);
frost$core$String* $tmp1963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1961, &$s1964);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp1959, $tmp1963);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
// unreffing REF($456:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
// unreffing REF($455:frost.core.String)
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp1965 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// unreffing name
*(&local4) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block38:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {21};
frost$core$Bit $tmp1967 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1966);
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp1969 = (frost$core$Int64) {22};
frost$core$Bit $tmp1970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1969);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block46; else goto block48;
block46:;
// line 761
org$frostlanguage$frostc$parser$Token $tmp1972 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1972);
// line 762
org$frostlanguage$frostc$ASTNode* $tmp1973 = org$frostlanguage$frostc$parser$Parser$anonymousMethod$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// unreffing REF($485:org.frostlanguage.frostc.ASTNode?)
return $tmp1973;
block48:;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {55};
frost$core$Bit $tmp1975 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1774, $tmp1974);
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block49; else goto block50;
block49:;
// line 765
org$frostlanguage$frostc$parser$Token $tmp1977 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp1977);
// line 766
org$frostlanguage$frostc$ASTNode* $tmp1978 = org$frostlanguage$frostc$parser$Parser$regex$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
// unreffing REF($500:org.frostlanguage.frostc.ASTNode?)
return $tmp1978;
block50:;
// line 769
org$frostlanguage$frostc$parser$Token $tmp1979 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp1980 = *(&local0);
frost$core$String* $tmp1981 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp1980);
frost$core$String* $tmp1982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1983, $tmp1981);
frost$core$String* $tmp1984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1982, &$s1985);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp1979, $tmp1984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// unreffing REF($512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// unreffing REF($511:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
// unreffing REF($510:frost.core.String)
// line 770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp1986 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {693};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1989, $tmp1988, &$s1990);
abort(); // unreachable
block51:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$parser$Parser$getClassName$org$frostlanguage$frostc$ASTNode$R$frost$core$String$Q(org$frostlanguage$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 777
frost$core$Int64* $tmp1991 = &param0->$rawValue;
frost$core$Int64 $tmp1992 = *$tmp1991;
frost$core$Int64 $tmp1993 = (frost$core$Int64) {22};
frost$core$Bit $tmp1994 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1992, $tmp1993);
bool $tmp1995 = $tmp1994.value;
if ($tmp1995) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Position* $tmp1996 = (org$frostlanguage$frostc$Position*) (param0->$data + 0);
org$frostlanguage$frostc$Position $tmp1997 = *$tmp1996;
frost$core$String** $tmp1998 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1999 = *$tmp1998;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$String* $tmp2000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local0) = $tmp1999;
// line 779
frost$core$String* $tmp2001 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
frost$core$String* $tmp2002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
// unreffing text
*(&local0) = ((frost$core$String*) NULL);
return $tmp2001;
block3:;
frost$core$Int64 $tmp2003 = (frost$core$Int64) {16};
frost$core$Bit $tmp2004 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1992, $tmp2003);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block4; else goto block5;
block4:;
org$frostlanguage$frostc$Position* $tmp2006 = (org$frostlanguage$frostc$Position*) (param0->$data + 0);
org$frostlanguage$frostc$Position $tmp2007 = *$tmp2006;
org$frostlanguage$frostc$ASTNode** $tmp2008 = (org$frostlanguage$frostc$ASTNode**) (param0->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp2009 = *$tmp2008;
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
org$frostlanguage$frostc$ASTNode* $tmp2010 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local1) = $tmp2009;
frost$core$String** $tmp2011 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2012 = *$tmp2011;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
frost$core$String* $tmp2013 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local2) = $tmp2012;
// line 782
org$frostlanguage$frostc$ASTNode* $tmp2014 = *(&local1);
frost$core$String* $tmp2015 = org$frostlanguage$frostc$parser$Parser$getClassName$org$frostlanguage$frostc$ASTNode$R$frost$core$String$Q($tmp2014);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
frost$core$String* $tmp2016 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local3) = $tmp2015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
// unreffing REF($55:frost.core.String?)
// line 783
frost$core$String* $tmp2017 = *(&local3);
frost$core$Bit $tmp2018 = frost$core$Bit$init$builtin_bit($tmp2017 != NULL);
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block6; else goto block7;
block6:;
// line 784
frost$core$String* $tmp2020 = *(&local3);
frost$core$String* $tmp2021 = *(&local2);
frost$core$String* $tmp2022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2023, $tmp2021);
frost$core$String* $tmp2024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2020, $tmp2022);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$String* $tmp2025 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
*(&local3) = $tmp2024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
// unreffing REF($76:frost.core.String)
goto block7;
block7:;
// line 786
frost$core$String* $tmp2026 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
frost$core$String* $tmp2027 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
// unreffing result
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// unreffing field
*(&local2) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2026;
block5:;
// line 789
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
frost$core$Bit $tmp2030 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {776};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2033, $tmp2032, &$s2034);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$parser$Parser$methodName$R$frost$core$String$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$parser$Token local1;
// line 800
org$frostlanguage$frostc$parser$Token $tmp2035 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp2035;
// line 801
org$frostlanguage$frostc$parser$Token $tmp2036 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2037 = $tmp2036.kind;
frost$core$Int64 $tmp2038 = $tmp2037.$rawValue;
frost$core$Int64 $tmp2039 = (frost$core$Int64) {49};
frost$core$Bit $tmp2040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2039);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2042 = (frost$core$Int64) {52};
frost$core$Bit $tmp2043 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2042);
bool $tmp2044 = $tmp2043.value;
if ($tmp2044) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2045 = (frost$core$Int64) {53};
frost$core$Bit $tmp2046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp2048 = (frost$core$Int64) {54};
frost$core$Bit $tmp2049 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2048);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp2051 = (frost$core$Int64) {55};
frost$core$Bit $tmp2052 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2051);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {56};
frost$core$Bit $tmp2055 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2054);
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp2057 = (frost$core$Int64) {58};
frost$core$Bit $tmp2058 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2057);
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp2060 = (frost$core$Int64) {59};
frost$core$Bit $tmp2061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2060);
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp2063 = (frost$core$Int64) {60};
frost$core$Bit $tmp2064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp2066 = (frost$core$Int64) {63};
frost$core$Bit $tmp2067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2066);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp2069 = (frost$core$Int64) {66};
frost$core$Bit $tmp2070 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2069);
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp2072 = (frost$core$Int64) {65};
frost$core$Bit $tmp2073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2072);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp2075 = (frost$core$Int64) {57};
frost$core$Bit $tmp2076 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2075);
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp2078 = (frost$core$Int64) {67};
frost$core$Bit $tmp2079 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2078);
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {68};
frost$core$Bit $tmp2082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2081);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp2084 = (frost$core$Int64) {69};
frost$core$Bit $tmp2085 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2084);
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block2; else goto block18;
block18:;
frost$core$Int64 $tmp2087 = (frost$core$Int64) {70};
frost$core$Bit $tmp2088 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2087);
bool $tmp2089 = $tmp2088.value;
if ($tmp2089) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp2090 = (frost$core$Int64) {71};
frost$core$Bit $tmp2091 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2090);
bool $tmp2092 = $tmp2091.value;
if ($tmp2092) goto block2; else goto block20;
block20:;
frost$core$Int64 $tmp2093 = (frost$core$Int64) {72};
frost$core$Bit $tmp2094 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2093);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block2; else goto block21;
block21:;
frost$core$Int64 $tmp2096 = (frost$core$Int64) {50};
frost$core$Bit $tmp2097 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2096);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block2; else goto block22;
block22:;
frost$core$Int64 $tmp2099 = (frost$core$Int64) {51};
frost$core$Bit $tmp2100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2099);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block2; else goto block23;
block23:;
frost$core$Int64 $tmp2102 = (frost$core$Int64) {73};
frost$core$Bit $tmp2103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2102);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block2; else goto block24;
block2:;
// line 808
org$frostlanguage$frostc$parser$Token $tmp2105 = *(&local0);
frost$core$String* $tmp2106 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp2105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($97:frost.core.String)
return $tmp2106;
block24:;
frost$core$Int64 $tmp2107 = (frost$core$Int64) {64};
frost$core$Bit $tmp2108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2107);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block25; else goto block26;
block25:;
// line 811
org$frostlanguage$frostc$parser$Token $tmp2110 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp2110;
// line 812
org$frostlanguage$frostc$parser$Token $tmp2111 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp2112 = $tmp2111.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2113;
$tmp2113 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2113->value = $tmp2112;
frost$core$Int64 $tmp2114 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp2115 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2114);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2116;
$tmp2116 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2116->value = $tmp2115;
ITable* $tmp2117 = ((frost$core$Equatable*) $tmp2113)->$class->itable;
while ($tmp2117->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2117 = $tmp2117->next;
}
$fn2119 $tmp2118 = $tmp2117->methods[0];
frost$core$Bit $tmp2120 = $tmp2118(((frost$core$Equatable*) $tmp2113), ((frost$core$Equatable*) $tmp2116));
bool $tmp2121 = $tmp2120.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2116)));
// unreffing REF($119:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2113)));
// unreffing REF($115:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp2121) goto block27; else goto block29;
block27:;
// line 813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2122));
return &$s2122;
block29:;
// line 1
// line 816
org$frostlanguage$frostc$parser$Token $tmp2123 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2123);
// line 817
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2124));
return &$s2124;
block28:;
goto block1;
block26:;
frost$core$Int64 $tmp2125 = (frost$core$Int64) {102};
frost$core$Bit $tmp2126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2038, $tmp2125);
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block30; else goto block31;
block30:;
// line 821
frost$core$Int64 $tmp2128 = (frost$core$Int64) {103};
org$frostlanguage$frostc$parser$Token$Kind $tmp2129 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2128);
org$frostlanguage$frostc$parser$Token$nullable $tmp2130 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2129, &$s2131);
frost$core$Bit $tmp2132 = frost$core$Bit$init$builtin_bit(!$tmp2130.nonnull);
bool $tmp2133 = $tmp2132.value;
if ($tmp2133) goto block32; else goto block33;
block32:;
// line 822
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block33:;
// line 824
frost$core$Int64 $tmp2134 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp2135 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2134);
org$frostlanguage$frostc$parser$Token$nullable $tmp2136 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2135);
frost$core$Bit $tmp2137 = frost$core$Bit$init$builtin_bit($tmp2136.nonnull);
bool $tmp2138 = $tmp2137.value;
if ($tmp2138) goto block34; else goto block35;
block34:;
// line 825
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2139));
return &$s2139;
block35:;
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2140));
return &$s2140;
block31:;
// line 830
org$frostlanguage$frostc$parser$Token $tmp2141 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp2142 = *(&local0);
frost$core$String* $tmp2143 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp2142);
frost$core$String* $tmp2144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2145, $tmp2143);
frost$core$String* $tmp2146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2144, &$s2147);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp2141, $tmp2146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// unreffing REF($182:frost.core.String)
// line 832
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
frost$core$Bit $tmp2148 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2149 = $tmp2148.value;
if ($tmp2149) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2150 = (frost$core$Int64) {799};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2151, $tmp2150, &$s2152);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

// line 838
frost$core$Bit $tmp2153 = frost$core$Bit$init$builtin_bit(true);
org$frostlanguage$frostc$ASTNode* $tmp2154 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp2153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// unreffing REF($2:org.frostlanguage.frostc.ASTNode?)
return $tmp2154;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$functionOrTupleType$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$parser$Token local3;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
// line 846
frost$core$Int64 $tmp2155 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp2156 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2155);
org$frostlanguage$frostc$parser$Token$nullable $tmp2157 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2156, &$s2158);
*(&local0) = $tmp2157;
// line 847
org$frostlanguage$frostc$parser$Token$nullable $tmp2159 = *(&local0);
frost$core$Bit $tmp2160 = frost$core$Bit$init$builtin_bit(!$tmp2159.nonnull);
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block1; else goto block2;
block1:;
// line 848
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 850
frost$collections$Array* $tmp2162 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2162);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
frost$collections$Array* $tmp2163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local1) = $tmp2162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 851
frost$core$Int64 $tmp2164 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2165 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2164);
org$frostlanguage$frostc$parser$Token$nullable $tmp2166 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2165);
frost$core$Bit $tmp2167 = frost$core$Bit$init$builtin_bit(!$tmp2166.nonnull);
bool $tmp2168 = $tmp2167.value;
if ($tmp2168) goto block3; else goto block4;
block3:;
// line 852
org$frostlanguage$frostc$ASTNode* $tmp2169 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
org$frostlanguage$frostc$ASTNode* $tmp2170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local2) = $tmp2169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
// unreffing REF($38:org.frostlanguage.frostc.ASTNode?)
// line 853
org$frostlanguage$frostc$ASTNode* $tmp2171 = *(&local2);
frost$core$Bit $tmp2172 = frost$core$Bit$init$builtin_bit($tmp2171 == NULL);
bool $tmp2173 = $tmp2172.value;
if ($tmp2173) goto block5; else goto block6;
block5:;
// line 854
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2174 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 856
frost$collections$Array* $tmp2176 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp2177 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2176, ((frost$core$Object*) $tmp2177));
// line 857
goto block7;
block7:;
frost$core$Int64 $tmp2178 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2179 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2178);
org$frostlanguage$frostc$parser$Token$nullable $tmp2180 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2179);
frost$core$Bit $tmp2181 = frost$core$Bit$init$builtin_bit($tmp2180.nonnull);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block8; else goto block9;
block8:;
// line 858
org$frostlanguage$frostc$ASTNode* $tmp2183 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
org$frostlanguage$frostc$ASTNode* $tmp2184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local2) = $tmp2183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// unreffing REF($86:org.frostlanguage.frostc.ASTNode?)
// line 859
org$frostlanguage$frostc$ASTNode* $tmp2185 = *(&local2);
frost$core$Bit $tmp2186 = frost$core$Bit$init$builtin_bit($tmp2185 == NULL);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block10; else goto block11;
block10:;
// line 860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2188 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 862
frost$collections$Array* $tmp2190 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp2191 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2190, ((frost$core$Object*) $tmp2191));
goto block7;
block9:;
// line 864
frost$core$Int64 $tmp2192 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2193 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2192);
org$frostlanguage$frostc$parser$Token$nullable $tmp2194 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2193, &$s2195);
frost$core$Bit $tmp2196 = frost$core$Bit$init$builtin_bit(!$tmp2194.nonnull);
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block12; else goto block13;
block12:;
// line 865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
org$frostlanguage$frostc$ASTNode* $tmp2200 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 868
org$frostlanguage$frostc$parser$Token $tmp2201 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local3) = $tmp2201;
// line 869
org$frostlanguage$frostc$parser$Token $tmp2202 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp2203 = $tmp2202.kind;
frost$core$Int64 $tmp2204 = $tmp2203.$rawValue;
frost$core$Int64 $tmp2205 = (frost$core$Int64) {91};
frost$core$Bit $tmp2206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2204, $tmp2205);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2208 = (frost$core$Int64) {92};
frost$core$Bit $tmp2209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2204, $tmp2208);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp2211 = (frost$core$Int64) {93};
frost$core$Bit $tmp2212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2204, $tmp2211);
bool $tmp2213 = $tmp2212.value;
if ($tmp2213) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp2214 = (frost$core$Int64) {94};
frost$core$Bit $tmp2215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2204, $tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block15; else goto block19;
block15:;
// line 872
org$frostlanguage$frostc$parser$Token $tmp2217 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 873
frost$core$Int64 $tmp2218 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp2219 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2218);
org$frostlanguage$frostc$parser$Token$nullable $tmp2220 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2219, &$s2221);
frost$core$Bit $tmp2222 = frost$core$Bit$init$builtin_bit(!$tmp2220.nonnull);
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block20; else goto block21;
block20:;
// line 874
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
// line 876
frost$collections$Array* $tmp2225 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2225);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
frost$collections$Array* $tmp2226 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local4) = $tmp2225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
// unreffing REF($195:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 877
frost$core$Int64 $tmp2227 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2228 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2227);
org$frostlanguage$frostc$parser$Token$nullable $tmp2229 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2228);
frost$core$Bit $tmp2230 = frost$core$Bit$init$builtin_bit(!$tmp2229.nonnull);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block22; else goto block23;
block22:;
// line 878
org$frostlanguage$frostc$ASTNode* $tmp2232 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
org$frostlanguage$frostc$ASTNode* $tmp2233 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local5) = $tmp2232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// unreffing REF($217:org.frostlanguage.frostc.ASTNode?)
// line 879
org$frostlanguage$frostc$ASTNode* $tmp2234 = *(&local5);
frost$core$Bit $tmp2235 = frost$core$Bit$init$builtin_bit($tmp2234 == NULL);
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block24; else goto block25;
block24:;
// line 880
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2237 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
// unreffing t
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2238 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
// unreffing returnTypes
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block25:;
// line 882
frost$collections$Array* $tmp2240 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp2241 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2240, ((frost$core$Object*) $tmp2241));
// line 883
goto block26;
block26:;
frost$core$Int64 $tmp2242 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2243 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2242);
org$frostlanguage$frostc$parser$Token$nullable $tmp2244 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2243);
frost$core$Bit $tmp2245 = frost$core$Bit$init$builtin_bit($tmp2244.nonnull);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block27; else goto block28;
block27:;
// line 884
org$frostlanguage$frostc$ASTNode* $tmp2247 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
org$frostlanguage$frostc$ASTNode* $tmp2248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local5) = $tmp2247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
// unreffing REF($270:org.frostlanguage.frostc.ASTNode?)
// line 885
org$frostlanguage$frostc$ASTNode* $tmp2249 = *(&local5);
frost$core$Bit $tmp2250 = frost$core$Bit$init$builtin_bit($tmp2249 == NULL);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block29; else goto block30;
block29:;
// line 886
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2252 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// unreffing t
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2253 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
// unreffing returnTypes
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block30:;
// line 888
frost$collections$Array* $tmp2255 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp2256 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2255, ((frost$core$Object*) $tmp2256));
goto block26;
block28:;
// line 890
frost$core$Int64 $tmp2257 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2258 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2257);
org$frostlanguage$frostc$parser$Token$nullable $tmp2259 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2258, &$s2260);
frost$core$Bit $tmp2261 = frost$core$Bit$init$builtin_bit(!$tmp2259.nonnull);
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block31; else goto block32;
block31:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
// unreffing t
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
// unreffing returnTypes
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2265 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block32:;
org$frostlanguage$frostc$ASTNode* $tmp2266 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
// unreffing t
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 894
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 895
frost$collections$Array* $tmp2267 = *(&local4);
ITable* $tmp2268 = ((frost$collections$CollectionView*) $tmp2267)->$class->itable;
while ($tmp2268->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2268 = $tmp2268->next;
}
$fn2270 $tmp2269 = $tmp2268->methods[0];
frost$core$Int64 $tmp2271 = $tmp2269(((frost$collections$CollectionView*) $tmp2267));
frost$core$Int64 $tmp2272 = (frost$core$Int64) {0};
frost$core$Bit $tmp2273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2271, $tmp2272);
bool $tmp2274 = $tmp2273.value;
if ($tmp2274) goto block33; else goto block35;
block33:;
// line 896
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2275 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block34;
block35:;
// line 898
frost$collections$Array* $tmp2276 = *(&local4);
ITable* $tmp2277 = ((frost$collections$CollectionView*) $tmp2276)->$class->itable;
while ($tmp2277->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2277 = $tmp2277->next;
}
$fn2279 $tmp2278 = $tmp2277->methods[0];
frost$core$Int64 $tmp2280 = $tmp2278(((frost$collections$CollectionView*) $tmp2276));
frost$core$Int64 $tmp2281 = (frost$core$Int64) {1};
frost$core$Bit $tmp2282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2280, $tmp2281);
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block36; else goto block38;
block36:;
// line 899
frost$collections$Array* $tmp2284 = *(&local4);
frost$core$Int64 $tmp2285 = (frost$core$Int64) {0};
frost$core$Object* $tmp2286 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2284, $tmp2285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp2286)));
org$frostlanguage$frostc$ASTNode* $tmp2287 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) $tmp2286);
frost$core$Frost$unref$frost$core$Object$Q($tmp2286);
// unreffing REF($378:frost.collections.Array.T)
goto block37;
block38:;
// line 1
// line 903
org$frostlanguage$frostc$parser$Token$nullable $tmp2288 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp2288.value), &$s2289);
// line 904
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2290 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing returnTypes
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2292 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 906
org$frostlanguage$frostc$ASTNode* $tmp2293 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2294 = (frost$core$Int64) {30};
org$frostlanguage$frostc$parser$Token$nullable $tmp2295 = *(&local0);
org$frostlanguage$frostc$Position $tmp2296 = ((org$frostlanguage$frostc$parser$Token) $tmp2295.value).position;
org$frostlanguage$frostc$parser$Token $tmp2297 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp2298 = $tmp2297.kind;
frost$collections$Array* $tmp2299 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp2300 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2299);
org$frostlanguage$frostc$ASTNode* $tmp2301 = *(&local6);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q($tmp2293, $tmp2294, $tmp2296, $tmp2298, $tmp2300, $tmp2301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
// unreffing REF($426:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
// unreffing REF($417:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2302 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing returnType
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2303 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing returnTypes
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp2293;
block19:;
// line 911
org$frostlanguage$frostc$parser$Token$nullable $tmp2305 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp2305.value), &$s2306);
// line 912
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp2307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing subtypes
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
frost$core$Bit $tmp2308 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {845};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2311, $tmp2310, &$s2312);
abort(); // unreachable
block39:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$Bit param1) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local3;
frost$core$String* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
// line 922
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 923
org$frostlanguage$frostc$parser$Token $tmp2313 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2314 = $tmp2313.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2315;
$tmp2315 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2315->value = $tmp2314;
frost$core$Int64 $tmp2316 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp2317 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2316);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2318;
$tmp2318 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2318->value = $tmp2317;
ITable* $tmp2319 = ((frost$core$Equatable*) $tmp2315)->$class->itable;
while ($tmp2319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2319 = $tmp2319->next;
}
$fn2321 $tmp2320 = $tmp2319->methods[0];
frost$core$Bit $tmp2322 = $tmp2320(((frost$core$Equatable*) $tmp2315), ((frost$core$Equatable*) $tmp2318));
bool $tmp2323 = $tmp2322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2318)));
// unreffing REF($9:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2315)));
// unreffing REF($5:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp2323) goto block1; else goto block3;
block1:;
// line 924
org$frostlanguage$frostc$ASTNode* $tmp2324 = org$frostlanguage$frostc$parser$Parser$functionOrTupleType$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
org$frostlanguage$frostc$ASTNode* $tmp2325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local0) = $tmp2324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// unreffing REF($21:org.frostlanguage.frostc.ASTNode?)
// line 925
org$frostlanguage$frostc$ASTNode* $tmp2326 = *(&local0);
frost$core$Bit $tmp2327 = frost$core$Bit$init$builtin_bit($tmp2326 == NULL);
bool $tmp2328 = $tmp2327.value;
if ($tmp2328) goto block4; else goto block5;
block4:;
// line 926
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 930
frost$core$Int64 $tmp2330 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp2331 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2330);
org$frostlanguage$frostc$parser$Token$nullable $tmp2332 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2331, &$s2333);
*(&local1) = $tmp2332;
// line 931
org$frostlanguage$frostc$parser$Token$nullable $tmp2334 = *(&local1);
frost$core$Bit $tmp2335 = frost$core$Bit$init$builtin_bit(!$tmp2334.nonnull);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block6; else goto block7;
block6:;
// line 932
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 934
frost$core$MutableString* $tmp2338 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlanguage$frostc$parser$Token$nullable $tmp2339 = *(&local1);
frost$core$String* $tmp2340 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp2339.value));
frost$core$MutableString$init$frost$core$String($tmp2338, $tmp2340);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$MutableString* $tmp2341 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local2) = $tmp2338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
// unreffing REF($72:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
// unreffing REF($69:frost.core.MutableString)
// line 935
goto block8;
block8:;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {99};
org$frostlanguage$frostc$parser$Token$Kind $tmp2343 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2342);
org$frostlanguage$frostc$parser$Token$nullable $tmp2344 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2343);
frost$core$Bit $tmp2345 = frost$core$Bit$init$builtin_bit($tmp2344.nonnull);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block9; else goto block10;
block9:;
// line 936
frost$core$Int64 $tmp2347 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp2348 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2347);
org$frostlanguage$frostc$parser$Token$nullable $tmp2349 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2348, &$s2350);
*(&local3) = $tmp2349;
// line 937
org$frostlanguage$frostc$parser$Token$nullable $tmp2351 = *(&local3);
frost$core$Bit $tmp2352 = frost$core$Bit$init$builtin_bit(!$tmp2351.nonnull);
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block11; else goto block12;
block11:;
// line 938
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp2354 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block12:;
// line 940
frost$core$MutableString* $tmp2356 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp2356, &$s2357);
// line 941
frost$core$MutableString* $tmp2358 = *(&local2);
org$frostlanguage$frostc$parser$Token$nullable $tmp2359 = *(&local3);
frost$core$String* $tmp2360 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp2359.value));
frost$core$MutableString$append$frost$core$String($tmp2358, $tmp2360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// unreffing REF($128:frost.core.String)
goto block8;
block10:;
// line 943
frost$core$MutableString* $tmp2361 = *(&local2);
frost$core$String* $tmp2362 = frost$core$MutableString$finish$R$frost$core$String($tmp2361);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$String* $tmp2363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local4) = $tmp2362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// unreffing REF($136:frost.core.String)
// line 944
org$frostlanguage$frostc$ASTNode* $tmp2364 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2365 = (frost$core$Int64) {45};
org$frostlanguage$frostc$parser$Token$nullable $tmp2366 = *(&local1);
org$frostlanguage$frostc$Position $tmp2367 = ((org$frostlanguage$frostc$parser$Token) $tmp2366.value).position;
frost$core$String* $tmp2368 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp2364, $tmp2365, $tmp2367, $tmp2368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
org$frostlanguage$frostc$ASTNode* $tmp2369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
*(&local0) = $tmp2364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// unreffing REF($148:org.frostlanguage.frostc.ASTNode)
// line 945
org$frostlanguage$frostc$parser$Token $tmp2370 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2371 = $tmp2370.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2372;
$tmp2372 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2372->value = $tmp2371;
frost$core$Int64 $tmp2373 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp2374 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2373);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2375;
$tmp2375 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2375->value = $tmp2374;
ITable* $tmp2376 = ((frost$core$Equatable*) $tmp2372)->$class->itable;
while ($tmp2376->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2376 = $tmp2376->next;
}
$fn2378 $tmp2377 = $tmp2376->methods[0];
frost$core$Bit $tmp2379 = $tmp2377(((frost$core$Equatable*) $tmp2372), ((frost$core$Equatable*) $tmp2375));
bool $tmp2380 = $tmp2379.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2375)));
// unreffing REF($172:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2372)));
// unreffing REF($168:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp2380) goto block13; else goto block14;
block13:;
// line 948
bool $tmp2381 = param1.value;
if ($tmp2381) goto block15; else goto block16;
block15:;
// line 949
org$frostlanguage$frostc$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 951
org$frostlanguage$frostc$parser$Token $tmp2382 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 952
frost$collections$Array* $tmp2383 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2383);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$collections$Array* $tmp2384 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local5) = $tmp2383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
// unreffing REF($192:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 953
frost$core$Bit $tmp2385 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode* $tmp2386 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp2385);
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlanguage$frostc$ASTNode* $tmp2387 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local6) = $tmp2386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
// unreffing REF($207:org.frostlanguage.frostc.ASTNode?)
// line 954
org$frostlanguage$frostc$ASTNode* $tmp2388 = *(&local6);
frost$core$Bit $tmp2389 = frost$core$Bit$init$builtin_bit($tmp2388 == NULL);
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block17; else goto block18;
block17:;
// line 955
bool $tmp2391 = param1.value;
if ($tmp2391) goto block19; else goto block20;
block19:;
// line 956
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 957
org$frostlanguage$frostc$ASTNode* $tmp2392 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
org$frostlanguage$frostc$ASTNode* $tmp2393 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2394 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2396 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2392;
block20:;
// line 959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2398 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2399 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2400 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block18:;
// line 961
frost$collections$Array* $tmp2403 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp2404 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2403, ((frost$core$Object*) $tmp2404));
// line 962
goto block21;
block21:;
frost$core$Int64 $tmp2405 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2406 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2405);
org$frostlanguage$frostc$parser$Token$nullable $tmp2407 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2406);
frost$core$Bit $tmp2408 = frost$core$Bit$init$builtin_bit($tmp2407.nonnull);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block22; else goto block23;
block22:;
// line 963
frost$core$Bit $tmp2410 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode* $tmp2411 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp2410);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
org$frostlanguage$frostc$ASTNode* $tmp2412 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local6) = $tmp2411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
// unreffing REF($306:org.frostlanguage.frostc.ASTNode?)
// line 964
org$frostlanguage$frostc$ASTNode* $tmp2413 = *(&local6);
frost$core$Bit $tmp2414 = frost$core$Bit$init$builtin_bit($tmp2413 == NULL);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block24; else goto block25;
block24:;
// line 965
bool $tmp2416 = param1.value;
if ($tmp2416) goto block26; else goto block27;
block26:;
// line 966
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 967
org$frostlanguage$frostc$ASTNode* $tmp2417 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
org$frostlanguage$frostc$ASTNode* $tmp2418 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2419 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2420 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2417;
block27:;
// line 969
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2423 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2425 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2426 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block25:;
// line 971
frost$collections$Array* $tmp2428 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp2429 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp2428, ((frost$core$Object*) $tmp2429));
goto block21;
block23:;
// line 973
frost$core$Int64 $tmp2430 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp2431 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2430);
org$frostlanguage$frostc$parser$Token$nullable $tmp2432 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2431, &$s2433);
frost$core$Bit $tmp2434 = frost$core$Bit$init$builtin_bit(!$tmp2432.nonnull);
bool $tmp2435 = $tmp2434.value;
if ($tmp2435) goto block28; else goto block29;
block28:;
// line 974
bool $tmp2436 = param1.value;
if ($tmp2436) goto block30; else goto block31;
block30:;
// line 975
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 976
org$frostlanguage$frostc$ASTNode* $tmp2437 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
org$frostlanguage$frostc$ASTNode* $tmp2438 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2439 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2437;
block31:;
// line 978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2443 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2444 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2445 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block29:;
// line 980
org$frostlanguage$frostc$ASTNode* $tmp2448 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2449 = (frost$core$Int64) {21};
org$frostlanguage$frostc$parser$Token$nullable $tmp2450 = *(&local1);
org$frostlanguage$frostc$Position $tmp2451 = ((org$frostlanguage$frostc$parser$Token) $tmp2450.value).position;
frost$core$String* $tmp2452 = *(&local4);
frost$collections$Array* $tmp2453 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp2454 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2453);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2448, $tmp2449, $tmp2451, $tmp2452, $tmp2454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlanguage$frostc$ASTNode* $tmp2455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = $tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
// unreffing REF($475:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// unreffing REF($467:org.frostlanguage.frostc.ASTNode)
// line 982
bool $tmp2456 = param1.value;
if ($tmp2456) goto block32; else goto block33;
block32:;
// line 983
org$frostlanguage$frostc$parser$Parser$accept(param0);
goto block33;
block33:;
org$frostlanguage$frostc$ASTNode* $tmp2457 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
// unreffing t
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2458 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
// unreffing children
*(&local5) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
frost$core$String* $tmp2459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
// unreffing finalName
*(&local4) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2460 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
goto block2;
block2:;
// line 987
frost$core$Int64 $tmp2461 = (frost$core$Int64) {95};
org$frostlanguage$frostc$parser$Token$Kind $tmp2462 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2461);
org$frostlanguage$frostc$parser$Token$nullable $tmp2463 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2462);
frost$core$Bit $tmp2464 = frost$core$Bit$init$builtin_bit($tmp2463.nonnull);
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block34; else goto block35;
block34:;
// line 988
org$frostlanguage$frostc$ASTNode* $tmp2466 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2467 = (frost$core$Int64) {32};
org$frostlanguage$frostc$ASTNode* $tmp2468 = *(&local0);
$fn2470 $tmp2469 = ($fn2470) $tmp2468->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp2471 = $tmp2469($tmp2468);
org$frostlanguage$frostc$ASTNode* $tmp2472 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode($tmp2466, $tmp2467, $tmp2471, $tmp2472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
org$frostlanguage$frostc$ASTNode* $tmp2473 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local0) = $tmp2466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
// unreffing REF($528:org.frostlanguage.frostc.ASTNode)
goto block35;
block35:;
// line 990
org$frostlanguage$frostc$ASTNode* $tmp2474 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlanguage$frostc$ASTNode* $tmp2475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2474;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$typeSpecifiers$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 997
frost$core$Int64 $tmp2476 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp2477 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2476);
org$frostlanguage$frostc$parser$Token$nullable $tmp2478 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2477, &$s2479);
frost$core$Bit $tmp2480 = frost$core$Bit$init$builtin_bit(!$tmp2478.nonnull);
bool $tmp2481 = $tmp2480.value;
if ($tmp2481) goto block1; else goto block2;
block1:;
// line 998
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block2:;
// line 1000
frost$collections$Array* $tmp2482 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2482);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$collections$Array* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = $tmp2482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
// unreffing REF($13:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1
// line 1002
org$frostlanguage$frostc$ASTNode* $tmp2484 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
org$frostlanguage$frostc$ASTNode* $tmp2485 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local1) = $tmp2484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
// unreffing REF($28:org.frostlanguage.frostc.ASTNode?)
// line 1003
org$frostlanguage$frostc$ASTNode* $tmp2486 = *(&local1);
frost$core$Bit $tmp2487 = frost$core$Bit$init$builtin_bit($tmp2486 == NULL);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block3; else goto block4;
block3:;
// line 1004
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2489 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2490 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block4:;
// line 1006
frost$collections$Array* $tmp2491 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp2492 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2491, ((frost$core$Object*) $tmp2492));
org$frostlanguage$frostc$ASTNode* $tmp2493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1008
goto block5;
block5:;
frost$core$Int64 $tmp2494 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2495 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2494);
org$frostlanguage$frostc$parser$Token$nullable $tmp2496 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2495);
frost$core$Bit $tmp2497 = frost$core$Bit$init$builtin_bit($tmp2496.nonnull);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block6; else goto block7;
block6:;
// line 1009
org$frostlanguage$frostc$ASTNode* $tmp2499 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlanguage$frostc$ASTNode* $tmp2500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local2) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// unreffing REF($81:org.frostlanguage.frostc.ASTNode?)
// line 1010
org$frostlanguage$frostc$ASTNode* $tmp2501 = *(&local2);
frost$core$Bit $tmp2502 = frost$core$Bit$init$builtin_bit($tmp2501 == NULL);
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block8; else goto block9;
block8:;
// line 1011
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2504 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block9:;
// line 1013
frost$collections$Array* $tmp2506 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp2507 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2506, ((frost$core$Object*) $tmp2507));
org$frostlanguage$frostc$ASTNode* $tmp2508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 1015
frost$core$Int64 $tmp2509 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp2510 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2509);
org$frostlanguage$frostc$parser$Token$nullable $tmp2511 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2510, &$s2512);
frost$core$Bit $tmp2513 = frost$core$Bit$init$builtin_bit(!$tmp2511.nonnull);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block10; else goto block11;
block10:;
// line 1016
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp2515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block11:;
// line 1018
frost$collections$Array* $tmp2516 = *(&local0);
org$frostlanguage$frostc$FixedArray* $tmp2517 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2516);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// unreffing REF($145:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$collections$Array* $tmp2518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2517;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$callExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
org$frostlanguage$frostc$FixedArray* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
frost$collections$Array* local10 = NULL;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local12;
frost$core$Bit local13;
org$frostlanguage$frostc$parser$Token local14;
frost$core$Bit local15;
// line 1032
org$frostlanguage$frostc$ASTNode* $tmp2519 = org$frostlanguage$frostc$parser$Parser$term$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlanguage$frostc$ASTNode* $tmp2520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local0) = $tmp2519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1033
org$frostlanguage$frostc$ASTNode* $tmp2521 = *(&local0);
frost$core$Bit $tmp2522 = frost$core$Bit$init$builtin_bit($tmp2521 == NULL);
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block1; else goto block2;
block1:;
// line 1034
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1036
goto block3;
block3:;
// line 1037
org$frostlanguage$frostc$parser$Token $tmp2525 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp2525;
// line 1038
org$frostlanguage$frostc$parser$Token $tmp2526 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp2527 = $tmp2526.kind;
frost$core$Int64 $tmp2528 = $tmp2527.$rawValue;
frost$core$Int64 $tmp2529 = (frost$core$Int64) {104};
frost$core$Bit $tmp2530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2529);
bool $tmp2531 = $tmp2530.value;
if ($tmp2531) goto block6; else goto block7;
block6:;
// line 1040
frost$collections$Stack** $tmp2532 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2533 = *$tmp2532;
frost$core$Bit $tmp2534 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp2535;
$tmp2535 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp2535->value = $tmp2534;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2533, ((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
// unreffing REF($45:frost.collections.Stack.T)
// line 1041
frost$collections$Array* $tmp2536 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2536);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$collections$Array* $tmp2537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local2) = $tmp2536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
// unreffing REF($51:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1042
frost$core$Int64 $tmp2538 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2539 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2538);
org$frostlanguage$frostc$parser$Token$nullable $tmp2540 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2539);
frost$core$Bit $tmp2541 = frost$core$Bit$init$builtin_bit(!$tmp2540.nonnull);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block8; else goto block9;
block8:;
// line 1043
org$frostlanguage$frostc$ASTNode* $tmp2543 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
org$frostlanguage$frostc$ASTNode* $tmp2544 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
*(&local3) = $tmp2543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
// unreffing REF($73:org.frostlanguage.frostc.ASTNode?)
// line 1044
org$frostlanguage$frostc$ASTNode* $tmp2545 = *(&local3);
frost$core$Bit $tmp2546 = frost$core$Bit$init$builtin_bit($tmp2545 == NULL);
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block10; else goto block11;
block10:;
// line 1045
frost$collections$Stack** $tmp2548 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2549 = *$tmp2548;
frost$core$Object* $tmp2550 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2549);
frost$core$Frost$unref$frost$core$Object$Q($tmp2550);
// unreffing REF($94:frost.collections.Stack.T)
// line 1046
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2551 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2552 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2553 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 1048
frost$collections$Array* $tmp2554 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp2555 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2554, ((frost$core$Object*) $tmp2555));
// line 1049
goto block12;
block12:;
frost$core$Int64 $tmp2556 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2557 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2556);
org$frostlanguage$frostc$parser$Token$nullable $tmp2558 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2557);
frost$core$Bit $tmp2559 = frost$core$Bit$init$builtin_bit($tmp2558.nonnull);
bool $tmp2560 = $tmp2559.value;
if ($tmp2560) goto block13; else goto block14;
block13:;
// line 1050
org$frostlanguage$frostc$ASTNode* $tmp2561 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
org$frostlanguage$frostc$ASTNode* $tmp2562 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local3) = $tmp2561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// unreffing REF($135:org.frostlanguage.frostc.ASTNode?)
// line 1051
org$frostlanguage$frostc$ASTNode* $tmp2563 = *(&local3);
frost$core$Bit $tmp2564 = frost$core$Bit$init$builtin_bit($tmp2563 == NULL);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block15; else goto block16;
block15:;
// line 1052
frost$collections$Stack** $tmp2566 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2567 = *$tmp2566;
frost$core$Object* $tmp2568 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2567);
frost$core$Frost$unref$frost$core$Object$Q($tmp2568);
// unreffing REF($155:frost.collections.Stack.T)
// line 1053
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2569 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2571 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 1055
frost$collections$Array* $tmp2572 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp2573 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp2572, ((frost$core$Object*) $tmp2573));
goto block12;
block14:;
// line 1057
frost$core$Int64 $tmp2574 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp2575 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2574);
org$frostlanguage$frostc$parser$Token$nullable $tmp2576 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2575, &$s2577);
frost$core$Bit $tmp2578 = frost$core$Bit$init$builtin_bit(!$tmp2576.nonnull);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block17; else goto block18;
block17:;
// line 1058
frost$collections$Stack** $tmp2580 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2581 = *$tmp2580;
frost$core$Object* $tmp2582 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2581);
frost$core$Frost$unref$frost$core$Object$Q($tmp2582);
// unreffing REF($199:frost.collections.Stack.T)
// line 1059
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2583 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block18:;
org$frostlanguage$frostc$ASTNode* $tmp2586 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 1062
frost$collections$Stack** $tmp2587 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2588 = *$tmp2587;
frost$core$Object* $tmp2589 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2588);
frost$core$Frost$unref$frost$core$Object$Q($tmp2589);
// unreffing REF($233:frost.collections.Stack.T)
// line 1063
org$frostlanguage$frostc$ASTNode* $tmp2590 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2591 = (frost$core$Int64) {9};
org$frostlanguage$frostc$parser$Token $tmp2592 = *(&local1);
org$frostlanguage$frostc$Position $tmp2593 = $tmp2592.position;
org$frostlanguage$frostc$ASTNode* $tmp2594 = *(&local0);
frost$collections$Array* $tmp2595 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp2596 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2595);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2590, $tmp2591, $tmp2593, $tmp2594, $tmp2596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
org$frostlanguage$frostc$ASTNode* $tmp2597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local0) = $tmp2590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// unreffing REF($247:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// unreffing REF($239:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp2598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
goto block5;
block7:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {102};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block19; else goto block20;
block19:;
// line 1067
org$frostlanguage$frostc$ASTNode* $tmp2602 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlanguage$frostc$ASTNode* $tmp2603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local4) = $tmp2602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// unreffing REF($274:org.frostlanguage.frostc.ASTNode?)
// line 1068
org$frostlanguage$frostc$ASTNode* $tmp2604 = *(&local4);
frost$core$Bit $tmp2605 = frost$core$Bit$init$builtin_bit($tmp2604 == NULL);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block21; else goto block22;
block21:;
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
// unreffing arg
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block22:;
// line 1071
frost$core$Int64 $tmp2609 = (frost$core$Int64) {103};
org$frostlanguage$frostc$parser$Token$Kind $tmp2610 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2609);
org$frostlanguage$frostc$parser$Token$nullable $tmp2611 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2610, &$s2612);
frost$core$Bit $tmp2613 = frost$core$Bit$init$builtin_bit(!$tmp2611.nonnull);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block23; else goto block24;
block23:;
// line 1072
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// unreffing arg
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2616 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block24:;
// line 1074
org$frostlanguage$frostc$ASTNode* $tmp2617 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2618 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp2619 = *(&local1);
org$frostlanguage$frostc$Position $tmp2620 = $tmp2619.position;
org$frostlanguage$frostc$ASTNode* $tmp2621 = *(&local0);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp2623 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2622);
org$frostlanguage$frostc$ASTNode* $tmp2624 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2617, $tmp2618, $tmp2620, $tmp2621, $tmp2623, $tmp2624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
org$frostlanguage$frostc$ASTNode* $tmp2625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local0) = $tmp2617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
// unreffing REF($328:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// unreffing arg
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block20:;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {99};
frost$core$Bit $tmp2628 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2627);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block25; else goto block26;
block25:;
// line 1077
*(&local5) = ((frost$core$String*) NULL);
// line 1078
frost$core$Int64 $tmp2630 = (frost$core$Int64) {23};
org$frostlanguage$frostc$parser$Token$Kind $tmp2631 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2630);
org$frostlanguage$frostc$parser$Token$nullable $tmp2632 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2631);
frost$core$Bit $tmp2633 = frost$core$Bit$init$builtin_bit($tmp2632.nonnull);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block27; else goto block29;
block27:;
// line 1079
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2635));
frost$core$String* $tmp2636 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
*(&local5) = &$s2635;
goto block28;
block29:;
// line 1
// line 1082
frost$core$String* $tmp2637 = org$frostlanguage$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
frost$core$String* $tmp2638 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local5) = $tmp2637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// unreffing REF($380:frost.core.String?)
// line 1083
frost$core$String* $tmp2639 = *(&local5);
frost$core$Bit $tmp2640 = frost$core$Bit$init$builtin_bit($tmp2639 == NULL);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block30; else goto block31;
block30:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp2642 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1087
org$frostlanguage$frostc$ASTNode* $tmp2644 = *(&local0);
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlanguage$frostc$ASTNode* $tmp2645 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local6) = $tmp2644;
// line 1088
org$frostlanguage$frostc$ASTNode* $tmp2646 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2647 = (frost$core$Int64) {16};
org$frostlanguage$frostc$parser$Token $tmp2648 = *(&local1);
org$frostlanguage$frostc$Position $tmp2649 = $tmp2648.position;
org$frostlanguage$frostc$ASTNode* $tmp2650 = *(&local6);
frost$core$String* $tmp2651 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String($tmp2646, $tmp2647, $tmp2649, $tmp2650, $tmp2651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlanguage$frostc$ASTNode* $tmp2652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local0) = $tmp2646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// unreffing REF($421:org.frostlanguage.frostc.ASTNode)
// line 1089
org$frostlanguage$frostc$parser$Token $tmp2653 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2654 = $tmp2653.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2655;
$tmp2655 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2655->value = $tmp2654;
frost$core$Int64 $tmp2656 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp2657 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2656);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2658;
$tmp2658 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2658->value = $tmp2657;
ITable* $tmp2659 = ((frost$core$Equatable*) $tmp2655)->$class->itable;
while ($tmp2659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2659 = $tmp2659->next;
}
$fn2661 $tmp2660 = $tmp2659->methods[0];
frost$core$Bit $tmp2662 = $tmp2660(((frost$core$Equatable*) $tmp2655), ((frost$core$Equatable*) $tmp2658));
bool $tmp2663 = $tmp2662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2658)));
// unreffing REF($447:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2655)));
// unreffing REF($443:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp2663) goto block32; else goto block33;
block32:;
// line 1090
org$frostlanguage$frostc$parser$Parser$startSpeculative(param0);
// line 1091
org$frostlanguage$frostc$FixedArray* $tmp2664 = org$frostlanguage$frostc$parser$Parser$typeSpecifiers$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
org$frostlanguage$frostc$FixedArray* $tmp2665 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local7) = $tmp2664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// unreffing REF($461:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1092
org$frostlanguage$frostc$FixedArray* $tmp2666 = *(&local7);
frost$core$Bit $tmp2667 = frost$core$Bit$init$builtin_bit($tmp2666 != NULL);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block34; else goto block36;
block34:;
// line 1093
org$frostlanguage$frostc$parser$Parser$accept(param0);
// line 1094
org$frostlanguage$frostc$ASTNode* $tmp2669 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2670 = (frost$core$Int64) {17};
org$frostlanguage$frostc$parser$Token $tmp2671 = *(&local1);
org$frostlanguage$frostc$Position $tmp2672 = $tmp2671.position;
org$frostlanguage$frostc$ASTNode* $tmp2673 = *(&local6);
frost$core$String* $tmp2674 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp2675 = *(&local7);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2669, $tmp2670, $tmp2672, $tmp2673, $tmp2674, $tmp2675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
org$frostlanguage$frostc$ASTNode* $tmp2676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local0) = $tmp2669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
// unreffing REF($481:org.frostlanguage.frostc.ASTNode)
goto block35;
block36:;
// line 1
// line 1097
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 1098
org$frostlanguage$frostc$ASTNode* $tmp2677 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
org$frostlanguage$frostc$FixedArray* $tmp2678 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
// unreffing types
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2679 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
// unreffing base
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp2680 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2677;
block35:;
org$frostlanguage$frostc$FixedArray* $tmp2682 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// unreffing types
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block33;
block33:;
org$frostlanguage$frostc$ASTNode* $tmp2683 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// unreffing base
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp2684 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block5;
block26:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {90};
frost$core$Bit $tmp2686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block37; else goto block38;
block37:;
// line 1103
org$frostlanguage$frostc$ASTNode* $tmp2688 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
org$frostlanguage$frostc$ASTNode* $tmp2689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local8) = $tmp2688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
// unreffing REF($553:org.frostlanguage.frostc.ASTNode?)
// line 1104
org$frostlanguage$frostc$ASTNode* $tmp2690 = *(&local8);
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit($tmp2690 == NULL);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block39; else goto block40;
block39:;
// line 1105
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2693 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
// unreffing target
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block40:;
// line 1107
org$frostlanguage$frostc$ASTNode* $tmp2695 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2696 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp2697 = *(&local1);
org$frostlanguage$frostc$Position $tmp2698 = $tmp2697.position;
org$frostlanguage$frostc$ASTNode* $tmp2699 = *(&local0);
frost$core$Int64 $tmp2700 = (frost$core$Int64) {90};
org$frostlanguage$frostc$parser$Token$Kind $tmp2701 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2700);
org$frostlanguage$frostc$ASTNode* $tmp2702 = *(&local8);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2695, $tmp2696, $tmp2698, $tmp2699, $tmp2701, $tmp2702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
org$frostlanguage$frostc$ASTNode* $tmp2703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local0) = $tmp2695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
// unreffing REF($585:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// unreffing target
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block38:;
frost$core$Int64 $tmp2705 = (frost$core$Int64) {63};
frost$core$Bit $tmp2706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2528, $tmp2705);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block41; else goto block42;
block41:;
// line 1112
org$frostlanguage$frostc$parser$Token $tmp2708 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2708);
// line 1113
org$frostlanguage$frostc$ASTNode* $tmp2709 = *(&local0);
frost$core$String* $tmp2710 = org$frostlanguage$frostc$parser$Parser$getClassName$org$frostlanguage$frostc$ASTNode$R$frost$core$String$Q($tmp2709);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$String* $tmp2711 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local9) = $tmp2710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// unreffing REF($622:frost.core.String?)
// line 1114
frost$core$String* $tmp2712 = *(&local9);
frost$core$Bit $tmp2713 = frost$core$Bit$init$builtin_bit($tmp2712 != NULL);
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block43; else goto block44;
block43:;
// line 1115
org$frostlanguage$frostc$parser$Parser$startSpeculative(param0);
// line 1116
org$frostlanguage$frostc$parser$Token $tmp2715 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 1119
frost$collections$Array* $tmp2716 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2716);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$collections$Array* $tmp2717 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local10) = $tmp2716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// unreffing REF($644:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1120
frost$core$Bit $tmp2718 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode* $tmp2719 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp2718);
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
org$frostlanguage$frostc$ASTNode* $tmp2720 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local11) = $tmp2719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
// unreffing REF($659:org.frostlanguage.frostc.ASTNode?)
// line 1121
org$frostlanguage$frostc$ASTNode* $tmp2721 = *(&local11);
frost$core$Bit $tmp2722 = frost$core$Bit$init$builtin_bit($tmp2721 == NULL);
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block45; else goto block46;
block45:;
// line 1122
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 1123
org$frostlanguage$frostc$ASTNode* $tmp2724 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
org$frostlanguage$frostc$ASTNode* $tmp2725 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2726 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2727 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2724;
block46:;
// line 1125
frost$collections$Array* $tmp2729 = *(&local10);
org$frostlanguage$frostc$ASTNode* $tmp2730 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2729, ((frost$core$Object*) $tmp2730));
// line 1126
goto block47;
block47:;
frost$core$Int64 $tmp2731 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp2732 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2731);
org$frostlanguage$frostc$parser$Token$nullable $tmp2733 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2732);
frost$core$Bit $tmp2734 = frost$core$Bit$init$builtin_bit($tmp2733.nonnull);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block48; else goto block49;
block48:;
// line 1127
frost$core$Bit $tmp2736 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode* $tmp2737 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp2736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlanguage$frostc$ASTNode* $tmp2738 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local11) = $tmp2737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
// unreffing REF($721:org.frostlanguage.frostc.ASTNode?)
// line 1128
org$frostlanguage$frostc$ASTNode* $tmp2739 = *(&local11);
frost$core$Bit $tmp2740 = frost$core$Bit$init$builtin_bit($tmp2739 == NULL);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block50; else goto block51;
block50:;
// line 1129
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 1130
org$frostlanguage$frostc$ASTNode* $tmp2742 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
org$frostlanguage$frostc$ASTNode* $tmp2743 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2744 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2745 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2742;
block51:;
// line 1132
frost$collections$Array* $tmp2747 = *(&local10);
org$frostlanguage$frostc$ASTNode* $tmp2748 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp2747, ((frost$core$Object*) $tmp2748));
goto block47;
block49:;
// line 1134
frost$core$Int64 $tmp2749 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp2750 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2749);
org$frostlanguage$frostc$parser$Token$nullable $tmp2751 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2750, &$s2752);
*(&local12) = $tmp2751;
// line 1135
org$frostlanguage$frostc$parser$Token$nullable $tmp2753 = *(&local12);
frost$core$Bit $tmp2754 = frost$core$Bit$init$builtin_bit(!$tmp2753.nonnull);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block52; else goto block53;
block52:;
// line 1136
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 1137
org$frostlanguage$frostc$ASTNode* $tmp2756 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlanguage$frostc$ASTNode* $tmp2757 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2758 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2759 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2756;
block53:;
// line 1166
// line 1167
frost$collections$Stack** $tmp2761 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp2762 = *$tmp2761;
frost$core$Int64 $tmp2763 = (frost$core$Int64) {0};
frost$core$Object* $tmp2764 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2762, $tmp2763);
bool $tmp2765 = ((frost$core$Bit$wrapper*) $tmp2764)->value.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2764);
// unreffing REF($816:frost.collections.Stack.T)
if ($tmp2765) goto block54; else goto block56;
block54:;
// line 1168
org$frostlanguage$frostc$parser$Token $tmp2766 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local14) = $tmp2766;
// line 1169
org$frostlanguage$frostc$parser$Token $tmp2767 = *(&local14);
org$frostlanguage$frostc$parser$Token$Kind $tmp2768 = $tmp2767.kind;
frost$core$Int64 $tmp2769 = $tmp2768.$rawValue;
frost$core$Int64 $tmp2770 = (frost$core$Int64) {99};
frost$core$Bit $tmp2771 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2770);
bool $tmp2772 = $tmp2771.value;
if ($tmp2772) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2773 = (frost$core$Int64) {106};
frost$core$Bit $tmp2774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block58; else goto block60;
block60:;
frost$core$Int64 $tmp2776 = (frost$core$Int64) {90};
frost$core$Bit $tmp2777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2776);
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block58; else goto block61;
block58:;
// line 1171
frost$core$Bit $tmp2779 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2779;
goto block57;
block61:;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {104};
frost$core$Bit $tmp2781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2769, $tmp2780);
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block62; else goto block63;
block62:;
// line 1174
org$frostlanguage$frostc$parser$Token $tmp2783 = *(&local14);
org$frostlanguage$frostc$Position $tmp2784 = $tmp2783.position;
frost$core$Int64 $tmp2785 = $tmp2784.line;
org$frostlanguage$frostc$parser$Token$nullable $tmp2786 = *(&local12);
org$frostlanguage$frostc$Position $tmp2787 = ((org$frostlanguage$frostc$parser$Token) $tmp2786.value).position;
frost$core$Int64 $tmp2788 = $tmp2787.line;
frost$core$Bit $tmp2789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2785, $tmp2788);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block64; else goto block65;
block64:;
org$frostlanguage$frostc$parser$Token $tmp2791 = *(&local14);
org$frostlanguage$frostc$Position $tmp2792 = $tmp2791.position;
frost$core$Int64 $tmp2793 = $tmp2792.column;
org$frostlanguage$frostc$parser$Token$nullable $tmp2794 = *(&local12);
org$frostlanguage$frostc$Position $tmp2795 = ((org$frostlanguage$frostc$parser$Token) $tmp2794.value).position;
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
// line 1178
frost$core$Bit $tmp2804 = frost$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2804;
goto block57;
block57:;
// line 1181
frost$core$Bit $tmp2805 = *(&local13);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block67; else goto block68;
block67:;
// line 1182
org$frostlanguage$frostc$parser$Token $tmp2807 = *(&local14);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2807);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1186
frost$core$Bit $tmp2808 = frost$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2808;
goto block55;
block55:;
// line 1188
frost$core$Bit $tmp2809 = *(&local13);
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block69; else goto block71;
block69:;
// line 1189
org$frostlanguage$frostc$parser$Parser$accept(param0);
// line 1190
org$frostlanguage$frostc$ASTNode* $tmp2811 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2812 = (frost$core$Int64) {21};
org$frostlanguage$frostc$ASTNode* $tmp2813 = *(&local0);
$fn2815 $tmp2814 = ($fn2815) $tmp2813->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp2816 = $tmp2814($tmp2813);
frost$core$String* $tmp2817 = *(&local9);
frost$collections$Array* $tmp2818 = *(&local10);
org$frostlanguage$frostc$FixedArray* $tmp2819 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp2818);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp2811, $tmp2812, $tmp2816, $tmp2817, $tmp2819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlanguage$frostc$ASTNode* $tmp2820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local0) = $tmp2811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
// unreffing REF($916:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// unreffing REF($906:org.frostlanguage.frostc.ASTNode)
// line 1192
org$frostlanguage$frostc$ASTNode* $tmp2821 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2822 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2823 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1195
org$frostlanguage$frostc$parser$Parser$rewind(param0);
// line 1196
org$frostlanguage$frostc$ASTNode* $tmp2824 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
org$frostlanguage$frostc$ASTNode* $tmp2825 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2826 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2827 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2824;
block70:;
org$frostlanguage$frostc$ASTNode* $tmp2829 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// unreffing t
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2830 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
// unreffing types
*(&local10) = ((frost$collections$Array*) NULL);
goto block44;
block44:;
// line 1199
org$frostlanguage$frostc$ASTNode* $tmp2831 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$String* $tmp2832 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2831;
block42:;
// line 1202
org$frostlanguage$frostc$parser$Token $tmp2834 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2834);
// line 1203
org$frostlanguage$frostc$ASTNode* $tmp2835 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
org$frostlanguage$frostc$ASTNode* $tmp2836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2835;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp2837 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp2839 = (frost$core$Int64) {1031};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2840, $tmp2839, &$s2841);
abort(); // unreachable
block72:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$exponentExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1213
org$frostlanguage$frostc$ASTNode* $tmp2842 = org$frostlanguage$frostc$parser$Parser$callExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
org$frostlanguage$frostc$ASTNode* $tmp2843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local0) = $tmp2842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1214
org$frostlanguage$frostc$ASTNode* $tmp2844 = *(&local0);
frost$core$Bit $tmp2845 = frost$core$Bit$init$builtin_bit($tmp2844 == NULL);
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block1; else goto block2;
block1:;
// line 1215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1217
goto block3;
block3:;
// line 1218
frost$core$Int64 $tmp2848 = (frost$core$Int64) {58};
org$frostlanguage$frostc$parser$Token$Kind $tmp2849 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2848);
org$frostlanguage$frostc$parser$Token$nullable $tmp2850 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp2849);
*(&local1) = $tmp2850;
// line 1219
org$frostlanguage$frostc$parser$Token$nullable $tmp2851 = *(&local1);
frost$core$Bit $tmp2852 = frost$core$Bit$init$builtin_bit(!$tmp2851.nonnull);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block5; else goto block6;
block5:;
// line 1220
goto block4;
block6:;
// line 1222
org$frostlanguage$frostc$ASTNode* $tmp2854 = org$frostlanguage$frostc$parser$Parser$callExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
org$frostlanguage$frostc$ASTNode* $tmp2855 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local2) = $tmp2854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
// unreffing REF($43:org.frostlanguage.frostc.ASTNode?)
// line 1223
org$frostlanguage$frostc$ASTNode* $tmp2856 = *(&local2);
frost$core$Bit $tmp2857 = frost$core$Bit$init$builtin_bit($tmp2856 == NULL);
bool $tmp2858 = $tmp2857.value;
if ($tmp2858) goto block7; else goto block8;
block7:;
// line 1224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2859 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 1226
org$frostlanguage$frostc$ASTNode* $tmp2861 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2862 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token$nullable $tmp2863 = *(&local1);
org$frostlanguage$frostc$Position $tmp2864 = ((org$frostlanguage$frostc$parser$Token) $tmp2863.value).position;
org$frostlanguage$frostc$ASTNode* $tmp2865 = *(&local0);
org$frostlanguage$frostc$parser$Token$nullable $tmp2866 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp2867 = ((org$frostlanguage$frostc$parser$Token) $tmp2866.value).kind;
org$frostlanguage$frostc$ASTNode* $tmp2868 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2861, $tmp2862, $tmp2864, $tmp2865, $tmp2867, $tmp2868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
org$frostlanguage$frostc$ASTNode* $tmp2869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local0) = $tmp2861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// unreffing REF($75:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2870 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1228
org$frostlanguage$frostc$ASTNode* $tmp2871 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
org$frostlanguage$frostc$ASTNode* $tmp2872 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2871;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 1235
org$frostlanguage$frostc$parser$Token $tmp2873 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp2873;
// line 1236
org$frostlanguage$frostc$parser$Token $tmp2874 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2875 = $tmp2874.kind;
frost$core$Int64 $tmp2876 = $tmp2875.$rawValue;
frost$core$Int64 $tmp2877 = (frost$core$Int64) {53};
frost$core$Bit $tmp2878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2876, $tmp2877);
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp2880 = (frost$core$Int64) {50};
frost$core$Bit $tmp2881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2876, $tmp2880);
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {51};
frost$core$Bit $tmp2884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2876, $tmp2883);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block2; else goto block5;
block2:;
// line 1238
org$frostlanguage$frostc$ASTNode* $tmp2886 = org$frostlanguage$frostc$parser$Parser$exponentExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
org$frostlanguage$frostc$ASTNode* $tmp2887 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
*(&local1) = $tmp2886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
// unreffing REF($20:org.frostlanguage.frostc.ASTNode?)
// line 1239
org$frostlanguage$frostc$ASTNode* $tmp2888 = *(&local1);
frost$core$Bit $tmp2889 = frost$core$Bit$init$builtin_bit($tmp2888 == NULL);
bool $tmp2890 = $tmp2889.value;
if ($tmp2890) goto block6; else goto block7;
block6:;
// line 1240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2891 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 1242
org$frostlanguage$frostc$ASTNode* $tmp2892 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2893 = (frost$core$Int64) {35};
org$frostlanguage$frostc$parser$Token $tmp2894 = *(&local0);
org$frostlanguage$frostc$Position $tmp2895 = $tmp2894.position;
org$frostlanguage$frostc$parser$Token $tmp2896 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp2897 = $tmp2896.kind;
org$frostlanguage$frostc$ASTNode* $tmp2898 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2892, $tmp2893, $tmp2895, $tmp2897, $tmp2898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
// unreffing REF($47:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2899 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2892;
block5:;
// line 1245
org$frostlanguage$frostc$parser$Token $tmp2900 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2900);
// line 1246
org$frostlanguage$frostc$ASTNode* $tmp2901 = org$frostlanguage$frostc$parser$Parser$exponentExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
// unreffing REF($72:org.frostlanguage.frostc.ASTNode?)
return $tmp2901;
block1:;
frost$core$Bit $tmp2902 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2904 = (frost$core$Int64) {1234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2905, $tmp2904, &$s2906);
abort(); // unreachable
block8:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$multiplicativeExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$parser$Token local3;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
// line 1258
org$frostlanguage$frostc$ASTNode* $tmp2907 = org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlanguage$frostc$ASTNode* $tmp2908 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local0) = $tmp2907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1259
org$frostlanguage$frostc$ASTNode* $tmp2909 = *(&local0);
frost$core$Bit $tmp2910 = frost$core$Bit$init$builtin_bit($tmp2909 == NULL);
bool $tmp2911 = $tmp2910.value;
if ($tmp2911) goto block1; else goto block2;
block1:;
// line 1260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2912 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1262
goto block3;
block3:;
// line 1263
org$frostlanguage$frostc$parser$Token $tmp2913 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp2913;
// line 1264
org$frostlanguage$frostc$parser$Token $tmp2914 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp2915 = $tmp2914.kind;
frost$core$Int64 $tmp2916 = $tmp2915.$rawValue;
frost$core$Int64 $tmp2917 = (frost$core$Int64) {54};
frost$core$Bit $tmp2918 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2917);
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2920 = (frost$core$Int64) {55};
frost$core$Bit $tmp2921 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2920);
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp2923 = (frost$core$Int64) {56};
frost$core$Bit $tmp2924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2923);
bool $tmp2925 = $tmp2924.value;
if ($tmp2925) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp2926 = (frost$core$Int64) {57};
frost$core$Bit $tmp2927 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2926);
bool $tmp2928 = $tmp2927.value;
if ($tmp2928) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp2929 = (frost$core$Int64) {73};
frost$core$Bit $tmp2930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2929);
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp2932 = (frost$core$Int64) {68};
frost$core$Bit $tmp2933 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2932);
bool $tmp2934 = $tmp2933.value;
if ($tmp2934) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp2935 = (frost$core$Int64) {70};
frost$core$Bit $tmp2936 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2935);
bool $tmp2937 = $tmp2936.value;
if ($tmp2937) goto block6; else goto block13;
block6:;
// line 1267
org$frostlanguage$frostc$ASTNode* $tmp2938 = org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlanguage$frostc$ASTNode* $tmp2939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local2) = $tmp2938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// unreffing REF($65:org.frostlanguage.frostc.ASTNode?)
// line 1268
org$frostlanguage$frostc$ASTNode* $tmp2940 = *(&local2);
frost$core$Bit $tmp2941 = frost$core$Bit$init$builtin_bit($tmp2940 == NULL);
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block14; else goto block15;
block14:;
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block15:;
// line 1271
org$frostlanguage$frostc$ASTNode* $tmp2945 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2946 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp2947 = *(&local1);
org$frostlanguage$frostc$Position $tmp2948 = $tmp2947.position;
org$frostlanguage$frostc$ASTNode* $tmp2949 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp2950 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp2951 = $tmp2950.kind;
org$frostlanguage$frostc$ASTNode* $tmp2952 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2945, $tmp2946, $tmp2948, $tmp2949, $tmp2951, $tmp2952);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
org$frostlanguage$frostc$ASTNode* $tmp2953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local0) = $tmp2945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// unreffing REF($97:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block13:;
frost$core$Int64 $tmp2955 = (frost$core$Int64) {64};
frost$core$Bit $tmp2956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2916, $tmp2955);
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block16; else goto block17;
block16:;
// line 1274
org$frostlanguage$frostc$parser$Token $tmp2958 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local3) = $tmp2958;
// line 1275
org$frostlanguage$frostc$parser$Token $tmp2959 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp2960 = $tmp2959.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2961;
$tmp2961 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2961->value = $tmp2960;
frost$core$Int64 $tmp2962 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp2963 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2962);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp2964;
$tmp2964 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp2964->value = $tmp2963;
ITable* $tmp2965 = ((frost$core$Equatable*) $tmp2961)->$class->itable;
while ($tmp2965->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2965 = $tmp2965->next;
}
$fn2967 $tmp2966 = $tmp2965->methods[0];
frost$core$Bit $tmp2968 = $tmp2966(((frost$core$Equatable*) $tmp2961), ((frost$core$Equatable*) $tmp2964));
bool $tmp2969 = $tmp2968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2964)));
// unreffing REF($138:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2961)));
// unreffing REF($134:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp2969) goto block18; else goto block20;
block18:;
// line 1277
org$frostlanguage$frostc$ASTNode* $tmp2970 = org$frostlanguage$frostc$parser$Parser$prefixExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
org$frostlanguage$frostc$ASTNode* $tmp2971 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local4) = $tmp2970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
// unreffing REF($150:org.frostlanguage.frostc.ASTNode?)
// line 1278
org$frostlanguage$frostc$ASTNode* $tmp2972 = *(&local4);
frost$core$Bit $tmp2973 = frost$core$Bit$init$builtin_bit($tmp2972 == NULL);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block21; else goto block22;
block21:;
// line 1279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp2975 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
// unreffing next
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp2976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block22:;
// line 1281
org$frostlanguage$frostc$ASTNode* $tmp2977 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp2978 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp2979 = *(&local1);
org$frostlanguage$frostc$Position $tmp2980 = $tmp2979.position;
org$frostlanguage$frostc$ASTNode* $tmp2981 = *(&local0);
frost$core$Int64 $tmp2982 = (frost$core$Int64) {1};
org$frostlanguage$frostc$parser$Token$Kind $tmp2983 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp2982);
org$frostlanguage$frostc$ASTNode* $tmp2984 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp2977, $tmp2978, $tmp2980, $tmp2981, $tmp2983, $tmp2984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
org$frostlanguage$frostc$ASTNode* $tmp2985 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
*(&local0) = $tmp2977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
// unreffing REF($182:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp2986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
// unreffing next
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1284
org$frostlanguage$frostc$parser$Token $tmp2987 = *(&local3);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2987);
// line 1285
org$frostlanguage$frostc$parser$Token $tmp2988 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2988);
// line 1286
org$frostlanguage$frostc$ASTNode* $tmp2989 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
org$frostlanguage$frostc$ASTNode* $tmp2990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2989;
block19:;
goto block5;
block17:;
// line 1290
org$frostlanguage$frostc$parser$Token $tmp2991 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp2991);
// line 1291
org$frostlanguage$frostc$ASTNode* $tmp2992 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlanguage$frostc$ASTNode* $tmp2993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp2992;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp2994 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2995 = $tmp2994.value;
if ($tmp2995) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp2996 = (frost$core$Int64) {1257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2997, $tmp2996, &$s2998);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1302
org$frostlanguage$frostc$ASTNode* $tmp2999 = org$frostlanguage$frostc$parser$Parser$multiplicativeExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
org$frostlanguage$frostc$ASTNode* $tmp3000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local0) = $tmp2999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1303
org$frostlanguage$frostc$ASTNode* $tmp3001 = *(&local0);
frost$core$Bit $tmp3002 = frost$core$Bit$init$builtin_bit($tmp3001 == NULL);
bool $tmp3003 = $tmp3002.value;
if ($tmp3003) goto block1; else goto block2;
block1:;
// line 1304
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3004 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1306
goto block3;
block3:;
// line 1307
org$frostlanguage$frostc$parser$Token $tmp3005 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp3005;
// line 1308
org$frostlanguage$frostc$parser$Token $tmp3006 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3007 = $tmp3006.kind;
frost$core$Int64 $tmp3008 = $tmp3007.$rawValue;
frost$core$Int64 $tmp3009 = (frost$core$Int64) {52};
frost$core$Bit $tmp3010 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3008, $tmp3009);
bool $tmp3011 = $tmp3010.value;
if ($tmp3011) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3012 = (frost$core$Int64) {53};
frost$core$Bit $tmp3013 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3008, $tmp3012);
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3015 = (frost$core$Int64) {72};
frost$core$Bit $tmp3016 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3008, $tmp3015);
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block6; else goto block9;
block6:;
// line 1310
org$frostlanguage$frostc$ASTNode* $tmp3018 = org$frostlanguage$frostc$parser$Parser$multiplicativeExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
org$frostlanguage$frostc$ASTNode* $tmp3019 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local2) = $tmp3018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
// unreffing REF($49:org.frostlanguage.frostc.ASTNode?)
// line 1311
org$frostlanguage$frostc$ASTNode* $tmp3020 = *(&local2);
frost$core$Bit $tmp3021 = frost$core$Bit$init$builtin_bit($tmp3020 == NULL);
bool $tmp3022 = $tmp3021.value;
if ($tmp3022) goto block10; else goto block11;
block10:;
// line 1312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3023 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 1314
org$frostlanguage$frostc$ASTNode* $tmp3025 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3026 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp3027 = *(&local1);
org$frostlanguage$frostc$Position $tmp3028 = $tmp3027.position;
org$frostlanguage$frostc$ASTNode* $tmp3029 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3030 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3031 = $tmp3030.kind;
org$frostlanguage$frostc$ASTNode* $tmp3032 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3025, $tmp3026, $tmp3028, $tmp3029, $tmp3031, $tmp3032);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlanguage$frostc$ASTNode* $tmp3033 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
*(&local0) = $tmp3025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
// unreffing REF($81:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block9:;
// line 1317
org$frostlanguage$frostc$parser$Token $tmp3035 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp3035);
// line 1318
org$frostlanguage$frostc$ASTNode* $tmp3036 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
org$frostlanguage$frostc$ASTNode* $tmp3037 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3036;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp3038 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3039 = $tmp3038.value;
if ($tmp3039) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3040 = (frost$core$Int64) {1301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3041, $tmp3040, &$s3042);
abort(); // unreachable
block12:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$rangeExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$parser$Token local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
// line 1329
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1330
org$frostlanguage$frostc$parser$Token $tmp3043 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3044 = $tmp3043.kind;
frost$core$Int64 $tmp3045 = $tmp3044.$rawValue;
frost$core$Int64 $tmp3046 = (frost$core$Int64) {98};
frost$core$Bit $tmp3047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3045, $tmp3046);
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp3049 = (frost$core$Int64) {97};
frost$core$Bit $tmp3050 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3045, $tmp3049);
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block2; else goto block4;
block2:;
// line 1332
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block4:;
// line 1335
org$frostlanguage$frostc$ASTNode* $tmp3053 = org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
org$frostlanguage$frostc$ASTNode* $tmp3054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local0) = $tmp3053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
// unreffing REF($23:org.frostlanguage.frostc.ASTNode?)
// line 1336
org$frostlanguage$frostc$ASTNode* $tmp3055 = *(&local0);
frost$core$Bit $tmp3056 = frost$core$Bit$init$builtin_bit($tmp3055 == NULL);
bool $tmp3057 = $tmp3056.value;
if ($tmp3057) goto block5; else goto block6;
block5:;
// line 1337
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3058 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1341
org$frostlanguage$frostc$parser$Token $tmp3059 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp3059;
// line 1342
org$frostlanguage$frostc$parser$Token $tmp3060 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3061 = $tmp3060.kind;
frost$core$Int64 $tmp3062 = $tmp3061.$rawValue;
frost$core$Int64 $tmp3063 = (frost$core$Int64) {98};
frost$core$Bit $tmp3064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3062, $tmp3063);
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {97};
frost$core$Bit $tmp3067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3062, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block8; else goto block10;
block8:;
// line 1344
org$frostlanguage$frostc$parser$Token $tmp3069 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local2) = $tmp3069;
// line 1345
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1346
org$frostlanguage$frostc$parser$Token $tmp3070 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp3071 = $tmp3070.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3072;
$tmp3072 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3072->value = $tmp3071;
frost$core$Int64 $tmp3073 = (frost$core$Int64) {103};
org$frostlanguage$frostc$parser$Token$Kind $tmp3074 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3073);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3075;
$tmp3075 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3075->value = $tmp3074;
ITable* $tmp3076 = ((frost$core$Equatable*) $tmp3072)->$class->itable;
while ($tmp3076->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3076 = $tmp3076->next;
}
$fn3078 $tmp3077 = $tmp3076->methods[1];
frost$core$Bit $tmp3079 = $tmp3077(((frost$core$Equatable*) $tmp3072), ((frost$core$Equatable*) $tmp3075));
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block13; else goto block14;
block13:;
org$frostlanguage$frostc$parser$Token $tmp3081 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp3082 = $tmp3081.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3083;
$tmp3083 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3083->value = $tmp3082;
frost$core$Int64 $tmp3084 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp3085 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3084);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3086;
$tmp3086 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3086->value = $tmp3085;
ITable* $tmp3087 = ((frost$core$Equatable*) $tmp3083)->$class->itable;
while ($tmp3087->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3087 = $tmp3087->next;
}
$fn3089 $tmp3088 = $tmp3087->methods[1];
frost$core$Bit $tmp3090 = $tmp3088(((frost$core$Equatable*) $tmp3083), ((frost$core$Equatable*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3086)));
// unreffing REF($87:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3083)));
// unreffing REF($83:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
*(&local5) = $tmp3090;
goto block15;
block14:;
*(&local5) = $tmp3079;
goto block15;
block15:;
frost$core$Bit $tmp3091 = *(&local5);
bool $tmp3092 = $tmp3091.value;
if ($tmp3092) goto block16; else goto block17;
block16:;
org$frostlanguage$frostc$parser$Token $tmp3093 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp3094 = $tmp3093.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3095;
$tmp3095 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3095->value = $tmp3094;
frost$core$Int64 $tmp3096 = (frost$core$Int64) {34};
org$frostlanguage$frostc$parser$Token$Kind $tmp3097 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3096);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3098;
$tmp3098 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3098->value = $tmp3097;
ITable* $tmp3099 = ((frost$core$Equatable*) $tmp3095)->$class->itable;
while ($tmp3099->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3099 = $tmp3099->next;
}
$fn3101 $tmp3100 = $tmp3099->methods[1];
frost$core$Bit $tmp3102 = $tmp3100(((frost$core$Equatable*) $tmp3095), ((frost$core$Equatable*) $tmp3098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3098)));
// unreffing REF($109:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3095)));
// unreffing REF($105:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
*(&local4) = $tmp3102;
goto block18;
block17:;
*(&local4) = $tmp3091;
goto block18;
block18:;
frost$core$Bit $tmp3103 = *(&local4);
bool $tmp3104 = $tmp3103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3075)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3072)));
// unreffing REF($72:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp3104) goto block11; else goto block19;
block11:;
// line 1348
org$frostlanguage$frostc$ASTNode* $tmp3105 = org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
org$frostlanguage$frostc$ASTNode* $tmp3106 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local3) = $tmp3105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing REF($132:org.frostlanguage.frostc.ASTNode?)
// line 1349
org$frostlanguage$frostc$ASTNode* $tmp3107 = *(&local3);
frost$core$Bit $tmp3108 = frost$core$Bit$init$builtin_bit($tmp3107 == NULL);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block20; else goto block21;
block20:;
// line 1350
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3110 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
goto block12;
block19:;
// line 1
// line 1354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block12;
block12:;
// line 1356
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1357
frost$core$Int64 $tmp3113 = (frost$core$Int64) {34};
org$frostlanguage$frostc$parser$Token$Kind $tmp3114 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3113);
org$frostlanguage$frostc$parser$Token$nullable $tmp3115 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3114);
frost$core$Bit $tmp3116 = frost$core$Bit$init$builtin_bit($tmp3115.nonnull);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block22; else goto block24;
block22:;
// line 1358
org$frostlanguage$frostc$ASTNode* $tmp3118 = org$frostlanguage$frostc$parser$Parser$additiveExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
org$frostlanguage$frostc$ASTNode* $tmp3119 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
*(&local6) = $tmp3118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
// unreffing REF($183:org.frostlanguage.frostc.ASTNode?)
// line 1359
org$frostlanguage$frostc$ASTNode* $tmp3120 = *(&local6);
frost$core$Bit $tmp3121 = frost$core$Bit$init$builtin_bit($tmp3120 == NULL);
bool $tmp3122 = $tmp3121.value;
if ($tmp3122) goto block25; else goto block26;
block25:;
// line 1360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3123 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
// unreffing step
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3124 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1364
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3126 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block23;
block23:;
// line 1366
org$frostlanguage$frostc$ASTNode* $tmp3127 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3128 = (frost$core$Int64) {36};
org$frostlanguage$frostc$parser$Token $tmp3129 = *(&local1);
org$frostlanguage$frostc$Position $tmp3130 = $tmp3129.position;
org$frostlanguage$frostc$ASTNode* $tmp3131 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3132 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3133 = $tmp3132.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3134;
$tmp3134 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3134->value = $tmp3133;
frost$core$Int64 $tmp3135 = (frost$core$Int64) {97};
org$frostlanguage$frostc$parser$Token$Kind $tmp3136 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3135);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3137;
$tmp3137 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3137->value = $tmp3136;
ITable* $tmp3138 = ((frost$core$Equatable*) $tmp3134)->$class->itable;
while ($tmp3138->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3138 = $tmp3138->next;
}
$fn3140 $tmp3139 = $tmp3138->methods[0];
frost$core$Bit $tmp3141 = $tmp3139(((frost$core$Equatable*) $tmp3134), ((frost$core$Equatable*) $tmp3137));
org$frostlanguage$frostc$ASTNode* $tmp3142 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp3143 = *(&local6);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$Bit$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$ASTNode$Q($tmp3127, $tmp3128, $tmp3130, $tmp3131, $tmp3141, $tmp3142, $tmp3143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3137)));
// unreffing REF($240:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3134)));
// unreffing REF($236:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
// unreffing REF($229:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3144 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
// unreffing step
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
// unreffing right
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3127;
block10:;
// line 1370
org$frostlanguage$frostc$parser$Token $tmp3147 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp3147);
// line 1371
org$frostlanguage$frostc$ASTNode* $tmp3148 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
org$frostlanguage$frostc$ASTNode* $tmp3149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3148;
block7:;
frost$core$Bit $tmp3150 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3151 = $tmp3150.value;
if ($tmp3151) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp3152 = (frost$core$Int64) {1328};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3153, $tmp3152, &$s3154);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$comparisonExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1381
org$frostlanguage$frostc$ASTNode* $tmp3155 = org$frostlanguage$frostc$parser$Parser$rangeExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
org$frostlanguage$frostc$ASTNode* $tmp3156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
*(&local0) = $tmp3155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1382
org$frostlanguage$frostc$ASTNode* $tmp3157 = *(&local0);
frost$core$Bit $tmp3158 = frost$core$Bit$init$builtin_bit($tmp3157 == NULL);
bool $tmp3159 = $tmp3158.value;
if ($tmp3159) goto block1; else goto block2;
block1:;
// line 1383
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1385
goto block3;
block3:;
// line 1386
org$frostlanguage$frostc$parser$Token $tmp3161 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp3161;
// line 1387
org$frostlanguage$frostc$parser$Token $tmp3162 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3163 = $tmp3162.kind;
frost$core$Int64 $tmp3164 = $tmp3163.$rawValue;
frost$core$Int64 $tmp3165 = (frost$core$Int64) {59};
frost$core$Bit $tmp3166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3165);
bool $tmp3167 = $tmp3166.value;
if ($tmp3167) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3168 = (frost$core$Int64) {60};
frost$core$Bit $tmp3169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3168);
bool $tmp3170 = $tmp3169.value;
if ($tmp3170) goto block6; else goto block8;
block8:;
frost$core$Int64 $tmp3171 = (frost$core$Int64) {61};
frost$core$Bit $tmp3172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3171);
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block6; else goto block9;
block9:;
frost$core$Int64 $tmp3174 = (frost$core$Int64) {62};
frost$core$Bit $tmp3175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3174);
bool $tmp3176 = $tmp3175.value;
if ($tmp3176) goto block6; else goto block10;
block10:;
frost$core$Int64 $tmp3177 = (frost$core$Int64) {63};
frost$core$Bit $tmp3178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3177);
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block6; else goto block11;
block11:;
frost$core$Int64 $tmp3180 = (frost$core$Int64) {64};
frost$core$Bit $tmp3181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3180);
bool $tmp3182 = $tmp3181.value;
if ($tmp3182) goto block6; else goto block12;
block12:;
frost$core$Int64 $tmp3183 = (frost$core$Int64) {65};
frost$core$Bit $tmp3184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3183);
bool $tmp3185 = $tmp3184.value;
if ($tmp3185) goto block6; else goto block13;
block13:;
frost$core$Int64 $tmp3186 = (frost$core$Int64) {66};
frost$core$Bit $tmp3187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3164, $tmp3186);
bool $tmp3188 = $tmp3187.value;
if ($tmp3188) goto block6; else goto block14;
block6:;
// line 1396
org$frostlanguage$frostc$ASTNode* $tmp3189 = org$frostlanguage$frostc$parser$Parser$rangeExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlanguage$frostc$ASTNode* $tmp3190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local2) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// unreffing REF($69:org.frostlanguage.frostc.ASTNode?)
// line 1397
org$frostlanguage$frostc$ASTNode* $tmp3191 = *(&local2);
frost$core$Bit $tmp3192 = frost$core$Bit$init$builtin_bit($tmp3191 == NULL);
bool $tmp3193 = $tmp3192.value;
if ($tmp3193) goto block15; else goto block16;
block15:;
// line 1398
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3194 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 1400
org$frostlanguage$frostc$ASTNode* $tmp3196 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3197 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp3198 = *(&local1);
org$frostlanguage$frostc$Position $tmp3199 = $tmp3198.position;
org$frostlanguage$frostc$ASTNode* $tmp3200 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3201 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3202 = $tmp3201.kind;
org$frostlanguage$frostc$ASTNode* $tmp3203 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3196, $tmp3197, $tmp3199, $tmp3200, $tmp3202, $tmp3203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
org$frostlanguage$frostc$ASTNode* $tmp3204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local0) = $tmp3196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
// unreffing REF($101:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3205 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block14:;
// line 1403
org$frostlanguage$frostc$parser$Token $tmp3206 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp3206);
// line 1404
org$frostlanguage$frostc$ASTNode* $tmp3207 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
org$frostlanguage$frostc$ASTNode* $tmp3208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3207;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp3209 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3210 = $tmp3209.value;
if ($tmp3210) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp3211 = (frost$core$Int64) {1380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3212, $tmp3211, &$s3213);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$andExpression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1414
org$frostlanguage$frostc$ASTNode* $tmp3214 = org$frostlanguage$frostc$parser$Parser$comparisonExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlanguage$frostc$ASTNode* $tmp3215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local0) = $tmp3214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1415
org$frostlanguage$frostc$ASTNode* $tmp3216 = *(&local0);
frost$core$Bit $tmp3217 = frost$core$Bit$init$builtin_bit($tmp3216 == NULL);
bool $tmp3218 = $tmp3217.value;
if ($tmp3218) goto block1; else goto block2;
block1:;
// line 1416
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1418
goto block3;
block3:;
// line 1419
org$frostlanguage$frostc$parser$Token $tmp3220 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp3220;
// line 1420
org$frostlanguage$frostc$parser$Token $tmp3221 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3222 = $tmp3221.kind;
frost$core$Int64 $tmp3223 = $tmp3222.$rawValue;
frost$core$Int64 $tmp3224 = (frost$core$Int64) {67};
frost$core$Bit $tmp3225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3223, $tmp3224);
bool $tmp3226 = $tmp3225.value;
if ($tmp3226) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3227 = (frost$core$Int64) {71};
frost$core$Bit $tmp3228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3223, $tmp3227);
bool $tmp3229 = $tmp3228.value;
if ($tmp3229) goto block6; else goto block8;
block6:;
// line 1422
org$frostlanguage$frostc$ASTNode* $tmp3230 = org$frostlanguage$frostc$parser$Parser$comparisonExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
org$frostlanguage$frostc$ASTNode* $tmp3231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
*(&local2) = $tmp3230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
// unreffing REF($45:org.frostlanguage.frostc.ASTNode?)
// line 1423
org$frostlanguage$frostc$ASTNode* $tmp3232 = *(&local2);
frost$core$Bit $tmp3233 = frost$core$Bit$init$builtin_bit($tmp3232 == NULL);
bool $tmp3234 = $tmp3233.value;
if ($tmp3234) goto block9; else goto block10;
block9:;
// line 1424
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 1426
org$frostlanguage$frostc$ASTNode* $tmp3237 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3238 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token $tmp3239 = *(&local1);
org$frostlanguage$frostc$Position $tmp3240 = $tmp3239.position;
org$frostlanguage$frostc$ASTNode* $tmp3241 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3242 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3243 = $tmp3242.kind;
org$frostlanguage$frostc$ASTNode* $tmp3244 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3237, $tmp3238, $tmp3240, $tmp3241, $tmp3243, $tmp3244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
org$frostlanguage$frostc$ASTNode* $tmp3245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local0) = $tmp3237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
// unreffing REF($77:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block8:;
// line 1429
org$frostlanguage$frostc$parser$Token $tmp3247 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp3247);
// line 1430
org$frostlanguage$frostc$ASTNode* $tmp3248 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3248));
org$frostlanguage$frostc$ASTNode* $tmp3249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3248;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp3250 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3251 = $tmp3250.value;
if ($tmp3251) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp3252 = (frost$core$Int64) {1413};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3253, $tmp3252, &$s3254);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1440
org$frostlanguage$frostc$ASTNode* $tmp3255 = org$frostlanguage$frostc$parser$Parser$andExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
org$frostlanguage$frostc$ASTNode* $tmp3256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
*(&local0) = $tmp3255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1441
org$frostlanguage$frostc$ASTNode* $tmp3257 = *(&local0);
frost$core$Bit $tmp3258 = frost$core$Bit$init$builtin_bit($tmp3257 == NULL);
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block1; else goto block2;
block1:;
// line 1442
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1444
goto block3;
block3:;
// line 1445
frost$core$Int64 $tmp3261 = (frost$core$Int64) {69};
org$frostlanguage$frostc$parser$Token$Kind $tmp3262 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3261);
org$frostlanguage$frostc$parser$Token$nullable $tmp3263 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3262);
*(&local1) = $tmp3263;
// line 1446
org$frostlanguage$frostc$parser$Token$nullable $tmp3264 = *(&local1);
frost$core$Bit $tmp3265 = frost$core$Bit$init$builtin_bit(!$tmp3264.nonnull);
bool $tmp3266 = $tmp3265.value;
if ($tmp3266) goto block5; else goto block6;
block5:;
// line 1447
goto block4;
block6:;
// line 1449
org$frostlanguage$frostc$ASTNode* $tmp3267 = org$frostlanguage$frostc$parser$Parser$andExpression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
org$frostlanguage$frostc$ASTNode* $tmp3268 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local2) = $tmp3267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
// unreffing REF($43:org.frostlanguage.frostc.ASTNode?)
// line 1450
org$frostlanguage$frostc$ASTNode* $tmp3269 = *(&local2);
frost$core$Bit $tmp3270 = frost$core$Bit$init$builtin_bit($tmp3269 == NULL);
bool $tmp3271 = $tmp3270.value;
if ($tmp3271) goto block7; else goto block8;
block7:;
// line 1451
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 1453
org$frostlanguage$frostc$ASTNode* $tmp3274 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3275 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$Token$nullable $tmp3276 = *(&local1);
org$frostlanguage$frostc$Position $tmp3277 = ((org$frostlanguage$frostc$parser$Token) $tmp3276.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3278 = *(&local0);
org$frostlanguage$frostc$parser$Token$nullable $tmp3279 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3280 = ((org$frostlanguage$frostc$parser$Token) $tmp3279.value).kind;
org$frostlanguage$frostc$ASTNode* $tmp3281 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3274, $tmp3275, $tmp3277, $tmp3278, $tmp3280, $tmp3281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
org$frostlanguage$frostc$ASTNode* $tmp3282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
*(&local0) = $tmp3274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
// unreffing REF($75:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
// unreffing next
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block3;
block4:;
// line 1455
org$frostlanguage$frostc$ASTNode* $tmp3284 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3284));
org$frostlanguage$frostc$ASTNode* $tmp3285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
// unreffing result
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3284;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$ifStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
// line 1462
frost$core$Int64 $tmp3286 = (frost$core$Int64) {37};
org$frostlanguage$frostc$parser$Token$Kind $tmp3287 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3286);
org$frostlanguage$frostc$parser$Token$nullable $tmp3288 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3287, &$s3289);
*(&local0) = $tmp3288;
// line 1463
org$frostlanguage$frostc$parser$Token$nullable $tmp3290 = *(&local0);
frost$core$Bit $tmp3291 = frost$core$Bit$init$builtin_bit(!$tmp3290.nonnull);
bool $tmp3292 = $tmp3291.value;
if ($tmp3292) goto block1; else goto block2;
block1:;
// line 1464
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1466
org$frostlanguage$frostc$ASTNode* $tmp3293 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
org$frostlanguage$frostc$ASTNode* $tmp3294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
*(&local1) = $tmp3293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 1467
org$frostlanguage$frostc$ASTNode* $tmp3295 = *(&local1);
frost$core$Bit $tmp3296 = frost$core$Bit$init$builtin_bit($tmp3295 == NULL);
bool $tmp3297 = $tmp3296.value;
if ($tmp3297) goto block3; else goto block4;
block3:;
// line 1468
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1470
org$frostlanguage$frostc$FixedArray* $tmp3299 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
org$frostlanguage$frostc$FixedArray* $tmp3300 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
*(&local2) = $tmp3299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
// unreffing REF($43:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1471
org$frostlanguage$frostc$FixedArray* $tmp3301 = *(&local2);
frost$core$Bit $tmp3302 = frost$core$Bit$init$builtin_bit($tmp3301 == NULL);
bool $tmp3303 = $tmp3302.value;
if ($tmp3303) goto block5; else goto block6;
block5:;
// line 1472
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3304 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
// unreffing ifTrue
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1474
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1475
frost$core$Int64 $tmp3306 = (frost$core$Int64) {38};
org$frostlanguage$frostc$parser$Token$Kind $tmp3307 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3306);
org$frostlanguage$frostc$parser$Token$nullable $tmp3308 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3307);
frost$core$Bit $tmp3309 = frost$core$Bit$init$builtin_bit($tmp3308.nonnull);
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block7; else goto block9;
block7:;
// line 1476
org$frostlanguage$frostc$parser$Token $tmp3311 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3312 = $tmp3311.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3313;
$tmp3313 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3313->value = $tmp3312;
frost$core$Int64 $tmp3314 = (frost$core$Int64) {37};
org$frostlanguage$frostc$parser$Token$Kind $tmp3315 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3314);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3316;
$tmp3316 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3316->value = $tmp3315;
ITable* $tmp3317 = ((frost$core$Equatable*) $tmp3313)->$class->itable;
while ($tmp3317->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3317 = $tmp3317->next;
}
$fn3319 $tmp3318 = $tmp3317->methods[0];
frost$core$Bit $tmp3320 = $tmp3318(((frost$core$Equatable*) $tmp3313), ((frost$core$Equatable*) $tmp3316));
bool $tmp3321 = $tmp3320.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3316)));
// unreffing REF($91:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3313)));
// unreffing REF($87:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp3321) goto block10; else goto block12;
block10:;
// line 1477
org$frostlanguage$frostc$ASTNode* $tmp3322 = org$frostlanguage$frostc$parser$Parser$ifStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
org$frostlanguage$frostc$ASTNode* $tmp3323 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
*(&local3) = $tmp3322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
// unreffing REF($103:org.frostlanguage.frostc.ASTNode?)
// line 1478
org$frostlanguage$frostc$ASTNode* $tmp3324 = *(&local3);
frost$core$Bit $tmp3325 = frost$core$Bit$init$builtin_bit($tmp3324 == NULL);
bool $tmp3326 = $tmp3325.value;
if ($tmp3326) goto block13; else goto block14;
block13:;
// line 1479
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3327 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
// unreffing ifFalse
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
// unreffing ifTrue
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1483
org$frostlanguage$frostc$ASTNode* $tmp3330 = org$frostlanguage$frostc$parser$Parser$block$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
org$frostlanguage$frostc$ASTNode* $tmp3331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
*(&local3) = $tmp3330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
// unreffing REF($141:org.frostlanguage.frostc.ASTNode?)
// line 1484
org$frostlanguage$frostc$ASTNode* $tmp3332 = *(&local3);
frost$core$Bit $tmp3333 = frost$core$Bit$init$builtin_bit($tmp3332 == NULL);
bool $tmp3334 = $tmp3333.value;
if ($tmp3334) goto block15; else goto block16;
block15:;
// line 1485
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
// unreffing ifFalse
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
// unreffing ifTrue
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3338 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block8;
block8:;
// line 1492
org$frostlanguage$frostc$ASTNode* $tmp3339 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3340 = (frost$core$Int64) {24};
org$frostlanguage$frostc$parser$Token$nullable $tmp3341 = *(&local0);
org$frostlanguage$frostc$Position $tmp3342 = ((org$frostlanguage$frostc$parser$Token) $tmp3341.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3343 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp3344 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp3345 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q($tmp3339, $tmp3340, $tmp3342, $tmp3343, $tmp3344, $tmp3345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
// unreffing REF($188:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
// unreffing ifFalse
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3347 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
// unreffing ifTrue
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3339;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

// line 1499
frost$core$Int64 $tmp3349 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp3350 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3349);
org$frostlanguage$frostc$parser$Token$nullable $tmp3351 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3350, &$s3352);
frost$core$Bit $tmp3353 = frost$core$Bit$init$builtin_bit(!$tmp3351.nonnull);
bool $tmp3354 = $tmp3353.value;
if ($tmp3354) goto block1; else goto block2;
block1:;
// line 1500
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1502
frost$core$Bit $tmp3355 = frost$core$Bit$init$builtin_bit(false);
org$frostlanguage$frostc$ASTNode* $tmp3356 = org$frostlanguage$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp3355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
// unreffing REF($14:org.frostlanguage.frostc.ASTNode?)
return $tmp3356;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$target$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 1509
frost$core$Int64 $tmp3357 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp3358 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3357);
org$frostlanguage$frostc$parser$Token$nullable $tmp3359 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3358, &$s3360);
*(&local0) = $tmp3359;
// line 1510
org$frostlanguage$frostc$parser$Token$nullable $tmp3361 = *(&local0);
frost$core$Bit $tmp3362 = frost$core$Bit$init$builtin_bit(!$tmp3361.nonnull);
bool $tmp3363 = $tmp3362.value;
if ($tmp3363) goto block1; else goto block2;
block1:;
// line 1511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1513
org$frostlanguage$frostc$parser$Token $tmp3364 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3365 = $tmp3364.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3366;
$tmp3366 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3366->value = $tmp3365;
frost$core$Int64 $tmp3367 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp3368 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3367);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3369;
$tmp3369 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3369->value = $tmp3368;
ITable* $tmp3370 = ((frost$core$Equatable*) $tmp3366)->$class->itable;
while ($tmp3370->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3370 = $tmp3370->next;
}
$fn3372 $tmp3371 = $tmp3370->methods[0];
frost$core$Bit $tmp3373 = $tmp3371(((frost$core$Equatable*) $tmp3366), ((frost$core$Equatable*) $tmp3369));
bool $tmp3374 = $tmp3373.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3369)));
// unreffing REF($22:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3366)));
// unreffing REF($18:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp3374) goto block3; else goto block4;
block3:;
// line 1514
org$frostlanguage$frostc$ASTNode* $tmp3375 = org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
org$frostlanguage$frostc$ASTNode* $tmp3376 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
*(&local1) = $tmp3375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
// unreffing REF($34:org.frostlanguage.frostc.ASTNode?)
// line 1515
org$frostlanguage$frostc$ASTNode* $tmp3377 = *(&local1);
frost$core$Bit $tmp3378 = frost$core$Bit$init$builtin_bit($tmp3377 == NULL);
bool $tmp3379 = $tmp3378.value;
if ($tmp3379) goto block5; else goto block6;
block5:;
// line 1516
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
// unreffing type
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1518
org$frostlanguage$frostc$ASTNode* $tmp3381 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3382 = (frost$core$Int64) {47};
org$frostlanguage$frostc$parser$Token$nullable $tmp3383 = *(&local0);
org$frostlanguage$frostc$Position $tmp3384 = ((org$frostlanguage$frostc$parser$Token) $tmp3383.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp3385 = *(&local0);
frost$core$String* $tmp3386 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp3385.value));
org$frostlanguage$frostc$ASTNode* $tmp3387 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q($tmp3381, $tmp3382, $tmp3384, $tmp3386, $tmp3387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3386));
// unreffing REF($68:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
// unreffing REF($61:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
// unreffing type
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3381;
block4:;
// line 1520
org$frostlanguage$frostc$ASTNode* $tmp3389 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3390 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$nullable $tmp3391 = *(&local0);
org$frostlanguage$frostc$Position $tmp3392 = ((org$frostlanguage$frostc$parser$Token) $tmp3391.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp3393 = *(&local0);
frost$core$String* $tmp3394 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp3393.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp3389, $tmp3390, $tmp3392, $tmp3394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
// unreffing REF($87:org.frostlanguage.frostc.ASTNode)
return $tmp3389;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
// line 1527
frost$core$Int64 $tmp3395 = (frost$core$Int64) {33};
org$frostlanguage$frostc$parser$Token$Kind $tmp3396 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3395);
org$frostlanguage$frostc$parser$Token$nullable $tmp3397 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3396, &$s3398);
*(&local0) = $tmp3397;
// line 1528
org$frostlanguage$frostc$parser$Token$nullable $tmp3399 = *(&local0);
frost$core$Bit $tmp3400 = frost$core$Bit$init$builtin_bit(!$tmp3399.nonnull);
bool $tmp3401 = $tmp3400.value;
if ($tmp3401) goto block1; else goto block2;
block1:;
// line 1529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1531
org$frostlanguage$frostc$ASTNode* $tmp3402 = org$frostlanguage$frostc$parser$Parser$target$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
org$frostlanguage$frostc$ASTNode* $tmp3403 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
*(&local1) = $tmp3402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3402));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 1532
org$frostlanguage$frostc$ASTNode* $tmp3404 = *(&local1);
frost$core$Bit $tmp3405 = frost$core$Bit$init$builtin_bit($tmp3404 == NULL);
bool $tmp3406 = $tmp3405.value;
if ($tmp3406) goto block3; else goto block4;
block3:;
// line 1533
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3407 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1535
frost$core$Int64 $tmp3408 = (frost$core$Int64) {35};
org$frostlanguage$frostc$parser$Token$Kind $tmp3409 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3408);
org$frostlanguage$frostc$parser$Token$nullable $tmp3410 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3409, &$s3411);
frost$core$Bit $tmp3412 = frost$core$Bit$init$builtin_bit(!$tmp3410.nonnull);
bool $tmp3413 = $tmp3412.value;
if ($tmp3413) goto block5; else goto block6;
block5:;
// line 1536
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1538
org$frostlanguage$frostc$ASTNode* $tmp3415 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
org$frostlanguage$frostc$ASTNode* $tmp3416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local2) = $tmp3415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
// unreffing REF($60:org.frostlanguage.frostc.ASTNode?)
// line 1539
org$frostlanguage$frostc$ASTNode* $tmp3417 = *(&local2);
frost$core$Bit $tmp3418 = frost$core$Bit$init$builtin_bit($tmp3417 == NULL);
bool $tmp3419 = $tmp3418.value;
if ($tmp3419) goto block7; else goto block8;
block7:;
// line 1540
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3420 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
// unreffing list
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 1542
org$frostlanguage$frostc$FixedArray* $tmp3422 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
org$frostlanguage$frostc$FixedArray* $tmp3423 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local3) = $tmp3422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
// unreffing REF($92:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1543
org$frostlanguage$frostc$FixedArray* $tmp3424 = *(&local3);
frost$core$Bit $tmp3425 = frost$core$Bit$init$builtin_bit($tmp3424 == NULL);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block9; else goto block10;
block9:;
// line 1544
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3427 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
// unreffing block
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
// unreffing list
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3429 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 1546
org$frostlanguage$frostc$ASTNode* $tmp3430 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3431 = (frost$core$Int64) {20};
org$frostlanguage$frostc$parser$Token$nullable $tmp3432 = *(&local0);
org$frostlanguage$frostc$Position $tmp3433 = ((org$frostlanguage$frostc$parser$Token) $tmp3432.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3434 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3435 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp3436 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3430, $tmp3431, $tmp3433, param1, $tmp3434, $tmp3435, $tmp3436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
// unreffing REF($129:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3437 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3437));
// unreffing block
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
// unreffing list
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3439 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3430;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
// line 1553
frost$core$Int64 $tmp3440 = (frost$core$Int64) {32};
org$frostlanguage$frostc$parser$Token$Kind $tmp3441 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3440);
org$frostlanguage$frostc$parser$Token$nullable $tmp3442 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3441, &$s3443);
*(&local0) = $tmp3442;
// line 1554
org$frostlanguage$frostc$parser$Token$nullable $tmp3444 = *(&local0);
frost$core$Bit $tmp3445 = frost$core$Bit$init$builtin_bit(!$tmp3444.nonnull);
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block1; else goto block2;
block1:;
// line 1555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1557
org$frostlanguage$frostc$ASTNode* $tmp3447 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
org$frostlanguage$frostc$ASTNode* $tmp3448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3448));
*(&local1) = $tmp3447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 1558
org$frostlanguage$frostc$ASTNode* $tmp3449 = *(&local1);
frost$core$Bit $tmp3450 = frost$core$Bit$init$builtin_bit($tmp3449 == NULL);
bool $tmp3451 = $tmp3450.value;
if ($tmp3451) goto block3; else goto block4;
block3:;
// line 1559
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1561
org$frostlanguage$frostc$FixedArray* $tmp3453 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
org$frostlanguage$frostc$FixedArray* $tmp3454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
*(&local2) = $tmp3453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
// unreffing REF($43:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1562
org$frostlanguage$frostc$FixedArray* $tmp3455 = *(&local2);
frost$core$Bit $tmp3456 = frost$core$Bit$init$builtin_bit($tmp3455 == NULL);
bool $tmp3457 = $tmp3456.value;
if ($tmp3457) goto block5; else goto block6;
block5:;
// line 1563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3458 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
// unreffing body
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1565
org$frostlanguage$frostc$ASTNode* $tmp3460 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3461 = (frost$core$Int64) {52};
org$frostlanguage$frostc$parser$Token$nullable $tmp3462 = *(&local0);
org$frostlanguage$frostc$Position $tmp3463 = ((org$frostlanguage$frostc$parser$Token) $tmp3462.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3464 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp3465 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3460, $tmp3461, $tmp3463, param1, $tmp3464, $tmp3465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
// unreffing REF($75:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3466 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
// unreffing body
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
// unreffing test
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3460;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$FixedArray* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1572
frost$core$Int64 $tmp3468 = (frost$core$Int64) {31};
org$frostlanguage$frostc$parser$Token$Kind $tmp3469 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3468);
org$frostlanguage$frostc$parser$Token$nullable $tmp3470 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3469, &$s3471);
*(&local0) = $tmp3470;
// line 1573
org$frostlanguage$frostc$parser$Token$nullable $tmp3472 = *(&local0);
frost$core$Bit $tmp3473 = frost$core$Bit$init$builtin_bit(!$tmp3472.nonnull);
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block1; else goto block2;
block1:;
// line 1574
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1576
org$frostlanguage$frostc$FixedArray* $tmp3475 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
org$frostlanguage$frostc$FixedArray* $tmp3476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local1) = $tmp3475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
// unreffing REF($16:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1577
org$frostlanguage$frostc$FixedArray* $tmp3477 = *(&local1);
frost$core$Bit $tmp3478 = frost$core$Bit$init$builtin_bit($tmp3477 == NULL);
bool $tmp3479 = $tmp3478.value;
if ($tmp3479) goto block3; else goto block4;
block3:;
// line 1578
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3480 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1580
frost$core$Int64 $tmp3481 = (frost$core$Int64) {32};
org$frostlanguage$frostc$parser$Token$Kind $tmp3482 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3481);
org$frostlanguage$frostc$parser$Token$nullable $tmp3483 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3482, &$s3484);
frost$core$Bit $tmp3485 = frost$core$Bit$init$builtin_bit(!$tmp3483.nonnull);
bool $tmp3486 = $tmp3485.value;
if ($tmp3486) goto block5; else goto block6;
block5:;
// line 1581
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1583
org$frostlanguage$frostc$ASTNode* $tmp3488 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
org$frostlanguage$frostc$ASTNode* $tmp3489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
*(&local2) = $tmp3488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
// unreffing REF($60:org.frostlanguage.frostc.ASTNode?)
// line 1584
org$frostlanguage$frostc$ASTNode* $tmp3490 = *(&local2);
frost$core$Bit $tmp3491 = frost$core$Bit$init$builtin_bit($tmp3490 == NULL);
bool $tmp3492 = $tmp3491.value;
if ($tmp3492) goto block7; else goto block8;
block7:;
// line 1585
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3493 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
// unreffing test
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 1587
org$frostlanguage$frostc$ASTNode* $tmp3495 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3496 = (frost$core$Int64) {15};
org$frostlanguage$frostc$parser$Token$nullable $tmp3497 = *(&local0);
org$frostlanguage$frostc$Position $tmp3498 = ((org$frostlanguage$frostc$parser$Token) $tmp3497.value).position;
org$frostlanguage$frostc$FixedArray* $tmp3499 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3500 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp3495, $tmp3496, $tmp3498, param1, $tmp3499, $tmp3500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
// unreffing REF($92:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
// unreffing test
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp3495;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$String* param1) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$FixedArray* local1 = NULL;
// line 1594
frost$core$Int64 $tmp3503 = (frost$core$Int64) {36};
org$frostlanguage$frostc$parser$Token$Kind $tmp3504 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3503);
org$frostlanguage$frostc$parser$Token$nullable $tmp3505 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3504, &$s3506);
*(&local0) = $tmp3505;
// line 1595
org$frostlanguage$frostc$parser$Token$nullable $tmp3507 = *(&local0);
frost$core$Bit $tmp3508 = frost$core$Bit$init$builtin_bit(!$tmp3507.nonnull);
bool $tmp3509 = $tmp3508.value;
if ($tmp3509) goto block1; else goto block2;
block1:;
// line 1596
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1598
org$frostlanguage$frostc$FixedArray* $tmp3510 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlanguage$frostc$FixedArray* $tmp3511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
*(&local1) = $tmp3510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
// unreffing REF($16:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1599
org$frostlanguage$frostc$FixedArray* $tmp3512 = *(&local1);
frost$core$Bit $tmp3513 = frost$core$Bit$init$builtin_bit($tmp3512 == NULL);
bool $tmp3514 = $tmp3513.value;
if ($tmp3514) goto block3; else goto block4;
block3:;
// line 1600
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3515 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1602
org$frostlanguage$frostc$ASTNode* $tmp3516 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3517 = (frost$core$Int64) {27};
org$frostlanguage$frostc$parser$Token$nullable $tmp3518 = *(&local0);
org$frostlanguage$frostc$Position $tmp3519 = ((org$frostlanguage$frostc$parser$Token) $tmp3518.value).position;
org$frostlanguage$frostc$FixedArray* $tmp3520 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3516, $tmp3517, $tmp3519, param1, $tmp3520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
// unreffing REF($43:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
// unreffing body
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp3516;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$assertStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1609
frost$core$Int64 $tmp3522 = (frost$core$Int64) {45};
org$frostlanguage$frostc$parser$Token$Kind $tmp3523 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3522);
org$frostlanguage$frostc$parser$Token$nullable $tmp3524 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3523, &$s3525);
*(&local0) = $tmp3524;
// line 1610
org$frostlanguage$frostc$parser$Token$nullable $tmp3526 = *(&local0);
frost$core$Bit $tmp3527 = frost$core$Bit$init$builtin_bit(!$tmp3526.nonnull);
bool $tmp3528 = $tmp3527.value;
if ($tmp3528) goto block1; else goto block2;
block1:;
// line 1611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1613
org$frostlanguage$frostc$ASTNode* $tmp3529 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
org$frostlanguage$frostc$ASTNode* $tmp3530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local1) = $tmp3529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 1614
org$frostlanguage$frostc$ASTNode* $tmp3531 = *(&local1);
frost$core$Bit $tmp3532 = frost$core$Bit$init$builtin_bit($tmp3531 == NULL);
bool $tmp3533 = $tmp3532.value;
if ($tmp3533) goto block3; else goto block4;
block3:;
// line 1615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3534 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1617
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1618
frost$core$Int64 $tmp3535 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp3536 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3535);
org$frostlanguage$frostc$parser$Token$nullable $tmp3537 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3536);
frost$core$Bit $tmp3538 = frost$core$Bit$init$builtin_bit($tmp3537.nonnull);
bool $tmp3539 = $tmp3538.value;
if ($tmp3539) goto block5; else goto block7;
block5:;
// line 1619
org$frostlanguage$frostc$ASTNode* $tmp3540 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
org$frostlanguage$frostc$ASTNode* $tmp3541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
*(&local2) = $tmp3540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
// unreffing REF($53:org.frostlanguage.frostc.ASTNode?)
// line 1620
org$frostlanguage$frostc$ASTNode* $tmp3542 = *(&local2);
frost$core$Bit $tmp3543 = frost$core$Bit$init$builtin_bit($tmp3542 == NULL);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block8; else goto block9;
block8:;
// line 1621
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
// unreffing message
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3546 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1625
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3547 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1627
org$frostlanguage$frostc$ASTNode* $tmp3548 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3549 = (frost$core$Int64) {2};
org$frostlanguage$frostc$parser$Token$nullable $tmp3550 = *(&local0);
org$frostlanguage$frostc$Position $tmp3551 = ((org$frostlanguage$frostc$parser$Token) $tmp3550.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3552 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3553 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$Q($tmp3548, $tmp3549, $tmp3551, $tmp3552, $tmp3553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
// unreffing REF($94:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3554 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
// unreffing message
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3548;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$whenClause$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
frost$core$Bit* $tmp3556 = &param0->allowLambdas;
frost$core$Bit $tmp3557 = *$tmp3556;
bool $tmp3558 = $tmp3557.value;
if ($tmp3558) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3559 = (frost$core$Int64) {1635};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3560, $tmp3559, &$s3561);
abort(); // unreachable
block1:;
// line 1636
frost$core$Int64 $tmp3562 = (frost$core$Int64) {40};
org$frostlanguage$frostc$parser$Token$Kind $tmp3563 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3562);
org$frostlanguage$frostc$parser$Token$nullable $tmp3564 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3563, &$s3565);
*(&local0) = $tmp3564;
// line 1637
org$frostlanguage$frostc$parser$Token$nullable $tmp3566 = *(&local0);
frost$core$Bit $tmp3567 = frost$core$Bit$init$builtin_bit(!$tmp3566.nonnull);
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block3; else goto block4;
block3:;
// line 1638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1640
frost$core$Bit $tmp3569 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp3570 = &param0->allowLambdas;
*$tmp3570 = $tmp3569;
// line 1641
frost$collections$Array* $tmp3571 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3571);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
frost$collections$Array* $tmp3572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local1) = $tmp3571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
// unreffing REF($27:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1642
org$frostlanguage$frostc$ASTNode* $tmp3573 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
org$frostlanguage$frostc$ASTNode* $tmp3574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3574));
*(&local2) = $tmp3573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
// unreffing REF($41:org.frostlanguage.frostc.ASTNode?)
// line 1643
org$frostlanguage$frostc$ASTNode* $tmp3575 = *(&local2);
frost$core$Bit $tmp3576 = frost$core$Bit$init$builtin_bit($tmp3575 == NULL);
bool $tmp3577 = $tmp3576.value;
if ($tmp3577) goto block5; else goto block6;
block5:;
// line 1644
frost$core$Bit $tmp3578 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3579 = &param0->allowLambdas;
*$tmp3579 = $tmp3578;
// line 1645
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3580 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3581 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1647
frost$collections$Array* $tmp3582 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3583 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3582, ((frost$core$Object*) $tmp3583));
// line 1648
goto block7;
block7:;
frost$core$Int64 $tmp3584 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp3585 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3584);
org$frostlanguage$frostc$parser$Token$nullable $tmp3586 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3585);
frost$core$Bit $tmp3587 = frost$core$Bit$init$builtin_bit($tmp3586.nonnull);
bool $tmp3588 = $tmp3587.value;
if ($tmp3588) goto block8; else goto block9;
block8:;
// line 1649
org$frostlanguage$frostc$ASTNode* $tmp3589 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
org$frostlanguage$frostc$ASTNode* $tmp3590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
*(&local2) = $tmp3589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
// unreffing REF($93:org.frostlanguage.frostc.ASTNode?)
// line 1650
org$frostlanguage$frostc$ASTNode* $tmp3591 = *(&local2);
frost$core$Bit $tmp3592 = frost$core$Bit$init$builtin_bit($tmp3591 == NULL);
bool $tmp3593 = $tmp3592.value;
if ($tmp3593) goto block10; else goto block11;
block10:;
// line 1651
frost$core$Bit $tmp3594 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3595 = &param0->allowLambdas;
*$tmp3595 = $tmp3594;
// line 1652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 1654
frost$collections$Array* $tmp3598 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3599 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3598, ((frost$core$Object*) $tmp3599));
goto block7;
block9:;
// line 1656
frost$core$Bit $tmp3600 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3601 = &param0->allowLambdas;
*$tmp3601 = $tmp3600;
// line 1657
org$frostlanguage$frostc$FixedArray* $tmp3602 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
org$frostlanguage$frostc$FixedArray* $tmp3603 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3603));
*(&local3) = $tmp3602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
// unreffing REF($140:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1658
org$frostlanguage$frostc$FixedArray* $tmp3604 = *(&local3);
frost$core$Bit $tmp3605 = frost$core$Bit$init$builtin_bit($tmp3604 == NULL);
bool $tmp3606 = $tmp3605.value;
if ($tmp3606) goto block12; else goto block13;
block12:;
// line 1659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3607 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
// unreffing statements
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3608 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
// line 1661
org$frostlanguage$frostc$ASTNode* $tmp3610 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3611 = (frost$core$Int64) {51};
org$frostlanguage$frostc$parser$Token$nullable $tmp3612 = *(&local0);
org$frostlanguage$frostc$Position $tmp3613 = ((org$frostlanguage$frostc$parser$Token) $tmp3612.value).position;
frost$collections$Array* $tmp3614 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp3615 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp3614);
org$frostlanguage$frostc$FixedArray* $tmp3616 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3610, $tmp3611, $tmp3613, $tmp3615, $tmp3616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
// unreffing REF($184:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
// unreffing REF($177:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3617 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
// unreffing statements
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3618 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3610;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$matchStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
org$frostlanguage$frostc$parser$Token local4;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$parser$Token local6;
// line 1668
frost$core$Int64 $tmp3620 = (frost$core$Int64) {39};
org$frostlanguage$frostc$parser$Token$Kind $tmp3621 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3620);
org$frostlanguage$frostc$parser$Token$nullable $tmp3622 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3621, &$s3623);
*(&local0) = $tmp3622;
// line 1669
org$frostlanguage$frostc$parser$Token$nullable $tmp3624 = *(&local0);
frost$core$Bit $tmp3625 = frost$core$Bit$init$builtin_bit(!$tmp3624.nonnull);
bool $tmp3626 = $tmp3625.value;
if ($tmp3626) goto block1; else goto block2;
block1:;
// line 1670
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1672
org$frostlanguage$frostc$ASTNode* $tmp3627 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
org$frostlanguage$frostc$ASTNode* $tmp3628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
*(&local1) = $tmp3627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
// unreffing REF($16:org.frostlanguage.frostc.ASTNode?)
// line 1673
org$frostlanguage$frostc$ASTNode* $tmp3629 = *(&local1);
frost$core$Bit $tmp3630 = frost$core$Bit$init$builtin_bit($tmp3629 == NULL);
bool $tmp3631 = $tmp3630.value;
if ($tmp3631) goto block3; else goto block4;
block3:;
// line 1674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1676
frost$core$Int64 $tmp3633 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp3634 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3633);
org$frostlanguage$frostc$parser$Token$nullable $tmp3635 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3634, &$s3636);
frost$core$Bit $tmp3637 = frost$core$Bit$init$builtin_bit(!$tmp3635.nonnull);
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block5; else goto block6;
block5:;
// line 1677
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3639 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 1679
frost$collections$Array* $tmp3640 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3640);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
frost$collections$Array* $tmp3641 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3641));
*(&local2) = $tmp3640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
// unreffing REF($60:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1680
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 1681
goto block7;
block7:;
// line 1682
org$frostlanguage$frostc$parser$Token $tmp3643 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local4) = $tmp3643;
// line 1683
org$frostlanguage$frostc$parser$Token $tmp3644 = *(&local4);
org$frostlanguage$frostc$parser$Token$Kind $tmp3645 = $tmp3644.kind;
frost$core$Int64 $tmp3646 = $tmp3645.$rawValue;
frost$core$Int64 $tmp3647 = (frost$core$Int64) {101};
frost$core$Bit $tmp3648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3646, $tmp3647);
bool $tmp3649 = $tmp3648.value;
if ($tmp3649) goto block10; else goto block11;
block10:;
// line 1685
goto block8;
block11:;
frost$core$Int64 $tmp3650 = (frost$core$Int64) {40};
frost$core$Bit $tmp3651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3646, $tmp3650);
bool $tmp3652 = $tmp3651.value;
if ($tmp3652) goto block12; else goto block13;
block12:;
// line 1688
org$frostlanguage$frostc$ASTNode* $tmp3653 = org$frostlanguage$frostc$parser$Parser$whenClause$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
org$frostlanguage$frostc$ASTNode* $tmp3654 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
*(&local5) = $tmp3653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
// unreffing REF($101:org.frostlanguage.frostc.ASTNode?)
// line 1689
org$frostlanguage$frostc$ASTNode* $tmp3655 = *(&local5);
frost$core$Bit $tmp3656 = frost$core$Bit$init$builtin_bit($tmp3655 == NULL);
bool $tmp3657 = $tmp3656.value;
if ($tmp3657) goto block14; else goto block15;
block14:;
// line 1690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp3659 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
// unreffing other
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
// unreffing whens
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3661 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block15:;
// line 1692
frost$collections$Array* $tmp3662 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp3663 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3662, ((frost$core$Object*) $tmp3663));
org$frostlanguage$frostc$ASTNode* $tmp3664 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block13:;
frost$core$Int64 $tmp3665 = (frost$core$Int64) {41};
frost$core$Bit $tmp3666 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3646, $tmp3665);
bool $tmp3667 = $tmp3666.value;
if ($tmp3667) goto block16; else goto block17;
block16:;
// line 1695
org$frostlanguage$frostc$parser$Token $tmp3668 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local6) = $tmp3668;
// line 1696
org$frostlanguage$frostc$FixedArray* $tmp3669 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
org$frostlanguage$frostc$FixedArray* $tmp3670 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
*(&local3) = $tmp3669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
// unreffing REF($163:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1697
org$frostlanguage$frostc$FixedArray* $tmp3671 = *(&local3);
frost$core$Bit $tmp3672 = frost$core$Bit$init$builtin_bit($tmp3671 == NULL);
bool $tmp3673 = $tmp3672.value;
if ($tmp3673) goto block18; else goto block19;
block18:;
// line 1698
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3674 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
// unreffing other
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
// unreffing whens
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block19:;
// line 1700
goto block8;
block17:;
// line 1703
org$frostlanguage$frostc$parser$Token $tmp3677 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 1704
org$frostlanguage$frostc$parser$Token $tmp3678 = *(&local4);
org$frostlanguage$frostc$parser$Token $tmp3679 = *(&local4);
frost$core$String* $tmp3680 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp3679);
frost$core$String* $tmp3681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3682, $tmp3680);
frost$core$String* $tmp3683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3681, &$s3684);
frost$core$String* $tmp3685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3686, $tmp3683);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp3678, $tmp3685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
// unreffing REF($208:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
// unreffing REF($207:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
// unreffing REF($206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
// unreffing REF($205:frost.core.String)
// line 1706
goto block8;
block9:;
goto block7;
block8:;
// line 1710
frost$core$Int64 $tmp3687 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp3688 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3687);
org$frostlanguage$frostc$parser$Token$nullable $tmp3689 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3688, &$s3690);
frost$core$Bit $tmp3691 = frost$core$Bit$init$builtin_bit(!$tmp3689.nonnull);
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block20; else goto block21;
block20:;
// line 1711
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3693 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
// unreffing other
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3694 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
// unreffing whens
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3695 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
// line 1713
org$frostlanguage$frostc$FixedArray* $tmp3696 = *(&local3);
frost$core$Bit $tmp3697 = frost$core$Bit$init$builtin_bit($tmp3696 != NULL);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block22; else goto block23;
block22:;
// line 1714
org$frostlanguage$frostc$ASTNode* $tmp3699 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3700 = (frost$core$Int64) {28};
org$frostlanguage$frostc$parser$Token$nullable $tmp3701 = *(&local0);
org$frostlanguage$frostc$Position $tmp3702 = ((org$frostlanguage$frostc$parser$Token) $tmp3701.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3703 = *(&local1);
frost$collections$Array* $tmp3704 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp3705 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp3704);
org$frostlanguage$frostc$FixedArray* $tmp3706 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp3699, $tmp3700, $tmp3702, $tmp3703, $tmp3705, $tmp3706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
// unreffing REF($268:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
// unreffing REF($259:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3707 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
// unreffing other
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3708 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
// unreffing whens
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3709 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3699;
block23:;
// line 1716
org$frostlanguage$frostc$ASTNode* $tmp3710 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3711 = (frost$core$Int64) {28};
org$frostlanguage$frostc$parser$Token$nullable $tmp3712 = *(&local0);
org$frostlanguage$frostc$Position $tmp3713 = ((org$frostlanguage$frostc$parser$Token) $tmp3712.value).position;
org$frostlanguage$frostc$ASTNode* $tmp3714 = *(&local1);
frost$collections$Array* $tmp3715 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp3716 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp3715);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp3710, $tmp3711, $tmp3713, $tmp3714, $tmp3716, ((org$frostlanguage$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
// unreffing REF($307:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
// unreffing REF($298:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3717 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
// unreffing other
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$collections$Array* $tmp3718 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
// unreffing whens
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3719 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3710;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
// line 1723
frost$core$Int64 $tmp3720 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp3721 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3720);
org$frostlanguage$frostc$parser$Token$nullable $tmp3722 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3721, &$s3723);
*(&local0) = $tmp3722;
// line 1724
org$frostlanguage$frostc$parser$Token$nullable $tmp3724 = *(&local0);
frost$core$Bit $tmp3725 = frost$core$Bit$init$builtin_bit(!$tmp3724.nonnull);
bool $tmp3726 = $tmp3725.value;
if ($tmp3726) goto block1; else goto block2;
block1:;
// line 1725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block2:;
// line 1727
frost$collections$Array* $tmp3727 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3727);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$collections$Array* $tmp3728 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
*(&local1) = $tmp3727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1728
goto block3;
block3:;
// line 1729
org$frostlanguage$frostc$parser$Token $tmp3729 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3730 = $tmp3729.kind;
frost$core$Int64 $tmp3731 = $tmp3730.$rawValue;
frost$core$Int64 $tmp3732 = (frost$core$Int64) {101};
frost$core$Bit $tmp3733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3731, $tmp3732);
bool $tmp3734 = $tmp3733.value;
if ($tmp3734) goto block6; else goto block7;
block6:;
// line 1731
org$frostlanguage$frostc$parser$Token $tmp3735 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 1732
goto block4;
block7:;
frost$core$Int64 $tmp3736 = (frost$core$Int64) {29};
frost$core$Bit $tmp3737 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3731, $tmp3736);
bool $tmp3738 = $tmp3737.value;
if ($tmp3738) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3739 = (frost$core$Int64) {30};
frost$core$Bit $tmp3740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3731, $tmp3739);
bool $tmp3741 = $tmp3740.value;
if ($tmp3741) goto block8; else goto block10;
block10:;
frost$core$Int64 $tmp3742 = (frost$core$Int64) {28};
frost$core$Bit $tmp3743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3731, $tmp3742);
bool $tmp3744 = $tmp3743.value;
if ($tmp3744) goto block8; else goto block11;
block8:;
// line 1735
org$frostlanguage$frostc$ASTNode* $tmp3745 = org$frostlanguage$frostc$parser$Parser$terminalStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
org$frostlanguage$frostc$ASTNode* $tmp3746 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local2) = $tmp3745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
// unreffing REF($56:org.frostlanguage.frostc.ASTNode?)
// line 1736
org$frostlanguage$frostc$ASTNode* $tmp3747 = *(&local2);
frost$core$Bit $tmp3748 = frost$core$Bit$init$builtin_bit($tmp3747 == NULL);
bool $tmp3749 = $tmp3748.value;
if ($tmp3749) goto block12; else goto block13;
block12:;
// line 1737
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3750 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
// unreffing stmt
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block13:;
// line 1739
frost$core$Int64 $tmp3752 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp3753 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3752);
org$frostlanguage$frostc$parser$Token$nullable $tmp3754 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3753, &$s3755);
frost$core$Bit $tmp3756 = frost$core$Bit$init$builtin_bit(!$tmp3754.nonnull);
bool $tmp3757 = $tmp3756.value;
if ($tmp3757) goto block14; else goto block15;
block14:;
// line 1740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3758 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
// unreffing stmt
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3759 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block15:;
// line 1742
frost$collections$Array* $tmp3760 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3761 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp3760, ((frost$core$Object*) $tmp3761));
// line 1743
org$frostlanguage$frostc$ASTNode* $tmp3762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
// unreffing stmt
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block11:;
// line 1746
org$frostlanguage$frostc$ASTNode* $tmp3763 = org$frostlanguage$frostc$parser$Parser$statement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
org$frostlanguage$frostc$ASTNode* $tmp3764 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
*(&local3) = $tmp3763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
// unreffing REF($124:org.frostlanguage.frostc.ASTNode?)
// line 1747
org$frostlanguage$frostc$ASTNode* $tmp3765 = *(&local3);
frost$core$Bit $tmp3766 = frost$core$Bit$init$builtin_bit($tmp3765 == NULL);
bool $tmp3767 = $tmp3766.value;
if ($tmp3767) goto block16; else goto block17;
block16:;
// line 1748
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3768 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
// unreffing stmt
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block17:;
// line 1750
frost$collections$Array* $tmp3770 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp3771 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3770, ((frost$core$Object*) $tmp3771));
org$frostlanguage$frostc$ASTNode* $tmp3772 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
// unreffing stmt
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1754
frost$collections$Array* $tmp3773 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp3774 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp3773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
// unreffing REF($172:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$collections$Array* $tmp3775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp3774;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$block$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$FixedArray* local0 = NULL;
// line 1761
org$frostlanguage$frostc$FixedArray* $tmp3776 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
org$frostlanguage$frostc$FixedArray* $tmp3777 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local0) = $tmp3776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
// unreffing REF($1:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 1762
org$frostlanguage$frostc$FixedArray* $tmp3778 = *(&local0);
frost$core$Bit $tmp3779 = frost$core$Bit$init$builtin_bit($tmp3778 == NULL);
bool $tmp3780 = $tmp3779.value;
if ($tmp3780) goto block1; else goto block2;
block1:;
// line 1763
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp3781 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
// unreffing statements
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1765
org$frostlanguage$frostc$ASTNode* $tmp3782 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3783 = (frost$core$Int64) {7};
org$frostlanguage$frostc$Position $tmp3784 = org$frostlanguage$frostc$Position$init();
org$frostlanguage$frostc$FixedArray* $tmp3785 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3782, $tmp3783, $tmp3784, $tmp3785);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
// unreffing REF($28:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp3786 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3786));
// unreffing statements
*(&local0) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp3782;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$expressionOrAssignment$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$parser$Token local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$parser$Token local3;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
// line 1772
org$frostlanguage$frostc$ASTNode* $tmp3787 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
org$frostlanguage$frostc$ASTNode* $tmp3788 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
*(&local0) = $tmp3787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1773
org$frostlanguage$frostc$ASTNode* $tmp3789 = *(&local0);
frost$core$Bit $tmp3790 = frost$core$Bit$init$builtin_bit($tmp3789 == NULL);
bool $tmp3791 = $tmp3790.value;
if ($tmp3791) goto block1; else goto block2;
block1:;
// line 1774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1776
org$frostlanguage$frostc$parser$Token $tmp3793 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3794 = $tmp3793.kind;
frost$core$Int64 $tmp3795 = $tmp3794.$rawValue;
frost$core$Int64 $tmp3796 = (frost$core$Int64) {74};
frost$core$Bit $tmp3797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3796);
bool $tmp3798 = $tmp3797.value;
if ($tmp3798) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3799 = (frost$core$Int64) {75};
frost$core$Bit $tmp3800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3799);
bool $tmp3801 = $tmp3800.value;
if ($tmp3801) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp3802 = (frost$core$Int64) {76};
frost$core$Bit $tmp3803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3802);
bool $tmp3804 = $tmp3803.value;
if ($tmp3804) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp3805 = (frost$core$Int64) {77};
frost$core$Bit $tmp3806 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3805);
bool $tmp3807 = $tmp3806.value;
if ($tmp3807) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp3808 = (frost$core$Int64) {78};
frost$core$Bit $tmp3809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3808);
bool $tmp3810 = $tmp3809.value;
if ($tmp3810) goto block4; else goto block9;
block9:;
frost$core$Int64 $tmp3811 = (frost$core$Int64) {79};
frost$core$Bit $tmp3812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3811);
bool $tmp3813 = $tmp3812.value;
if ($tmp3813) goto block4; else goto block10;
block10:;
frost$core$Int64 $tmp3814 = (frost$core$Int64) {80};
frost$core$Bit $tmp3815 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3814);
bool $tmp3816 = $tmp3815.value;
if ($tmp3816) goto block4; else goto block11;
block11:;
frost$core$Int64 $tmp3817 = (frost$core$Int64) {81};
frost$core$Bit $tmp3818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3817);
bool $tmp3819 = $tmp3818.value;
if ($tmp3819) goto block4; else goto block12;
block12:;
frost$core$Int64 $tmp3820 = (frost$core$Int64) {82};
frost$core$Bit $tmp3821 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3820);
bool $tmp3822 = $tmp3821.value;
if ($tmp3822) goto block4; else goto block13;
block13:;
frost$core$Int64 $tmp3823 = (frost$core$Int64) {83};
frost$core$Bit $tmp3824 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3823);
bool $tmp3825 = $tmp3824.value;
if ($tmp3825) goto block4; else goto block14;
block14:;
frost$core$Int64 $tmp3826 = (frost$core$Int64) {84};
frost$core$Bit $tmp3827 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3826);
bool $tmp3828 = $tmp3827.value;
if ($tmp3828) goto block4; else goto block15;
block15:;
frost$core$Int64 $tmp3829 = (frost$core$Int64) {85};
frost$core$Bit $tmp3830 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3829);
bool $tmp3831 = $tmp3830.value;
if ($tmp3831) goto block4; else goto block16;
block16:;
frost$core$Int64 $tmp3832 = (frost$core$Int64) {86};
frost$core$Bit $tmp3833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3832);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block4; else goto block17;
block17:;
frost$core$Int64 $tmp3835 = (frost$core$Int64) {87};
frost$core$Bit $tmp3836 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3835);
bool $tmp3837 = $tmp3836.value;
if ($tmp3837) goto block4; else goto block18;
block18:;
frost$core$Int64 $tmp3838 = (frost$core$Int64) {88};
frost$core$Bit $tmp3839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3838);
bool $tmp3840 = $tmp3839.value;
if ($tmp3840) goto block4; else goto block19;
block19:;
frost$core$Int64 $tmp3841 = (frost$core$Int64) {89};
frost$core$Bit $tmp3842 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3841);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block4; else goto block20;
block4:;
// line 1782
org$frostlanguage$frostc$parser$Token $tmp3844 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local1) = $tmp3844;
// line 1783
org$frostlanguage$frostc$ASTNode* $tmp3845 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
org$frostlanguage$frostc$ASTNode* $tmp3846 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
*(&local2) = $tmp3845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
// unreffing REF($99:org.frostlanguage.frostc.ASTNode?)
// line 1784
org$frostlanguage$frostc$ASTNode* $tmp3847 = *(&local2);
frost$core$Bit $tmp3848 = frost$core$Bit$init$builtin_bit($tmp3847 == NULL);
bool $tmp3849 = $tmp3848.value;
if ($tmp3849) goto block21; else goto block22;
block21:;
// line 1785
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3850));
// unreffing rvalue
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3851 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block22:;
// line 1787
org$frostlanguage$frostc$ASTNode* $tmp3852 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3853 = (frost$core$Int64) {5};
org$frostlanguage$frostc$ASTNode* $tmp3854 = *(&local0);
$fn3856 $tmp3855 = ($fn3856) $tmp3854->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp3857 = $tmp3855($tmp3854);
org$frostlanguage$frostc$ASTNode* $tmp3858 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3859 = *(&local1);
org$frostlanguage$frostc$parser$Token$Kind $tmp3860 = $tmp3859.kind;
org$frostlanguage$frostc$ASTNode* $tmp3861 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3852, $tmp3853, $tmp3857, $tmp3858, $tmp3860, $tmp3861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
// unreffing REF($131:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3862 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3862));
// unreffing rvalue
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3863));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3852;
block20:;
frost$core$Int64 $tmp3864 = (frost$core$Int64) {59};
frost$core$Bit $tmp3865 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3795, $tmp3864);
bool $tmp3866 = $tmp3865.value;
if ($tmp3866) goto block23; else goto block24;
block23:;
// line 1790
org$frostlanguage$frostc$parser$Token $tmp3867 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp3867, &$s3868);
// line 1791
org$frostlanguage$frostc$parser$Token $tmp3869 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local3) = $tmp3869;
// line 1792
org$frostlanguage$frostc$ASTNode* $tmp3870 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3870));
org$frostlanguage$frostc$ASTNode* $tmp3871 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
*(&local4) = $tmp3870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3870));
// unreffing REF($172:org.frostlanguage.frostc.ASTNode?)
// line 1793
org$frostlanguage$frostc$ASTNode* $tmp3872 = *(&local4);
frost$core$Bit $tmp3873 = frost$core$Bit$init$builtin_bit($tmp3872 == NULL);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block25; else goto block26;
block25:;
// line 1794
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3875 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
// unreffing rvalue
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3876 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block26:;
// line 1796
org$frostlanguage$frostc$ASTNode* $tmp3877 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3878 = (frost$core$Int64) {5};
org$frostlanguage$frostc$ASTNode* $tmp3879 = *(&local0);
$fn3881 $tmp3880 = ($fn3881) $tmp3879->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp3882 = $tmp3880($tmp3879);
org$frostlanguage$frostc$ASTNode* $tmp3883 = *(&local0);
org$frostlanguage$frostc$parser$Token $tmp3884 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind $tmp3885 = $tmp3884.kind;
org$frostlanguage$frostc$ASTNode* $tmp3886 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode($tmp3877, $tmp3878, $tmp3882, $tmp3883, $tmp3885, $tmp3886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
// unreffing REF($204:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3887 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
// unreffing rvalue
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3888 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3877;
block24:;
// line 1799
org$frostlanguage$frostc$ASTNode* $tmp3889 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
org$frostlanguage$frostc$ASTNode* $tmp3890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
// unreffing start
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3889;
block3:;
frost$core$Bit $tmp3891 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3892 = $tmp3891.value;
if ($tmp3892) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp3893 = (frost$core$Int64) {1771};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3894, $tmp3893, &$s3895);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$singleVar$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 1808
org$frostlanguage$frostc$ASTNode* $tmp3896 = org$frostlanguage$frostc$parser$Parser$target$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
org$frostlanguage$frostc$ASTNode* $tmp3897 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local0) = $tmp3896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 1809
org$frostlanguage$frostc$ASTNode* $tmp3898 = *(&local0);
frost$core$Bit $tmp3899 = frost$core$Bit$init$builtin_bit($tmp3898 == NULL);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block1; else goto block2;
block1:;
// line 1810
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3901 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3901));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1812
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 1813
frost$core$Int64 $tmp3902 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp3903 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3902);
org$frostlanguage$frostc$parser$Token$nullable $tmp3904 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3903);
frost$core$Bit $tmp3905 = frost$core$Bit$init$builtin_bit($tmp3904.nonnull);
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block3; else goto block5;
block3:;
// line 1814
org$frostlanguage$frostc$ASTNode* $tmp3907 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
org$frostlanguage$frostc$ASTNode* $tmp3908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
*(&local1) = $tmp3907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
// unreffing REF($38:org.frostlanguage.frostc.ASTNode?)
// line 1815
org$frostlanguage$frostc$ASTNode* $tmp3909 = *(&local1);
frost$core$Bit $tmp3910 = frost$core$Bit$init$builtin_bit($tmp3909 == NULL);
bool $tmp3911 = $tmp3910.value;
if ($tmp3911) goto block6; else goto block7;
block6:;
// line 1816
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
// unreffing value
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1819
org$frostlanguage$frostc$parser$Token $tmp3914 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3915 = $tmp3914.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3916;
$tmp3916 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3916->value = $tmp3915;
frost$core$Int64 $tmp3917 = (frost$core$Int64) {59};
org$frostlanguage$frostc$parser$Token$Kind $tmp3918 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3917);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp3919;
$tmp3919 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp3919->value = $tmp3918;
ITable* $tmp3920 = ((frost$core$Equatable*) $tmp3916)->$class->itable;
while ($tmp3920->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3920 = $tmp3920->next;
}
$fn3922 $tmp3921 = $tmp3920->methods[0];
frost$core$Bit $tmp3923 = $tmp3921(((frost$core$Equatable*) $tmp3916), ((frost$core$Equatable*) $tmp3919));
bool $tmp3924 = $tmp3923.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3919)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3916)));
// unreffing REF($72:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp3924) goto block8; else goto block10;
block8:;
// line 1820
org$frostlanguage$frostc$parser$Token $tmp3925 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp3925, &$s3926);
// line 1821
org$frostlanguage$frostc$ASTNode* $tmp3927 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
org$frostlanguage$frostc$ASTNode* $tmp3928 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local1) = $tmp3927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
// unreffing REF($91:org.frostlanguage.frostc.ASTNode?)
// line 1822
org$frostlanguage$frostc$ASTNode* $tmp3929 = *(&local1);
frost$core$Bit $tmp3930 = frost$core$Bit$init$builtin_bit($tmp3929 == NULL);
bool $tmp3931 = $tmp3930.value;
if ($tmp3931) goto block11; else goto block12;
block11:;
// line 1823
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
// unreffing value
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3934 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3934));
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1829
org$frostlanguage$frostc$ASTNode* $tmp3935 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3936 = (frost$core$Int64) {14};
org$frostlanguage$frostc$ASTNode* $tmp3937 = *(&local0);
$fn3939 $tmp3938 = ($fn3939) $tmp3937->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp3940 = $tmp3938($tmp3937);
org$frostlanguage$frostc$ASTNode* $tmp3941 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp3942 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$Q($tmp3935, $tmp3936, $tmp3940, $tmp3941, $tmp3942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3935));
// unreffing REF($133:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp3943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
// unreffing value
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3944));
// unreffing t
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp3935;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$varDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$Variable$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
// line 1836
org$frostlanguage$frostc$parser$Token $tmp3945 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp3945;
// line 1837
// line 1838
org$frostlanguage$frostc$parser$Token $tmp3946 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp3947 = $tmp3946.kind;
frost$core$Int64 $tmp3948 = $tmp3947.$rawValue;
frost$core$Int64 $tmp3949 = (frost$core$Int64) {24};
frost$core$Bit $tmp3950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3948, $tmp3949);
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block2; else goto block3;
block2:;
// line 1840
frost$core$Int64 $tmp3952 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Variable$Kind $tmp3953 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp3952);
*(&local1) = $tmp3953;
goto block1;
block3:;
frost$core$Int64 $tmp3954 = (frost$core$Int64) {25};
frost$core$Bit $tmp3955 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3948, $tmp3954);
bool $tmp3956 = $tmp3955.value;
if ($tmp3956) goto block4; else goto block5;
block4:;
// line 1843
frost$core$Int64 $tmp3957 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Variable$Kind $tmp3958 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp3957);
*(&local1) = $tmp3958;
goto block1;
block5:;
frost$core$Int64 $tmp3959 = (frost$core$Int64) {26};
frost$core$Bit $tmp3960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3948, $tmp3959);
bool $tmp3961 = $tmp3960.value;
if ($tmp3961) goto block6; else goto block7;
block6:;
// line 1846
frost$core$Int64 $tmp3962 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Variable$Kind $tmp3963 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp3962);
*(&local1) = $tmp3963;
goto block1;
block7:;
frost$core$Int64 $tmp3964 = (frost$core$Int64) {27};
frost$core$Bit $tmp3965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3948, $tmp3964);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block8; else goto block9;
block8:;
// line 1849
frost$core$Int64 $tmp3967 = (frost$core$Int64) {2};
org$frostlanguage$frostc$Variable$Kind $tmp3968 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp3967);
*(&local1) = $tmp3968;
goto block1;
block9:;
// line 1852
org$frostlanguage$frostc$parser$Token $tmp3969 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp3969, &$s3970);
goto block1;
block1:;
// line 1855
frost$collections$Array* $tmp3971 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3971);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
frost$collections$Array* $tmp3972 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
*(&local2) = $tmp3971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
// unreffing REF($49:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1856
org$frostlanguage$frostc$ASTNode* $tmp3973 = org$frostlanguage$frostc$parser$Parser$singleVar$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
org$frostlanguage$frostc$ASTNode* $tmp3974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
*(&local3) = $tmp3973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
// unreffing REF($63:org.frostlanguage.frostc.ASTNode?)
// line 1857
org$frostlanguage$frostc$ASTNode* $tmp3975 = *(&local3);
frost$core$Bit $tmp3976 = frost$core$Bit$init$builtin_bit($tmp3975 == NULL);
bool $tmp3977 = $tmp3976.value;
if ($tmp3977) goto block10; else goto block11;
block10:;
// line 1858
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3978 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
// unreffing decl
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3979 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
// unreffing declarations
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 1860
frost$collections$Array* $tmp3980 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp3981 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp3980, ((frost$core$Object*) $tmp3981));
// line 1861
goto block12;
block12:;
frost$core$Int64 $tmp3982 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp3983 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp3982);
org$frostlanguage$frostc$parser$Token$nullable $tmp3984 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp3983);
frost$core$Bit $tmp3985 = frost$core$Bit$init$builtin_bit($tmp3984.nonnull);
bool $tmp3986 = $tmp3985.value;
if ($tmp3986) goto block13; else goto block14;
block13:;
// line 1862
org$frostlanguage$frostc$ASTNode* $tmp3987 = org$frostlanguage$frostc$parser$Parser$singleVar$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
org$frostlanguage$frostc$ASTNode* $tmp3988 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local4) = $tmp3987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
// unreffing REF($111:org.frostlanguage.frostc.ASTNode?)
// line 1863
org$frostlanguage$frostc$ASTNode* $tmp3989 = *(&local4);
frost$core$Bit $tmp3990 = frost$core$Bit$init$builtin_bit($tmp3989 == NULL);
bool $tmp3991 = $tmp3990.value;
if ($tmp3991) goto block15; else goto block16;
block15:;
// line 1864
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp3992 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
// unreffing decl
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp3993 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
// unreffing decl
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3994 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3994));
// unreffing declarations
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 1866
frost$collections$Array* $tmp3995 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp3996 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp3995, ((frost$core$Object*) $tmp3996));
org$frostlanguage$frostc$ASTNode* $tmp3997 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
// unreffing decl
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block12;
block14:;
// line 1868
org$frostlanguage$frostc$ASTNode* $tmp3998 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp3999 = (frost$core$Int64) {50};
org$frostlanguage$frostc$parser$Token $tmp4000 = *(&local0);
org$frostlanguage$frostc$Position $tmp4001 = $tmp4000.position;
org$frostlanguage$frostc$Variable$Kind $tmp4002 = *(&local1);
frost$collections$Array* $tmp4003 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp4004 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4003);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp3998, $tmp3999, $tmp4001, $tmp4002, $tmp4004);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
// unreffing REF($168:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
// unreffing REF($161:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4005 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
// unreffing decl
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
// unreffing declarations
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp3998;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$initCall$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
// line 1875
frost$core$Int64 $tmp4007 = (frost$core$Int64) {23};
org$frostlanguage$frostc$parser$Token$Kind $tmp4008 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4007);
org$frostlanguage$frostc$parser$Token$nullable $tmp4009 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4008, &$s4010);
*(&local0) = $tmp4009;
// line 1876
org$frostlanguage$frostc$parser$Token$nullable $tmp4011 = *(&local0);
frost$core$Bit $tmp4012 = frost$core$Bit$init$builtin_bit(!$tmp4011.nonnull);
bool $tmp4013 = $tmp4012.value;
if ($tmp4013) goto block1; else goto block2;
block1:;
// line 1877
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1879
frost$core$Int64 $tmp4014 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp4015 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4014);
org$frostlanguage$frostc$parser$Token$nullable $tmp4016 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4015, &$s4017);
frost$core$Bit $tmp4018 = frost$core$Bit$init$builtin_bit(!$tmp4016.nonnull);
bool $tmp4019 = $tmp4018.value;
if ($tmp4019) goto block3; else goto block4;
block3:;
// line 1880
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 1882
frost$collections$Stack** $tmp4020 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4021 = *$tmp4020;
frost$core$Bit $tmp4022 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp4023;
$tmp4023 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp4023->value = $tmp4022;
frost$collections$Stack$push$frost$collections$Stack$T($tmp4021, ((frost$core$Object*) $tmp4023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
// unreffing REF($32:frost.collections.Stack.T)
// line 1883
org$frostlanguage$frostc$ASTNode* $tmp4024 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4025 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$nullable $tmp4026 = *(&local0);
org$frostlanguage$frostc$Position $tmp4027 = ((org$frostlanguage$frostc$parser$Token) $tmp4026.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4028 = *(&local0);
frost$core$String* $tmp4029 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4028.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4024, $tmp4025, $tmp4027, $tmp4029);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
org$frostlanguage$frostc$ASTNode* $tmp4030 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local1) = $tmp4024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
// unreffing REF($45:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
// unreffing REF($38:org.frostlanguage.frostc.ASTNode)
// line 1884
frost$collections$Array* $tmp4031 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4031);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
frost$collections$Array* $tmp4032 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
*(&local2) = $tmp4031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
// unreffing REF($61:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1885
frost$core$Int64 $tmp4033 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp4034 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4033);
org$frostlanguage$frostc$parser$Token$nullable $tmp4035 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4034);
frost$core$Bit $tmp4036 = frost$core$Bit$init$builtin_bit(!$tmp4035.nonnull);
bool $tmp4037 = $tmp4036.value;
if ($tmp4037) goto block5; else goto block6;
block5:;
// line 1886
org$frostlanguage$frostc$ASTNode* $tmp4038 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
org$frostlanguage$frostc$ASTNode* $tmp4039 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
*(&local3) = $tmp4038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
// unreffing REF($83:org.frostlanguage.frostc.ASTNode?)
// line 1887
org$frostlanguage$frostc$ASTNode* $tmp4040 = *(&local3);
frost$core$Bit $tmp4041 = frost$core$Bit$init$builtin_bit($tmp4040 == NULL);
bool $tmp4042 = $tmp4041.value;
if ($tmp4042) goto block7; else goto block8;
block7:;
// line 1888
frost$collections$Stack** $tmp4043 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4044 = *$tmp4043;
frost$core$Object* $tmp4045 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4044);
frost$core$Frost$unref$frost$core$Object$Q($tmp4045);
// unreffing REF($104:frost.collections.Stack.T)
// line 1889
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4046 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4047 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4048 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 1891
frost$collections$Array* $tmp4049 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4050 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4049, ((frost$core$Object*) $tmp4050));
// line 1892
goto block9;
block9:;
frost$core$Int64 $tmp4051 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp4052 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4051);
org$frostlanguage$frostc$parser$Token$nullable $tmp4053 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4052);
frost$core$Bit $tmp4054 = frost$core$Bit$init$builtin_bit($tmp4053.nonnull);
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block10; else goto block11;
block10:;
// line 1893
org$frostlanguage$frostc$ASTNode* $tmp4056 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
org$frostlanguage$frostc$ASTNode* $tmp4057 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
*(&local3) = $tmp4056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
// unreffing REF($145:org.frostlanguage.frostc.ASTNode?)
// line 1894
org$frostlanguage$frostc$ASTNode* $tmp4058 = *(&local3);
frost$core$Bit $tmp4059 = frost$core$Bit$init$builtin_bit($tmp4058 == NULL);
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block12; else goto block13;
block12:;
// line 1895
frost$collections$Stack** $tmp4061 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4062 = *$tmp4061;
frost$core$Object* $tmp4063 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4062);
frost$core$Frost$unref$frost$core$Object$Q($tmp4063);
// unreffing REF($165:frost.collections.Stack.T)
// line 1896
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4064 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
// line 1898
frost$collections$Array* $tmp4067 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4068 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp4067, ((frost$core$Object*) $tmp4068));
goto block9;
block11:;
// line 1900
frost$core$Int64 $tmp4069 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp4070 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4069);
org$frostlanguage$frostc$parser$Token$nullable $tmp4071 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4070, &$s4072);
frost$core$Bit $tmp4073 = frost$core$Bit$init$builtin_bit(!$tmp4071.nonnull);
bool $tmp4074 = $tmp4073.value;
if ($tmp4074) goto block14; else goto block15;
block14:;
// line 1901
frost$collections$Stack** $tmp4075 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4076 = *$tmp4075;
frost$core$Object* $tmp4077 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4076);
frost$core$Frost$unref$frost$core$Object$Q($tmp4077);
// unreffing REF($209:frost.collections.Stack.T)
// line 1902
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4078 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4079 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4080 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4080));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block15:;
org$frostlanguage$frostc$ASTNode* $tmp4081 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
// unreffing expr
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 1905
frost$collections$Stack** $tmp4082 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp4083 = *$tmp4082;
frost$core$Object* $tmp4084 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4083);
frost$core$Frost$unref$frost$core$Object$Q($tmp4084);
// unreffing REF($243:frost.collections.Stack.T)
// line 1906
org$frostlanguage$frostc$ASTNode* $tmp4085 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4086 = (frost$core$Int64) {9};
org$frostlanguage$frostc$parser$Token$nullable $tmp4087 = *(&local0);
org$frostlanguage$frostc$Position $tmp4088 = ((org$frostlanguage$frostc$parser$Token) $tmp4087.value).position;
org$frostlanguage$frostc$ASTNode* $tmp4089 = *(&local1);
frost$collections$Array* $tmp4090 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp4091 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4090);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp4085, $tmp4086, $tmp4088, $tmp4089, $tmp4091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
// unreffing REF($257:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
// unreffing REF($249:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp4092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
// unreffing args
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
// unreffing target
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp4085;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$breakStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
// line 1913
frost$core$Int64 $tmp4094 = (frost$core$Int64) {29};
org$frostlanguage$frostc$parser$Token$Kind $tmp4095 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4094);
org$frostlanguage$frostc$parser$Token$nullable $tmp4096 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4095, &$s4097);
*(&local0) = $tmp4096;
// line 1914
org$frostlanguage$frostc$parser$Token$nullable $tmp4098 = *(&local0);
frost$core$Bit $tmp4099 = frost$core$Bit$init$builtin_bit(!$tmp4098.nonnull);
bool $tmp4100 = $tmp4099.value;
if ($tmp4100) goto block1; else goto block2;
block1:;
// line 1915
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1917
frost$core$Int64 $tmp4101 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4102 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4101);
org$frostlanguage$frostc$parser$Token$nullable $tmp4103 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4102);
*(&local1) = $tmp4103;
// line 1918
org$frostlanguage$frostc$parser$Token$nullable $tmp4104 = *(&local1);
frost$core$Bit $tmp4105 = frost$core$Bit$init$builtin_bit($tmp4104.nonnull);
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block3; else goto block4;
block3:;
// line 1919
org$frostlanguage$frostc$ASTNode* $tmp4107 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4108 = (frost$core$Int64) {8};
org$frostlanguage$frostc$parser$Token$nullable $tmp4109 = *(&local0);
org$frostlanguage$frostc$Position $tmp4110 = ((org$frostlanguage$frostc$parser$Token) $tmp4109.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4111 = *(&local1);
frost$core$String* $tmp4112 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4111.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q($tmp4107, $tmp4108, $tmp4110, $tmp4112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
// unreffing REF($27:org.frostlanguage.frostc.ASTNode)
return $tmp4107;
block4:;
// line 1921
org$frostlanguage$frostc$ASTNode* $tmp4113 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4114 = (frost$core$Int64) {8};
org$frostlanguage$frostc$parser$Token$nullable $tmp4115 = *(&local0);
org$frostlanguage$frostc$Position $tmp4116 = ((org$frostlanguage$frostc$parser$Token) $tmp4115.value).position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q($tmp4113, $tmp4114, $tmp4116, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4113));
// unreffing REF($48:org.frostlanguage.frostc.ASTNode)
return $tmp4113;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$continueStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
// line 1928
frost$core$Int64 $tmp4117 = (frost$core$Int64) {30};
org$frostlanguage$frostc$parser$Token$Kind $tmp4118 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4117);
org$frostlanguage$frostc$parser$Token$nullable $tmp4119 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4118, &$s4120);
*(&local0) = $tmp4119;
// line 1929
org$frostlanguage$frostc$parser$Token$nullable $tmp4121 = *(&local0);
frost$core$Bit $tmp4122 = frost$core$Bit$init$builtin_bit(!$tmp4121.nonnull);
bool $tmp4123 = $tmp4122.value;
if ($tmp4123) goto block1; else goto block2;
block1:;
// line 1930
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1932
frost$core$Int64 $tmp4124 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4125 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4124);
org$frostlanguage$frostc$parser$Token$nullable $tmp4126 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4125);
*(&local1) = $tmp4126;
// line 1933
org$frostlanguage$frostc$parser$Token$nullable $tmp4127 = *(&local1);
frost$core$Bit $tmp4128 = frost$core$Bit$init$builtin_bit($tmp4127.nonnull);
bool $tmp4129 = $tmp4128.value;
if ($tmp4129) goto block3; else goto block4;
block3:;
// line 1934
org$frostlanguage$frostc$ASTNode* $tmp4130 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4131 = (frost$core$Int64) {13};
org$frostlanguage$frostc$parser$Token$nullable $tmp4132 = *(&local0);
org$frostlanguage$frostc$Position $tmp4133 = ((org$frostlanguage$frostc$parser$Token) $tmp4132.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4134 = *(&local1);
frost$core$String* $tmp4135 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4134.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q($tmp4130, $tmp4131, $tmp4133, $tmp4135);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4135));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
// unreffing REF($27:org.frostlanguage.frostc.ASTNode)
return $tmp4130;
block4:;
// line 1936
org$frostlanguage$frostc$ASTNode* $tmp4136 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4137 = (frost$core$Int64) {13};
org$frostlanguage$frostc$parser$Token$nullable $tmp4138 = *(&local0);
org$frostlanguage$frostc$Position $tmp4139 = ((org$frostlanguage$frostc$parser$Token) $tmp4138.value).position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$Q($tmp4136, $tmp4137, $tmp4139, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
// unreffing REF($48:org.frostlanguage.frostc.ASTNode)
return $tmp4136;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$returnStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 1943
frost$core$Int64 $tmp4140 = (frost$core$Int64) {28};
org$frostlanguage$frostc$parser$Token$Kind $tmp4141 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4140);
org$frostlanguage$frostc$parser$Token$nullable $tmp4142 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4141, &$s4143);
*(&local0) = $tmp4142;
// line 1944
org$frostlanguage$frostc$parser$Token$nullable $tmp4144 = *(&local0);
frost$core$Bit $tmp4145 = frost$core$Bit$init$builtin_bit(!$tmp4144.nonnull);
bool $tmp4146 = $tmp4145.value;
if ($tmp4146) goto block1; else goto block2;
block1:;
// line 1945
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 1947
org$frostlanguage$frostc$parser$Token $tmp4147 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4148 = $tmp4147.kind;
frost$core$Int64 $tmp4149 = $tmp4148.$rawValue;
frost$core$Int64 $tmp4150 = (frost$core$Int64) {101};
frost$core$Bit $tmp4151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4149, $tmp4150);
bool $tmp4152 = $tmp4151.value;
if ($tmp4152) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp4153 = (frost$core$Int64) {40};
frost$core$Bit $tmp4154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4149, $tmp4153);
bool $tmp4155 = $tmp4154.value;
if ($tmp4155) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp4156 = (frost$core$Int64) {41};
frost$core$Bit $tmp4157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4149, $tmp4156);
bool $tmp4158 = $tmp4157.value;
if ($tmp4158) goto block4; else goto block7;
block4:;
// line 1949
org$frostlanguage$frostc$ASTNode* $tmp4159 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4160 = (frost$core$Int64) {39};
org$frostlanguage$frostc$parser$Token$nullable $tmp4161 = *(&local0);
org$frostlanguage$frostc$Position $tmp4162 = ((org$frostlanguage$frostc$parser$Token) $tmp4161.value).position;
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q($tmp4159, $tmp4160, $tmp4162, ((org$frostlanguage$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
// unreffing REF($32:org.frostlanguage.frostc.ASTNode)
return $tmp4159;
block7:;
// line 1952
frost$collections$Array* $tmp4163 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4163);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
frost$collections$Array* $tmp4164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
*(&local1) = $tmp4163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
// unreffing REF($46:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 1953
org$frostlanguage$frostc$ASTNode* $tmp4165 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4165));
org$frostlanguage$frostc$ASTNode* $tmp4166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
*(&local2) = $tmp4165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4165));
// unreffing REF($60:org.frostlanguage.frostc.ASTNode?)
// line 1954
org$frostlanguage$frostc$ASTNode* $tmp4167 = *(&local2);
frost$core$Bit $tmp4168 = frost$core$Bit$init$builtin_bit($tmp4167 == NULL);
bool $tmp4169 = $tmp4168.value;
if ($tmp4169) goto block8; else goto block9;
block8:;
// line 1955
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4170));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4171));
// unreffing children
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
// line 1957
frost$collections$Array* $tmp4172 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4173 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4172, ((frost$core$Object*) $tmp4173));
// line 1958
org$frostlanguage$frostc$ASTNode* $tmp4174 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4175 = (frost$core$Int64) {39};
org$frostlanguage$frostc$parser$Token$nullable $tmp4176 = *(&local0);
org$frostlanguage$frostc$Position $tmp4177 = ((org$frostlanguage$frostc$parser$Token) $tmp4176.value).position;
org$frostlanguage$frostc$ASTNode* $tmp4178 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q($tmp4174, $tmp4175, $tmp4177, $tmp4178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
// unreffing REF($99:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4179));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
// unreffing children
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4174;
block3:;
frost$core$Bit $tmp4181 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4182 = $tmp4181.value;
if ($tmp4182) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp4183 = (frost$core$Int64) {1942};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4184, $tmp4183, &$s4185);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$terminalStatement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

// line 1967
org$frostlanguage$frostc$parser$Token $tmp4186 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4187 = $tmp4186.kind;
frost$core$Int64 $tmp4188 = $tmp4187.$rawValue;
frost$core$Int64 $tmp4189 = (frost$core$Int64) {29};
frost$core$Bit $tmp4190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4188, $tmp4189);
bool $tmp4191 = $tmp4190.value;
if ($tmp4191) goto block2; else goto block3;
block2:;
// line 1968
org$frostlanguage$frostc$ASTNode* $tmp4192 = org$frostlanguage$frostc$parser$Parser$breakStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
// unreffing REF($9:org.frostlanguage.frostc.ASTNode?)
return $tmp4192;
block3:;
frost$core$Int64 $tmp4193 = (frost$core$Int64) {30};
frost$core$Bit $tmp4194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4188, $tmp4193);
bool $tmp4195 = $tmp4194.value;
if ($tmp4195) goto block4; else goto block5;
block4:;
// line 1969
org$frostlanguage$frostc$ASTNode* $tmp4196 = org$frostlanguage$frostc$parser$Parser$continueStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
// unreffing REF($21:org.frostlanguage.frostc.ASTNode?)
return $tmp4196;
block5:;
frost$core$Int64 $tmp4197 = (frost$core$Int64) {28};
frost$core$Bit $tmp4198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4188, $tmp4197);
bool $tmp4199 = $tmp4198.value;
if ($tmp4199) goto block6; else goto block7;
block6:;
// line 1970
org$frostlanguage$frostc$ASTNode* $tmp4200 = org$frostlanguage$frostc$parser$Parser$returnStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4200));
// unreffing REF($33:org.frostlanguage.frostc.ASTNode?)
return $tmp4200;
block7:;
// line 1971
frost$core$Bit $tmp4201 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4202 = $tmp4201.value;
if ($tmp4202) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp4203 = (frost$core$Int64) {1971};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4204, $tmp4203);
abort(); // unreachable
block8:;
goto block1;
block1:;
frost$core$Bit $tmp4205 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4206 = $tmp4205.value;
if ($tmp4206) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp4207 = (frost$core$Int64) {1966};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4208, $tmp4207, &$s4209);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, frost$core$String* param1) {

// line 1979
org$frostlanguage$frostc$parser$Token $tmp4210 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4211 = $tmp4210.kind;
frost$core$Int64 $tmp4212 = $tmp4211.$rawValue;
frost$core$Int64 $tmp4213 = (frost$core$Int64) {31};
frost$core$Bit $tmp4214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4212, $tmp4213);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block2; else goto block3;
block2:;
// line 1980
org$frostlanguage$frostc$ASTNode* $tmp4216 = org$frostlanguage$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4216));
// unreffing REF($9:org.frostlanguage.frostc.ASTNode?)
return $tmp4216;
block3:;
frost$core$Int64 $tmp4217 = (frost$core$Int64) {33};
frost$core$Bit $tmp4218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4212, $tmp4217);
bool $tmp4219 = $tmp4218.value;
if ($tmp4219) goto block4; else goto block5;
block4:;
// line 1981
org$frostlanguage$frostc$ASTNode* $tmp4220 = org$frostlanguage$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
// unreffing REF($21:org.frostlanguage.frostc.ASTNode?)
return $tmp4220;
block5:;
frost$core$Int64 $tmp4221 = (frost$core$Int64) {36};
frost$core$Bit $tmp4222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4212, $tmp4221);
bool $tmp4223 = $tmp4222.value;
if ($tmp4223) goto block6; else goto block7;
block6:;
// line 1982
org$frostlanguage$frostc$ASTNode* $tmp4224 = org$frostlanguage$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
// unreffing REF($33:org.frostlanguage.frostc.ASTNode?)
return $tmp4224;
block7:;
frost$core$Int64 $tmp4225 = (frost$core$Int64) {32};
frost$core$Bit $tmp4226 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4212, $tmp4225);
bool $tmp4227 = $tmp4226.value;
if ($tmp4227) goto block8; else goto block9;
block8:;
// line 1983
org$frostlanguage$frostc$ASTNode* $tmp4228 = org$frostlanguage$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
// unreffing REF($45:org.frostlanguage.frostc.ASTNode?)
return $tmp4228;
block9:;
// line 1986
frost$core$Int64 $tmp4229 = (frost$core$Int64) {31};
org$frostlanguage$frostc$parser$Token$Kind $tmp4230 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4229);
org$frostlanguage$frostc$parser$Token$nullable $tmp4231 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4230, &$s4232);
// line 1987
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp4233 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4234 = $tmp4233.value;
if ($tmp4234) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp4235 = (frost$core$Int64) {1978};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4236, $tmp4235, &$s4237);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$innerMethod$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$MethodDecl$Kind local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$parser$Token$nullable local2;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
org$frostlanguage$frostc$FixedArray* local5 = NULL;
// line 1996
// line 1997
frost$core$Int64 $tmp4238 = (frost$core$Int64) {21};
org$frostlanguage$frostc$parser$Token$Kind $tmp4239 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4238);
org$frostlanguage$frostc$parser$Token$nullable $tmp4240 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4239);
*(&local1) = $tmp4240;
// line 1998
org$frostlanguage$frostc$parser$Token$nullable $tmp4241 = *(&local1);
frost$core$Bit $tmp4242 = frost$core$Bit$init$builtin_bit(!$tmp4241.nonnull);
bool $tmp4243 = $tmp4242.value;
if ($tmp4243) goto block1; else goto block3;
block1:;
// line 1999
frost$core$Int64 $tmp4244 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$Kind $tmp4245 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4244);
org$frostlanguage$frostc$parser$Token$nullable $tmp4246 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4245, &$s4247);
*(&local1) = $tmp4246;
// line 2000
org$frostlanguage$frostc$parser$Token$nullable $tmp4248 = *(&local1);
frost$core$Bit $tmp4249 = frost$core$Bit$init$builtin_bit(!$tmp4248.nonnull);
bool $tmp4250 = $tmp4249.value;
if ($tmp4250) goto block4; else goto block5;
block4:;
// line 2001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
// line 2003
frost$core$Int64 $tmp4251 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4252 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4251);
*(&local0) = $tmp4252;
goto block2;
block3:;
// line 1
// line 2006
frost$core$Int64 $tmp4253 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4254 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4253);
*(&local0) = $tmp4254;
goto block2;
block2:;
// line 2008
frost$core$Int64 $tmp4255 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4256 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4255);
org$frostlanguage$frostc$parser$Token$nullable $tmp4257 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4256, &$s4258);
*(&local2) = $tmp4257;
// line 2009
org$frostlanguage$frostc$parser$Token$nullable $tmp4259 = *(&local2);
frost$core$Bit $tmp4260 = frost$core$Bit$init$builtin_bit(!$tmp4259.nonnull);
bool $tmp4261 = $tmp4260.value;
if ($tmp4261) goto block6; else goto block7;
block6:;
// line 2010
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 2012
org$frostlanguage$frostc$FixedArray* $tmp4262 = org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
org$frostlanguage$frostc$FixedArray* $tmp4263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
*(&local3) = $tmp4262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
// unreffing REF($54:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2013
org$frostlanguage$frostc$FixedArray* $tmp4264 = *(&local3);
frost$core$Bit $tmp4265 = frost$core$Bit$init$builtin_bit($tmp4264 == NULL);
bool $tmp4266 = $tmp4265.value;
if ($tmp4266) goto block8; else goto block9;
block8:;
// line 2014
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
// unreffing params
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
// line 2016
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2017
org$frostlanguage$frostc$parser$Token $tmp4268 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4269 = $tmp4268.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4270;
$tmp4270 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4270->value = $tmp4269;
frost$core$Int64 $tmp4271 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4272 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4271);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4273;
$tmp4273 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4273->value = $tmp4272;
ITable* $tmp4274 = ((frost$core$Equatable*) $tmp4270)->$class->itable;
while ($tmp4274->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4274 = $tmp4274->next;
}
$fn4276 $tmp4275 = $tmp4274->methods[0];
frost$core$Bit $tmp4277 = $tmp4275(((frost$core$Equatable*) $tmp4270), ((frost$core$Equatable*) $tmp4273));
bool $tmp4278 = $tmp4277.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4273)));
// unreffing REF($89:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4270)));
// unreffing REF($85:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4278) goto block10; else goto block12;
block10:;
// line 2018
org$frostlanguage$frostc$ASTNode* $tmp4279 = org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
org$frostlanguage$frostc$ASTNode* $tmp4280 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
*(&local4) = $tmp4279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
// unreffing REF($101:org.frostlanguage.frostc.ASTNode?)
// line 2019
org$frostlanguage$frostc$ASTNode* $tmp4281 = *(&local4);
frost$core$Bit $tmp4282 = frost$core$Bit$init$builtin_bit($tmp4281 == NULL);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block13; else goto block14;
block13:;
// line 2020
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4284 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
// unreffing returnType
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4285 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
// unreffing params
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2024
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4286 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2026
org$frostlanguage$frostc$FixedArray* $tmp4287 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
org$frostlanguage$frostc$FixedArray* $tmp4288 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
*(&local5) = $tmp4287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
// unreffing REF($142:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2027
org$frostlanguage$frostc$FixedArray* $tmp4289 = *(&local5);
frost$core$Bit $tmp4290 = frost$core$Bit$init$builtin_bit($tmp4289 == NULL);
bool $tmp4291 = $tmp4290.value;
if ($tmp4291) goto block15; else goto block16;
block15:;
// line 2028
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4292 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
// unreffing body
*(&local5) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
// unreffing returnType
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4294 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
// unreffing params
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 2030
org$frostlanguage$frostc$ASTNode* $tmp4295 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4296 = (frost$core$Int64) {29};
org$frostlanguage$frostc$parser$Token$nullable $tmp4297 = *(&local1);
org$frostlanguage$frostc$Position $tmp4298 = ((org$frostlanguage$frostc$parser$Token) $tmp4297.value).position;
org$frostlanguage$frostc$FixedArray* $tmp4299 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp4299);
org$frostlanguage$frostc$MethodDecl$Kind $tmp4300 = *(&local0);
org$frostlanguage$frostc$parser$Token$nullable $tmp4301 = *(&local2);
frost$core$String* $tmp4302 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4301.value));
org$frostlanguage$frostc$FixedArray* $tmp4303 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp4304 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp4305 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp4295, $tmp4296, $tmp4298, ((org$frostlanguage$frostc$ASTNode*) NULL), $tmp4299, $tmp4300, $tmp4302, ((org$frostlanguage$frostc$FixedArray*) NULL), $tmp4303, $tmp4304, $tmp4305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
// unreffing REF($190:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
// unreffing REF($184:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
// unreffing REF($179:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp4306 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
// unreffing body
*(&local5) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4307 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
// unreffing returnType
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
// unreffing params
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp4295;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$statement$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
// line 2039
org$frostlanguage$frostc$parser$Token $tmp4309 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4310 = $tmp4309.kind;
frost$core$Int64 $tmp4311 = $tmp4310.$rawValue;
frost$core$Int64 $tmp4312 = (frost$core$Int64) {37};
frost$core$Bit $tmp4313 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4312);
bool $tmp4314 = $tmp4313.value;
if ($tmp4314) goto block2; else goto block3;
block2:;
// line 2040
org$frostlanguage$frostc$ASTNode* $tmp4315 = org$frostlanguage$frostc$parser$Parser$ifStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
// unreffing REF($9:org.frostlanguage.frostc.ASTNode?)
return $tmp4315;
block3:;
frost$core$Int64 $tmp4316 = (frost$core$Int64) {33};
frost$core$Bit $tmp4317 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4316);
bool $tmp4318 = $tmp4317.value;
if ($tmp4318) goto block4; else goto block5;
block4:;
// line 2041
org$frostlanguage$frostc$ASTNode* $tmp4319 = org$frostlanguage$frostc$parser$Parser$forLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
// unreffing REF($21:org.frostlanguage.frostc.ASTNode?)
return $tmp4319;
block5:;
frost$core$Int64 $tmp4320 = (frost$core$Int64) {32};
frost$core$Bit $tmp4321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4320);
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block6; else goto block7;
block6:;
// line 2042
org$frostlanguage$frostc$ASTNode* $tmp4323 = org$frostlanguage$frostc$parser$Parser$whileLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
// unreffing REF($33:org.frostlanguage.frostc.ASTNode?)
return $tmp4323;
block7:;
frost$core$Int64 $tmp4324 = (frost$core$Int64) {31};
frost$core$Bit $tmp4325 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4324);
bool $tmp4326 = $tmp4325.value;
if ($tmp4326) goto block8; else goto block9;
block8:;
// line 2043
org$frostlanguage$frostc$ASTNode* $tmp4327 = org$frostlanguage$frostc$parser$Parser$doLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
// unreffing REF($45:org.frostlanguage.frostc.ASTNode?)
return $tmp4327;
block9:;
frost$core$Int64 $tmp4328 = (frost$core$Int64) {36};
frost$core$Bit $tmp4329 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4328);
bool $tmp4330 = $tmp4329.value;
if ($tmp4330) goto block10; else goto block11;
block10:;
// line 2044
org$frostlanguage$frostc$ASTNode* $tmp4331 = org$frostlanguage$frostc$parser$Parser$loopLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
// unreffing REF($57:org.frostlanguage.frostc.ASTNode?)
return $tmp4331;
block11:;
frost$core$Int64 $tmp4332 = (frost$core$Int64) {45};
frost$core$Bit $tmp4333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4332);
bool $tmp4334 = $tmp4333.value;
if ($tmp4334) goto block12; else goto block13;
block12:;
// line 2045
org$frostlanguage$frostc$ASTNode* $tmp4335 = org$frostlanguage$frostc$parser$Parser$assertStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
// unreffing REF($69:org.frostlanguage.frostc.ASTNode?)
return $tmp4335;
block13:;
frost$core$Int64 $tmp4336 = (frost$core$Int64) {39};
frost$core$Bit $tmp4337 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4336);
bool $tmp4338 = $tmp4337.value;
if ($tmp4338) goto block14; else goto block15;
block14:;
// line 2046
org$frostlanguage$frostc$ASTNode* $tmp4339 = org$frostlanguage$frostc$parser$Parser$matchStatement$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
// unreffing REF($81:org.frostlanguage.frostc.ASTNode?)
return $tmp4339;
block15:;
frost$core$Int64 $tmp4340 = (frost$core$Int64) {100};
frost$core$Bit $tmp4341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4340);
bool $tmp4342 = $tmp4341.value;
if ($tmp4342) goto block16; else goto block17;
block16:;
// line 2047
org$frostlanguage$frostc$ASTNode* $tmp4343 = org$frostlanguage$frostc$parser$Parser$block$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
// unreffing REF($93:org.frostlanguage.frostc.ASTNode?)
return $tmp4343;
block17:;
frost$core$Int64 $tmp4344 = (frost$core$Int64) {49};
frost$core$Bit $tmp4345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4344);
bool $tmp4346 = $tmp4345.value;
if ($tmp4346) goto block18; else goto block19;
block18:;
// line 2049
org$frostlanguage$frostc$parser$Token $tmp4347 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp4347;
// line 2050
frost$core$Int64 $tmp4348 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4349 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4348);
org$frostlanguage$frostc$parser$Token$nullable $tmp4350 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4349);
*(&local1) = $tmp4350;
// line 2051
org$frostlanguage$frostc$parser$Token$nullable $tmp4351 = *(&local1);
frost$core$Bit $tmp4352 = frost$core$Bit$init$builtin_bit($tmp4351.nonnull);
bool $tmp4353 = $tmp4352.value;
if ($tmp4353) goto block20; else goto block21;
block20:;
// line 2052
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp4354 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp4355 = *$tmp4354;
frost$core$Bit $tmp4356 = frost$core$Bit$init$builtin_bit($tmp4355 != NULL);
bool $tmp4357 = $tmp4356.value;
if ($tmp4357) goto block22; else goto block23;
block22:;
// line 2053
org$frostlanguage$frostc$parser$Token$nullable $tmp4358 = *(&local1);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4358.value));
// line 2054
org$frostlanguage$frostc$parser$Token $tmp4359 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp4359);
// line 2055
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp4360 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp4361 = *$tmp4360;
frost$core$Int64 $tmp4362 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4363 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4362);
$fn4365 $tmp4364 = ($fn4365) $tmp4361->$class->vtable[3];
$tmp4364($tmp4361, $tmp4363);
// line 2056
org$frostlanguage$frostc$parser$Token $tmp4366 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 2057
org$frostlanguage$frostc$parser$Token $tmp4367 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 2058
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp4368 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp4369 = *$tmp4368;
frost$core$Int64 $tmp4370 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4371 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4370);
$fn4373 $tmp4372 = ($fn4373) $tmp4369->$class->vtable[4];
$tmp4372($tmp4369, $tmp4371);
goto block23;
block23:;
// line 2060
org$frostlanguage$frostc$parser$Token $tmp4374 = *(&local0);
frost$core$String* $tmp4375 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp4374);
org$frostlanguage$frostc$ASTNode* $tmp4376 = org$frostlanguage$frostc$parser$Parser$anyLoop$frost$core$String$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp4375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
// unreffing REF($157:org.frostlanguage.frostc.ASTNode?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
// unreffing REF($155:frost.core.String)
return $tmp4376;
block21:;
// line 2062
org$frostlanguage$frostc$parser$Token $tmp4377 = *(&local0);
org$frostlanguage$frostc$parser$Parser$pushback$org$frostlanguage$frostc$parser$Token(param0, $tmp4377);
// line 2063
org$frostlanguage$frostc$ASTNode* $tmp4378 = org$frostlanguage$frostc$parser$Parser$expressionOrAssignment$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
// unreffing REF($171:org.frostlanguage.frostc.ASTNode?)
return $tmp4378;
block19:;
frost$core$Int64 $tmp4379 = (frost$core$Int64) {47};
frost$core$Bit $tmp4380 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4379);
bool $tmp4381 = $tmp4380.value;
if ($tmp4381) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp4382 = (frost$core$Int64) {48};
frost$core$Bit $tmp4383 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4382);
bool $tmp4384 = $tmp4383.value;
if ($tmp4384) goto block24; else goto block26;
block24:;
// line 2066
org$frostlanguage$frostc$ASTNode* $tmp4385 = org$frostlanguage$frostc$parser$Parser$expressionOrAssignment$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
// unreffing REF($187:org.frostlanguage.frostc.ASTNode?)
return $tmp4385;
block26:;
frost$core$Int64 $tmp4386 = (frost$core$Int64) {24};
frost$core$Bit $tmp4387 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4386);
bool $tmp4388 = $tmp4387.value;
if ($tmp4388) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp4389 = (frost$core$Int64) {25};
frost$core$Bit $tmp4390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4389);
bool $tmp4391 = $tmp4390.value;
if ($tmp4391) goto block27; else goto block29;
block29:;
frost$core$Int64 $tmp4392 = (frost$core$Int64) {26};
frost$core$Bit $tmp4393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4392);
bool $tmp4394 = $tmp4393.value;
if ($tmp4394) goto block27; else goto block30;
block30:;
frost$core$Int64 $tmp4395 = (frost$core$Int64) {27};
frost$core$Bit $tmp4396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4395);
bool $tmp4397 = $tmp4396.value;
if ($tmp4397) goto block27; else goto block31;
block27:;
// line 2069
org$frostlanguage$frostc$ASTNode* $tmp4398 = org$frostlanguage$frostc$parser$Parser$varDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
// unreffing REF($211:org.frostlanguage.frostc.ASTNode?)
return $tmp4398;
block31:;
frost$core$Int64 $tmp4399 = (frost$core$Int64) {23};
frost$core$Bit $tmp4400 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4399);
bool $tmp4401 = $tmp4400.value;
if ($tmp4401) goto block32; else goto block33;
block32:;
// line 2072
org$frostlanguage$frostc$ASTNode* $tmp4402 = org$frostlanguage$frostc$parser$Parser$initCall$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
// unreffing REF($223:org.frostlanguage.frostc.ASTNode?)
return $tmp4402;
block33:;
frost$core$Int64 $tmp4403 = (frost$core$Int64) {22};
frost$core$Bit $tmp4404 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4403);
bool $tmp4405 = $tmp4404.value;
if ($tmp4405) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4406 = (frost$core$Int64) {21};
frost$core$Bit $tmp4407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4311, $tmp4406);
bool $tmp4408 = $tmp4407.value;
if ($tmp4408) goto block34; else goto block36;
block34:;
// line 2075
org$frostlanguage$frostc$ASTNode* $tmp4409 = org$frostlanguage$frostc$parser$Parser$innerMethod$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
// unreffing REF($239:org.frostlanguage.frostc.ASTNode?)
return $tmp4409;
block36:;
// line 2079
frost$core$Int64 $tmp4410 = (frost$core$Int64) {37};
org$frostlanguage$frostc$parser$Token$Kind $tmp4411 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4410);
org$frostlanguage$frostc$parser$Token$nullable $tmp4412 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4411, &$s4413);
// line 2080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block1:;
frost$core$Bit $tmp4414 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4415 = $tmp4414.value;
if ($tmp4415) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp4416 = (frost$core$Int64) {2038};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4417, $tmp4416, &$s4418);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$packageDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2089
frost$core$Int64 $tmp4419 = (frost$core$Int64) {15};
org$frostlanguage$frostc$parser$Token$Kind $tmp4420 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4419);
org$frostlanguage$frostc$parser$Token$nullable $tmp4421 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4420, &$s4422);
*(&local0) = $tmp4421;
// line 2090
org$frostlanguage$frostc$parser$Token$nullable $tmp4423 = *(&local0);
frost$core$Bit $tmp4424 = frost$core$Bit$init$builtin_bit(!$tmp4423.nonnull);
bool $tmp4425 = $tmp4424.value;
if ($tmp4425) goto block1; else goto block2;
block1:;
// line 2091
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2093
frost$core$Int64 $tmp4426 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4427 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4426);
org$frostlanguage$frostc$parser$Token$nullable $tmp4428 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4427, &$s4429);
*(&local1) = $tmp4428;
// line 2094
org$frostlanguage$frostc$parser$Token$nullable $tmp4430 = *(&local1);
frost$core$Bit $tmp4431 = frost$core$Bit$init$builtin_bit(!$tmp4430.nonnull);
bool $tmp4432 = $tmp4431.value;
if ($tmp4432) goto block3; else goto block4;
block3:;
// line 2095
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2097
frost$core$MutableString* $tmp4433 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlanguage$frostc$parser$Token$nullable $tmp4434 = *(&local1);
frost$core$String* $tmp4435 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4434.value));
frost$core$MutableString$init$frost$core$String($tmp4433, $tmp4435);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
frost$core$MutableString* $tmp4436 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4436));
*(&local2) = $tmp4433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
// unreffing REF($31:frost.core.MutableString)
// line 2098
goto block5;
block5:;
// line 2099
frost$core$Int64 $tmp4437 = (frost$core$Int64) {99};
org$frostlanguage$frostc$parser$Token$Kind $tmp4438 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4437);
org$frostlanguage$frostc$parser$Token$nullable $tmp4439 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4438);
*(&local1) = $tmp4439;
// line 2100
org$frostlanguage$frostc$parser$Token$nullable $tmp4440 = *(&local1);
frost$core$Bit $tmp4441 = frost$core$Bit$init$builtin_bit(!$tmp4440.nonnull);
bool $tmp4442 = $tmp4441.value;
if ($tmp4442) goto block7; else goto block8;
block7:;
// line 2101
goto block6;
block8:;
// line 2103
frost$core$MutableString* $tmp4443 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4443, &$s4444);
// line 2104
frost$core$Int64 $tmp4445 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4446 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4445);
org$frostlanguage$frostc$parser$Token$nullable $tmp4447 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4446, &$s4448);
*(&local1) = $tmp4447;
// line 2105
org$frostlanguage$frostc$parser$Token$nullable $tmp4449 = *(&local1);
frost$core$Bit $tmp4450 = frost$core$Bit$init$builtin_bit(!$tmp4449.nonnull);
bool $tmp4451 = $tmp4450.value;
if ($tmp4451) goto block9; else goto block10;
block9:;
// line 2106
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 2108
frost$core$MutableString* $tmp4453 = *(&local2);
org$frostlanguage$frostc$parser$Token$nullable $tmp4454 = *(&local1);
frost$core$String* $tmp4455 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4454.value));
frost$core$MutableString$append$frost$core$String($tmp4453, $tmp4455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
// unreffing REF($91:frost.core.String)
goto block5;
block6:;
// line 2110
org$frostlanguage$frostc$ASTNode* $tmp4456 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4457 = (frost$core$Int64) {33};
org$frostlanguage$frostc$parser$Token$nullable $tmp4458 = *(&local0);
org$frostlanguage$frostc$Position $tmp4459 = ((org$frostlanguage$frostc$parser$Token) $tmp4458.value).position;
frost$core$MutableString* $tmp4460 = *(&local2);
frost$core$String* $tmp4461 = frost$core$MutableString$finish$R$frost$core$String($tmp4460);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4456, $tmp4457, $tmp4459, $tmp4461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
// unreffing REF($104:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4456));
// unreffing REF($98:org.frostlanguage.frostc.ASTNode)
frost$core$MutableString* $tmp4462 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4456;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$usesDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
frost$core$MutableString* local2 = NULL;
// line 2117
frost$core$Int64 $tmp4463 = (frost$core$Int64) {16};
org$frostlanguage$frostc$parser$Token$Kind $tmp4464 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4463);
org$frostlanguage$frostc$parser$Token$nullable $tmp4465 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4464, &$s4466);
*(&local0) = $tmp4465;
// line 2118
org$frostlanguage$frostc$parser$Token$nullable $tmp4467 = *(&local0);
frost$core$Bit $tmp4468 = frost$core$Bit$init$builtin_bit(!$tmp4467.nonnull);
bool $tmp4469 = $tmp4468.value;
if ($tmp4469) goto block1; else goto block2;
block1:;
// line 2119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2121
frost$core$Int64 $tmp4470 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4471 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4470);
org$frostlanguage$frostc$parser$Token$nullable $tmp4472 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4471, &$s4473);
*(&local1) = $tmp4472;
// line 2122
org$frostlanguage$frostc$parser$Token$nullable $tmp4474 = *(&local1);
frost$core$Bit $tmp4475 = frost$core$Bit$init$builtin_bit(!$tmp4474.nonnull);
bool $tmp4476 = $tmp4475.value;
if ($tmp4476) goto block3; else goto block4;
block3:;
// line 2123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2125
frost$core$MutableString* $tmp4477 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlanguage$frostc$parser$Token$nullable $tmp4478 = *(&local1);
frost$core$String* $tmp4479 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4478.value));
frost$core$MutableString$init$frost$core$String($tmp4477, $tmp4479);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$MutableString* $tmp4480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
*(&local2) = $tmp4477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
// unreffing REF($31:frost.core.MutableString)
// line 2126
goto block5;
block5:;
// line 2127
frost$core$Int64 $tmp4481 = (frost$core$Int64) {99};
org$frostlanguage$frostc$parser$Token$Kind $tmp4482 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4481);
org$frostlanguage$frostc$parser$Token$nullable $tmp4483 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4482);
*(&local1) = $tmp4483;
// line 2128
org$frostlanguage$frostc$parser$Token$nullable $tmp4484 = *(&local1);
frost$core$Bit $tmp4485 = frost$core$Bit$init$builtin_bit(!$tmp4484.nonnull);
bool $tmp4486 = $tmp4485.value;
if ($tmp4486) goto block7; else goto block8;
block7:;
// line 2129
goto block6;
block8:;
// line 2131
frost$core$MutableString* $tmp4487 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp4487, &$s4488);
// line 2132
frost$core$Int64 $tmp4489 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4490 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4489);
org$frostlanguage$frostc$parser$Token$nullable $tmp4491 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4490, &$s4492);
*(&local1) = $tmp4491;
// line 2133
org$frostlanguage$frostc$parser$Token$nullable $tmp4493 = *(&local1);
frost$core$Bit $tmp4494 = frost$core$Bit$init$builtin_bit(!$tmp4493.nonnull);
bool $tmp4495 = $tmp4494.value;
if ($tmp4495) goto block9; else goto block10;
block9:;
// line 2134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4496 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block10:;
// line 2136
frost$core$MutableString* $tmp4497 = *(&local2);
org$frostlanguage$frostc$parser$Token$nullable $tmp4498 = *(&local1);
frost$core$String* $tmp4499 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4498.value));
frost$core$MutableString$append$frost$core$String($tmp4497, $tmp4499);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
// unreffing REF($91:frost.core.String)
goto block5;
block6:;
// line 2138
org$frostlanguage$frostc$ASTNode* $tmp4500 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4501 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$nullable $tmp4502 = *(&local0);
org$frostlanguage$frostc$Position $tmp4503 = ((org$frostlanguage$frostc$parser$Token) $tmp4502.value).position;
frost$core$MutableString* $tmp4504 = *(&local2);
frost$core$String* $tmp4505 = frost$core$MutableString$finish$R$frost$core$String($tmp4504);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4500, $tmp4501, $tmp4503, $tmp4505);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4505));
// unreffing REF($104:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
// unreffing REF($98:org.frostlanguage.frostc.ASTNode)
frost$core$MutableString* $tmp4506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
// unreffing name
*(&local2) = ((frost$core$MutableString*) NULL);
return $tmp4500;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
frost$collections$Array* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
// line 2145
frost$core$Int64 $tmp4507 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp4508 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4507);
org$frostlanguage$frostc$parser$Token$nullable $tmp4509 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4508, &$s4510);
*(&local0) = $tmp4509;
// line 2146
org$frostlanguage$frostc$parser$Token$nullable $tmp4511 = *(&local0);
frost$core$Bit $tmp4512 = frost$core$Bit$init$builtin_bit(!$tmp4511.nonnull);
bool $tmp4513 = $tmp4512.value;
if ($tmp4513) goto block1; else goto block2;
block1:;
// line 2147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block2:;
// line 2149
frost$core$Int64 $tmp4514 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4515 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4514);
org$frostlanguage$frostc$parser$Token$nullable $tmp4516 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4515, &$s4517);
*(&local1) = $tmp4516;
// line 2150
org$frostlanguage$frostc$parser$Token$nullable $tmp4518 = *(&local1);
frost$core$Bit $tmp4519 = frost$core$Bit$init$builtin_bit(!$tmp4518.nonnull);
bool $tmp4520 = $tmp4519.value;
if ($tmp4520) goto block3; else goto block4;
block3:;
// line 2151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block4:;
// line 2153
frost$collections$Array* $tmp4521 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4521);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$collections$Array* $tmp4522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
*(&local2) = $tmp4521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
// unreffing REF($31:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2154
frost$core$Int64 $tmp4523 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4524 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4523);
org$frostlanguage$frostc$parser$Token$nullable $tmp4525 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4524);
frost$core$Bit $tmp4526 = frost$core$Bit$init$builtin_bit($tmp4525.nonnull);
bool $tmp4527 = $tmp4526.value;
if ($tmp4527) goto block5; else goto block7;
block5:;
// line 2155
org$frostlanguage$frostc$ASTNode* $tmp4528 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
org$frostlanguage$frostc$ASTNode* $tmp4529 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
*(&local3) = $tmp4528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
// unreffing REF($53:org.frostlanguage.frostc.ASTNode?)
// line 2156
org$frostlanguage$frostc$ASTNode* $tmp4530 = *(&local3);
frost$core$Bit $tmp4531 = frost$core$Bit$init$builtin_bit($tmp4530 == NULL);
bool $tmp4532 = $tmp4531.value;
if ($tmp4532) goto block8; else goto block9;
block8:;
// line 2157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4533 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
// unreffing t
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4534 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block9:;
// line 2159
frost$collections$Array* $tmp4535 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4536 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4537 = (frost$core$Int64) {47};
org$frostlanguage$frostc$parser$Token$nullable $tmp4538 = *(&local1);
org$frostlanguage$frostc$Position $tmp4539 = ((org$frostlanguage$frostc$parser$Token) $tmp4538.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4540 = *(&local1);
frost$core$String* $tmp4541 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4540.value));
org$frostlanguage$frostc$ASTNode* $tmp4542 = *(&local3);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q($tmp4536, $tmp4537, $tmp4539, $tmp4541, $tmp4542);
frost$collections$Array$add$frost$collections$Array$T($tmp4535, ((frost$core$Object*) $tmp4536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4536));
// unreffing REF($87:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4543 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
// unreffing t
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2162
frost$collections$Array* $tmp4544 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4545 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4546 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$nullable $tmp4547 = *(&local1);
org$frostlanguage$frostc$Position $tmp4548 = ((org$frostlanguage$frostc$parser$Token) $tmp4547.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4549 = *(&local1);
frost$core$String* $tmp4550 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4549.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4545, $tmp4546, $tmp4548, $tmp4550);
frost$collections$Array$add$frost$collections$Array$T($tmp4544, ((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
// unreffing REF($115:org.frostlanguage.frostc.ASTNode)
goto block6;
block6:;
// line 2164
goto block10;
block10:;
frost$core$Int64 $tmp4551 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp4552 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4551);
org$frostlanguage$frostc$parser$Token$nullable $tmp4553 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4552);
frost$core$Bit $tmp4554 = frost$core$Bit$init$builtin_bit($tmp4553.nonnull);
bool $tmp4555 = $tmp4554.value;
if ($tmp4555) goto block11; else goto block12;
block11:;
// line 2165
frost$core$Int64 $tmp4556 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4557 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4556);
org$frostlanguage$frostc$parser$Token$nullable $tmp4558 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4557, &$s4559);
*(&local1) = $tmp4558;
// line 2166
org$frostlanguage$frostc$parser$Token$nullable $tmp4560 = *(&local1);
frost$core$Bit $tmp4561 = frost$core$Bit$init$builtin_bit(!$tmp4560.nonnull);
bool $tmp4562 = $tmp4561.value;
if ($tmp4562) goto block13; else goto block14;
block13:;
// line 2167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4563 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4563));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block14:;
// line 2169
frost$core$Int64 $tmp4564 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4565 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4564);
org$frostlanguage$frostc$parser$Token$nullable $tmp4566 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4565);
frost$core$Bit $tmp4567 = frost$core$Bit$init$builtin_bit($tmp4566.nonnull);
bool $tmp4568 = $tmp4567.value;
if ($tmp4568) goto block15; else goto block17;
block15:;
// line 2170
org$frostlanguage$frostc$ASTNode* $tmp4569 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
org$frostlanguage$frostc$ASTNode* $tmp4570 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local4) = $tmp4569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
// unreffing REF($171:org.frostlanguage.frostc.ASTNode?)
// line 2171
org$frostlanguage$frostc$ASTNode* $tmp4571 = *(&local4);
frost$core$Bit $tmp4572 = frost$core$Bit$init$builtin_bit($tmp4571 == NULL);
bool $tmp4573 = $tmp4572.value;
if ($tmp4573) goto block18; else goto block19;
block18:;
// line 2172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4574 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block19:;
// line 2174
frost$collections$Array* $tmp4576 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4577 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4578 = (frost$core$Int64) {47};
org$frostlanguage$frostc$parser$Token$nullable $tmp4579 = *(&local1);
org$frostlanguage$frostc$Position $tmp4580 = ((org$frostlanguage$frostc$parser$Token) $tmp4579.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4581 = *(&local1);
frost$core$String* $tmp4582 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4581.value));
org$frostlanguage$frostc$ASTNode* $tmp4583 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode$Q($tmp4577, $tmp4578, $tmp4580, $tmp4582, $tmp4583);
frost$collections$Array$add$frost$collections$Array$T($tmp4576, ((frost$core$Object*) $tmp4577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4582));
// unreffing REF($212:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
// unreffing REF($205:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2177
frost$collections$Array* $tmp4585 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4586 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4587 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$nullable $tmp4588 = *(&local1);
org$frostlanguage$frostc$Position $tmp4589 = ((org$frostlanguage$frostc$parser$Token) $tmp4588.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4590 = *(&local1);
frost$core$String* $tmp4591 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4590.value));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4586, $tmp4587, $tmp4589, $tmp4591);
frost$collections$Array$add$frost$collections$Array$T($tmp4585, ((frost$core$Object*) $tmp4586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4586));
// unreffing REF($233:org.frostlanguage.frostc.ASTNode)
goto block16;
block16:;
goto block10;
block12:;
// line 2180
frost$core$Int64 $tmp4592 = (frost$core$Int64) {64};
org$frostlanguage$frostc$parser$Token$Kind $tmp4593 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4592);
org$frostlanguage$frostc$parser$Token$nullable $tmp4594 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4593, &$s4595);
frost$core$Bit $tmp4596 = frost$core$Bit$init$builtin_bit(!$tmp4594.nonnull);
bool $tmp4597 = $tmp4596.value;
if ($tmp4597) goto block20; else goto block21;
block20:;
// line 2181
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
frost$collections$Array* $tmp4598 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block21:;
// line 2183
frost$collections$Array* $tmp4599 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp4600 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4600));
// unreffing REF($272:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$collections$Array* $tmp4601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4601));
// unreffing parameters
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp4600;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$supertypes$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 2190
frost$core$Int64 $tmp4602 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4603 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4602);
org$frostlanguage$frostc$parser$Token$nullable $tmp4604 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4603, &$s4605);
*(&local0) = $tmp4604;
// line 2191
org$frostlanguage$frostc$parser$Token$nullable $tmp4606 = *(&local0);
frost$core$Bit $tmp4607 = frost$core$Bit$init$builtin_bit(!$tmp4606.nonnull);
bool $tmp4608 = $tmp4607.value;
if ($tmp4608) goto block1; else goto block2;
block1:;
// line 2192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block2:;
// line 2194
frost$collections$Array* $tmp4609 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4609);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4609));
frost$collections$Array* $tmp4610 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4610));
*(&local1) = $tmp4609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4609));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2195
org$frostlanguage$frostc$ASTNode* $tmp4611 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
org$frostlanguage$frostc$ASTNode* $tmp4612 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
*(&local2) = $tmp4611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
// unreffing REF($30:org.frostlanguage.frostc.ASTNode?)
// line 2196
org$frostlanguage$frostc$ASTNode* $tmp4613 = *(&local2);
frost$core$Bit $tmp4614 = frost$core$Bit$init$builtin_bit($tmp4613 == NULL);
bool $tmp4615 = $tmp4614.value;
if ($tmp4615) goto block3; else goto block4;
block3:;
// line 2197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4616 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4617 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block4:;
// line 2199
frost$collections$Array* $tmp4618 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4619 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4618, ((frost$core$Object*) $tmp4619));
// line 2200
goto block5;
block5:;
frost$core$Int64 $tmp4620 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp4621 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4620);
org$frostlanguage$frostc$parser$Token$nullable $tmp4622 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4621);
frost$core$Bit $tmp4623 = frost$core$Bit$init$builtin_bit($tmp4622.nonnull);
bool $tmp4624 = $tmp4623.value;
if ($tmp4624) goto block6; else goto block7;
block6:;
// line 2201
org$frostlanguage$frostc$ASTNode* $tmp4625 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
org$frostlanguage$frostc$ASTNode* $tmp4626 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
*(&local2) = $tmp4625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
// unreffing REF($78:org.frostlanguage.frostc.ASTNode?)
// line 2202
org$frostlanguage$frostc$ASTNode* $tmp4627 = *(&local2);
frost$core$Bit $tmp4628 = frost$core$Bit$init$builtin_bit($tmp4627 == NULL);
bool $tmp4629 = $tmp4628.value;
if ($tmp4629) goto block8; else goto block9;
block8:;
// line 2203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block9:;
// line 2205
frost$collections$Array* $tmp4632 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4633 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4632, ((frost$core$Object*) $tmp4633));
goto block5;
block7:;
// line 2207
frost$collections$Array* $tmp4634 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp4635 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
// unreffing REF($119:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
org$frostlanguage$frostc$ASTNode* $tmp4636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
// unreffing t
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4635;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$annotation$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$core$String* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$parser$Token$nullable local3;
org$frostlanguage$frostc$parser$Token$nullable local4;
// line 2214
frost$core$Int64 $tmp4638 = (frost$core$Int64) {14};
org$frostlanguage$frostc$parser$Token$Kind $tmp4639 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4638);
org$frostlanguage$frostc$parser$Token$nullable $tmp4640 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4639, &$s4641);
*(&local0) = $tmp4640;
// line 2215
*(&local1) = ((frost$core$String*) NULL);
// line 2216
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2217
frost$core$Int64 $tmp4643 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp4644 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4643);
org$frostlanguage$frostc$parser$Token$nullable $tmp4645 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4644);
*(&local3) = $tmp4645;
// line 2218
org$frostlanguage$frostc$parser$Token$nullable $tmp4646 = *(&local3);
frost$core$Bit $tmp4647 = frost$core$Bit$init$builtin_bit($tmp4646.nonnull);
bool $tmp4648 = $tmp4647.value;
if ($tmp4648) goto block1; else goto block2;
block1:;
// line 2219
org$frostlanguage$frostc$ASTNode* $tmp4649 = org$frostlanguage$frostc$parser$Parser$expression$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
org$frostlanguage$frostc$ASTNode* $tmp4650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
*(&local2) = $tmp4649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
// unreffing REF($27:org.frostlanguage.frostc.ASTNode?)
// line 2220
org$frostlanguage$frostc$ASTNode* $tmp4651 = *(&local2);
frost$core$Bit $tmp4652 = frost$core$Bit$init$builtin_bit($tmp4651 == NULL);
bool $tmp4653 = $tmp4652.value;
if ($tmp4653) goto block3; else goto block4;
block3:;
// line 2221
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4654));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp4655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
// unreffing exprText
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2223
frost$core$Int64 $tmp4656 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp4657 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4656);
org$frostlanguage$frostc$parser$Token$nullable $tmp4658 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4657, &$s4659);
*(&local4) = $tmp4658;
// line 2224
org$frostlanguage$frostc$parser$Token$nullable $tmp4660 = *(&local4);
frost$core$Bit $tmp4661 = frost$core$Bit$init$builtin_bit(!$tmp4660.nonnull);
bool $tmp4662 = $tmp4661.value;
if ($tmp4662) goto block5; else goto block6;
block5:;
// line 2225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp4664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
// unreffing exprText
*(&local1) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 2227
frost$core$String** $tmp4665 = &param0->source;
frost$core$String* $tmp4666 = *$tmp4665;
frost$core$String** $tmp4667 = &param0->source;
frost$core$String* $tmp4668 = *$tmp4667;
org$frostlanguage$frostc$parser$Token$nullable $tmp4669 = *(&local3);
frost$core$String$Index $tmp4670 = ((org$frostlanguage$frostc$parser$Token) $tmp4669.value).start;
frost$core$String$Index $tmp4671 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4668, $tmp4670);
org$frostlanguage$frostc$parser$Token$nullable $tmp4672 = *(&local4);
frost$core$String$Index $tmp4673 = ((org$frostlanguage$frostc$parser$Token) $tmp4672.value).start;
frost$core$Bit $tmp4674 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp4675 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp4671, $tmp4673, $tmp4674);
frost$core$String* $tmp4676 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp4666, $tmp4675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
frost$core$String* $tmp4677 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
*(&local1) = $tmp4676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
// unreffing REF($96:frost.core.String)
goto block2;
block2:;
// line 2229
org$frostlanguage$frostc$ASTNode* $tmp4678 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4679 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$nullable $tmp4680 = *(&local0);
org$frostlanguage$frostc$Position $tmp4681 = ((org$frostlanguage$frostc$parser$Token) $tmp4680.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4682 = *(&local0);
frost$core$String* $tmp4683 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4682.value));
frost$core$String* $tmp4684 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4685 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$Q($tmp4678, $tmp4679, $tmp4681, $tmp4683, $tmp4684, $tmp4685);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
// unreffing REF($116:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
// unreffing REF($109:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4686 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
// unreffing expr
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$String* $tmp4687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
// unreffing exprText
*(&local1) = ((frost$core$String*) NULL);
return $tmp4678;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$annotations$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 2236
frost$collections$Array* $tmp4688 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4688);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
frost$collections$Array* $tmp4689 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local0) = $tmp4688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
// unreffing REF($1:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2237
goto block1;
block1:;
org$frostlanguage$frostc$parser$Token $tmp4690 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4691 = $tmp4690.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4692;
$tmp4692 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4692->value = $tmp4691;
frost$core$Int64 $tmp4693 = (frost$core$Int64) {14};
org$frostlanguage$frostc$parser$Token$Kind $tmp4694 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4693);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4695;
$tmp4695 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4695->value = $tmp4694;
ITable* $tmp4696 = ((frost$core$Equatable*) $tmp4692)->$class->itable;
while ($tmp4696->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4696 = $tmp4696->next;
}
$fn4698 $tmp4697 = $tmp4696->methods[0];
frost$core$Bit $tmp4699 = $tmp4697(((frost$core$Equatable*) $tmp4692), ((frost$core$Equatable*) $tmp4695));
bool $tmp4700 = $tmp4699.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4695)));
// unreffing REF($22:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4692)));
// unreffing REF($18:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4700) goto block2; else goto block3;
block2:;
// line 2238
org$frostlanguage$frostc$ASTNode* $tmp4701 = org$frostlanguage$frostc$parser$Parser$annotation$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
org$frostlanguage$frostc$ASTNode* $tmp4702 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
*(&local1) = $tmp4701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
// unreffing REF($34:org.frostlanguage.frostc.ASTNode?)
// line 2239
org$frostlanguage$frostc$ASTNode* $tmp4703 = *(&local1);
frost$core$Bit $tmp4704 = frost$core$Bit$init$builtin_bit($tmp4703 == NULL);
bool $tmp4705 = $tmp4704.value;
if ($tmp4705) goto block4; else goto block5;
block4:;
// line 2240
org$frostlanguage$frostc$ASTNode* $tmp4706 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
// unreffing a
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block3;
block5:;
// line 2242
frost$collections$Array* $tmp4707 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp4708 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp4707, ((frost$core$Object*) $tmp4708));
org$frostlanguage$frostc$ASTNode* $tmp4709 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
// unreffing a
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 2244
frost$collections$Array* $tmp4710 = *(&local0);
org$frostlanguage$frostc$FixedArray* $tmp4711 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
// unreffing REF($74:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$collections$Array* $tmp4712 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp4711;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$core$MutableString* local1 = NULL;
org$frostlanguage$frostc$parser$Token local2;
// line 2248
frost$core$Int64 $tmp4713 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$Kind $tmp4714 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4713);
org$frostlanguage$frostc$parser$Token$nullable $tmp4715 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4714, &$s4716);
*(&local0) = $tmp4715;
// line 2249
org$frostlanguage$frostc$parser$Token$nullable $tmp4717 = *(&local0);
frost$core$Bit $tmp4718 = frost$core$Bit$init$builtin_bit(!$tmp4717.nonnull);
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block1; else goto block2;
block1:;
// line 2250
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2252
frost$core$MutableString* $tmp4720 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp4720);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
frost$core$MutableString* $tmp4721 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
*(&local1) = $tmp4720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
// unreffing REF($16:frost.core.MutableString)
// line 2253
goto block3;
block3:;
// line 2254
org$frostlanguage$frostc$parser$Token $tmp4722 = org$frostlanguage$frostc$parser$Parser$rawNext$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local2) = $tmp4722;
// line 2255
org$frostlanguage$frostc$parser$Token $tmp4723 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp4724 = $tmp4723.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4725;
$tmp4725 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4725->value = $tmp4724;
frost$core$Int64 $tmp4726 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$Kind $tmp4727 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4726);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4728;
$tmp4728 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4728->value = $tmp4727;
ITable* $tmp4729 = ((frost$core$Equatable*) $tmp4725)->$class->itable;
while ($tmp4729->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4729 = $tmp4729->next;
}
$fn4731 $tmp4730 = $tmp4729->methods[0];
frost$core$Bit $tmp4732 = $tmp4730(((frost$core$Equatable*) $tmp4725), ((frost$core$Equatable*) $tmp4728));
bool $tmp4733 = $tmp4732.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4728)));
// unreffing REF($40:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4725)));
// unreffing REF($36:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4733) goto block5; else goto block6;
block5:;
// line 2256
goto block4;
block6:;
// line 2258
org$frostlanguage$frostc$parser$Token $tmp4734 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind $tmp4735 = $tmp4734.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4736;
$tmp4736 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4736->value = $tmp4735;
frost$core$Int64 $tmp4737 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$Kind $tmp4738 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4737);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4739;
$tmp4739 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4739->value = $tmp4738;
ITable* $tmp4740 = ((frost$core$Equatable*) $tmp4736)->$class->itable;
while ($tmp4740->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4740 = $tmp4740->next;
}
$fn4742 $tmp4741 = $tmp4740->methods[0];
frost$core$Bit $tmp4743 = $tmp4741(((frost$core$Equatable*) $tmp4736), ((frost$core$Equatable*) $tmp4739));
bool $tmp4744 = $tmp4743.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4739)));
// unreffing REF($60:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4736)));
// unreffing REF($56:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4744) goto block7; else goto block8;
block7:;
// line 2259
org$frostlanguage$frostc$parser$Token$nullable $tmp4745 = *(&local0);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4745.value), &$s4746);
// line 2260
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$MutableString* $tmp4747 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 2262
frost$core$MutableString* $tmp4748 = *(&local1);
org$frostlanguage$frostc$parser$Token $tmp4749 = *(&local2);
frost$core$String* $tmp4750 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp4749);
frost$core$MutableString$append$frost$core$String($tmp4748, $tmp4750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
// unreffing REF($87:frost.core.String)
goto block3;
block4:;
// line 2264
org$frostlanguage$frostc$ASTNode* $tmp4751 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4752 = (frost$core$Int64) {41};
org$frostlanguage$frostc$parser$Token$nullable $tmp4753 = *(&local0);
org$frostlanguage$frostc$Position $tmp4754 = ((org$frostlanguage$frostc$parser$Token) $tmp4753.value).position;
frost$core$MutableString* $tmp4755 = *(&local1);
frost$core$String* $tmp4756 = frost$core$MutableString$finish$R$frost$core$String($tmp4755);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp4751, $tmp4752, $tmp4754, $tmp4756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
// unreffing REF($100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
// unreffing REF($94:org.frostlanguage.frostc.ASTNode)
frost$core$MutableString* $tmp4757 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp4751;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$parameter$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 2271
frost$core$Int64 $tmp4758 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4759 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4758);
org$frostlanguage$frostc$parser$Parser$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4759);
// line 2272
frost$core$Int64 $tmp4760 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp4761 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4760);
org$frostlanguage$frostc$parser$Token$nullable $tmp4762 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4761, &$s4763);
*(&local0) = $tmp4762;
// line 2273
frost$core$Int64 $tmp4764 = (frost$core$Int64) {5};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4765 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4764);
org$frostlanguage$frostc$parser$Parser$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4765);
// line 2274
org$frostlanguage$frostc$parser$Token$nullable $tmp4766 = *(&local0);
frost$core$Bit $tmp4767 = frost$core$Bit$init$builtin_bit(!$tmp4766.nonnull);
bool $tmp4768 = $tmp4767.value;
if ($tmp4768) goto block1; else goto block2;
block1:;
// line 2275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2277
org$frostlanguage$frostc$ASTNode* $tmp4769 = org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
org$frostlanguage$frostc$ASTNode* $tmp4770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
*(&local1) = $tmp4769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
// unreffing REF($24:org.frostlanguage.frostc.ASTNode?)
// line 2278
org$frostlanguage$frostc$ASTNode* $tmp4771 = *(&local1);
frost$core$Bit $tmp4772 = frost$core$Bit$init$builtin_bit($tmp4771 == NULL);
bool $tmp4773 = $tmp4772.value;
if ($tmp4773) goto block3; else goto block4;
block3:;
// line 2279
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2281
org$frostlanguage$frostc$ASTNode* $tmp4775 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4776 = (frost$core$Int64) {34};
org$frostlanguage$frostc$parser$Token$nullable $tmp4777 = *(&local0);
org$frostlanguage$frostc$Position $tmp4778 = ((org$frostlanguage$frostc$parser$Token) $tmp4777.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp4779 = *(&local0);
frost$core$String* $tmp4780 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp4779.value));
org$frostlanguage$frostc$ASTNode* $tmp4781 = *(&local1);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String$org$frostlanguage$frostc$ASTNode($tmp4775, $tmp4776, $tmp4778, $tmp4780, $tmp4781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
// unreffing REF($51:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp4782 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4782));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp4775;

}
org$frostlanguage$frostc$FixedArray* org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 2288
frost$core$Int64 $tmp4783 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp4784 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4783);
org$frostlanguage$frostc$parser$Token$nullable $tmp4785 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4784, &$s4786);
*(&local0) = $tmp4785;
// line 2289
org$frostlanguage$frostc$parser$Token$nullable $tmp4787 = *(&local0);
frost$core$Bit $tmp4788 = frost$core$Bit$init$builtin_bit(!$tmp4787.nonnull);
bool $tmp4789 = $tmp4788.value;
if ($tmp4789) goto block1; else goto block2;
block1:;
// line 2290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block2:;
// line 2292
frost$collections$Array* $tmp4790 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4790);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
frost$collections$Array* $tmp4791 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
*(&local1) = $tmp4790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2293
frost$core$Int64 $tmp4792 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp4793 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4792);
org$frostlanguage$frostc$parser$Token$nullable $tmp4794 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4793);
frost$core$Bit $tmp4795 = frost$core$Bit$init$builtin_bit(!$tmp4794.nonnull);
bool $tmp4796 = $tmp4795.value;
if ($tmp4796) goto block3; else goto block4;
block3:;
// line 2294
org$frostlanguage$frostc$ASTNode* $tmp4797 = org$frostlanguage$frostc$parser$Parser$parameter$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
org$frostlanguage$frostc$ASTNode* $tmp4798 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
*(&local2) = $tmp4797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
// unreffing REF($38:org.frostlanguage.frostc.ASTNode?)
// line 2295
org$frostlanguage$frostc$ASTNode* $tmp4799 = *(&local2);
frost$core$Bit $tmp4800 = frost$core$Bit$init$builtin_bit($tmp4799 == NULL);
bool $tmp4801 = $tmp4800.value;
if ($tmp4801) goto block5; else goto block6;
block5:;
// line 2296
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4802 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
// unreffing param
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block6:;
// line 2298
frost$collections$Array* $tmp4804 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4805 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4804, ((frost$core$Object*) $tmp4805));
// line 2299
goto block7;
block7:;
frost$core$Int64 $tmp4806 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp4807 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4806);
org$frostlanguage$frostc$parser$Token$nullable $tmp4808 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4807);
frost$core$Bit $tmp4809 = frost$core$Bit$init$builtin_bit($tmp4808.nonnull);
bool $tmp4810 = $tmp4809.value;
if ($tmp4810) goto block8; else goto block9;
block8:;
// line 2300
org$frostlanguage$frostc$ASTNode* $tmp4811 = org$frostlanguage$frostc$parser$Parser$parameter$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
org$frostlanguage$frostc$ASTNode* $tmp4812 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
*(&local2) = $tmp4811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
// unreffing REF($86:org.frostlanguage.frostc.ASTNode?)
// line 2301
org$frostlanguage$frostc$ASTNode* $tmp4813 = *(&local2);
frost$core$Bit $tmp4814 = frost$core$Bit$init$builtin_bit($tmp4813 == NULL);
bool $tmp4815 = $tmp4814.value;
if ($tmp4815) goto block10; else goto block11;
block10:;
// line 2302
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
// unreffing param
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block11:;
// line 2304
frost$collections$Array* $tmp4818 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp4819 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp4818, ((frost$core$Object*) $tmp4819));
goto block7;
block9:;
// line 2306
frost$core$Int64 $tmp4820 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp4821 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4820);
org$frostlanguage$frostc$parser$Token$nullable $tmp4822 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4821, &$s4823);
frost$core$Bit $tmp4824 = frost$core$Bit$init$builtin_bit(!$tmp4822.nonnull);
bool $tmp4825 = $tmp4824.value;
if ($tmp4825) goto block12; else goto block13;
block12:;
// line 2307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4826 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
// unreffing param
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$FixedArray*) NULL);
block13:;
org$frostlanguage$frostc$ASTNode* $tmp4828 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4828));
// unreffing param
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block4:;
// line 2310
frost$collections$Array* $tmp4829 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp4830 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp4829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
// unreffing REF($155:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$collections$Array* $tmp4831 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp4830;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$methodDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$MethodDecl$Kind local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
frost$core$String* local2 = NULL;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
org$frostlanguage$frostc$FixedArray* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$FixedArray* local6 = NULL;
// line 2318
// line 2319
frost$core$Int64 $tmp4832 = (frost$core$Int64) {21};
org$frostlanguage$frostc$parser$Token$Kind $tmp4833 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4832);
org$frostlanguage$frostc$parser$Token$nullable $tmp4834 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4833);
*(&local1) = $tmp4834;
// line 2320
org$frostlanguage$frostc$parser$Token$nullable $tmp4835 = *(&local1);
frost$core$Bit $tmp4836 = frost$core$Bit$init$builtin_bit(!$tmp4835.nonnull);
bool $tmp4837 = $tmp4836.value;
if ($tmp4837) goto block1; else goto block3;
block1:;
// line 2321
frost$core$Int64 $tmp4838 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$Kind $tmp4839 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4838);
org$frostlanguage$frostc$parser$Token$nullable $tmp4840 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4839, &$s4841);
*(&local1) = $tmp4840;
// line 2322
org$frostlanguage$frostc$parser$Token$nullable $tmp4842 = *(&local1);
frost$core$Bit $tmp4843 = frost$core$Bit$init$builtin_bit(!$tmp4842.nonnull);
bool $tmp4844 = $tmp4843.value;
if ($tmp4844) goto block4; else goto block5;
block4:;
// line 2323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
// line 2325
frost$core$Int64 $tmp4845 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4846 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4845);
*(&local0) = $tmp4846;
goto block2;
block3:;
// line 1
// line 2328
frost$core$Int64 $tmp4847 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4848 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4847);
*(&local0) = $tmp4848;
goto block2;
block2:;
// line 2330
frost$core$Int64 $tmp4849 = (frost$core$Int64) {4};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4850 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4849);
org$frostlanguage$frostc$parser$Parser$open$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4850);
// line 2331
frost$core$String* $tmp4851 = org$frostlanguage$frostc$parser$Parser$methodName$R$frost$core$String$Q(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$String* $tmp4852 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
*(&local2) = $tmp4851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
// unreffing REF($43:frost.core.String?)
// line 2332
frost$core$Int64 $tmp4853 = (frost$core$Int64) {4};
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp4854 = org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp4853);
org$frostlanguage$frostc$parser$Parser$close$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(param0, $tmp4854);
// line 2333
frost$core$String* $tmp4855 = *(&local2);
frost$core$Bit $tmp4856 = frost$core$Bit$init$builtin_bit($tmp4855 == NULL);
bool $tmp4857 = $tmp4856.value;
if ($tmp4857) goto block6; else goto block7;
block6:;
// line 2334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$core$String* $tmp4858 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
// unreffing name
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 2336
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2337
org$frostlanguage$frostc$parser$Token $tmp4859 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4860 = $tmp4859.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4861;
$tmp4861 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4861->value = $tmp4860;
frost$core$Int64 $tmp4862 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp4863 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4862);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4864;
$tmp4864 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4864->value = $tmp4863;
ITable* $tmp4865 = ((frost$core$Equatable*) $tmp4861)->$class->itable;
while ($tmp4865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4865 = $tmp4865->next;
}
$fn4867 $tmp4866 = $tmp4865->methods[0];
frost$core$Bit $tmp4868 = $tmp4866(((frost$core$Equatable*) $tmp4861), ((frost$core$Equatable*) $tmp4864));
bool $tmp4869 = $tmp4868.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4864)));
// unreffing REF($82:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4861)));
// unreffing REF($78:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4869) goto block8; else goto block10;
block8:;
// line 2338
org$frostlanguage$frostc$FixedArray* $tmp4870 = org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
org$frostlanguage$frostc$FixedArray* $tmp4871 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
*(&local3) = $tmp4870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
// unreffing REF($94:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
goto block9;
block10:;
// line 1
// line 2341
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4872 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block9;
block9:;
// line 2343
org$frostlanguage$frostc$FixedArray* $tmp4873 = org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
org$frostlanguage$frostc$FixedArray* $tmp4874 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
*(&local4) = $tmp4873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
// unreffing REF($115:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2344
org$frostlanguage$frostc$FixedArray* $tmp4875 = *(&local4);
frost$core$Bit $tmp4876 = frost$core$Bit$init$builtin_bit($tmp4875 == NULL);
bool $tmp4877 = $tmp4876.value;
if ($tmp4877) goto block11; else goto block12;
block11:;
// line 2345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4878 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
// unreffing params
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4879 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4879));
// unreffing generics
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp4880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
// unreffing name
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block12:;
// line 2347
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2348
org$frostlanguage$frostc$parser$Token $tmp4881 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4882 = $tmp4881.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4883;
$tmp4883 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4883->value = $tmp4882;
frost$core$Int64 $tmp4884 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4885 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4884);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4886;
$tmp4886 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4886->value = $tmp4885;
ITable* $tmp4887 = ((frost$core$Equatable*) $tmp4883)->$class->itable;
while ($tmp4887->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4887 = $tmp4887->next;
}
$fn4889 $tmp4888 = $tmp4887->methods[0];
frost$core$Bit $tmp4890 = $tmp4888(((frost$core$Equatable*) $tmp4883), ((frost$core$Equatable*) $tmp4886));
bool $tmp4891 = $tmp4890.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4886)));
// unreffing REF($160:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4883)));
// unreffing REF($156:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4891) goto block13; else goto block15;
block13:;
// line 2349
org$frostlanguage$frostc$ASTNode* $tmp4892 = org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
org$frostlanguage$frostc$ASTNode* $tmp4893 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local5) = $tmp4892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
// unreffing REF($172:org.frostlanguage.frostc.ASTNode?)
// line 2350
org$frostlanguage$frostc$ASTNode* $tmp4894 = *(&local5);
frost$core$Bit $tmp4895 = frost$core$Bit$init$builtin_bit($tmp4894 == NULL);
bool $tmp4896 = $tmp4895.value;
if ($tmp4896) goto block16; else goto block17;
block16:;
// line 2351
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4897 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
// unreffing returnType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4898 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
// unreffing params
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
// unreffing generics
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp4900 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4900));
// unreffing name
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4901 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block14;
block14:;
// line 2357
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2358
org$frostlanguage$frostc$parser$Token $tmp4902 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4903 = $tmp4902.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4904;
$tmp4904 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4904->value = $tmp4903;
frost$core$Int64 $tmp4905 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp4906 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4905);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4907;
$tmp4907 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4907->value = $tmp4906;
ITable* $tmp4908 = ((frost$core$Equatable*) $tmp4904)->$class->itable;
while ($tmp4908->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4908 = $tmp4908->next;
}
$fn4910 $tmp4909 = $tmp4908->methods[0];
frost$core$Bit $tmp4911 = $tmp4909(((frost$core$Equatable*) $tmp4904), ((frost$core$Equatable*) $tmp4907));
bool $tmp4912 = $tmp4911.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4907)));
// unreffing REF($231:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4904)));
// unreffing REF($227:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4912) goto block18; else goto block20;
block18:;
// line 2359
org$frostlanguage$frostc$FixedArray* $tmp4913 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
org$frostlanguage$frostc$FixedArray* $tmp4914 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
*(&local6) = $tmp4913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
// unreffing REF($243:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2360
org$frostlanguage$frostc$FixedArray* $tmp4915 = *(&local6);
frost$core$Bit $tmp4916 = frost$core$Bit$init$builtin_bit($tmp4915 == NULL);
bool $tmp4917 = $tmp4916.value;
if ($tmp4917) goto block21; else goto block22;
block21:;
// line 2361
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4918 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
// unreffing body
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4919 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
// unreffing returnType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4920 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
// unreffing params
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4921 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
// unreffing generics
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp4922 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
// unreffing name
*(&local2) = ((frost$core$String*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2365
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4923 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block19;
block19:;
// line 2367
org$frostlanguage$frostc$ASTNode* $tmp4924 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4925 = (frost$core$Int64) {29};
org$frostlanguage$frostc$parser$Token$nullable $tmp4926 = *(&local1);
org$frostlanguage$frostc$Position $tmp4927 = ((org$frostlanguage$frostc$parser$Token) $tmp4926.value).position;
org$frostlanguage$frostc$MethodDecl$Kind $tmp4928 = *(&local0);
frost$core$String* $tmp4929 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp4930 = *(&local3);
org$frostlanguage$frostc$FixedArray* $tmp4931 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp4932 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp4933 = *(&local6);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp4924, $tmp4925, $tmp4927, param1, param2, $tmp4928, $tmp4929, $tmp4930, $tmp4931, $tmp4932, $tmp4933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
// unreffing REF($299:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp4934 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
// unreffing body
*(&local6) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4935 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
// unreffing returnType
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4936 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4936));
// unreffing params
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4937 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
// unreffing generics
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$String* $tmp4938 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
// unreffing name
*(&local2) = ((frost$core$String*) NULL);
return $tmp4924;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$anonymousMethod$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$MethodDecl$Kind local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
org$frostlanguage$frostc$FixedArray* local4 = NULL;
// line 2375
// line 2376
frost$core$Int64 $tmp4939 = (frost$core$Int64) {21};
org$frostlanguage$frostc$parser$Token$Kind $tmp4940 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4939);
org$frostlanguage$frostc$parser$Token$nullable $tmp4941 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4940);
*(&local1) = $tmp4941;
// line 2377
org$frostlanguage$frostc$parser$Token$nullable $tmp4942 = *(&local1);
frost$core$Bit $tmp4943 = frost$core$Bit$init$builtin_bit(!$tmp4942.nonnull);
bool $tmp4944 = $tmp4943.value;
if ($tmp4944) goto block1; else goto block3;
block1:;
// line 2378
frost$core$Int64 $tmp4945 = (frost$core$Int64) {22};
org$frostlanguage$frostc$parser$Token$Kind $tmp4946 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4945);
org$frostlanguage$frostc$parser$Token$nullable $tmp4947 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp4946, &$s4948);
*(&local1) = $tmp4947;
// line 2379
org$frostlanguage$frostc$parser$Token$nullable $tmp4949 = *(&local1);
frost$core$Bit $tmp4950 = frost$core$Bit$init$builtin_bit(!$tmp4949.nonnull);
bool $tmp4951 = $tmp4950.value;
if ($tmp4951) goto block4; else goto block5;
block4:;
// line 2380
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
// line 2382
frost$core$Int64 $tmp4952 = (frost$core$Int64) {0};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4953 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4952);
*(&local0) = $tmp4953;
goto block2;
block3:;
// line 1
// line 2385
frost$core$Int64 $tmp4954 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp4955 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4954);
*(&local0) = $tmp4955;
goto block2;
block2:;
// line 2387
org$frostlanguage$frostc$FixedArray* $tmp4956 = org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
org$frostlanguage$frostc$FixedArray* $tmp4957 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4957));
*(&local2) = $tmp4956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
// unreffing REF($39:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2388
org$frostlanguage$frostc$FixedArray* $tmp4958 = *(&local2);
frost$core$Bit $tmp4959 = frost$core$Bit$init$builtin_bit($tmp4958 == NULL);
bool $tmp4960 = $tmp4959.value;
if ($tmp4960) goto block6; else goto block7;
block6:;
// line 2389
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4961 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
// unreffing params
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 2391
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2392
org$frostlanguage$frostc$parser$Token $tmp4962 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp4963 = $tmp4962.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4964;
$tmp4964 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4964->value = $tmp4963;
frost$core$Int64 $tmp4965 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp4966 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp4965);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp4967;
$tmp4967 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp4967->value = $tmp4966;
ITable* $tmp4968 = ((frost$core$Equatable*) $tmp4964)->$class->itable;
while ($tmp4968->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4968 = $tmp4968->next;
}
$fn4970 $tmp4969 = $tmp4968->methods[0];
frost$core$Bit $tmp4971 = $tmp4969(((frost$core$Equatable*) $tmp4964), ((frost$core$Equatable*) $tmp4967));
bool $tmp4972 = $tmp4971.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4967)));
// unreffing REF($74:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4964)));
// unreffing REF($70:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp4972) goto block8; else goto block10;
block8:;
// line 2393
org$frostlanguage$frostc$ASTNode* $tmp4973 = org$frostlanguage$frostc$parser$Parser$typeDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
org$frostlanguage$frostc$ASTNode* $tmp4974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
*(&local3) = $tmp4973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
// unreffing REF($86:org.frostlanguage.frostc.ASTNode?)
// line 2394
org$frostlanguage$frostc$ASTNode* $tmp4975 = *(&local3);
frost$core$Bit $tmp4976 = frost$core$Bit$init$builtin_bit($tmp4975 == NULL);
bool $tmp4977 = $tmp4976.value;
if ($tmp4977) goto block11; else goto block12;
block11:;
// line 2395
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4978 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
// unreffing returnType
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4979 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4979));
// unreffing params
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2399
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp4980 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4980));
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block9;
block9:;
// line 2401
org$frostlanguage$frostc$FixedArray* $tmp4981 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
org$frostlanguage$frostc$FixedArray* $tmp4982 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
*(&local4) = $tmp4981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
// unreffing REF($127:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2402
org$frostlanguage$frostc$FixedArray* $tmp4983 = *(&local4);
frost$core$Bit $tmp4984 = frost$core$Bit$init$builtin_bit($tmp4983 == NULL);
bool $tmp4985 = $tmp4984.value;
if ($tmp4985) goto block13; else goto block14;
block13:;
// line 2403
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp4986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
// unreffing body
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp4987 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
// unreffing returnType
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp4988 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
// unreffing params
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
// line 2405
org$frostlanguage$frostc$ASTNode* $tmp4989 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp4990 = (frost$core$Int64) {29};
org$frostlanguage$frostc$parser$Token$nullable $tmp4991 = *(&local1);
org$frostlanguage$frostc$Position $tmp4992 = ((org$frostlanguage$frostc$parser$Token) $tmp4991.value).position;
org$frostlanguage$frostc$FixedArray* $tmp4993 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp4993);
org$frostlanguage$frostc$MethodDecl$Kind $tmp4994 = *(&local0);
org$frostlanguage$frostc$FixedArray* $tmp4995 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp4996 = *(&local3);
org$frostlanguage$frostc$FixedArray* $tmp4997 = *(&local4);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp4989, $tmp4990, $tmp4992, ((org$frostlanguage$frostc$ASTNode*) NULL), $tmp4993, $tmp4994, &$s4998, ((org$frostlanguage$frostc$FixedArray*) NULL), $tmp4995, $tmp4996, $tmp4997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
// unreffing REF($169:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
// unreffing REF($164:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp4999 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4999));
// unreffing body
*(&local4) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5000 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5000));
// unreffing returnType
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5001));
// unreffing params
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp4989;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$initDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$FixedArray* local1 = NULL;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
// line 2413
frost$core$Int64 $tmp5002 = (frost$core$Int64) {23};
org$frostlanguage$frostc$parser$Token$Kind $tmp5003 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5002);
org$frostlanguage$frostc$parser$Token$nullable $tmp5004 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5003, &$s5005);
*(&local0) = $tmp5004;
// line 2414
org$frostlanguage$frostc$parser$Token$nullable $tmp5006 = *(&local0);
frost$core$Bit $tmp5007 = frost$core$Bit$init$builtin_bit(!$tmp5006.nonnull);
bool $tmp5008 = $tmp5007.value;
if ($tmp5008) goto block1; else goto block2;
block1:;
// line 2415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2417
org$frostlanguage$frostc$FixedArray* $tmp5009 = org$frostlanguage$frostc$parser$Parser$parameters$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
org$frostlanguage$frostc$FixedArray* $tmp5010 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
*(&local1) = $tmp5009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
// unreffing REF($16:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2418
org$frostlanguage$frostc$FixedArray* $tmp5011 = *(&local1);
frost$core$Bit $tmp5012 = frost$core$Bit$init$builtin_bit($tmp5011 == NULL);
bool $tmp5013 = $tmp5012.value;
if ($tmp5013) goto block3; else goto block4;
block3:;
// line 2419
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5014 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
// unreffing params
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2421
org$frostlanguage$frostc$FixedArray* $tmp5015 = org$frostlanguage$frostc$parser$Parser$blockStatements$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
org$frostlanguage$frostc$FixedArray* $tmp5016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
*(&local2) = $tmp5015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
// unreffing REF($43:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2422
org$frostlanguage$frostc$FixedArray* $tmp5017 = *(&local2);
frost$core$Bit $tmp5018 = frost$core$Bit$init$builtin_bit($tmp5017 == NULL);
bool $tmp5019 = $tmp5018.value;
if ($tmp5019) goto block5; else goto block6;
block5:;
// line 2423
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5020 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
// unreffing b
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5021 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
// unreffing params
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block6:;
// line 2425
org$frostlanguage$frostc$ASTNode* $tmp5022 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5023 = (frost$core$Int64) {29};
org$frostlanguage$frostc$parser$Token$nullable $tmp5024 = *(&local0);
org$frostlanguage$frostc$Position $tmp5025 = ((org$frostlanguage$frostc$parser$Token) $tmp5024.value).position;
frost$core$Int64 $tmp5026 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp5027 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp5026);
org$frostlanguage$frostc$FixedArray* $tmp5028 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5029 = *(&local2);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp5022, $tmp5023, $tmp5025, param1, param2, $tmp5027, &$s5030, ((org$frostlanguage$frostc$FixedArray*) NULL), $tmp5028, ((org$frostlanguage$frostc$ASTNode*) NULL), $tmp5029);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
// unreffing REF($75:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp5031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
// unreffing b
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
// unreffing params
*(&local1) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp5022;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$fieldDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
// line 2433
org$frostlanguage$frostc$ASTNode* $tmp5033 = org$frostlanguage$frostc$parser$Parser$varDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
org$frostlanguage$frostc$ASTNode* $tmp5034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
*(&local0) = $tmp5033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
// unreffing REF($1:org.frostlanguage.frostc.ASTNode?)
// line 2434
org$frostlanguage$frostc$ASTNode* $tmp5035 = *(&local0);
frost$core$Bit $tmp5036 = frost$core$Bit$init$builtin_bit($tmp5035 == NULL);
bool $tmp5037 = $tmp5036.value;
if ($tmp5037) goto block1; else goto block2;
block1:;
// line 2435
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5038 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
// unreffing decl
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2437
org$frostlanguage$frostc$ASTNode* $tmp5039 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5040 = (frost$core$Int64) {18};
org$frostlanguage$frostc$ASTNode* $tmp5041 = *(&local0);
$fn5043 $tmp5042 = ($fn5043) $tmp5041->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp5044 = $tmp5042($tmp5041);
org$frostlanguage$frostc$ASTNode* $tmp5045 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode($tmp5039, $tmp5040, $tmp5044, param1, param2, $tmp5045);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
// unreffing REF($28:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp5046 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
// unreffing decl
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5039;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$choiceCase$org$frostlanguage$frostc$ASTNode$Q$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1) {

org$frostlanguage$frostc$parser$Token$nullable local0;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 2444
frost$core$Int64 $tmp5047 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp5048 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5047);
org$frostlanguage$frostc$parser$Token$nullable $tmp5049 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5048, &$s5050);
*(&local0) = $tmp5049;
// line 2445
org$frostlanguage$frostc$parser$Token$nullable $tmp5051 = *(&local0);
frost$core$Bit $tmp5052 = frost$core$Bit$init$builtin_bit(!$tmp5051.nonnull);
bool $tmp5053 = $tmp5052.value;
if ($tmp5053) goto block1; else goto block2;
block1:;
// line 2446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2448
frost$collections$Array* $tmp5054 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5054);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$collections$Array* $tmp5055 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
*(&local1) = $tmp5054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
// unreffing REF($16:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2449
frost$core$Int64 $tmp5056 = (frost$core$Int64) {104};
org$frostlanguage$frostc$parser$Token$Kind $tmp5057 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5056);
org$frostlanguage$frostc$parser$Token$nullable $tmp5058 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5057);
frost$core$Bit $tmp5059 = frost$core$Bit$init$builtin_bit($tmp5058.nonnull);
bool $tmp5060 = $tmp5059.value;
if ($tmp5060) goto block3; else goto block4;
block3:;
// line 2450
org$frostlanguage$frostc$parser$Token $tmp5061 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5062 = $tmp5061.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5063;
$tmp5063 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5063->value = $tmp5062;
frost$core$Int64 $tmp5064 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp5065 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5064);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5066;
$tmp5066 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5066->value = $tmp5065;
ITable* $tmp5067 = ((frost$core$Equatable*) $tmp5063)->$class->itable;
while ($tmp5067->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5067 = $tmp5067->next;
}
$fn5069 $tmp5068 = $tmp5067->methods[1];
frost$core$Bit $tmp5070 = $tmp5068(((frost$core$Equatable*) $tmp5063), ((frost$core$Equatable*) $tmp5066));
bool $tmp5071 = $tmp5070.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5066)));
// unreffing REF($44:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5063)));
// unreffing REF($40:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5071) goto block5; else goto block6;
block5:;
// line 2451
org$frostlanguage$frostc$ASTNode* $tmp5072 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
org$frostlanguage$frostc$ASTNode* $tmp5073 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local2) = $tmp5072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
// unreffing REF($56:org.frostlanguage.frostc.ASTNode?)
// line 2452
org$frostlanguage$frostc$ASTNode* $tmp5074 = *(&local2);
frost$core$Bit $tmp5075 = frost$core$Bit$init$builtin_bit($tmp5074 == NULL);
bool $tmp5076 = $tmp5075.value;
if ($tmp5076) goto block7; else goto block8;
block7:;
// line 2453
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5077 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
// unreffing field
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5078 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5078));
// unreffing fields
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
// line 2455
frost$collections$Array* $tmp5079 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp5080 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5079, ((frost$core$Object*) $tmp5080));
// line 2456
goto block9;
block9:;
frost$core$Int64 $tmp5081 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp5082 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5081);
org$frostlanguage$frostc$parser$Token$nullable $tmp5083 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5082);
frost$core$Bit $tmp5084 = frost$core$Bit$init$builtin_bit($tmp5083.nonnull);
bool $tmp5085 = $tmp5084.value;
if ($tmp5085) goto block10; else goto block11;
block10:;
// line 2457
org$frostlanguage$frostc$ASTNode* $tmp5086 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
org$frostlanguage$frostc$ASTNode* $tmp5087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
*(&local2) = $tmp5086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
// unreffing REF($104:org.frostlanguage.frostc.ASTNode?)
// line 2458
org$frostlanguage$frostc$ASTNode* $tmp5088 = *(&local2);
frost$core$Bit $tmp5089 = frost$core$Bit$init$builtin_bit($tmp5088 == NULL);
bool $tmp5090 = $tmp5089.value;
if ($tmp5090) goto block12; else goto block13;
block12:;
// line 2459
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
// unreffing field
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5092 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
// unreffing fields
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
// line 2461
frost$collections$Array* $tmp5093 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp5094 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5093, ((frost$core$Object*) $tmp5094));
goto block9;
block11:;
org$frostlanguage$frostc$ASTNode* $tmp5095 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
// unreffing field
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block6:;
// line 2464
frost$core$Int64 $tmp5096 = (frost$core$Int64) {105};
org$frostlanguage$frostc$parser$Token$Kind $tmp5097 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5096);
org$frostlanguage$frostc$parser$Token$nullable $tmp5098 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5097, &$s5099);
frost$core$Bit $tmp5100 = frost$core$Bit$init$builtin_bit(!$tmp5098.nonnull);
bool $tmp5101 = $tmp5100.value;
if ($tmp5101) goto block14; else goto block15;
block14:;
// line 2465
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5102 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
// unreffing fields
*(&local1) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2468
org$frostlanguage$frostc$ASTNode* $tmp5103 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5104 = (frost$core$Int64) {10};
org$frostlanguage$frostc$parser$Token$nullable $tmp5105 = *(&local0);
org$frostlanguage$frostc$Position $tmp5106 = ((org$frostlanguage$frostc$parser$Token) $tmp5105.value).position;
org$frostlanguage$frostc$parser$Token$nullable $tmp5107 = *(&local0);
frost$core$String* $tmp5108 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp5107.value));
frost$collections$Array* $tmp5109 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5110 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5109);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q($tmp5103, $tmp5104, $tmp5106, param1, $tmp5108, $tmp5110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5110));
// unreffing REF($177:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
// unreffing REF($174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
// unreffing REF($167:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp5111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5111));
// unreffing fields
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp5103;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$choiceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
org$frostlanguage$frostc$parser$Token local5;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
org$frostlanguage$frostc$FixedArray* local7 = NULL;
org$frostlanguage$frostc$parser$Token local8;
frost$core$Bit local9;
org$frostlanguage$frostc$ASTNode* local10 = NULL;
org$frostlanguage$frostc$ASTNode* local11 = NULL;
org$frostlanguage$frostc$ASTNode* local12 = NULL;
org$frostlanguage$frostc$ASTNode* local13 = NULL;
org$frostlanguage$frostc$ASTNode* local14 = NULL;
// line 2478
frost$core$Int64 $tmp5112 = (frost$core$Int64) {20};
org$frostlanguage$frostc$parser$Token$Kind $tmp5113 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5112);
org$frostlanguage$frostc$parser$Token$nullable $tmp5114 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5113, &$s5115);
*(&local0) = $tmp5114;
// line 2479
org$frostlanguage$frostc$parser$Token$nullable $tmp5116 = *(&local0);
frost$core$Bit $tmp5117 = frost$core$Bit$init$builtin_bit(!$tmp5116.nonnull);
bool $tmp5118 = $tmp5117.value;
if ($tmp5118) goto block1; else goto block2;
block1:;
// line 2480
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2482
frost$core$Int64 $tmp5119 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp5120 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5119);
org$frostlanguage$frostc$parser$Token$nullable $tmp5121 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5120, &$s5122);
*(&local1) = $tmp5121;
// line 2483
org$frostlanguage$frostc$parser$Token$nullable $tmp5123 = *(&local1);
frost$core$Bit $tmp5124 = frost$core$Bit$init$builtin_bit(!$tmp5123.nonnull);
bool $tmp5125 = $tmp5124.value;
if ($tmp5125) goto block3; else goto block4;
block3:;
// line 2484
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2486
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2487
org$frostlanguage$frostc$parser$Token $tmp5126 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5127 = $tmp5126.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5128;
$tmp5128 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5128->value = $tmp5127;
frost$core$Int64 $tmp5129 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp5130 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5129);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5131;
$tmp5131 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5131->value = $tmp5130;
ITable* $tmp5132 = ((frost$core$Equatable*) $tmp5128)->$class->itable;
while ($tmp5132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5132 = $tmp5132->next;
}
$fn5134 $tmp5133 = $tmp5132->methods[0];
frost$core$Bit $tmp5135 = $tmp5133(((frost$core$Equatable*) $tmp5128), ((frost$core$Equatable*) $tmp5131));
bool $tmp5136 = $tmp5135.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5131)));
// unreffing REF($39:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5128)));
// unreffing REF($35:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5136) goto block5; else goto block7;
block5:;
// line 2488
org$frostlanguage$frostc$FixedArray* $tmp5137 = org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
org$frostlanguage$frostc$FixedArray* $tmp5138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
*(&local2) = $tmp5137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
// unreffing REF($51:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2489
org$frostlanguage$frostc$FixedArray* $tmp5139 = *(&local2);
frost$core$Bit $tmp5140 = frost$core$Bit$init$builtin_bit($tmp5139 == NULL);
bool $tmp5141 = $tmp5140.value;
if ($tmp5141) goto block8; else goto block9;
block8:;
// line 2490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2496
frost$core$Int64 $tmp5144 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp5145 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5144);
org$frostlanguage$frostc$parser$Token$nullable $tmp5146 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5145, &$s5147);
frost$core$Bit $tmp5148 = frost$core$Bit$init$builtin_bit(!$tmp5146.nonnull);
bool $tmp5149 = $tmp5148.value;
if ($tmp5149) goto block10; else goto block11;
block10:;
// line 2497
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block11:;
// line 2499
frost$collections$Array* $tmp5151 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5151);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
frost$collections$Array* $tmp5152 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
*(&local3) = $tmp5151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
// unreffing REF($104:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2500
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5153 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2501
goto block12;
block12:;
// line 2502
org$frostlanguage$frostc$parser$Token $tmp5154 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local5) = $tmp5154;
// line 2503
org$frostlanguage$frostc$parser$Token $tmp5155 = *(&local5);
org$frostlanguage$frostc$parser$Token$Kind $tmp5156 = $tmp5155.kind;
frost$core$Int64 $tmp5157 = $tmp5156.$rawValue;
frost$core$Int64 $tmp5158 = (frost$core$Int64) {18};
frost$core$Bit $tmp5159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5158);
bool $tmp5160 = $tmp5159.value;
if ($tmp5160) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5161 = (frost$core$Int64) {19};
frost$core$Bit $tmp5162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5161);
bool $tmp5163 = $tmp5162.value;
if ($tmp5163) goto block15; else goto block17;
block17:;
frost$core$Int64 $tmp5164 = (frost$core$Int64) {20};
frost$core$Bit $tmp5165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5164);
bool $tmp5166 = $tmp5165.value;
if ($tmp5166) goto block15; else goto block18;
block18:;
frost$core$Int64 $tmp5167 = (frost$core$Int64) {22};
frost$core$Bit $tmp5168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5167);
bool $tmp5169 = $tmp5168.value;
if ($tmp5169) goto block15; else goto block19;
block19:;
frost$core$Int64 $tmp5170 = (frost$core$Int64) {21};
frost$core$Bit $tmp5171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5170);
bool $tmp5172 = $tmp5171.value;
if ($tmp5172) goto block15; else goto block20;
block20:;
frost$core$Int64 $tmp5173 = (frost$core$Int64) {14};
frost$core$Bit $tmp5174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5173);
bool $tmp5175 = $tmp5174.value;
if ($tmp5175) goto block15; else goto block21;
block21:;
frost$core$Int64 $tmp5176 = (frost$core$Int64) {24};
frost$core$Bit $tmp5177 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5176);
bool $tmp5178 = $tmp5177.value;
if ($tmp5178) goto block15; else goto block22;
block22:;
frost$core$Int64 $tmp5179 = (frost$core$Int64) {25};
frost$core$Bit $tmp5180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5179);
bool $tmp5181 = $tmp5180.value;
if ($tmp5181) goto block15; else goto block23;
block23:;
frost$core$Int64 $tmp5182 = (frost$core$Int64) {26};
frost$core$Bit $tmp5183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5182);
bool $tmp5184 = $tmp5183.value;
if ($tmp5184) goto block15; else goto block24;
block24:;
frost$core$Int64 $tmp5185 = (frost$core$Int64) {27};
frost$core$Bit $tmp5186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5185);
bool $tmp5187 = $tmp5186.value;
if ($tmp5187) goto block15; else goto block25;
block15:;
// line 2507
goto block13;
block25:;
frost$core$Int64 $tmp5188 = (frost$core$Int64) {12};
frost$core$Bit $tmp5189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5188);
bool $tmp5190 = $tmp5189.value;
if ($tmp5190) goto block26; else goto block27;
block26:;
// line 2510
org$frostlanguage$frostc$ASTNode* $tmp5191 = *(&local4);
frost$core$Bit $tmp5192 = frost$core$Bit$init$builtin_bit($tmp5191 != NULL);
bool $tmp5193 = $tmp5192.value;
if ($tmp5193) goto block28; else goto block29;
block28:;
// line 2511
org$frostlanguage$frostc$parser$Token $tmp5194 = *(&local5);
org$frostlanguage$frostc$parser$Token $tmp5195 = *(&local5);
frost$core$String* $tmp5196 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp5195);
frost$core$String* $tmp5197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5198, $tmp5196);
frost$core$String* $tmp5199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5197, &$s5200);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp5194, $tmp5199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
// unreffing REF($191:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
// unreffing REF($190:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
// unreffing REF($189:frost.core.String)
goto block29;
block29:;
// line 2513
org$frostlanguage$frostc$ASTNode* $tmp5201 = org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
org$frostlanguage$frostc$ASTNode* $tmp5202 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5202));
*(&local4) = $tmp5201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
// unreffing REF($204:org.frostlanguage.frostc.ASTNode?)
goto block14;
block27:;
frost$core$Int64 $tmp5203 = (frost$core$Int64) {49};
frost$core$Bit $tmp5204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5157, $tmp5203);
bool $tmp5205 = $tmp5204.value;
if ($tmp5205) goto block30; else goto block31;
block30:;
// line 2516
org$frostlanguage$frostc$ASTNode* $tmp5206 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp5207 = org$frostlanguage$frostc$parser$Parser$choiceCase$org$frostlanguage$frostc$ASTNode$Q$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5206);
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
org$frostlanguage$frostc$ASTNode* $tmp5208 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5208));
*(&local6) = $tmp5207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
// unreffing REF($221:org.frostlanguage.frostc.ASTNode?)
// line 2517
org$frostlanguage$frostc$ASTNode* $tmp5209 = *(&local6);
frost$core$Bit $tmp5210 = frost$core$Bit$init$builtin_bit($tmp5209 == NULL);
bool $tmp5211 = $tmp5210.value;
if ($tmp5211) goto block32; else goto block33;
block32:;
// line 2518
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5212 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
// unreffing c
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5213 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5214 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5215 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block33:;
// line 2520
frost$collections$Array* $tmp5216 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5217 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5216, ((frost$core$Object*) $tmp5217));
// line 2521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5219 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
// unreffing c
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block14;
block31:;
// line 2524
goto block13;
block14:;
goto block12;
block13:;
// line 2528
org$frostlanguage$frostc$FixedArray* $tmp5220 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5220);
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
org$frostlanguage$frostc$FixedArray* $tmp5221 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
*(&local7) = $tmp5220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
// unreffing REF($286:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
// line 2529
goto block34;
block34:;
// line 2530
org$frostlanguage$frostc$parser$Token $tmp5222 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local8) = $tmp5222;
// line 2531
org$frostlanguage$frostc$parser$Token $tmp5223 = *(&local8);
org$frostlanguage$frostc$parser$Token$Kind $tmp5224 = $tmp5223.kind;
frost$core$Int64 $tmp5225 = $tmp5224.$rawValue;
frost$core$Int64 $tmp5226 = (frost$core$Int64) {14};
frost$core$Bit $tmp5227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5226);
bool $tmp5228 = $tmp5227.value;
if ($tmp5228) goto block37; else goto block38;
block37:;
// line 2533
org$frostlanguage$frostc$FixedArray* $tmp5229 = *(&local7);
ITable* $tmp5230 = ((frost$collections$CollectionView*) $tmp5229)->$class->itable;
while ($tmp5230->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5230 = $tmp5230->next;
}
$fn5232 $tmp5231 = $tmp5230->methods[0];
frost$core$Int64 $tmp5233 = $tmp5231(((frost$collections$CollectionView*) $tmp5229));
frost$core$Int64 $tmp5234 = (frost$core$Int64) {0};
int64_t $tmp5235 = $tmp5233.value;
int64_t $tmp5236 = $tmp5234.value;
bool $tmp5237 = $tmp5235 > $tmp5236;
frost$core$Bit $tmp5238 = (frost$core$Bit) {$tmp5237};
bool $tmp5239 = $tmp5238.value;
if ($tmp5239) goto block39; else goto block40;
block39:;
// line 2534
org$frostlanguage$frostc$parser$Token $tmp5240 = *(&local8);
org$frostlanguage$frostc$parser$Token $tmp5241 = *(&local8);
frost$core$String* $tmp5242 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp5241);
frost$core$String* $tmp5243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5244, $tmp5242);
frost$core$String* $tmp5245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5243, &$s5246);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp5240, $tmp5245);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
// unreffing REF($329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
// unreffing REF($328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
// unreffing REF($327:frost.core.String)
// line 2535
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5247 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5248 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5249 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5249));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block40:;
// line 2537
org$frostlanguage$frostc$FixedArray* $tmp5251 = org$frostlanguage$frostc$parser$Parser$annotations$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
org$frostlanguage$frostc$FixedArray* $tmp5252 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
*(&local7) = $tmp5251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
// unreffing REF($365:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
goto block36;
block38:;
frost$core$Int64 $tmp5253 = (frost$core$Int64) {12};
frost$core$Bit $tmp5254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5253);
bool $tmp5255 = $tmp5254.value;
if ($tmp5255) goto block41; else goto block42;
block41:;
// line 2540
org$frostlanguage$frostc$ASTNode* $tmp5256 = *(&local4);
frost$core$Bit $tmp5257 = frost$core$Bit$init$builtin_bit($tmp5256 != NULL);
bool $tmp5258 = $tmp5257.value;
if ($tmp5258) goto block45; else goto block46;
block45:;
*(&local9) = $tmp5257;
goto block47;
block46:;
org$frostlanguage$frostc$FixedArray* $tmp5259 = *(&local7);
ITable* $tmp5260 = ((frost$collections$CollectionView*) $tmp5259)->$class->itable;
while ($tmp5260->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5260 = $tmp5260->next;
}
$fn5262 $tmp5261 = $tmp5260->methods[0];
frost$core$Int64 $tmp5263 = $tmp5261(((frost$collections$CollectionView*) $tmp5259));
frost$core$Int64 $tmp5264 = (frost$core$Int64) {0};
int64_t $tmp5265 = $tmp5263.value;
int64_t $tmp5266 = $tmp5264.value;
bool $tmp5267 = $tmp5265 > $tmp5266;
frost$core$Bit $tmp5268 = (frost$core$Bit) {$tmp5267};
*(&local9) = $tmp5268;
goto block47;
block47:;
frost$core$Bit $tmp5269 = *(&local9);
bool $tmp5270 = $tmp5269.value;
if ($tmp5270) goto block43; else goto block44;
block43:;
// line 2541
org$frostlanguage$frostc$parser$Token $tmp5271 = *(&local8);
org$frostlanguage$frostc$parser$Token $tmp5272 = *(&local8);
frost$core$String* $tmp5273 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp5272);
frost$core$String* $tmp5274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5275, $tmp5273);
frost$core$String* $tmp5276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5274, &$s5277);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp5271, $tmp5276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
// unreffing REF($406:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
// unreffing REF($405:frost.core.String)
// line 2542
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5278 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5279 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5279));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5280 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5280));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block44:;
// line 2544
org$frostlanguage$frostc$ASTNode* $tmp5282 = org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
org$frostlanguage$frostc$ASTNode* $tmp5283 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
*(&local4) = $tmp5282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
// unreffing REF($443:org.frostlanguage.frostc.ASTNode?)
goto block36;
block42:;
frost$core$Int64 $tmp5284 = (frost$core$Int64) {18};
frost$core$Bit $tmp5285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5284);
bool $tmp5286 = $tmp5285.value;
if ($tmp5286) goto block48; else goto block49;
block48:;
// line 2547
org$frostlanguage$frostc$ASTNode* $tmp5287 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5288 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp5289 = org$frostlanguage$frostc$parser$Parser$classDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5287, $tmp5288);
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
org$frostlanguage$frostc$ASTNode* $tmp5290 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
*(&local10) = $tmp5289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
// unreffing REF($461:org.frostlanguage.frostc.ASTNode?)
// line 2548
org$frostlanguage$frostc$ASTNode* $tmp5291 = *(&local10);
frost$core$Bit $tmp5292 = frost$core$Bit$init$builtin_bit($tmp5291 == NULL);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block50; else goto block51;
block50:;
// line 2549
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5294 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
// unreffing decl
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5295 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5297));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5298 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block51:;
// line 2551
frost$collections$Array* $tmp5299 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5300 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp5299, ((frost$core$Object*) $tmp5300));
// line 2552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5301 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2553
org$frostlanguage$frostc$FixedArray* $tmp5302 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
org$frostlanguage$frostc$FixedArray* $tmp5303 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local7) = $tmp5302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
// unreffing REF($522:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
org$frostlanguage$frostc$ASTNode* $tmp5304 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
// unreffing decl
*(&local10) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block36;
block49:;
frost$core$Int64 $tmp5305 = (frost$core$Int64) {19};
frost$core$Bit $tmp5306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5305);
bool $tmp5307 = $tmp5306.value;
if ($tmp5307) goto block52; else goto block53;
block52:;
// line 2556
org$frostlanguage$frostc$ASTNode* $tmp5308 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5309 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp5310 = org$frostlanguage$frostc$parser$Parser$interfaceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5308, $tmp5309);
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
org$frostlanguage$frostc$ASTNode* $tmp5311 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
*(&local11) = $tmp5310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
// unreffing REF($547:org.frostlanguage.frostc.ASTNode?)
// line 2557
org$frostlanguage$frostc$ASTNode* $tmp5312 = *(&local11);
frost$core$Bit $tmp5313 = frost$core$Bit$init$builtin_bit($tmp5312 == NULL);
bool $tmp5314 = $tmp5313.value;
if ($tmp5314) goto block54; else goto block55;
block54:;
// line 2558
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5315 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
// unreffing decl
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5318 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5318));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block55:;
// line 2560
frost$collections$Array* $tmp5320 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5321 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp5320, ((frost$core$Object*) $tmp5321));
// line 2561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5322));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2562
org$frostlanguage$frostc$FixedArray* $tmp5323 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
org$frostlanguage$frostc$FixedArray* $tmp5324 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
*(&local7) = $tmp5323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5323));
// unreffing REF($608:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
org$frostlanguage$frostc$ASTNode* $tmp5325 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
// unreffing decl
*(&local11) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block36;
block53:;
frost$core$Int64 $tmp5326 = (frost$core$Int64) {20};
frost$core$Bit $tmp5327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5326);
bool $tmp5328 = $tmp5327.value;
if ($tmp5328) goto block56; else goto block57;
block56:;
// line 2565
org$frostlanguage$frostc$ASTNode* $tmp5329 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5330 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp5331 = org$frostlanguage$frostc$parser$Parser$choiceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5329, $tmp5330);
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5331));
org$frostlanguage$frostc$ASTNode* $tmp5332 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5332));
*(&local12) = $tmp5331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5331));
// unreffing REF($633:org.frostlanguage.frostc.ASTNode?)
// line 2566
org$frostlanguage$frostc$ASTNode* $tmp5333 = *(&local12);
frost$core$Bit $tmp5334 = frost$core$Bit$init$builtin_bit($tmp5333 == NULL);
bool $tmp5335 = $tmp5334.value;
if ($tmp5335) goto block58; else goto block59;
block58:;
// line 2567
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5336 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
// unreffing decl
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5337 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5338 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5339));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block59:;
// line 2569
frost$collections$Array* $tmp5341 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5342 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp5341, ((frost$core$Object*) $tmp5342));
// line 2570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2571
org$frostlanguage$frostc$FixedArray* $tmp5344 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
org$frostlanguage$frostc$FixedArray* $tmp5345 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5345));
*(&local7) = $tmp5344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
// unreffing REF($694:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
org$frostlanguage$frostc$ASTNode* $tmp5346 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5346));
// unreffing decl
*(&local12) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block36;
block57:;
frost$core$Int64 $tmp5347 = (frost$core$Int64) {22};
frost$core$Bit $tmp5348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5347);
bool $tmp5349 = $tmp5348.value;
if ($tmp5349) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp5350 = (frost$core$Int64) {21};
frost$core$Bit $tmp5351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5350);
bool $tmp5352 = $tmp5351.value;
if ($tmp5352) goto block60; else goto block62;
block60:;
// line 2574
org$frostlanguage$frostc$ASTNode* $tmp5353 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5354 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp5355 = org$frostlanguage$frostc$parser$Parser$methodDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5353, $tmp5354);
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
org$frostlanguage$frostc$ASTNode* $tmp5356 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
*(&local13) = $tmp5355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
// unreffing REF($723:org.frostlanguage.frostc.ASTNode?)
// line 2575
org$frostlanguage$frostc$ASTNode* $tmp5357 = *(&local13);
frost$core$Bit $tmp5358 = frost$core$Bit$init$builtin_bit($tmp5357 == NULL);
bool $tmp5359 = $tmp5358.value;
if ($tmp5359) goto block63; else goto block64;
block63:;
// line 2576
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5360 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
// unreffing decl
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5361 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5362 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5362));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5363 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5364 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block64:;
// line 2578
frost$collections$Array* $tmp5365 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5366 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp5365, ((frost$core$Object*) $tmp5366));
// line 2579
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5367 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2580
org$frostlanguage$frostc$FixedArray* $tmp5368 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
org$frostlanguage$frostc$FixedArray* $tmp5369 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local7) = $tmp5368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
// unreffing REF($784:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
org$frostlanguage$frostc$ASTNode* $tmp5370 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5370));
// unreffing decl
*(&local13) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block36;
block62:;
frost$core$Int64 $tmp5371 = (frost$core$Int64) {24};
frost$core$Bit $tmp5372 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5371);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp5374 = (frost$core$Int64) {25};
frost$core$Bit $tmp5375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5374);
bool $tmp5376 = $tmp5375.value;
if ($tmp5376) goto block65; else goto block67;
block67:;
frost$core$Int64 $tmp5377 = (frost$core$Int64) {26};
frost$core$Bit $tmp5378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5377);
bool $tmp5379 = $tmp5378.value;
if ($tmp5379) goto block65; else goto block68;
block68:;
frost$core$Int64 $tmp5380 = (frost$core$Int64) {27};
frost$core$Bit $tmp5381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5380);
bool $tmp5382 = $tmp5381.value;
if ($tmp5382) goto block65; else goto block69;
block65:;
// line 2583
org$frostlanguage$frostc$ASTNode* $tmp5383 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5384 = *(&local7);
org$frostlanguage$frostc$ASTNode* $tmp5385 = org$frostlanguage$frostc$parser$Parser$fieldDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5383, $tmp5384);
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
org$frostlanguage$frostc$ASTNode* $tmp5386 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5386));
*(&local14) = $tmp5385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
// unreffing REF($821:org.frostlanguage.frostc.ASTNode?)
// line 2584
org$frostlanguage$frostc$ASTNode* $tmp5387 = *(&local14);
frost$core$Bit $tmp5388 = frost$core$Bit$init$builtin_bit($tmp5387 == NULL);
bool $tmp5389 = $tmp5388.value;
if ($tmp5389) goto block70; else goto block71;
block70:;
// line 2585
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5390 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
// unreffing decl
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5391 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5392 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5393 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5394 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5394));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block71:;
// line 2587
frost$collections$Array* $tmp5395 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5396 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp5395, ((frost$core$Object*) $tmp5396));
// line 2588
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2589
org$frostlanguage$frostc$FixedArray* $tmp5398 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
org$frostlanguage$frostc$FixedArray* $tmp5399 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local7) = $tmp5398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
// unreffing REF($882:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
org$frostlanguage$frostc$ASTNode* $tmp5400 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5400));
// unreffing decl
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block36;
block69:;
frost$core$Int64 $tmp5401 = (frost$core$Int64) {101};
frost$core$Bit $tmp5402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5225, $tmp5401);
bool $tmp5403 = $tmp5402.value;
if ($tmp5403) goto block72; else goto block73;
block72:;
// line 2592
frost$core$Int64 $tmp5404 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp5405 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5404);
org$frostlanguage$frostc$parser$Token$nullable $tmp5406 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5405, &$s5407);
// line 2593
goto block35;
block73:;
// line 2596
org$frostlanguage$frostc$parser$Token $tmp5408 = *(&local8);
org$frostlanguage$frostc$parser$Token $tmp5409 = *(&local8);
frost$core$String* $tmp5410 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, $tmp5409);
frost$core$String* $tmp5411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5412, $tmp5410);
frost$core$String* $tmp5413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5411, &$s5414);
org$frostlanguage$frostc$parser$Parser$error$org$frostlanguage$frostc$parser$Token$frost$core$String(param0, $tmp5408, $tmp5413);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
// unreffing REF($915:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
// unreffing REF($914:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
// unreffing REF($913:frost.core.String)
// line 2597
org$frostlanguage$frostc$parser$Token $tmp5415 = org$frostlanguage$frostc$parser$Parser$next$R$org$frostlanguage$frostc$parser$Token(param0);
// line 2598
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5416 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5417 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2602
org$frostlanguage$frostc$ASTNode* $tmp5420 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5421 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$nullable $tmp5422 = *(&local0);
org$frostlanguage$frostc$Position $tmp5423 = ((org$frostlanguage$frostc$parser$Token) $tmp5422.value).position;
frost$core$Int64 $tmp5424 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp5425 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5424);
org$frostlanguage$frostc$parser$Token$nullable $tmp5426 = *(&local1);
frost$core$String* $tmp5427 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp5426.value));
org$frostlanguage$frostc$FixedArray* $tmp5428 = *(&local2);
frost$collections$Array* $tmp5429 = *(&local3);
org$frostlanguage$frostc$FixedArray* $tmp5430 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5429);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp5420, $tmp5421, $tmp5423, param1, param2, $tmp5425, $tmp5427, $tmp5428, ((org$frostlanguage$frostc$FixedArray*) NULL), $tmp5430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5430));
// unreffing REF($967:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5427));
// unreffing REF($963:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
// unreffing REF($954:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$FixedArray* $tmp5431 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
// unreffing a
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5432 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
// unreffing dc
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5433 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
// unreffing members
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5434));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp5420;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

org$frostlanguage$frostc$parser$Token local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
// line 2612
org$frostlanguage$frostc$parser$Token $tmp5435 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
*(&local0) = $tmp5435;
// line 2613
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
// line 2614
org$frostlanguage$frostc$parser$Token $tmp5436 = *(&local0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5437 = $tmp5436.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5438;
$tmp5438 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5438->value = $tmp5437;
frost$core$Int64 $tmp5439 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$Kind $tmp5440 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5439);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5441;
$tmp5441 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5441->value = $tmp5440;
ITable* $tmp5442 = ((frost$core$Equatable*) $tmp5438)->$class->itable;
while ($tmp5442->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5442 = $tmp5442->next;
}
$fn5444 $tmp5443 = $tmp5442->methods[0];
frost$core$Bit $tmp5445 = $tmp5443(((frost$core$Equatable*) $tmp5438), ((frost$core$Equatable*) $tmp5441));
bool $tmp5446 = $tmp5445.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5441)));
// unreffing REF($12:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5438)));
// unreffing REF($8:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5446) goto block1; else goto block3;
block1:;
// line 2615
org$frostlanguage$frostc$ASTNode* $tmp5447 = org$frostlanguage$frostc$parser$Parser$doccomment$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
org$frostlanguage$frostc$ASTNode* $tmp5448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
*(&local1) = $tmp5447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
// unreffing REF($24:org.frostlanguage.frostc.ASTNode?)
// line 2616
org$frostlanguage$frostc$ASTNode* $tmp5449 = *(&local1);
frost$core$Bit $tmp5450 = frost$core$Bit$init$builtin_bit($tmp5449 == NULL);
bool $tmp5451 = $tmp5450.value;
if ($tmp5451) goto block4; else goto block5;
block4:;
// line 2617
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2621
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5453 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2623
org$frostlanguage$frostc$FixedArray* $tmp5454 = org$frostlanguage$frostc$parser$Parser$annotations$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(param0);
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
org$frostlanguage$frostc$FixedArray* $tmp5455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5455));
*(&local2) = $tmp5454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
// unreffing REF($60:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
// line 2624
org$frostlanguage$frostc$FixedArray* $tmp5456 = *(&local2);
frost$core$Bit $tmp5457 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5458 = $tmp5457.value;
if ($tmp5458) goto block6; else goto block7;
block6:;
// line 2625
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block7:;
// line 2627
org$frostlanguage$frostc$parser$Token $tmp5461 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5462 = $tmp5461.kind;
frost$core$Int64 $tmp5463 = $tmp5462.$rawValue;
frost$core$Int64 $tmp5464 = (frost$core$Int64) {18};
frost$core$Bit $tmp5465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5464);
bool $tmp5466 = $tmp5465.value;
if ($tmp5466) goto block9; else goto block10;
block9:;
// line 2629
org$frostlanguage$frostc$ASTNode* $tmp5467 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5468 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5469 = org$frostlanguage$frostc$parser$Parser$classDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5467, $tmp5468);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
// unreffing REF($101:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5470));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5471 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5469;
block10:;
frost$core$Int64 $tmp5472 = (frost$core$Int64) {19};
frost$core$Bit $tmp5473 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5472);
bool $tmp5474 = $tmp5473.value;
if ($tmp5474) goto block11; else goto block12;
block11:;
// line 2632
org$frostlanguage$frostc$ASTNode* $tmp5475 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5476 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5477 = org$frostlanguage$frostc$parser$Parser$interfaceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5475, $tmp5476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5477));
// unreffing REF($125:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5478));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5479 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5477;
block12:;
frost$core$Int64 $tmp5480 = (frost$core$Int64) {20};
frost$core$Bit $tmp5481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5480);
bool $tmp5482 = $tmp5481.value;
if ($tmp5482) goto block13; else goto block14;
block13:;
// line 2635
org$frostlanguage$frostc$ASTNode* $tmp5483 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5484 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5485 = org$frostlanguage$frostc$parser$Parser$choiceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5483, $tmp5484);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
// unreffing REF($149:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5486));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5485;
block14:;
frost$core$Int64 $tmp5488 = (frost$core$Int64) {22};
frost$core$Bit $tmp5489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5488);
bool $tmp5490 = $tmp5489.value;
if ($tmp5490) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp5491 = (frost$core$Int64) {21};
frost$core$Bit $tmp5492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5491);
bool $tmp5493 = $tmp5492.value;
if ($tmp5493) goto block15; else goto block17;
block15:;
// line 2638
org$frostlanguage$frostc$ASTNode* $tmp5494 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5495 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5496 = org$frostlanguage$frostc$parser$Parser$methodDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5494, $tmp5495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
// unreffing REF($177:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5497));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5498 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5498));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5496;
block17:;
frost$core$Int64 $tmp5499 = (frost$core$Int64) {23};
frost$core$Bit $tmp5500 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5499);
bool $tmp5501 = $tmp5500.value;
if ($tmp5501) goto block18; else goto block19;
block18:;
// line 2641
org$frostlanguage$frostc$ASTNode* $tmp5502 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5503 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5504 = org$frostlanguage$frostc$parser$Parser$initDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5502, $tmp5503);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5504));
// unreffing REF($201:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5504;
block19:;
frost$core$Int64 $tmp5507 = (frost$core$Int64) {24};
frost$core$Bit $tmp5508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5507);
bool $tmp5509 = $tmp5508.value;
if ($tmp5509) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp5510 = (frost$core$Int64) {25};
frost$core$Bit $tmp5511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5510);
bool $tmp5512 = $tmp5511.value;
if ($tmp5512) goto block20; else goto block22;
block22:;
frost$core$Int64 $tmp5513 = (frost$core$Int64) {26};
frost$core$Bit $tmp5514 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5513);
bool $tmp5515 = $tmp5514.value;
if ($tmp5515) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp5516 = (frost$core$Int64) {27};
frost$core$Bit $tmp5517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5463, $tmp5516);
bool $tmp5518 = $tmp5517.value;
if ($tmp5518) goto block20; else goto block24;
block20:;
// line 2644
org$frostlanguage$frostc$ASTNode* $tmp5519 = *(&local1);
org$frostlanguage$frostc$FixedArray* $tmp5520 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp5521 = org$frostlanguage$frostc$parser$Parser$fieldDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(param0, $tmp5519, $tmp5520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5521));
// unreffing REF($237:org.frostlanguage.frostc.ASTNode?)
org$frostlanguage$frostc$FixedArray* $tmp5522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5522));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5523));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return $tmp5521;
block24:;
// line 2648
frost$core$Int64 $tmp5524 = (frost$core$Int64) {18};
org$frostlanguage$frostc$parser$Token$Kind $tmp5525 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5524);
org$frostlanguage$frostc$parser$Token$nullable $tmp5526 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5525, &$s5527);
// line 2649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5528 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
// unreffing a
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp5529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5529));
// unreffing dc
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block8:;
frost$core$Bit $tmp5530 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5531 = $tmp5530.value;
if ($tmp5531) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp5532 = (frost$core$Int64) {2611};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5533, $tmp5532, &$s5534);
abort(); // unreachable
block25:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$classDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
org$frostlanguage$frostc$FixedArray* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
// line 2658
frost$core$Int64 $tmp5535 = (frost$core$Int64) {18};
org$frostlanguage$frostc$parser$Token$Kind $tmp5536 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5535);
org$frostlanguage$frostc$parser$Token$nullable $tmp5537 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5536, &$s5538);
*(&local0) = $tmp5537;
// line 2659
org$frostlanguage$frostc$parser$Token$nullable $tmp5539 = *(&local0);
frost$core$Bit $tmp5540 = frost$core$Bit$init$builtin_bit(!$tmp5539.nonnull);
bool $tmp5541 = $tmp5540.value;
if ($tmp5541) goto block1; else goto block2;
block1:;
// line 2660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2662
frost$core$Int64 $tmp5542 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp5543 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5542);
org$frostlanguage$frostc$parser$Token$nullable $tmp5544 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5543, &$s5545);
*(&local1) = $tmp5544;
// line 2663
org$frostlanguage$frostc$parser$Token$nullable $tmp5546 = *(&local1);
frost$core$Bit $tmp5547 = frost$core$Bit$init$builtin_bit(!$tmp5546.nonnull);
bool $tmp5548 = $tmp5547.value;
if ($tmp5548) goto block3; else goto block4;
block3:;
// line 2664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2666
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2667
org$frostlanguage$frostc$parser$Token $tmp5549 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5550 = $tmp5549.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5551;
$tmp5551 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5551->value = $tmp5550;
frost$core$Int64 $tmp5552 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp5553 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5552);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5554;
$tmp5554 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5554->value = $tmp5553;
ITable* $tmp5555 = ((frost$core$Equatable*) $tmp5551)->$class->itable;
while ($tmp5555->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5555 = $tmp5555->next;
}
$fn5557 $tmp5556 = $tmp5555->methods[0];
frost$core$Bit $tmp5558 = $tmp5556(((frost$core$Equatable*) $tmp5551), ((frost$core$Equatable*) $tmp5554));
bool $tmp5559 = $tmp5558.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5554)));
// unreffing REF($39:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5551)));
// unreffing REF($35:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5559) goto block5; else goto block7;
block5:;
// line 2668
org$frostlanguage$frostc$FixedArray* $tmp5560 = org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
org$frostlanguage$frostc$FixedArray* $tmp5561 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
*(&local2) = $tmp5560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
// unreffing REF($51:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2669
org$frostlanguage$frostc$FixedArray* $tmp5562 = *(&local2);
frost$core$Bit $tmp5563 = frost$core$Bit$init$builtin_bit($tmp5562 == NULL);
bool $tmp5564 = $tmp5563.value;
if ($tmp5564) goto block8; else goto block9;
block8:;
// line 2670
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5565));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5566 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block6;
block6:;
// line 2676
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2677
org$frostlanguage$frostc$parser$Token $tmp5567 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5568 = $tmp5567.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5569;
$tmp5569 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5569->value = $tmp5568;
frost$core$Int64 $tmp5570 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp5571 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5570);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5572;
$tmp5572 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5572->value = $tmp5571;
ITable* $tmp5573 = ((frost$core$Equatable*) $tmp5569)->$class->itable;
while ($tmp5573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5573 = $tmp5573->next;
}
$fn5575 $tmp5574 = $tmp5573->methods[0];
frost$core$Bit $tmp5576 = $tmp5574(((frost$core$Equatable*) $tmp5569), ((frost$core$Equatable*) $tmp5572));
bool $tmp5577 = $tmp5576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5572)));
// unreffing REF($95:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5569)));
// unreffing REF($91:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5577) goto block10; else goto block12;
block10:;
// line 2678
org$frostlanguage$frostc$FixedArray* $tmp5578 = org$frostlanguage$frostc$parser$Parser$supertypes$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
org$frostlanguage$frostc$FixedArray* $tmp5579 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5579));
*(&local3) = $tmp5578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
// unreffing REF($107:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2679
org$frostlanguage$frostc$FixedArray* $tmp5580 = *(&local3);
frost$core$Bit $tmp5581 = frost$core$Bit$init$builtin_bit($tmp5580 == NULL);
bool $tmp5582 = $tmp5581.value;
if ($tmp5582) goto block13; else goto block14;
block13:;
// line 2680
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5583 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
// unreffing stypes
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2684
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$FixedArray*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5585 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5585));
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block11;
block11:;
// line 2686
frost$core$Int64 $tmp5586 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp5587 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5586);
org$frostlanguage$frostc$parser$Token$nullable $tmp5588 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5587, &$s5589);
frost$core$Bit $tmp5590 = frost$core$Bit$init$builtin_bit(!$tmp5588.nonnull);
bool $tmp5591 = $tmp5590.value;
if ($tmp5591) goto block15; else goto block16;
block15:;
// line 2687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5592 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5592));
// unreffing stypes
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block16:;
// line 2689
frost$collections$Array* $tmp5594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5594);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
frost$collections$Array* $tmp5595 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5595));
*(&local4) = $tmp5594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
// unreffing REF($170:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2690
goto block17;
block17:;
frost$core$Int64 $tmp5596 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp5597 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5596);
org$frostlanguage$frostc$parser$Token$nullable $tmp5598 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5597);
frost$core$Bit $tmp5599 = frost$core$Bit$init$builtin_bit(!$tmp5598.nonnull);
bool $tmp5600 = $tmp5599.value;
if ($tmp5600) goto block18; else goto block19;
block18:;
// line 2691
org$frostlanguage$frostc$ASTNode* $tmp5601 = org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
org$frostlanguage$frostc$ASTNode* $tmp5602 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
*(&local5) = $tmp5601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
// unreffing REF($193:org.frostlanguage.frostc.ASTNode?)
// line 2692
org$frostlanguage$frostc$ASTNode* $tmp5603 = *(&local5);
frost$core$Bit $tmp5604 = frost$core$Bit$init$builtin_bit($tmp5603 == NULL);
bool $tmp5605 = $tmp5604.value;
if ($tmp5605) goto block20; else goto block21;
block20:;
// line 2693
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5606 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
// unreffing member
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5607));
// unreffing members
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5608 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5608));
// unreffing stypes
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5609 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block21:;
// line 2695
frost$collections$Array* $tmp5610 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp5611 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp5610, ((frost$core$Object*) $tmp5611));
org$frostlanguage$frostc$ASTNode* $tmp5612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
// unreffing member
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block17;
block19:;
// line 2697
org$frostlanguage$frostc$ASTNode* $tmp5613 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5614 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$nullable $tmp5615 = *(&local0);
org$frostlanguage$frostc$Position $tmp5616 = ((org$frostlanguage$frostc$parser$Token) $tmp5615.value).position;
frost$core$Int64 $tmp5617 = (frost$core$Int64) {0};
org$frostlanguage$frostc$ClassDecl$Kind $tmp5618 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5617);
org$frostlanguage$frostc$parser$Token$nullable $tmp5619 = *(&local1);
frost$core$String* $tmp5620 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp5619.value));
org$frostlanguage$frostc$FixedArray* $tmp5621 = *(&local2);
org$frostlanguage$frostc$FixedArray* $tmp5622 = *(&local3);
frost$collections$Array* $tmp5623 = *(&local4);
org$frostlanguage$frostc$FixedArray* $tmp5624 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5623);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp5613, $tmp5614, $tmp5616, param1, param2, $tmp5618, $tmp5620, $tmp5621, $tmp5622, $tmp5624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5624));
// unreffing REF($262:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
// unreffing REF($257:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
// unreffing REF($248:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp5625 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5625));
// unreffing members
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5626 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5626));
// unreffing stypes
*(&local3) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp5613;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$interfaceDeclaration$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0, org$frostlanguage$frostc$ASTNode* param1, org$frostlanguage$frostc$FixedArray* param2) {

org$frostlanguage$frostc$parser$Token$nullable local0;
org$frostlanguage$frostc$parser$Token$nullable local1;
org$frostlanguage$frostc$FixedArray* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
// line 2706
frost$core$Int64 $tmp5628 = (frost$core$Int64) {19};
org$frostlanguage$frostc$parser$Token$Kind $tmp5629 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5628);
org$frostlanguage$frostc$parser$Token$nullable $tmp5630 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5629, &$s5631);
*(&local0) = $tmp5630;
// line 2707
org$frostlanguage$frostc$parser$Token$nullable $tmp5632 = *(&local0);
frost$core$Bit $tmp5633 = frost$core$Bit$init$builtin_bit(!$tmp5632.nonnull);
bool $tmp5634 = $tmp5633.value;
if ($tmp5634) goto block1; else goto block2;
block1:;
// line 2708
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block2:;
// line 2710
frost$core$Int64 $tmp5635 = (frost$core$Int64) {49};
org$frostlanguage$frostc$parser$Token$Kind $tmp5636 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5635);
org$frostlanguage$frostc$parser$Token$nullable $tmp5637 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5636, &$s5638);
*(&local1) = $tmp5637;
// line 2711
org$frostlanguage$frostc$parser$Token$nullable $tmp5639 = *(&local1);
frost$core$Bit $tmp5640 = frost$core$Bit$init$builtin_bit(!$tmp5639.nonnull);
bool $tmp5641 = $tmp5640.value;
if ($tmp5641) goto block3; else goto block4;
block3:;
// line 2712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block4:;
// line 2714
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
// line 2715
org$frostlanguage$frostc$parser$Token $tmp5642 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5643 = $tmp5642.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5644;
$tmp5644 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5644->value = $tmp5643;
frost$core$Int64 $tmp5645 = (frost$core$Int64) {63};
org$frostlanguage$frostc$parser$Token$Kind $tmp5646 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5645);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5647;
$tmp5647 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5647->value = $tmp5646;
ITable* $tmp5648 = ((frost$core$Equatable*) $tmp5644)->$class->itable;
while ($tmp5648->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5648 = $tmp5648->next;
}
$fn5650 $tmp5649 = $tmp5648->methods[0];
frost$core$Bit $tmp5651 = $tmp5649(((frost$core$Equatable*) $tmp5644), ((frost$core$Equatable*) $tmp5647));
bool $tmp5652 = $tmp5651.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5647)));
// unreffing REF($39:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5644)));
// unreffing REF($35:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5652) goto block5; else goto block7;
block5:;
// line 2716
org$frostlanguage$frostc$FixedArray* $tmp5653 = org$frostlanguage$frostc$parser$Parser$genericsDeclaration$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
org$frostlanguage$frostc$FixedArray* $tmp5654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
*(&local2) = $tmp5653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
// unreffing REF($51:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>?)
// line 2717
org$frostlanguage$frostc$FixedArray* $tmp5655 = *(&local2);
frost$core$Bit $tmp5656 = frost$core$Bit$init$builtin_bit($tmp5655 == NULL);
bool $tmp5657 = $tmp5656.value;
if ($tmp5657) goto block8; else goto block9;
block8:;
// line 2718
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$FixedArray* $tmp5658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2722
org$frostlanguage$frostc$FixedArray* $tmp5659 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init($tmp5659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
org$frostlanguage$frostc$FixedArray* $tmp5660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5660));
*(&local2) = $tmp5659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
// unreffing REF($79:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.ASTNode>)
goto block6;
block6:;
// line 2724
frost$collections$Array* $tmp5661 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5661);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
frost$collections$Array* $tmp5662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local3) = $tmp5661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
// unreffing REF($94:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2725
frost$core$Int64 $tmp5663 = (frost$core$Int64) {96};
org$frostlanguage$frostc$parser$Token$Kind $tmp5664 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5663);
org$frostlanguage$frostc$parser$Token$nullable $tmp5665 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5664);
frost$core$Bit $tmp5666 = frost$core$Bit$init$builtin_bit($tmp5665.nonnull);
bool $tmp5667 = $tmp5666.value;
if ($tmp5667) goto block10; else goto block11;
block10:;
// line 2726
org$frostlanguage$frostc$ASTNode* $tmp5668 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
org$frostlanguage$frostc$ASTNode* $tmp5669 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
*(&local4) = $tmp5668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
// unreffing REF($116:org.frostlanguage.frostc.ASTNode?)
// line 2727
org$frostlanguage$frostc$ASTNode* $tmp5670 = *(&local4);
frost$core$Bit $tmp5671 = frost$core$Bit$init$builtin_bit($tmp5670 == NULL);
bool $tmp5672 = $tmp5671.value;
if ($tmp5672) goto block12; else goto block13;
block12:;
// line 2728
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5674 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5674));
// unreffing intfs
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5675));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block13:;
// line 2730
frost$collections$Array* $tmp5676 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5677 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5676, ((frost$core$Object*) $tmp5677));
// line 2731
goto block14;
block14:;
frost$core$Int64 $tmp5678 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp5679 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5678);
org$frostlanguage$frostc$parser$Token$nullable $tmp5680 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5679);
frost$core$Bit $tmp5681 = frost$core$Bit$init$builtin_bit($tmp5680.nonnull);
bool $tmp5682 = $tmp5681.value;
if ($tmp5682) goto block15; else goto block16;
block15:;
// line 2732
org$frostlanguage$frostc$ASTNode* $tmp5683 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
org$frostlanguage$frostc$ASTNode* $tmp5684 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5684));
*(&local4) = $tmp5683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
// unreffing REF($169:org.frostlanguage.frostc.ASTNode?)
// line 2733
org$frostlanguage$frostc$ASTNode* $tmp5685 = *(&local4);
frost$core$Bit $tmp5686 = frost$core$Bit$init$builtin_bit($tmp5685 == NULL);
bool $tmp5687 = $tmp5686.value;
if ($tmp5687) goto block17; else goto block18;
block17:;
// line 2734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5688 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5689));
// unreffing intfs
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5690));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block18:;
// line 2736
frost$collections$Array* $tmp5691 = *(&local3);
org$frostlanguage$frostc$ASTNode* $tmp5692 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp5691, ((frost$core$Object*) $tmp5692));
goto block14;
block16:;
org$frostlanguage$frostc$ASTNode* $tmp5693 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5693));
// unreffing t
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block11;
block11:;
// line 2739
frost$core$Int64 $tmp5694 = (frost$core$Int64) {100};
org$frostlanguage$frostc$parser$Token$Kind $tmp5695 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5694);
org$frostlanguage$frostc$parser$Token$nullable $tmp5696 = org$frostlanguage$frostc$parser$Parser$expect$org$frostlanguage$frostc$parser$Token$Kind$frost$core$String$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5695, &$s5697);
frost$core$Bit $tmp5698 = frost$core$Bit$init$builtin_bit(!$tmp5696.nonnull);
bool $tmp5699 = $tmp5698.value;
if ($tmp5699) goto block19; else goto block20;
block19:;
// line 2740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
frost$collections$Array* $tmp5700 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
// unreffing intfs
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5701 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block20:;
// line 2742
frost$collections$Array* $tmp5702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5702);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
frost$collections$Array* $tmp5703 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
*(&local5) = $tmp5702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
// unreffing REF($241:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2743
goto block21;
block21:;
frost$core$Int64 $tmp5704 = (frost$core$Int64) {101};
org$frostlanguage$frostc$parser$Token$Kind $tmp5705 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5704);
org$frostlanguage$frostc$parser$Token$nullable $tmp5706 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q(param0, $tmp5705);
frost$core$Bit $tmp5707 = frost$core$Bit$init$builtin_bit(!$tmp5706.nonnull);
bool $tmp5708 = $tmp5707.value;
if ($tmp5708) goto block22; else goto block23;
block22:;
// line 2744
org$frostlanguage$frostc$ASTNode* $tmp5709 = org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
org$frostlanguage$frostc$ASTNode* $tmp5710 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
*(&local6) = $tmp5709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
// unreffing REF($264:org.frostlanguage.frostc.ASTNode?)
// line 2745
org$frostlanguage$frostc$ASTNode* $tmp5711 = *(&local6);
frost$core$Bit $tmp5712 = frost$core$Bit$init$builtin_bit($tmp5711 == NULL);
bool $tmp5713 = $tmp5712.value;
if ($tmp5713) goto block24; else goto block25;
block24:;
// line 2746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5714 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5714));
// unreffing member
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5715 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5715));
// unreffing members
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5716 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
// unreffing intfs
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5717 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5717));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block25:;
// line 2748
frost$collections$Array* $tmp5718 = *(&local5);
org$frostlanguage$frostc$ASTNode* $tmp5719 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp5718, ((frost$core$Object*) $tmp5719));
org$frostlanguage$frostc$ASTNode* $tmp5720 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
// unreffing member
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 2750
org$frostlanguage$frostc$ASTNode* $tmp5721 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5722 = (frost$core$Int64) {12};
org$frostlanguage$frostc$parser$Token$nullable $tmp5723 = *(&local0);
org$frostlanguage$frostc$Position $tmp5724 = ((org$frostlanguage$frostc$parser$Token) $tmp5723.value).position;
frost$core$Int64 $tmp5725 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ClassDecl$Kind $tmp5726 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp5725);
org$frostlanguage$frostc$parser$Token$nullable $tmp5727 = *(&local1);
frost$core$String* $tmp5728 = org$frostlanguage$frostc$parser$Parser$text$org$frostlanguage$frostc$parser$Token$R$frost$core$String(param0, ((org$frostlanguage$frostc$parser$Token) $tmp5727.value));
org$frostlanguage$frostc$FixedArray* $tmp5729 = *(&local2);
frost$collections$Array* $tmp5730 = *(&local3);
org$frostlanguage$frostc$FixedArray* $tmp5731 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5730);
frost$collections$Array* $tmp5732 = *(&local5);
org$frostlanguage$frostc$FixedArray* $tmp5733 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5732);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ClassDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp5721, $tmp5722, $tmp5724, param1, param2, $tmp5726, $tmp5728, $tmp5729, $tmp5731, $tmp5733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5733));
// unreffing REF($337:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5731));
// unreffing REF($332:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
// unreffing REF($328:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
// unreffing REF($319:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp5734 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
// unreffing members
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp5735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
// unreffing intfs
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp5736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
// unreffing generics
*(&local2) = ((org$frostlanguage$frostc$FixedArray*) NULL);
return $tmp5721;

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$bodyEntry$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

// line 2759
org$frostlanguage$frostc$parser$Token $tmp5737 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5738 = $tmp5737.kind;
frost$core$Int64 $tmp5739 = $tmp5738.$rawValue;
frost$core$Int64 $tmp5740 = (frost$core$Int64) {16};
frost$core$Bit $tmp5741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5739, $tmp5740);
bool $tmp5742 = $tmp5741.value;
if ($tmp5742) goto block2; else goto block3;
block2:;
// line 2761
org$frostlanguage$frostc$ASTNode* $tmp5743 = org$frostlanguage$frostc$parser$Parser$usesDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
// unreffing REF($9:org.frostlanguage.frostc.ASTNode?)
return $tmp5743;
block3:;
// line 2764
org$frostlanguage$frostc$ASTNode* $tmp5744 = org$frostlanguage$frostc$parser$Parser$declaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
// unreffing REF($17:org.frostlanguage.frostc.ASTNode?)
return $tmp5744;
block1:;
frost$core$Bit $tmp5745 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5746 = $tmp5745.value;
if ($tmp5746) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp5747 = (frost$core$Int64) {2758};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5748, $tmp5747, &$s5749);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$parser$Parser$file$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$parser$Parser* param0) {

frost$collections$Array* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
// line 2773
frost$collections$Array* $tmp5750 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5750);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5750));
frost$collections$Array* $tmp5751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
*(&local0) = $tmp5750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5750));
// unreffing REF($1:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 2774
org$frostlanguage$frostc$parser$Token $tmp5752 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5753 = $tmp5752.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5754;
$tmp5754 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5754->value = $tmp5753;
frost$core$Int64 $tmp5755 = (frost$core$Int64) {15};
org$frostlanguage$frostc$parser$Token$Kind $tmp5756 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5755);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5757;
$tmp5757 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5757->value = $tmp5756;
ITable* $tmp5758 = ((frost$core$Equatable*) $tmp5754)->$class->itable;
while ($tmp5758->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5758 = $tmp5758->next;
}
$fn5760 $tmp5759 = $tmp5758->methods[0];
frost$core$Bit $tmp5761 = $tmp5759(((frost$core$Equatable*) $tmp5754), ((frost$core$Equatable*) $tmp5757));
bool $tmp5762 = $tmp5761.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5757)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5754)));
// unreffing REF($17:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5762) goto block1; else goto block2;
block1:;
// line 2775
org$frostlanguage$frostc$ASTNode* $tmp5763 = org$frostlanguage$frostc$parser$Parser$packageDeclaration$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
org$frostlanguage$frostc$ASTNode* $tmp5764 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
*(&local1) = $tmp5763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
// unreffing REF($33:org.frostlanguage.frostc.ASTNode?)
// line 2776
org$frostlanguage$frostc$ASTNode* $tmp5765 = *(&local1);
frost$core$Bit $tmp5766 = frost$core$Bit$init$builtin_bit($tmp5765 != NULL);
bool $tmp5767 = $tmp5766.value;
if ($tmp5767) goto block3; else goto block4;
block3:;
// line 2777
frost$collections$Array* $tmp5768 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp5769 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp5768, ((frost$core$Object*) $tmp5769));
goto block4;
block4:;
org$frostlanguage$frostc$ASTNode* $tmp5770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5770));
// unreffing decl
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block2;
block2:;
// line 2780
goto block5;
block5:;
org$frostlanguage$frostc$parser$Token $tmp5771 = org$frostlanguage$frostc$parser$Parser$peek$R$org$frostlanguage$frostc$parser$Token(param0);
org$frostlanguage$frostc$parser$Token$Kind $tmp5772 = $tmp5771.kind;
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5773;
$tmp5773 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5773->value = $tmp5772;
frost$core$Int64 $tmp5774 = (frost$core$Int64) {0};
org$frostlanguage$frostc$parser$Token$Kind $tmp5775 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp5774);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp5776;
$tmp5776 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp5776->value = $tmp5775;
ITable* $tmp5777 = ((frost$core$Equatable*) $tmp5773)->$class->itable;
while ($tmp5777->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5777 = $tmp5777->next;
}
$fn5779 $tmp5778 = $tmp5777->methods[1];
frost$core$Bit $tmp5780 = $tmp5778(((frost$core$Equatable*) $tmp5773), ((frost$core$Equatable*) $tmp5776));
bool $tmp5781 = $tmp5780.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5776)));
// unreffing REF($72:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp5773)));
// unreffing REF($68:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp5781) goto block6; else goto block7;
block6:;
// line 2781
org$frostlanguage$frostc$ASTNode* $tmp5782 = org$frostlanguage$frostc$parser$Parser$bodyEntry$R$org$frostlanguage$frostc$ASTNode$Q(param0);
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
org$frostlanguage$frostc$ASTNode* $tmp5783 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5783));
*(&local2) = $tmp5782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
// unreffing REF($84:org.frostlanguage.frostc.ASTNode?)
// line 2782
org$frostlanguage$frostc$ASTNode* $tmp5784 = *(&local2);
frost$core$Bit $tmp5785 = frost$core$Bit$init$builtin_bit($tmp5784 == NULL);
bool $tmp5786 = $tmp5785.value;
if ($tmp5786) goto block8; else goto block9;
block8:;
// line 2783
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp5787 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5787));
// unreffing entry
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp5788 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5788));
// unreffing entries
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlanguage$frostc$ASTNode*) NULL);
block9:;
// line 2785
frost$collections$Stack** $tmp5789 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5790 = *$tmp5789;
frost$core$Int64 $tmp5791 = frost$collections$Stack$get_count$R$frost$core$Int64($tmp5790);
frost$core$Int64 $tmp5792 = (frost$core$Int64) {0};
frost$core$Bit $tmp5793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5791, $tmp5792);
bool $tmp5794 = $tmp5793.value;
if ($tmp5794) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5795 = (frost$core$Int64) {2785};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5796, $tmp5795);
abort(); // unreachable
block10:;
// line 2786
frost$collections$Array* $tmp5797 = *(&local0);
org$frostlanguage$frostc$ASTNode* $tmp5798 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp5797, ((frost$core$Object*) $tmp5798));
org$frostlanguage$frostc$ASTNode* $tmp5799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
// unreffing entry
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block7:;
// line 2788
org$frostlanguage$frostc$ASTNode* $tmp5800 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp5801 = (frost$core$Int64) {19};
frost$collections$Array* $tmp5802 = *(&local0);
org$frostlanguage$frostc$FixedArray* $tmp5803 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp5802);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp5800, $tmp5801, $tmp5803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
// unreffing REF($145:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
// unreffing REF($141:org.frostlanguage.frostc.ASTNode)
frost$collections$Array* $tmp5804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
// unreffing entries
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp5800;

}
void org$frostlanguage$frostc$parser$Parser$cleanup(org$frostlanguage$frostc$parser$Parser* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$parser$Lexer** $tmp5805 = &param0->lexer;
org$frostlanguage$frostc$parser$Lexer* $tmp5806 = *$tmp5805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
org$frostlanguage$regex$RegexParser** $tmp5807 = &param0->regexParser;
org$frostlanguage$regex$RegexParser* $tmp5808 = *$tmp5807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5808));
frost$threads$MessageQueue** $tmp5809 = &param0->errors;
frost$threads$MessageQueue* $tmp5810 = *$tmp5809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5810));
frost$io$File** $tmp5811 = &param0->path;
frost$io$File* $tmp5812 = *$tmp5811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5812));
frost$core$String** $tmp5813 = &param0->source;
frost$core$String* $tmp5814 = *$tmp5813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5814));
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT** $tmp5815 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* $tmp5816 = *$tmp5815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5816));
frost$collections$Stack** $tmp5817 = &param0->commaSeparatedExpressionContext;
frost$collections$Stack* $tmp5818 = *$tmp5817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
frost$collections$Stack** $tmp5819 = &param0->speculativeBuffers;
frost$collections$Stack* $tmp5820 = *$tmp5819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5820));
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp5821 = &param0->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp5822 = *$tmp5821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5822));
return;

}

